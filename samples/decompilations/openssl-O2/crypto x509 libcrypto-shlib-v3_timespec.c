
undefined1 * OSSL_TIME_SPEC_ABSOLUTE_it(void)

{
  return local_it_10;
}



undefined1 * OSSL_DAY_TIME_it(void)

{
  return local_it_9;
}



undefined1 * OSSL_DAY_TIME_BAND_it(void)

{
  return local_it_8;
}



undefined1 * OSSL_NAMED_DAY_it(void)

{
  return local_it_7;
}



undefined1 * OSSL_TIME_SPEC_X_DAY_OF_it(void)

{
  return local_it_6;
}



undefined1 * OSSL_TIME_SPEC_DAY_it(void)

{
  return local_it_5;
}



undefined1 * OSSL_TIME_SPEC_WEEKS_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_TIME_SPEC_MONTH_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_TIME_PERIOD_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_TIME_SPEC_TIME_it(void)

{
  return local_it_1;
}



undefined1 * OSSL_TIME_SPEC_it(void)

{
  return local_it_0;
}



int print_int_named_day(BIO *param_1,undefined8 param_2)

{
  int iVar1;
  
  switch(param_2) {
  default:
    return 0;
  case 1:
    iVar1 = BIO_puts(param_1,"SUN");
    return iVar1;
  case 2:
    iVar1 = BIO_puts(param_1,"MON");
    return iVar1;
  case 3:
    iVar1 = BIO_puts(param_1,"TUE");
    return iVar1;
  case 4:
    iVar1 = BIO_puts(param_1,"WED");
    return iVar1;
  case 5:
    iVar1 = BIO_puts(param_1,"THU");
    return iVar1;
  case 6:
    iVar1 = BIO_puts(param_1,"FRI");
    return iVar1;
  case 7:
    iVar1 = BIO_puts(param_1,"SAT");
    return iVar1;
  }
}



undefined8 print_day_of_week(BIO *param_1,ASN1_BIT_STRING *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar2 = 0;
  do {
    iVar1 = ASN1_BIT_STRING_get_bit(param_2,(int)lVar2);
    if (iVar1 != 0) {
      if ((0 < iVar3) && (iVar1 = BIO_puts(param_1,", "), iVar1 == 0)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = BIO_puts(param_1,(&WEEKDAY_NAMES)[lVar2]);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 7) {
      return 1;
    }
  } while( true );
}



bool i2r_OSSL_DAY_TIME_isra_0(long *param_1,BIO *param_2)

{
  bool bVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (*param_1 != 0) {
    iVar2 = ASN1_INTEGER_get_int64(&local_38);
    if (iVar2 != 0) {
      if (param_1[1] != 0) {
        iVar2 = ASN1_INTEGER_get_int64(&local_30);
        if (iVar2 == 0) goto LAB_00100288;
        if (param_1[1] != 0) {
          iVar2 = ASN1_INTEGER_get_int64(&local_28,param_1[2]);
          if (iVar2 == 0) goto LAB_00100288;
        }
      }
      iVar2 = BIO_printf(param_2,"%02lld:%02lld:%02lld",local_38,local_30,local_28);
      bVar1 = 0 < iVar2;
      goto LAB_0010028a;
    }
  }
LAB_00100288:
  bVar1 = false;
LAB_0010028a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2r_OSSL_TIME_SPEC(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  int *piVar1;
  ASN1_BIT_STRING *pAVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2[2] == 0) ||
     ((iVar3 = ASN1_INTEGER_get_int64(local_50), iVar3 == 1 &&
      (iVar3 = BIO_printf(param_3,"%*sTimezone: UTC%+03lld:00\n",(ulong)param_4,&_LC9), 0 < iVar3)))
     ) {
    if (*(int *)(param_2 + 1) < 1) {
      pcVar11 = "%*sTime:\n";
    }
    else {
      pcVar11 = "%*sNOT this time:\n";
    }
    iVar3 = BIO_printf(param_3,pcVar11,(ulong)param_4,&_LC9);
    if (0 < iVar3) {
      piVar1 = (int *)*param_2;
      if (*piVar1 == 0) {
        iVar3 = BIO_printf(param_3,"%*sAbsolute: ",(ulong)(param_4 + 4),&_LC9);
        if (0 < iVar3) {
          plVar6 = *(long **)(piVar1 + 2);
          if (*plVar6 == 0) {
            if (plVar6[1] == 0) {
              iVar3 = BIO_puts(param_3,"INVALID (EMPTY)");
joined_r0x00100ea8:
              if (0 < iVar3) goto LAB_00100790;
            }
            else {
              iVar3 = BIO_puts(param_3,"Any time until ");
joined_r0x00100c45:
              if ((iVar3 != 0) && (iVar3 = ossl_asn1_time_print_ex(param_3,plVar6[1],0), iVar3 != 0)
                 ) goto LAB_00100790;
            }
          }
          else if (plVar6[1] == 0) {
            iVar3 = BIO_puts(param_3,"Any time after ");
            if ((iVar3 != 0) && (iVar3 = ossl_asn1_time_print_ex(param_3,*plVar6,0), iVar3 != 0)) {
              iVar3 = BIO_printf(param_3,"%.*s",(ulong)*(uint *)*plVar6,
                                 *(undefined8 *)((uint *)*plVar6 + 2));
              goto joined_r0x00100ea8;
            }
          }
          else {
            iVar3 = BIO_puts(param_3,"Any time between ");
            if ((iVar3 != 0) && (iVar3 = ossl_asn1_time_print_ex(param_3,*plVar6,0), iVar3 != 0)) {
              iVar3 = BIO_puts(param_3," and ");
              goto joined_r0x00100c45;
            }
          }
        }
      }
      else if ((*piVar1 == 1) &&
              (iVar3 = BIO_printf(param_3,"%*sPeriodic:\n",(ulong)(param_4 + 4),&_LC9), 0 < iVar3))
      {
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2));
        if (iVar3 < 1) {
LAB_00100790:
          iVar3 = BIO_puts(param_3,"\n");
          goto LAB_00100302;
        }
        iVar3 = 0;
        do {
          plVar6 = (long *)OPENSSL_sk_value(*(undefined8 *)(piVar1 + 2),iVar3);
          iVar4 = BIO_printf(param_3,"%*sPeriod:\n",(ulong)(param_4 + 8),&_LC9);
          if (iVar4 < 1) break;
          if (*plVar6 != 0) {
            iVar4 = BIO_printf(param_3,"%*sDaytime bands:\n",(ulong)(param_4 + 0xc),&_LC9);
            if (iVar4 < 1) break;
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*plVar6), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              plVar7 = (long *)OPENSSL_sk_value(*plVar6,iVar4);
              iVar5 = BIO_printf(param_3,"%*s",(ulong)(param_4 + 0x10),&_LC9);
              if (iVar5 < 1) goto switchD_00100da0_caseD_0;
              if (*plVar7 == 0) {
                iVar5 = BIO_puts(param_3,"00:00:00");
              }
              else {
                iVar5 = i2r_OSSL_DAY_TIME_isra_0(*plVar7,param_3);
              }
              if ((iVar5 == 0) || (iVar5 = BIO_puts(param_3," - "), iVar5 == 0))
              goto switchD_00100da0_caseD_0;
              if (plVar7[1] == 0) {
                iVar5 = BIO_puts(param_3,"23:59:59");
              }
              else {
                iVar5 = i2r_OSSL_DAY_TIME_isra_0(plVar7[1],param_3);
              }
              if ((iVar5 == 0) || (iVar5 = BIO_puts(param_3,"\n"), iVar5 == 0))
              goto switchD_00100da0_caseD_0;
            }
          }
          piVar9 = (int *)plVar6[1];
          if (piVar9 == (int *)0x0) goto LAB_001006bb;
          if (*piVar9 == 0) {
            if (plVar6[2] != 0) {
              uVar10 = (ulong)(param_4 + 0xc);
              pcVar11 = "%*sDays of the week: ";
              goto LAB_00100588;
            }
            if (plVar6[3] != 0) {
              uVar10 = (ulong)(param_4 + 0xc);
              pcVar11 = "%*sDays of the month: ";
              goto LAB_00100588;
            }
            if (plVar6[4] != 0) {
              uVar10 = (ulong)(param_4 + 0xc);
              pcVar11 = "%*sDays of the year: ";
              goto LAB_00100588;
            }
LAB_001005ba:
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar9 + 2)), iVar4 < iVar5;
                iVar4 = iVar4 + 1) {
              uVar8 = OPENSSL_sk_value(*(undefined8 *)(plVar6[1] + 8),iVar4);
              iVar5 = ASN1_INTEGER_get_int64(&local_48,uVar8);
              if (iVar5 == 0) goto switchD_00100da0_caseD_0;
              if (iVar4 == 0) {
                if (plVar6[2] == 0) goto LAB_00100651;
LAB_001005dc:
                iVar5 = print_int_named_day(param_3);
                if (iVar5 == 0) goto switchD_00100da0_caseD_0;
              }
              else {
                iVar5 = BIO_puts(param_3,", ");
                if (iVar5 == 0) goto switchD_00100da0_caseD_0;
                if (plVar6[2] != 0) goto LAB_001005dc;
LAB_00100651:
                iVar5 = BIO_printf(param_3,"%lld",local_48);
                if (iVar5 < 1) goto switchD_00100da0_caseD_0;
              }
              piVar9 = (int *)plVar6[1];
            }
            goto LAB_001006a4;
          }
          uVar10 = (ulong)(param_4 + 0xc);
          pcVar11 = "%*sDays: ";
LAB_00100588:
          iVar4 = BIO_printf(param_3,pcVar11,uVar10,&_LC9);
          if (iVar4 < 1) break;
          piVar9 = (int *)plVar6[1];
          iVar4 = *piVar9;
          if (iVar4 == 1) {
            iVar4 = print_day_of_week(param_3,*(undefined8 *)(piVar9 + 2));
            goto joined_r0x00100c7f;
          }
          if (iVar4 != 2) {
            if (iVar4 == 0) goto LAB_001005ba;
            break;
          }
          switch(**(undefined4 **)(piVar9 + 2)) {
          case 0:
            iVar4 = BIO_puts(param_3,"FIRST ");
            break;
          case 1:
            iVar4 = BIO_puts(param_3,"SECOND ");
            goto joined_r0x00100aa3;
          case 2:
            iVar4 = BIO_puts(param_3,"THIRD ");
joined_r0x00100aa3:
            if (iVar4 != 0) goto LAB_00100a5a;
            goto switchD_00100da0_caseD_0;
          case 3:
            iVar4 = BIO_puts(param_3,"FOURTH ");
            break;
          case 4:
            iVar4 = BIO_puts(param_3,"FIFTH ");
            break;
          default:
            goto switchD_00100da0_caseD_0;
          }
          if (iVar4 == 0) break;
LAB_00100a5a:
          piVar9 = *(int **)(*(long *)(plVar6[1] + 8) + 8);
          if (*piVar9 == 0) {
            iVar4 = ASN1_INTEGER_get_int64(&local_48,*(undefined8 *)(piVar9 + 2));
            if (iVar4 == 0) break;
            iVar4 = print_int_named_day(param_3,local_48);
          }
          else {
            if (*piVar9 != 1) break;
            iVar4 = print_day_of_week(param_3,*(undefined8 *)(piVar9 + 2));
          }
joined_r0x00100c7f:
          if (iVar4 == 0) break;
LAB_001006a4:
          iVar4 = BIO_puts(param_3,"\n");
          if (iVar4 == 0) break;
LAB_001006bb:
          piVar9 = (int *)plVar6[2];
          if (piVar9 != (int *)0x0) {
            if (*piVar9 == 1) {
              if (plVar6[3] != 0) {
                uVar10 = (ulong)(param_4 + 0xc);
                pcVar11 = "%*sWeeks of the month: ";
                goto LAB_001007ee;
              }
              if (plVar6[4] != 0) {
                uVar10 = (ulong)(param_4 + 0xc);
                pcVar11 = "%*sWeeks of the year: ";
                goto LAB_001007ee;
              }
LAB_00100b1e:
              for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar9 + 2)), iVar4 < iVar5;
                  iVar4 = iVar4 + 1) {
                uVar8 = OPENSSL_sk_value(*(undefined8 *)(plVar6[2] + 8),iVar4);
                iVar5 = ASN1_INTEGER_get_int64(&local_48,uVar8);
                if ((iVar5 == 0) ||
                   (((iVar4 != 0 && (iVar5 = BIO_puts(param_3,", "), iVar5 == 0)) ||
                    (iVar5 = BIO_printf(param_3,"%lld",local_48), iVar5 == 0))))
                goto switchD_00100da0_caseD_0;
                piVar9 = (int *)plVar6[2];
              }
            }
            else {
              uVar10 = (ulong)(param_4 + 0xc);
              pcVar11 = "%*sWeeks: ";
LAB_001007ee:
              iVar4 = BIO_printf(param_3,pcVar11,uVar10);
              if (iVar4 < 1) break;
              piVar9 = (int *)plVar6[2];
              iVar4 = *piVar9;
              if (iVar4 == 1) goto LAB_00100b1e;
              if (iVar4 == 2) {
                pAVar2 = *(ASN1_BIT_STRING **)(piVar9 + 2);
                lVar12 = 0;
                iVar4 = 0;
                do {
                  iVar5 = ASN1_BIT_STRING_get_bit(pAVar2,(int)lVar12);
                  if (iVar5 != 0) {
                    if ((0 < iVar4) && (iVar5 = BIO_puts(param_3,", "), iVar5 == 0))
                    goto switchD_00100da0_caseD_0;
                    iVar4 = iVar4 + 1;
                    iVar5 = BIO_puts(param_3,(&WEEK_NAMES)[lVar12]);
                    if (iVar5 == 0) goto switchD_00100da0_caseD_0;
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar12 != 5);
              }
              else if ((iVar4 != 0) || (iVar4 = BIO_puts(param_3,"ALL"), iVar4 == 0)) break;
            }
            iVar4 = BIO_puts(param_3,"\n");
            if (iVar4 == 0) break;
          }
          if (plVar6[3] != 0) {
            iVar4 = BIO_printf(param_3,"%*sMonths: ",(ulong)(param_4 + 0xc));
            if (iVar4 < 1) break;
            piVar9 = (int *)plVar6[3];
            iVar4 = *piVar9;
            if (iVar4 == 1) {
              for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar9 + 2)), iVar4 < iVar5;
                  iVar4 = iVar4 + 1) {
                uVar8 = OPENSSL_sk_value(*(undefined8 *)(plVar6[3] + 8),iVar4);
                iVar5 = ASN1_INTEGER_get_int64(&local_48,uVar8);
                if ((iVar5 == 0) || ((iVar4 != 0 && (iVar5 = BIO_puts(param_3,", "), iVar5 == 0))))
                goto switchD_00100da0_caseD_0;
                switch(local_48) {
                default:
                  goto switchD_00100da0_caseD_0;
                case 1:
                  iVar5 = BIO_puts(param_3,"JAN");
                  break;
                case 2:
                  iVar5 = BIO_puts(param_3,"FEB");
                  break;
                case 3:
                  iVar5 = BIO_puts(param_3,"MAR");
                  break;
                case 4:
                  iVar5 = BIO_puts(param_3,"APR");
                  break;
                case 5:
                  iVar5 = BIO_puts(param_3,"MAY");
                  break;
                case 6:
                  iVar5 = BIO_puts(param_3,"JUN");
                  break;
                case 7:
                  iVar5 = BIO_puts(param_3,"JUL");
                  break;
                case 8:
                  iVar5 = BIO_puts(param_3,"AUG");
                  break;
                case 9:
                  iVar5 = BIO_puts(param_3,"SEP");
                  break;
                case 10:
                  iVar5 = BIO_puts(param_3,"OCT");
                  break;
                case 0xb:
                  iVar5 = BIO_puts(param_3,"NOV");
                  break;
                case 0xc:
                  iVar5 = BIO_puts(param_3,"DEC");
                }
                if (iVar5 == 0) goto switchD_00100da0_caseD_0;
                piVar9 = (int *)plVar6[3];
              }
            }
            else if (iVar4 == 2) {
              pAVar2 = *(ASN1_BIT_STRING **)(piVar9 + 2);
              lVar12 = 0;
              iVar4 = 0;
              do {
                iVar5 = ASN1_BIT_STRING_get_bit(pAVar2,(int)lVar12);
                if (iVar5 != 0) {
                  if ((0 < iVar4) && (iVar5 = BIO_puts(param_3,", "), iVar5 == 0))
                  goto switchD_00100da0_caseD_0;
                  iVar4 = iVar4 + 1;
                  iVar5 = BIO_puts(param_3,(&MONTH_NAMES)[lVar12]);
                  if (iVar5 == 0) goto switchD_00100da0_caseD_0;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0xc);
            }
            else if ((iVar4 != 0) || (iVar4 = BIO_puts(param_3,"ALL"), iVar4 == 0)) break;
            iVar4 = BIO_puts(param_3,"\n");
            if (iVar4 == 0) break;
          }
          if (plVar6[4] != 0) {
            iVar4 = BIO_printf(param_3,"%*sYears: ",(ulong)(param_4 + 0xc),&_LC9);
            if (iVar4 < 1) break;
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(plVar6[4]), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              uVar8 = OPENSSL_sk_value(plVar6[4],iVar4);
              iVar5 = ASN1_INTEGER_get_int64(&local_48,uVar8);
              if ((iVar5 == 0) ||
                 (((iVar4 != 0 && (iVar5 = BIO_puts(param_3,", "), iVar5 == 0)) ||
                  (iVar5 = BIO_printf(param_3,"%04lld",local_48), iVar5 < 1))))
              goto switchD_00100da0_caseD_0;
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2));
          if (iVar4 <= iVar3) goto LAB_00100790;
          iVar4 = BIO_puts(param_3,"\n");
        } while (iVar4 != 0);
      }
    }
  }
switchD_00100da0_caseD_0:
  iVar3 = 0;
LAB_00100302:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void d2i_OSSL_DAY_TIME(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_DAY_TIME(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_DAY_TIME_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_it();
  ASN1_item_new(it);
  return;
}



void OSSL_DAY_TIME_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_DAY_TIME_BAND(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_BAND_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_DAY_TIME_BAND(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_BAND_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_DAY_TIME_BAND_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_BAND_it();
  ASN1_item_new(it);
  return;
}



void OSSL_DAY_TIME_BAND_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_DAY_TIME_BAND_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_DAY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_DAY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_DAY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_DAY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_DAY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_DAY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_DAY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_DAY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_WEEKS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_WEEKS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_WEEKS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_WEEKS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_WEEKS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_WEEKS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_WEEKS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_WEEKS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_MONTH(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_MONTH_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_MONTH(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_MONTH_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_MONTH_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_MONTH_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_MONTH_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_MONTH_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_NAMED_DAY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_NAMED_DAY_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_NAMED_DAY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_NAMED_DAY_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_NAMED_DAY_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_NAMED_DAY_it();
  ASN1_item_new(it);
  return;
}



void OSSL_NAMED_DAY_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_NAMED_DAY_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_X_DAY_OF(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_X_DAY_OF_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_X_DAY_OF(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_X_DAY_OF_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_X_DAY_OF_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_X_DAY_OF_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_X_DAY_OF_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_X_DAY_OF_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_ABSOLUTE(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_ABSOLUTE_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_ABSOLUTE(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_ABSOLUTE_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_ABSOLUTE_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_ABSOLUTE_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_ABSOLUTE_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_ABSOLUTE_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC_TIME(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_TIME_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC_TIME(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_TIME_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_TIME_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_TIME_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_TIME_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_TIME_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_SPEC(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_SPEC(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_SPEC_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_SPEC_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_SPEC_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TIME_PERIOD(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_PERIOD_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TIME_PERIOD(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_PERIOD_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TIME_PERIOD_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_PERIOD_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TIME_PERIOD_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TIME_PERIOD_it();
  ASN1_item_free(param_1,it);
  return;
}


