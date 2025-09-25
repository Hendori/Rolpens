uint test_dgram(void) {
   uint uVar1;
   int iVar2;
   BIO_METHOD *type;
   BIO *bp;
   BIO *bp_00;
   ulong uVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined4 local_bf;
   undefined3 uStack_bb;
   undefined4 local_b8;
   undefined3 uStack_b4;
   undefined8 local_b1;
   undefined1 local_a9;
   char local_a8[8];
   char acStack_a0[8];
   undefined1 local_98[88];
   long local_40;
   bp_00 = (BIO*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   type = (BIO_METHOD*)BIO_s_dgram_mem();
   bp = BIO_new(type);
   local_b1 = 0x3635363534333231;
   local_a9 = 0;
   local_bf = 0x44434241;
   uStack_bb = 0x4645;
   local_b8 = 0x43444546;
   uStack_b4 = 0x4142;
   for (int i = 0; i < 8; i++) {
      local_a8[i] = _LC29[i];
   }

   for (int i = 0; i < 8; i++) {
      acStack_a0[i] = _LC29[( i + 8 )];
   }

   uVar1 = test_ptr("test/membio_test.c", 0x18, &_LC0, bp);
   if (uVar1 != 0) {
      bp_00 = BIO_new_mem_buf(&local_b1, 9);
      iVar2 = test_ptr("test/membio_test.c", 0x1c, &_LC2);
      if (iVar2 != 0) {
         uVar3 = BIO_ctrl(bp_00, 0x82, 0, (void*)0x0);
         uVar1 = test_int_gt("test/membio_test.c", 0x20, "BIO_set_mem_eof_return(rbio, 0)", &_LC3, uVar3 & 0xffffffff, 0);
         if (uVar1 == 0) goto LAB_001000a1;
         uVar3 = BIO_ctrl(bp, 0x82, 0, (void*)0x0);
         iVar2 = test_int_le("test/membio_test.c", 0x24, "BIO_set_mem_eof_return(bio, 0)", &_LC3, uVar3 & 0xffffffff, 0);
         if (iVar2 != 0) {
            iVar2 = BIO_write(bp, &local_b1, 9);
            iVar2 = test_int_eq("test/membio_test.c", 0x28, "BIO_write(bio, msg1, sizeof(msg1))", "sizeof(msg1)", iVar2, 9);
            if (iVar2 != 0) {
               iVar2 = BIO_write(bp, local_a8, 0x10);
               iVar2 = test_int_eq("test/membio_test.c", 0x2a, "BIO_write(bio, msg2, sizeof(msg2))", "sizeof(msg2)", iVar2, 0x10);
               if (iVar2 != 0) {
                  iVar2 = BIO_write(bp, &local_bf, 7);
                  iVar2 = test_int_eq("test/membio_test.c", 0x2c, "BIO_write(bio, msg3, sizeof(msg3))", "sizeof(msg3)", iVar2, 7);
                  if (iVar2 != 0) {
                     iVar2 = BIO_write(bp, &local_b8, 7);
                     iVar2 = test_int_eq("test/membio_test.c", 0x2e, "BIO_write(bio, msg4, sizeof(msg4))", "sizeof(msg4)", iVar2, 7);
                     if (iVar2 != 0) {
                        iVar2 = BIO_read(bp, local_98, 0x50);
                        iVar2 = test_int_eq("test/membio_test.c", 0x32, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg1)", iVar2, 9);
                        if (iVar2 != 0) {
                           iVar2 = test_mem_eq("test/membio_test.c", 0x33, &_LC16, &_LC15, local_98, 9, &local_b1, 9);
                           if (iVar2 != 0) {
                              iVar2 = BIO_read(bp, local_98, 0x50);
                              iVar2 = test_int_eq("test/membio_test.c", 0x34, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg2)", iVar2, 0x10);
                              if (iVar2 != 0) {
                                 iVar2 = test_mem_eq("test/membio_test.c", 0x35, &_LC16, &_LC17, local_98, 0x10, local_a8, 0x10);
                                 if (iVar2 != 0) {
                                    iVar2 = BIO_read(bp, local_98, 0x50);
                                    iVar2 = test_int_eq("test/membio_test.c", 0x36, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg3)", iVar2, 7);
                                    if (iVar2 != 0) {
                                       iVar2 = test_mem_eq("test/membio_test.c", 0x37, &_LC16, &_LC18, local_98, 7, &local_bf, 7);
                                       if (iVar2 != 0) {
                                          iVar2 = BIO_read(bp, local_98, 0x50);
                                          iVar2 = test_int_eq("test/membio_test.c", 0x38, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg4)", iVar2, 7);
                                          if (iVar2 != 0) {
                                             iVar2 = test_mem_eq("test/membio_test.c", 0x39, &_LC16, &_LC19, local_98, 7, &local_b8, 7);
                                             if (iVar2 != 0) {
                                                iVar2 = BIO_write(bp, &local_b1, 9);
                                                iVar2 = test_int_eq("test/membio_test.c", 0x3d, "BIO_write(bio, msg1, sizeof(msg1))", "sizeof(msg1)", iVar2, 9);
                                                if (iVar2 != 0) {
                                                   iVar2 = BIO_write(bp, local_a8, 0x10);
                                                   iVar2 = test_int_eq("test/membio_test.c", 0x3f, "BIO_write(bio, msg2, sizeof(msg2))", "sizeof(msg2)", iVar2, 0x10);
                                                   if (iVar2 != 0) {
                                                      iVar2 = BIO_read(bp, local_98, 0x50);
                                                      iVar2 = test_int_eq("test/membio_test.c", 0x41, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg1)", iVar2, 9);
                                                      if (iVar2 != 0) {
                                                         iVar2 = test_mem_eq("test/membio_test.c", 0x42, &_LC16, &_LC15, local_98, 9, &local_b1, 9);
                                                         if (iVar2 != 0) {
                                                            iVar2 = BIO_write(bp, &local_bf, 7);
                                                            iVar2 = test_int_eq("test/membio_test.c", 0x44, "BIO_write(bio, msg3, sizeof(msg3))", "sizeof(msg3)", iVar2, 7);
                                                            if (iVar2 != 0) {
                                                               iVar2 = BIO_read(bp, local_98, 0x50);
                                                               iVar2 = test_int_eq("test/membio_test.c", 0x46, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg2)", iVar2, 0x10);
                                                               if (iVar2 != 0) {
                                                                  iVar2 = test_mem_eq("test/membio_test.c", 0x47, &_LC16, &_LC17, local_98, 0x10, local_a8, 0x10);
                                                                  if (iVar2 != 0) {
                                                                     iVar2 = BIO_read(bp, local_98, 0x50);
                                                                     iVar2 = test_int_eq("test/membio_test.c", 0x48, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg3)", iVar2, 7);
                                                                     if (iVar2 != 0) {
                                                                        iVar2 = test_mem_eq("test/membio_test.c", 0x49, &_LC16, &_LC18, local_98, 7, &local_bf, 7);
                                                                        if (iVar2 != 0) {
                                                                           iVar2 = BIO_write(bp, &local_b1, 9);
                                                                           iVar2 = test_int_eq("test/membio_test.c", 0x50, "BIO_write(bio, msg1, sizeof(msg1))", "sizeof(msg1)", iVar2, 9);
                                                                           if (iVar2 != 0) {
                                                                              iVar2 = BIO_write(bp, local_a8, 0x10);
                                                                              iVar2 = test_int_eq("test/membio_test.c", 0x52, "BIO_write(bio, msg2, sizeof(msg2))", "sizeof(msg2)", iVar2, 0x10);
                                                                              if (iVar2 != 0) {
                                                                                 iVar2 = BIO_read(bp, local_98, 2);
                                                                                 iVar2 = test_int_eq("test/membio_test.c", 0x54, "BIO_read(bio, buf, 2)", &_LC20, iVar2, 2);
                                                                                 if (iVar2 != 0) {
                                                                                    iVar2 = test_mem_eq("test/membio_test.c", 0x55, &_LC16, &_LC15, local_98, 2, &local_b1, 2);
                                                                                    if (iVar2 != 0) {
                                                                                       iVar2 = BIO_read(bp, local_98, 0x50);
                                                                                       iVar2 = test_int_eq("test/membio_test.c", 0x57, "BIO_read(bio, buf, sizeof(buf))", "sizeof(msg2)", iVar2, 0x10);
                                                                                       if (iVar2 != 0) {
                                                                                          iVar2 = test_mem_eq("test/membio_test.c", 0x58, &_LC16, &_LC17, local_98, 0x10, local_a8, 0x10);
                                                                                          if (iVar2 != 0) {
                                                                                             iVar2 = BIO_write(bp, (void*)0x0, 0);
                                                                                             iVar2 = test_int_eq("test/membio_test.c", 0x60, "BIO_write(bio, NULL, 0)", &_LC3, iVar2, 0);
                                                                                             if (iVar2 != 0) {
                                                                                                iVar2 = BIO_read(bp, local_98, 0x50);
                                                                                                iVar2 = test_int_lt("test/membio_test.c", 0x61, "BIO_read(bio, buf, sizeof(buf))", &_LC3, iVar2, 0);
                                                                                                if (iVar2 != 0) {
                                                                                                   lVar4 = BIO_ctrl(bp, 2, 0, (void*)0x0);
                                                                                                   iVar2 = test_false("test/membio_test.c", 0x62, "BIO_eof(bio)", (int)lVar4 != 0);
                                                                                                   if (iVar2 != 0) {
                                                                                                      BIO_test_flags(bp, 8);
                                                                                                      iVar2 = test_true("test/membio_test.c", 99, "BIO_should_retry(bio)");
                                                                                                      if (iVar2 != 0) {
                                                                                                         uVar3 = BIO_ctrl(bp, 0x2a, 0x1e240, (void*)0x0);
                                                                                                         iVar2 = test_int_eq("test/membio_test.c", 0x66, "BIO_dgram_set_mtu(bio, 123456)", &_LC25, uVar3 & 0xffffffff, 1);
                                                                                                         if (iVar2 != 0) {
                                                                                                            uVar3 = BIO_ctrl(bp, 0x29, 0, (void*)0x0);
                                                                                                            iVar2 = test_int_eq("test/membio_test.c", 0x67, "BIO_dgram_get_mtu(bio)", "123456", uVar3 & 0xffffffff, 0x1e240);
                                                                                                            uVar1 = ( uint )(iVar2 != 0);
                                                                                                            goto LAB_001000a1;
                                                                                                         }

                                                                                                      }

                                                                                                   }

                                                                                                }

                                                                                             }

                                                                                          }

                                                                                       }

                                                                                    }

                                                                                 }

                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      uVar1 = 0;
   }

   LAB_001000a1:BIO_free(bp_00);
   BIO_free(bp);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 != 0) {
      add_test("test_dgram", 0x100000);
      return 1;
   }

   test_error("test/membio_test.c", 0x75, "Error parsing test options\n");
   return 0;
}

