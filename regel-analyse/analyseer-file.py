import os
import csv
import difflib

# Paden naar de CSV bestanden
voor_path = "voor-compilatie.csv"
na_path = "na-decompilatie.csv"
output_path = "vergelijking.csv"


def extract_filename(pad_str):
    """
    Extraheer de werkelijke bestandsnaam uit een string.
    Er wordt ervan uitgegaan dat in de na-data het pad en bestandsnaam mogelijk
    door spaties gescheiden zijn, waarbij het laatste deel de daadwerkelijke bestandsnaam is.
    """
    pad_str = pad_str.strip()
    # Als er spaties in het pad zitten, neem dan het laatste gedeelte
    if " " in pad_str:
        return os.path.basename(pad_str.split()[-1])
    else:
        return os.path.basename(pad_str)


def lees_csv(pad):
    """
    Leest een csv in en maakt een dictionary waarbij de sleutel de pure bestandsnaam is
    en de waarde een tuple (originele_path, overige_kolommen) is.
    """
    data = {}
    with open(pad, newline="", encoding="utf-8") as f:
        reader = csv.reader(f)
        for rij in reader:
            if rij:  # negeer lege regels
                orig_path = rij[0]
                pure_name = extract_filename(
                    orig_path
                ).lower()  # gebruik lower-case voor case-insensitive match
                # Stel dat de overige 4 kolommen altijd aanwezig zijn
                waarden = rij[1:]
                data[pure_name] = (orig_path, waarden)
    return data


# Lees de data
voor_data = lees_csv(voor_path)
na_data = lees_csv(na_path)

# Maak een lijst met alle unieke bestandsnamen uit beide bestanden
alle_bestanden = set(voor_data.keys()) | set(na_data.keys())

# Voor fuzzy matching: als een bestandsnaam in 'voor' niet exact voorkomt in 'na',
# zoeken we met get_close_matches
na_keys = list(na_data.keys())


def vind_match(bestandsnaam):
    """
    Probeert een match te vinden in na_data voor gegeven bestandsnaam.
    Eerst exacte match, anders fuzzy match met cutoff=0.8 (aanpasbaar).
    """
    if bestandsnaam in na_data:
        return bestandsnaam
    # Als geen exacte match, probeer fuzzy matching (n=1: beste match, cutoff=0.8)
    matches = difflib.get_close_matches(bestandsnaam, na_keys, n=1, cutoff=0.95)
    if matches:
        return matches[0]
    return None


# Schrijf de gecombineerde data weg
with open(output_path, "w", newline="", encoding="utf-8") as f:
    writer = csv.writer(f)
    # Kopregel met extra aanduiding welke data van voor en na komt.
    writer.writerow(
        [
            "bestandsnaam",
            "voor_origineel",
            "voor_kol2",
            "voor_kol3",
            "voor_kol4",
            "voor_kol5",
            "na_origineel",
            "na_kol2",
            "na_kol3",
            "na_kol4",
            "na_kol5",
        ]
    )

    # Doorloop de bestandsnamen uit de "voor" data en probeer een match te vinden
    for pure_name, (voor_orig, voor_waarden) in voor_data.items():
        match = vind_match(pure_name)
        if match:
            na_orig, na_waarden = na_data.get(match, ("", [""] * 4))
        else:
            # Geen match gevonden; vul de na-velden met lege strings
            na_orig, na_waarden = "", [""] * 4

        writer.writerow([pure_name, voor_orig] + voor_waarden + [na_orig] + na_waarden)

    # Optioneel: voeg ook records toe die alleen in na_data voorkomen
    for pure_name, (na_orig, na_waarden) in na_data.items():
        if pure_name not in voor_data:
            writer.writerow([pure_name, ""] * 6 + [na_orig] + na_waarden)

print(f"Vergelijking geschreven naar: {output_path}")
