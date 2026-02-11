
ulong ossl_fnv1a_hash(byte *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = 0xcbf29ce484222325;
  if (param_2 != 0) {
    pbVar3 = param_1 + param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    } while (pbVar3 != param_1);
  }
  return uVar2;
}


