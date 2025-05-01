
/* simpleXmlNodeTypeToString(SvgNodeType) */

undefined8 simpleXmlNodeTypeToString(void)

{
  return 0;
}



/* isIgnoreUnsupportedLogElements(char const*) */

undefined8 isIgnoreUnsupportedLogElements(char *param_1)

{
  return 1;
}



/* simpleXmlParseAttributes(char const*, unsigned int, bool (*)(void*, char const*, char const*),
   void const*) */

undefined8
simpleXmlParseAttributes
          (char *param_1,uint param_2,_func_bool_void_ptr_char_ptr_char_ptr *param_3,void *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  char *__ptr;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  
  __ptr = (char *)malloc((ulong)(param_2 + 1));
  if ((param_1 == (char *)0x0 || param_3 == (_func_bool_void_ptr_char_ptr_char_ptr *)0x0) ||
     (__ptr == (char *)0x0)) {
LAB_001004c0:
    free(__ptr);
    return 0;
  }
  pbVar12 = (byte *)(param_1 + param_2);
joined_r0x001002ba:
  do {
    if ((pbVar12 <= param_1) ||
       (pbVar5 = (byte *)_skipWhiteSpacesAndXmlEntities(param_1,(char *)pbVar12), pbVar12 == pbVar5)
       ) {
      free(__ptr);
      return 1;
    }
    pbVar8 = pbVar5;
    if (pbVar5 < pbVar12) {
      while ((*pbVar8 != 0x3d && (iVar4 = isspace((uint)*pbVar8), iVar4 == 0))) {
        pbVar8 = pbVar8 + 1;
        if (pbVar12 == pbVar8) goto LAB_001004c0;
      }
      if (pbVar12 == pbVar8) goto LAB_001004c0;
      if (pbVar5 != pbVar8) {
        pbVar6 = pbVar8;
        if ((*pbVar8 != 0x3d) &&
           (pbVar6 = (byte *)memchr(pbVar8,0x3d,(long)pbVar12 - (long)pbVar8), pbVar6 == (byte *)0x0
           )) goto LAB_001004c0;
        lVar7 = _simpleXmlUnskipXmlEntities((char *)pbVar8,(char *)pbVar5);
        pbVar8 = (byte *)_skipWhiteSpacesAndXmlEntities((char *)(pbVar6 + 1),(char *)pbVar12);
        if (pbVar12 == pbVar8) goto LAB_001004c0;
        bVar3 = *pbVar8;
        if ((bVar3 == 0x27) || (bVar3 == 0x22)) {
          pbVar6 = (byte *)memchr(pbVar8 + 1,(int)(char)bVar3,(long)pbVar12 - (long)pbVar8);
          pbVar8 = pbVar8 + 1;
          if (pbVar6 == (byte *)0x0) goto LAB_001004c0;
        }
        else {
          pbVar6 = pbVar8;
          pbVar14 = pbVar8;
          if (pbVar8 < pbVar12) {
            do {
              iVar4 = isspace((uint)*pbVar14);
              pbVar1 = pbVar14 + 1;
              pbVar6 = pbVar14;
              if (iVar4 != 0) break;
              pbVar6 = pbVar12;
              pbVar14 = pbVar1;
            } while (pbVar12 != pbVar1);
          }
        }
        param_1 = (char *)(pbVar6 + 1);
        pcVar9 = (char *)_skipWhiteSpacesAndXmlEntities((char *)pbVar8,(char *)pbVar12);
        lVar7 = lVar7 - (long)pbVar5;
        pcVar10 = (char *)_unskipWhiteSpacesAndXmlEntities((char *)pbVar6,pcVar9);
        pcVar2 = __ptr + lVar7 + 1;
        __memcpy_chk(__ptr,pbVar5,lVar7,(ulong)(param_2 + 1));
        __ptr[lVar7] = '\0';
        pcVar11 = pcVar2;
        if (pcVar9 < pcVar10) {
          lVar7 = 1;
          do {
            lVar13 = lVar7;
            pcVar11 = (char *)_simpleXmlSkipXmlEntities(pcVar9,pcVar10);
            pcVar9 = pcVar11 + 1;
            pcVar2[lVar13 + -1] = *pcVar11;
            lVar7 = lVar13 + 1;
          } while (pcVar9 < pcVar10);
          pcVar11 = pcVar2 + (int)lVar13;
        }
        *pcVar11 = '\0';
        (*param_3)(param_4,__ptr,pcVar2);
        goto joined_r0x001002ba;
      }
    }
    param_1 = (char *)(pbVar5 + 1);
  } while( true );
}



/* simpleXmlParse(char const*, unsigned int, bool, bool (*)(void*, SimpleXMLType, char const*,
   unsigned int), void const*) */

undefined8
simpleXmlParse(char *param_1,uint param_2,bool param_3,
              _func_bool_void_ptr_SimpleXMLType_char_ptr_uint *param_4,void *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  char cVar13;
  
  if ((param_1 == (char *)0x0) ||
     (param_4 == (_func_bool_void_ptr_SimpleXMLType_char_ptr_uint *)0x0)) {
LAB_00100678:
    uVar12 = 0;
  }
  else {
    pbVar2 = (byte *)(param_1 + param_2);
    if (param_1 < pbVar2) {
LAB_00100530:
      if (*param_1 != 0x3c) {
        if (param_3) {
          do {
            pbVar9 = (byte *)_skipWhiteSpacesAndXmlEntities(param_1,(char *)pbVar2);
            pbVar10 = (byte *)param_1;
            if ((pbVar9 != (byte *)0x0) &&
               (bVar7 = (*param_4)(param_5,9,param_1,(int)pbVar9 - (int)param_1), pbVar10 = pbVar9,
               !bVar7)) goto LAB_00100678;
            param_1 = (char *)memchr(pbVar10,0x3c,(long)pbVar2 - (long)pbVar10);
            if ((byte *)param_1 == (byte *)0x0) {
              param_1 = (char *)pbVar2;
            }
            pbVar9 = (byte *)_unskipWhiteSpacesAndXmlEntities(param_1,(char *)pbVar10);
            if (((pbVar9 != pbVar10) &&
                (bVar7 = (*param_4)(param_5,3,(char *)pbVar10,(int)pbVar9 - (int)pbVar10), !bVar7))
               || ((pbVar9 < param_1 &&
                   (bVar7 = (*param_4)(param_5,9,(char *)pbVar9,(int)param_1 - (int)pbVar9), !bVar7)
                   ))) goto LAB_00100678;
            if (pbVar2 <= param_1) goto LAB_00100790;
          } while (*param_1 != 0x3c);
        }
        else {
          do {
            pbVar10 = (byte *)memchr(param_1,0x3c,(long)pbVar2 - (long)param_1);
            if (pbVar10 == (byte *)0x0) {
              pbVar10 = pbVar2;
              if (pbVar2 == (byte *)param_1) goto LAB_00100790;
LAB_001006b4:
              bVar7 = (*param_4)(param_5,3,param_1,(int)pbVar10 - (int)param_1);
              if (!bVar7) goto LAB_00100678;
            }
            else if ((byte *)param_1 != pbVar10) goto LAB_001006b4;
            param_1 = (char *)pbVar10;
            if (pbVar2 <= param_1) goto LAB_00100790;
          } while (*param_1 != 0x3c);
        }
      }
      pbVar10 = (byte *)param_1 + 1;
      if (pbVar10 < pbVar2) {
        bVar3 = ((byte *)param_1)[1];
        if (bVar3 == 0x2f) {
          pbVar10 = (byte *)param_1 + 2;
          cVar13 = '\x02';
LAB_00100902:
          if (pbVar10 < pbVar2) {
LAB_00100623:
            bVar7 = false;
            bVar6 = false;
            pbVar9 = pbVar10;
            do {
              bVar3 = *pbVar9;
              if (bVar3 == 0x22) {
                if (!bVar6) {
                  bVar4 = (bool)(bVar7 ^ 1);
                  bVar5 = !bVar7;
                  bVar7 = false;
                  if (bVar5) {
                    bVar7 = bVar4;
                  }
                }
              }
              else if (bVar3 == 0x27) {
                if (!bVar7) {
                  bVar6 = (bool)(bVar6 ^ 1);
                }
              }
              else if (((!bVar7) && (!bVar6)) && ((bVar3 & 0xfd) == 0x3c)) goto code_r0x00100708;
              pbVar9 = pbVar9 + 1;
              if (pbVar2 == pbVar9) break;
            } while( true );
          }
        }
        else {
          if (bVar3 == 0x3f) {
            pbVar10 = (byte *)param_1 + 2;
            cVar13 = '\x06';
            goto LAB_00100902;
          }
          cVar13 = '\0';
          if (bVar3 != 0x21) goto LAB_00100623;
          if (((((byte *)param_1 + 10 < pbVar2) && (*(int *)((byte *)param_1 + 2) == 0x54434f44)) &&
              (*(int *)((byte *)param_1 + 5) == 0x45505954)) &&
             ((((byte *)param_1)[9] == 0x3e ||
              (iVar8 = isspace((uint)((byte *)param_1)[9]), iVar8 != 0)))) {
            pbVar10 = (byte *)param_1 + 9;
            cVar13 = '\a';
            goto LAB_00100902;
          }
          if ((((byte *)param_1 + 0xc < pbVar2) && (*(int *)((byte *)param_1 + 2) == 0x4144435b)) &&
             (*(int *)((byte *)param_1 + 5) == 0x5b415441)) {
            pbVar10 = (byte *)param_1 + 9;
            if (pbVar10 < pbVar2) {
              pbVar9 = (byte *)param_1 + 0xb;
              pbVar11 = pbVar10;
              do {
                pbVar1 = pbVar11 + 1;
                if (*pbVar11 == 0x5d) {
                  if (pbVar2 <= pbVar1) break;
                  if (((*pbVar1 == 0x5d) && (pbVar9 < pbVar2)) && (pbVar11[2] == 0x3e))
                  goto code_r0x001009ce;
                }
                else if (pbVar2 == pbVar1) break;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar1;
              } while( true );
            }
          }
          else if (((byte *)param_1 + 7 < pbVar2) && (*(short *)((byte *)param_1 + 2) == 0x2d2d)) {
            pbVar10 = (byte *)param_1 + 4;
            if (pbVar10 < pbVar2) {
              pbVar9 = (byte *)param_1 + 6;
              pbVar11 = pbVar10;
              do {
                pbVar1 = pbVar11 + 1;
                if (*pbVar11 == 0x2d) {
                  if (pbVar2 <= pbVar1) break;
                  if (((*pbVar1 == 0x2d) && (pbVar9 < pbVar2)) && (pbVar11[2] == 0x3e))
                  goto code_r0x001008de;
                }
                else if (pbVar1 == pbVar2) break;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar1;
              } while( true );
            }
          }
          else {
            if (pbVar2 <= (byte *)param_1 + 3) {
              cVar13 = '\0';
              goto LAB_00100623;
            }
            pbVar10 = (byte *)param_1 + 2;
            pbVar9 = pbVar10;
            if (pbVar10 < pbVar2) {
              while (*pbVar9 != 0x3e) {
                pbVar9 = pbVar9 + 1;
                if (pbVar2 == pbVar9) goto LAB_00100678;
              }
              cVar13 = '\n';
              pbVar11 = pbVar9;
              goto LAB_00100738;
            }
          }
        }
      }
      goto LAB_00100678;
    }
LAB_00100790:
    uVar12 = 1;
  }
  return uVar12;
code_r0x00100708:
  pbVar11 = pbVar9;
  if (bVar3 == 0x3c) {
    if (cVar13 != '\a') goto LAB_00100678;
  }
  else if (cVar13 == '\x06') {
    if (pbVar9[-1] == 0x3f) {
      pbVar11 = pbVar9 + -1;
    }
  }
  else if (cVar13 != '\a') {
    if (cVar13 == '\0') {
      if (pbVar9[-1] == 0x2f) {
        cVar13 = '\x01';
        pbVar11 = pbVar9 + -1;
      }
    }
    else {
      cVar13 = '\x02';
    }
  }
LAB_00100738:
  if (param_3) {
    pbVar10 = (byte *)_skipWhiteSpacesAndXmlEntities((char *)pbVar10,(char *)pbVar11);
    pbVar11 = (byte *)_unskipWhiteSpacesAndXmlEntities((char *)pbVar11,(char *)pbVar10);
  }
LAB_0010076a:
  bVar7 = (*param_4)(param_5,cVar13,(char *)pbVar10,(int)pbVar11 - (int)pbVar10);
  if (!bVar7) goto LAB_00100678;
  param_1 = (char *)(pbVar9 + 1);
  if (pbVar2 <= param_1) goto LAB_00100790;
  goto LAB_00100530;
code_r0x001008de:
  cVar13 = '\b';
  if (*(short *)pbVar11 != 0x2d2d) {
    pbVar11 = pbVar9;
  }
  goto LAB_00100738;
code_r0x001009ce:
  cVar13 = '\x04';
  if (*(short *)pbVar11 != 0x5d5d) {
    pbVar11 = pbVar9;
  }
  goto LAB_0010076a;
}



/* simpleXmlParseW3CAttribute(char const*, unsigned int, bool (*)(void*, char const*, char const*),
   void const*) */

undefined8
simpleXmlParseW3CAttribute
          (char *param_1,uint param_2,_func_bool_void_ptr_char_ptr_char_ptr *param_3,void *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  void **ppvVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  void **ppvVar13;
  undefined1 *puVar15;
  void **ppvVar16;
  ulong uVar17;
  byte *__s;
  byte *__s_00;
  long in_FS_OFFSET;
  void *local_78;
  _func_bool_void_ptr_char_ptr_char_ptr *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  byte *local_50;
  long local_40;
  void **ppvVar14;
  
  ppvVar16 = &local_78;
  ppvVar13 = &local_78;
  ppvVar14 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_3;
  local_50 = (byte *)param_1;
  if (param_1 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar12 = (ulong)param_2;
    local_68 = param_1 + uVar12;
    uVar1 = uVar12 + 1;
    ppvVar4 = &local_78;
    while (ppvVar14 != (void **)((long)&local_78 - (uVar12 + 0x18 & 0xfffffffffffff000))) {
      ppvVar13 = (void **)((long)ppvVar4 + -0x1000);
      *(undefined8 *)((long)ppvVar4 + -8) = *(undefined8 *)((long)ppvVar4 + -8);
      ppvVar14 = (void **)((long)ppvVar4 + -0x1000);
      ppvVar4 = (void **)((long)ppvVar4 + -0x1000);
    }
    uVar17 = (ulong)((uint)(uVar12 + 0x18) & 0xff0);
    lVar3 = -uVar17;
    puVar15 = (undefined1 *)((long)ppvVar13 + lVar3);
    if (uVar17 != 0) {
      *(undefined8 *)((long)ppvVar13 + -8) = *(undefined8 *)((long)ppvVar13 + -8);
    }
    __s = (byte *)((ulong)((long)ppvVar13 + lVar3 + 0xf) & 0xfffffffffffffff0);
    for (; puVar15 !=
           (undefined1 *)((long)ppvVar13 + (lVar3 - (uVar12 + 0x18 & 0xfffffffffffff000)));
        puVar15 = puVar15 + -0x1000) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    uVar12 = (ulong)((uint)(uVar12 + 0x18) & 0xff0);
    lVar3 = -uVar12;
    ppvVar16 = (void **)(puVar15 + lVar3);
    if (uVar12 != 0) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    __s_00 = (byte *)((ulong)(puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0);
    uVar12 = uVar1;
    uVar17 = uVar1;
    if (param_1 != local_68) {
      while( true ) {
        *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100afe;
        local_60 = strchr((char *)local_50,0x3a);
        *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100b10;
        pcVar6 = strchr((char *)local_50,0x3b);
        pbVar11 = local_50;
        local_58 = pcVar6;
        if (local_68 <= local_60) break;
        if (pcVar6 >= local_68) {
          local_58 = (char *)0x0;
        }
        *__s = 0;
        *__s_00 = 0;
        if ((local_60 == (char *)0x0) || (pcVar6 < local_68 && pcVar6 != (char *)0x0)) {
          if ((local_58 <= local_60) || (local_60 == (char *)0x0)) {
            if (local_58 == (char *)0x0) break;
            local_50 = (byte *)(local_58 + -(long)local_50);
            *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100dd3;
            __memcpy_chk(__s,pbVar11,local_50,uVar12);
            __s[(long)local_50] = 0;
            bVar2 = *__s;
          }
          else {
            local_50 = (byte *)((long)local_60 - (long)local_50);
            *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100d6a;
            __memcpy_chk(__s,pbVar11,local_50,uVar12);
            __s[(long)local_50] = 0;
            local_50 = (byte *)(local_58 + -(long)local_60);
            *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100d96;
            __memcpy_chk(__s_00,local_60 + 1,local_50 + -1,uVar17);
            bVar2 = *__s;
            (__s_00 + -1)[(long)local_50] = 0;
          }
          if (bVar2 != 0) goto LAB_00100be9;
        }
        else {
          local_58 = local_60;
          local_50 = (byte *)((long)local_60 - (long)local_50);
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100ba0;
          __memcpy_chk(__s,pbVar11,local_50,uVar12);
          __s[(long)local_50] = 0;
          local_50 = (byte *)(local_68 + -(long)local_58);
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100bcc;
          __memcpy_chk(__s_00,local_58 + 1,local_50 + -1,uVar17);
          bVar2 = *__s;
          (__s_00 + -1)[(long)local_50] = 0;
          if (bVar2 == 0) break;
          local_58 = (char *)0x0;
LAB_00100be9:
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100bf1;
          sVar8 = strlen((char *)__s);
          local_50 = __s + sVar8;
          if (__s < local_50) {
            do {
              bVar2 = *__s;
              *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100c41;
              iVar5 = isspace((uint)bVar2);
              if (iVar5 == 0) break;
              uVar10 = uVar12;
              if (uVar12 <= uVar1) {
                uVar10 = uVar1;
              }
              uVar9 = (uVar10 - uVar12) + 1;
              if (uVar9 < uVar10) {
                uVar9 = uVar10;
              }
              __s = __s + 1;
              uVar12 = ((uVar12 - 1) - uVar10) + uVar9;
            } while (local_50 != __s);
            *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100c4d;
            sVar8 = strlen((char *)__s);
          }
          pbVar11 = __s + (sVar8 - 1);
          if (__s < pbVar11) {
            do {
              bVar2 = *pbVar11;
              *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100c75;
              local_50 = pbVar11;
              iVar5 = isspace((uint)bVar2);
              pbVar11 = local_50;
              if (iVar5 == 0) break;
              pbVar11 = local_50 + -1;
            } while (pbVar11 != __s);
          }
          pbVar11[1] = 0;
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100c89;
          sVar8 = strlen((char *)__s_00);
          local_50 = __s_00 + sVar8;
          if (__s_00 < local_50) {
            do {
              bVar2 = *__s_00;
              *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100cd8;
              iVar5 = isspace((uint)bVar2);
              if (iVar5 == 0) break;
              uVar10 = uVar17;
              if (uVar17 <= uVar1) {
                uVar10 = uVar1;
              }
              uVar9 = (uVar10 - uVar17) + 1;
              if (uVar9 < uVar10) {
                uVar9 = uVar10;
              }
              __s_00 = __s_00 + 1;
              uVar17 = ((uVar17 - 1) - uVar10) + uVar9;
            } while (local_50 != __s_00);
            *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100ce4;
            sVar8 = strlen((char *)__s_00);
          }
          pbVar11 = __s_00 + (sVar8 - 1);
          if (__s_00 < pbVar11) {
            do {
              bVar2 = *pbVar11;
              *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100d05;
              local_50 = pbVar11;
              iVar5 = isspace((uint)bVar2);
              pbVar11 = local_50;
              if (iVar5 == 0) break;
              pbVar11 = local_50 + -1;
            } while (pbVar11 != __s_00);
          }
          pbVar11[1] = 0;
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x100d21;
          (*local_70)(local_78,(char *)__s,(char *)__s_00);
          if (local_58 == (char *)0x0) break;
        }
        local_50 = (byte *)(local_58 + 1);
      }
    }
    uVar7 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppvVar16 + -8) = &UNK_00100e12;
    __stack_chk_fail();
  }
  return uVar7;
}



/* simpleXmlParseCSSAttribute(char const*, unsigned int, char**, char**, char const**, unsigned
   int*) */

long simpleXmlParseCSSAttribute
               (char *param_1,uint param_2,char **param_3,char **param_4,char **param_5,
               uint *param_6)

{
  ulong __n;
  int iVar1;
  byte *__s;
  void *pvVar2;
  char *pcVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  __n = (ulong)param_2;
  *param_4 = (char *)0x0;
  *param_3 = (char *)0x0;
  *param_6 = 0;
  pbVar6 = (byte *)param_1;
  if (param_1 < param_1 + __n) {
    do {
      iVar1 = isspace((uint)*pbVar6);
      if (iVar1 == 0) break;
      pbVar6 = pbVar6 + 1;
    } while ((byte *)(param_1 + __n) != pbVar6);
  }
  __s = (byte *)memchr(param_1,0x7b,__n);
  if (__s == (byte *)0x0) {
    return 0;
  }
  if (__s == pbVar6) {
    return 0;
  }
  pvVar2 = memchr(__s,0x7d,__n - ((long)__s - (long)param_1));
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  *param_5 = (char *)(__s + 1);
  *param_6 = (int)pvVar2 - (int)(__s + 1);
  pbVar5 = __s + -1;
  if (pbVar6 < __s + -1) {
    do {
      __s = pbVar5;
      bVar4 = *__s;
      iVar1 = isspace((uint)bVar4);
      if (iVar1 == 0) {
        __s = __s + 1;
        goto LAB_00100f30;
      }
      pbVar5 = __s + -1;
    } while (pbVar6 != __s + -1);
    bVar4 = __s[-1];
  }
  else {
    bVar4 = __s[-1];
  }
LAB_00100f30:
  if (bVar4 == 0x2e) {
    return 0;
  }
  pbVar5 = pbVar6;
  if (pbVar6 < __s) {
    do {
      if (*pbVar5 == 0x2e) {
        if (pbVar5 == pbVar6) goto LAB_00100f55;
        pcVar3 = (char *)tvg::strDuplicate((char *)pbVar6,(long)pbVar5 - (long)pbVar6);
        goto LAB_00100f61;
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 != __s);
    pcVar3 = (char *)tvg::strDuplicate((char *)pbVar6,(long)pbVar5 - (long)pbVar6);
    *param_3 = pcVar3;
  }
  else {
LAB_00100f55:
    pcVar3 = strdup("all");
    pbVar5 = pbVar6;
LAB_00100f61:
    *param_3 = pcVar3;
    if (pbVar5 != __s) {
      pcVar3 = (char *)tvg::strDuplicate((char *)(pbVar5 + 1),(ulong)(__s + (-1 - (long)pbVar5)));
      goto LAB_00100fb8;
    }
  }
  pcVar3 = (char *)0x0;
LAB_00100fb8:
  *param_4 = pcVar3;
  return (long)pvVar2 + 1;
}



/* simpleXmlFindAttributesTag(char const*, unsigned int) */

byte * simpleXmlFindAttributesTag(char *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + param_2);
  pbVar3 = (byte *)param_1;
  if (param_1 < pbVar4) {
    do {
      bVar1 = *pbVar3;
      iVar2 = isspace((uint)bVar1);
      if (iVar2 != 0) {
        pbVar3 = (byte *)_simpleXmlUnskipXmlEntities((char *)pbVar3,param_1);
        if (pbVar4 == pbVar3) {
          pbVar3 = (byte *)0x0;
        }
        return pbVar3;
      }
      if (bVar1 == 0x3d) {
        return (byte *)param_1;
      }
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != pbVar3);
  }
  return (byte *)0x0;
}


