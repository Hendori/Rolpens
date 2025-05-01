
/* WARNING: Unknown calling convention */

void initbuffer(linebuffer *linebuffer)

{
  linebuffer->buffer = (char *)0x0;
  linebuffer->size = 0;
  linebuffer->length = 0;
  return;
}



/* WARNING: Unknown calling convention */

linebuffer * readlinebuffer_delim(linebuffer *linebuffer,FILE *stream,char delimiter)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  
  pcVar4 = linebuffer->buffer;
  pcVar5 = pcVar4 + linebuffer->size;
  pcVar6 = pcVar4;
  if ((stream->_flags & 0x10) != 0) {
    return (linebuffer *)0x0;
  }
  do {
    pbVar1 = (byte *)stream->_IO_read_ptr;
    if (pbVar1 < stream->_IO_read_end) {
      stream->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
LAB_00100088:
      cVar7 = (char)uVar3;
      if (pcVar6 == pcVar5) goto LAB_00100096;
    }
    else {
      uVar3 = __uflow((_IO_FILE *)stream);
      if (uVar3 != 0xffffffff) goto LAB_00100088;
      if (pcVar4 == pcVar6) {
        return (linebuffer *)0x0;
      }
      if ((stream->_flags & 0x20) != 0) {
        return (linebuffer *)0x0;
      }
      if (pcVar6[-1] == delimiter) goto LAB_00100143;
      if (pcVar6 != pcVar5) {
        *pcVar6 = delimiter;
        pcVar6 = pcVar6 + 1;
        goto LAB_00100143;
      }
      uVar3 = (uint)delimiter;
      cVar7 = delimiter;
LAB_00100096:
      lVar2 = linebuffer->size;
      pcVar4 = (char *)xpalloc(pcVar4,linebuffer,1,0xffffffffffffffff,1);
      pcVar6 = pcVar4 + lVar2;
      linebuffer->buffer = pcVar4;
      pcVar5 = pcVar4 + linebuffer->size;
    }
    *pcVar6 = cVar7;
    pcVar6 = pcVar6 + 1;
    if ((int)delimiter == uVar3) {
LAB_00100143:
      linebuffer->length = (long)pcVar6 - (long)pcVar4;
      return linebuffer;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

linebuffer * readlinebuffer(linebuffer *linebuffer,FILE *stream)

{
  linebuffer *plVar1;
  
  plVar1 = readlinebuffer_delim(linebuffer,stream,'\n');
  return plVar1;
}



/* WARNING: Unknown calling convention */

void freebuffer(linebuffer *linebuffer)

{
  free(linebuffer->buffer);
  return;
}


