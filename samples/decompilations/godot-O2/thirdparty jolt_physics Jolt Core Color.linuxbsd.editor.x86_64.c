
/* JPH::Color::sGetDistinctColor(int) */

undefined4 JPH::Color::sGetDistinctColor(int param_1)

{
  return *(undefined4 *)(sColors + ((ulong)(long)param_1 % 0x24) * 4);
}



/* JPH::Color::sBlack */

void JPH::Color::_GLOBAL__sub_I_sBlack(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


