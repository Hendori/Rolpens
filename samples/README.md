Test samples
============
This directory contains the source code for several test binaries.
Once compiled and decompiled with a decompiler that re-rolls unrolled loops, the functions in this sample should read the same as in this README file.

Level 0
-------
Level 0 loops are repeated identical blocks of code, with no variation whatsoever.

### `it_crowd()`
The `it_crowd()` functions contains 27 identical calls to `puts()`, after the famous scene from _Calamity Jen_.

```c
void it_crowd() {
    puts("Are you feeling stressed, Jen?\n");
    for ( int i = 0; i < 27; i++ ) {
        puts("Are you sure?\n");
    }
    puts("Well, I guess you're not.\n");
    puts("Well done, Jen.\n");
}
```

### `some_calculation(p)`
The calculation in this function is just complicated enough that it cannot be inlined outright.

```c
int some_calculation(int p) {
    int x = 0;
    for ( int i = 0; i < 8; i++ ) {
        x += x*x + p;
    }
    return x;
}
```


Level 1
-------
Level 1 loops are loops where the loop body contains the index variable.

### `multiplication_table(n)`
This function prints a multiplication table for a given multiplicand.

```c
void multiplication_table(int n) {
    for ( int i = 0; i <= 20; i++ ) {
        printf("%2d × %3d = %4d\n", i, n, i*n);
    }
}
```

### `decrypt_message()`
This function decrypts a hidden message using an implementation of RC4.

```c
const char *key = "In cryp... insecure.";
const char *message = "W\xc1 ... \xd8\xd4";

void decrypt_message() {
    unsigned char S[256];
    char p;
    int i, j, t;

    for ( i = 0; i < 256; i++ ) {
        S[i] = (char)i;
    }
    j = 0;
    for ( i = 0; i < 256; i++ ) {
        j = (j + S[i] + key[i]) % 256;
        p = S[j];
        S[j] = S[i];
        S[i] = p;
    }

    unsigned char buf[64];
    j = 0;
    for ( i = 1; i < sizeof(message); i++ ) {
        j = (j + S[i]) % 256;
        p = S[j];
        S[j] = S[i];
        S[i] = p;
        t = (S[i] + S[j]) % 256;
        buf[i] = message[i] ^ S[t];
    }
    buf[0] = ' ';
    buf[63] = 0;
    printf("Decrypted message: %s\n", buf);
}
```

Level 2A
-------
Level 2A loops have some sort of `if` condition in the loop body.

### `count_sheep()`
The thing with being thirty-six years old is that you're basically still nine, but four times over.

```c
void count_sheep() {
    for ( int i = 0; i < 100; i++ ) {
        printf("%d ", i);
        if ( i == 69 ) {
            printf("(nice) ");
        }
    }
    printf("ZzZzZz...\n");
}
```

### `short_multiplication_table()`
This function prints a multiplication table in 4 columns.

```c
void short_multiplication_table(int n) {
    for ( int i = 0; i < 20; i++ ) {
        if ( i % 4 == 3 ) {
            printf("%2d × %3d = %4d\n", i, n, i*n);
        } else {
            printf("%2d × %3d = %4d\t", i, n, i*n);
        }
    }
}
```

Level 2B
-------
Level 2B loops use the index variable, but in some polynomial expression.

### `all_badges()`
This function features an inline database of structs, where some fields in each struct are processed in a loop. 

```c
typedef struct __attribute__((__packed__)) employee {
    char name[16];
    unsigned short badge_number;
    unsigned short pin_code;
    unsigned char shoe_size;
    unsigned short phone_ext;
} employee_t;

#define EMPLOYEE_COUNT 6
employee_t database[EMPLOYEE_COUNT] = {
    {"Allison",   6565, 1234, 42,  911},
    {"Bertram",  56462, 2320, 45, 7614},
    {"Carlo",    37231, 7024, 44, 3516},
    {"Devon",    41617, 6743, 40, 4954},
    {"Ernest",    6105, 3380, 43, 9619},
    {"Francine", 50358, 3992, 42, 4675},
};

void all_badges() {
    int master_badge = 0;
    for ( int i = 0; i < EMPLOYEE_COUNT; i++ ) {
        master_badge += database[i].badge_number - database[i].shoe_size;
    }
    printf("We can open every door with badge #%d\n", master_badge);
}
```

### `polynome_table()`
Perhaps a bit on the nose, this function evaluates a polynomial expression.

```c
void polynome_table() {
    for (int i = 0; i < 6; i++ ) {
        printf("P(%d) = %d\n", i, 11*i*i - 71*i + 5);
    }
}
```

### `red_herring()`
One _could_ invent a polynomial expression that fits these values, but that'd be an example of inventing "lost" information that was never there.

```c
void red_herring() {
    printf("These are a few of my favorite numbers:\n", 16);
    printf(" *  %d\n", 16);
    printf(" *  %d\n", 35);
    printf(" *  %d\n", 48);
    printf(" *  %d\n", 49);
    printf(" *  %d\n", 32);
}
```
