
undefined8 printf_fetchargs(uint *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  unkbyte10 *pVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  lVar2 = *param_2;
  puVar3 = (undefined4 *)param_2[1];
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      switch(*puVar3) {
      case 0:
        return 0xffffffff;
      case 1:
      case 2:
      case 0xb:
      case 0xc:
      case 0x13:
      case 0x14:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(char *)(puVar3 + 4) = (char)*puVar8;
        break;
      case 3:
      case 4:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        *(short *)(puVar3 + 4) = (short)*puVar8;
        break;
      case 5:
      case 6:
      case 0xf:
      case 0x10:
      case 0x1d:
      case 0x1e:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar8 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar8 + 2;
        }
        puVar3[4] = *puVar8;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar3 + 4) = *puVar7;
        break;
      case 0x1b:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar3 + 4) = *puVar7;
        break;
      case 0x1c:
        pVar4 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(unkbyte10 **)(param_1 + 2) = pVar4 + 1;
        *(unkbyte10 *)(puVar3 + 4) = *pVar4;
        break;
      case 0x1f:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          plVar9 = (long *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          plVar9 = *(long **)(param_1 + 2);
          *(long **)(param_1 + 2) = plVar9 + 1;
        }
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          *(char **)(puVar3 + 4) = "(NULL)";
        }
        else {
LAB_001001bb:
          *(long *)(puVar3 + 4) = lVar5;
        }
        break;
      case 0x20:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          plVar9 = (long *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          plVar9 = *(long **)(param_1 + 2);
          *(long **)(param_1 + 2) = plVar9 + 1;
        }
        lVar5 = *plVar9;
        if (lVar5 != 0) goto LAB_001001bb;
        *(undefined1 **)(puVar3 + 4) = wide_null_string_0;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = lVar6 + 1;
      puVar3 = puVar3 + 8;
    } while (lVar6 != lVar2);
  }
  return 0;
}



void printf_fetchargs_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


