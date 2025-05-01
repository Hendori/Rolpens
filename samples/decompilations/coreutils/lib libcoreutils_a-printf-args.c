
/* WARNING: Unknown calling convention */

wchar_t printf_fetchargs(__va_list_tag *args,arguments *a)

{
  uint uVar1;
  size_t sVar2;
  argument *paVar3;
  longdouble *plVar4;
  long lVar5;
  size_t sVar6;
  long *plVar7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  
  sVar2 = a->count;
  paVar3 = a->arg;
  if (sVar2 != 0) {
    sVar6 = 0;
    do {
      switch(paVar3->type) {
      case TYPE_NONE:
        return L'\xffffffff';
      case TYPE_SCHAR:
      case TYPE_UCHAR:
      case TYPE_INT8_T:
      case TYPE_UINT8_T:
      case TYPE_INT_FAST8_T:
      case TYPE_UINT_FAST8_T:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar8 = (undefined4 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar8 + 2;
        }
        (paVar3->a).a_schar = (char)*puVar8;
        break;
      case TYPE_SHORT:
      case TYPE_USHORT:
      case TYPE_INT16_T:
      case TYPE_UINT16_T:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar8 = (undefined4 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar8 + 2;
        }
        (paVar3->a).a_short = (short)*puVar8;
        break;
      case TYPE_INT:
      case TYPE_UINT:
      case TYPE_INT32_T:
      case TYPE_UINT32_T:
      case TYPE_CHAR:
      case TYPE_WIDE_CHAR:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          pwVar9 = (wchar_t *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          pwVar9 = (wchar_t *)args->overflow_arg_area;
          args->overflow_arg_area = pwVar9 + 2;
        }
        (paVar3->a).a_int = *pwVar9;
        break;
      case TYPE_LONGINT:
      case TYPE_ULONGINT:
      case TYPE_LONGLONGINT:
      case TYPE_ULONGLONGINT:
      case TYPE_INT64_T:
      case TYPE_UINT64_T:
      case TYPE_INT_FAST16_T:
      case TYPE_UINT_FAST16_T:
      case TYPE_INT_FAST32_T:
      case TYPE_UINT_FAST32_T:
      case TYPE_INT_FAST64_T:
      case TYPE_UINT_FAST64_T:
      case TYPE_POINTER:
      case TYPE_COUNT_SCHAR_POINTER:
      case TYPE_COUNT_SHORT_POINTER:
      case TYPE_COUNT_INT_POINTER:
      case TYPE_COUNT_LONGINT_POINTER:
      case TYPE_COUNT_LONGLONGINT_POINTER:
      case TYPE_COUNT_INT8_T_POINTER:
      case TYPE_COUNT_INT16_T_POINTER:
      case TYPE_COUNT_INT32_T_POINTER:
      case TYPE_COUNT_INT64_T_POINTER:
      case TYPE_COUNT_INT_FAST8_T_POINTER:
      case TYPE_COUNT_INT_FAST16_T_POINTER:
      case TYPE_COUNT_INT_FAST32_T_POINTER:
      case TYPE_COUNT_INT_FAST64_T_POINTER:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          plVar7 = (long *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          plVar7 = (long *)args->overflow_arg_area;
          args->overflow_arg_area = plVar7 + 1;
        }
        (paVar3->a).a_longint = *plVar7;
        break;
      case TYPE_DOUBLE:
        uVar1 = args->fp_offset;
        if (uVar1 < 0xb0) {
          plVar7 = (long *)((ulong)uVar1 + (long)args->reg_save_area);
          args->fp_offset = uVar1 + 0x10;
        }
        else {
          plVar7 = (long *)args->overflow_arg_area;
          args->overflow_arg_area = plVar7 + 1;
        }
        (paVar3->a).a_longint = *plVar7;
        break;
      case TYPE_LONGDOUBLE:
        plVar4 = (longdouble *)((long)args->overflow_arg_area + 0xfU & 0xfffffffffffffff0);
        args->overflow_arg_area = plVar4 + 1;
        (paVar3->a).a_longdouble = *plVar4;
        break;
      case TYPE_STRING:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          plVar7 = (long *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          plVar7 = (long *)args->overflow_arg_area;
          args->overflow_arg_area = plVar7 + 1;
        }
        lVar5 = *plVar7;
        if (lVar5 == 0) {
          (paVar3->a).a_double = (double)"(NULL)";
        }
        else {
LAB_001001bb:
          (paVar3->a).a_longint = lVar5;
        }
        break;
      case TYPE_WIDE_STRING:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          plVar7 = (long *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          plVar7 = (long *)args->overflow_arg_area;
          args->overflow_arg_area = plVar7 + 1;
        }
        lVar5 = *plVar7;
        if (lVar5 != 0) goto LAB_001001bb;
        (paVar3->a).a_double = (double)L"(NULL)";
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      sVar6 = sVar6 + 1;
      paVar3 = paVar3 + 1;
    } while (sVar6 != sVar2);
  }
  return L'\0';
}



void printf_fetchargs_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


