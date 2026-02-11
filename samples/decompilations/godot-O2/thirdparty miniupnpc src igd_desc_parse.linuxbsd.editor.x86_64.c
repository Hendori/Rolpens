
void IGDstartelt(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar2;
  
  uVar1 = 0x7f;
  if ((int)param_3 < 0x80) {
    uVar1 = param_3;
  }
  uVar2 = (ulong)(int)uVar1;
  if (uVar2 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 != 0) && (*(char *)param_1 = (char)*param_2, (uVar1 & 2) != 0)) {
        *(undefined2 *)((long)param_1 + (uVar2 - 2)) = *(undefined2 *)((long)param_2 + (uVar2 - 2));
      }
    }
    else {
      *param_1 = *param_2;
      *(undefined4 *)((long)param_1 + (uVar2 - 4)) = *(undefined4 *)((long)param_2 + (uVar2 - 4));
    }
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + (uVar2 - 8)) = *(undefined8 *)((long)param_2 + (uVar2 - 8));
    lVar3 = (long)param_1 - (long)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 - lVar3);
    puVar6 = (undefined8 *)((ulong)(param_1 + 2) & 0xfffffffffffffff8);
    for (uVar4 = lVar3 + uVar2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  *(undefined1 *)((long)param_1 + uVar2) = 0;
  param_1[0x60] = param_1[0x60] + 1;
  if (((param_3 == 7) && (*param_2 == 0x76726573)) && (*(int *)((long)param_2 + 3) == 0x65636976)) {
    *(undefined1 *)(param_1 + 0x261) = 0;
    *(undefined1 *)(param_1 + 0x281) = 0;
    *(undefined1 *)(param_1 + 0x2a1) = 0;
    *(undefined1 *)(param_1 + 0x2c1) = 0;
    return;
  }
  return;
}



void IGDendelt(long param_1,int *param_2,int param_3)

{
  void *__s1;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  if (((param_3 != 7) || (*param_2 != 0x76726573)) || (*(int *)((long)param_2 + 3) != 0x65636976)) {
    return;
  }
  __s1 = (void *)(param_1 + 0xb04);
  iVar1 = memcmp(__s1,"urn:schemas-upnp-org:service:WANCommonInterfaceConfig:",0x36);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x184;
    uVar4 = param_1 + 0x18c;
    *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(param_1 + 0x984);
    *(undefined8 *)(param_1 + 0x37c) = *(undefined8 *)(param_1 + 0xb7c);
  }
  else {
    if (((*(long *)(param_1 + 0xb04) == 0x656863733a6e7275 &&
          *(long *)(param_1 + 0xb0c) == 0x706e70752d73616d) &&
        (*(long *)(param_1 + 0xb14) == 0x7265733a67726f2d &&
         *(long *)(param_1 + 0xb1c) == 0x4e41573a65636976)) &&
       ((*(long *)(param_1 + 0xb24) == 0x6572694636765049 &&
         *(long *)(param_1 + 0xb2c) == 0x746e6f436c6c6177 &&
        (*(int *)(param_1 + 0xb34) == 0x3a6c6f72)))) {
      puVar6 = (undefined8 *)(param_1 + 0x78cU & 0xfffffffffffffff8);
      lVar2 = (param_1 + 0x784) - (long)puVar6;
      *(undefined8 *)(param_1 + 0x784) = *(undefined8 *)(param_1 + 0x984);
      *(undefined8 *)(param_1 + 0x97c) = *(undefined8 *)(param_1 + 0xb7c);
      puVar5 = (undefined8 *)((param_1 + 0x984) - lVar2);
      for (uVar4 = (ulong)((int)lVar2 + 0x200U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
        puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }
      return;
    }
    iVar1 = memcmp(__s1,"urn:schemas-upnp-org:service:WANIPConnection:",0x2d);
    if ((iVar1 != 0) &&
       (iVar1 = memcmp(__s1,"urn:schemas-upnp-org:service:WANPPPConnection:",0x2e), iVar1 != 0)) {
      return;
    }
    if (*(char *)(param_1 + 0x504) == '\0') {
      lVar2 = param_1 + 900;
      uVar4 = param_1 + 0x38c;
      *(undefined8 *)(param_1 + 900) = *(undefined8 *)(param_1 + 0x984);
      *(undefined8 *)(param_1 + 0x57c) = *(undefined8 *)(param_1 + 0xb7c);
    }
    else {
      lVar2 = param_1 + 0x584;
      uVar4 = param_1 + 0x58c;
      *(undefined8 *)(param_1 + 0x584) = *(undefined8 *)(param_1 + 0x984);
      *(undefined8 *)(param_1 + 0x77c) = *(undefined8 *)(param_1 + 0xb7c);
    }
  }
  lVar2 = lVar2 - (long)(uVar4 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((param_1 + 0x984) - lVar2);
  puVar6 = (undefined8 *)(uVar4 & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x200U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  return;
}



void IGDdata(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar1 = strcmp(param_1,"URLBase");
  pcVar5 = param_1 + 0x80;
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,"presentationURL");
    pcVar5 = param_1 + 0x100;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"serviceType");
      pcVar5 = param_1 + 0xb04;
      if (iVar1 != 0) {
        iVar1 = strcmp(param_1,"controlURL");
        pcVar5 = param_1 + 0x984;
        if (iVar1 != 0) {
          iVar1 = strcmp(param_1,"eventSubURL");
          pcVar5 = param_1 + 0xa04;
          if (iVar1 != 0) {
            iVar1 = strcmp(param_1,"SCPDURL");
            if (iVar1 != 0) {
              return;
            }
            pcVar5 = param_1 + 0xa84;
          }
        }
      }
    }
  }
  uVar2 = 0x7f;
  if (param_3 < 0x80) {
    uVar2 = (long)param_3;
  }
  if (uVar2 < 8) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 != 0) && (*pcVar5 = *param_2, (uVar2 & 2) != 0)) {
        *(undefined2 *)(pcVar5 + (uVar2 - 2)) = *(undefined2 *)(param_2 + (uVar2 - 2));
      }
    }
    else {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      *(undefined4 *)(pcVar5 + (uVar2 - 4)) = *(undefined4 *)(param_2 + (uVar2 - 4));
    }
  }
  else {
    *(undefined8 *)pcVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(pcVar5 + (uVar2 - 8)) = *(undefined8 *)(param_2 + (uVar2 - 8));
    lVar3 = (long)pcVar5 - (long)((ulong)(pcVar5 + 8) & 0xfffffffffffffff8);
    pcVar6 = param_2 + -lVar3;
    puVar7 = (undefined8 *)((ulong)(pcVar5 + 8) & 0xfffffffffffffff8);
    for (uVar4 = lVar3 + uVar2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *(undefined8 *)pcVar6;
      pcVar6 = pcVar6 + ((ulong)bVar8 * -2 + 1) * 8;
      puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
    }
  }
  pcVar5[uVar2] = '\0';
  return;
}


