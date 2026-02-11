
/* Variant::_register_variant_destructors() */

void Variant::_register_variant_destructors(void)

{
  destruct_pointers._32_8_ = VariantDestruct<String>::ptr_destruct;
  destruct_pointers._168_8_ = VariantDestruct<StringName>::ptr_destruct;
  destruct_pointers._176_8_ = VariantDestruct<NodePath>::ptr_destruct;
  destruct_pointers._200_8_ = VariantDestruct<Callable>::ptr_destruct;
  destruct_pointers._208_8_ = VariantDestruct<Signal>::ptr_destruct;
  destruct_pointers._216_8_ = VariantDestruct<Dictionary>::ptr_destruct;
  destruct_pointers._224_8_ = VariantDestruct<Array>::ptr_destruct;
  destruct_pointers._232_8_ = VariantDestruct<Vector<unsigned_char>>::ptr_destruct;
  destruct_pointers._240_8_ = VariantDestruct<Vector<int>>::ptr_destruct;
  destruct_pointers._248_8_ = VariantDestruct<Vector<long>>::ptr_destruct;
  destruct_pointers._256_8_ = VariantDestruct<Vector<float>>::ptr_destruct;
  destruct_pointers._264_8_ = VariantDestruct<Vector<double>>::ptr_destruct;
  destruct_pointers._272_8_ = VariantDestruct<Vector<String>>::ptr_destruct;
  destruct_pointers._280_8_ = VariantDestruct<Vector<Vector2>>::ptr_destruct;
  destruct_pointers._288_8_ = VariantDestruct<Vector<Vector3>>::ptr_destruct;
  destruct_pointers._296_8_ = VariantDestruct<Vector<Color>>::ptr_destruct;
  destruct_pointers._304_8_ = VariantDestruct<Vector<Vector4>>::ptr_destruct;
  return;
}



/* Variant::_unregister_variant_destructors() */

void Variant::_unregister_variant_destructors(void)

{
  return;
}



/* Variant::get_ptr_destructor(Variant::Type) */

undefined8 Variant::get_ptr_destructor(uint param_1)

{
  if (param_1 < 0x27) {
    return *(undefined8 *)(destruct_pointers + (long)(int)param_1 * 8);
  }
  _err_print_index_error
            ("get_ptr_destructor","core/variant/variant_destruct.cpp",0x41,(ulong)param_1,0x27,
             "p_type","Variant::VARIANT_MAX","",false,false);
  return 0;
}



/* Variant::has_destructor(Variant::Type) */

undefined8 Variant::has_destructor(uint param_1)

{
  if (param_1 < 0x27) {
    return CONCAT71(0x1002,*(long *)(destruct_pointers + (long)(int)param_1 * 8) != 0);
  }
  _err_print_index_error
            ("has_destructor","core/variant/variant_destruct.cpp",0x46,(ulong)param_1,0x27,"p_type",
             "Variant::VARIANT_MAX","",false,false);
  return 0;
}



/* VariantDestruct<String>::ptr_destruct(void*) */

void VariantDestruct<String>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* WARNING: Load size is inaccurate */
  if (*param_1 != 0) {
    LOCK();
    plVar1 = (long *)(*param_1 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
                    /* WARNING: Load size is inaccurate */
      lVar2 = *param_1;
      *(undefined8 *)param_1 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<StringName>::ptr_destruct(void*) */

void VariantDestruct<StringName>::ptr_destruct(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((StringName::configured != '\0') && (*param_1 != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* VariantDestruct<NodePath>::ptr_destruct(void*) */

void VariantDestruct<NodePath>::ptr_destruct(void *param_1)

{
  NodePath::~NodePath((NodePath *)param_1);
  return;
}



/* VariantDestruct<Callable>::ptr_destruct(void*) */

void VariantDestruct<Callable>::ptr_destruct(void *param_1)

{
  Callable::~Callable((Callable *)param_1);
  return;
}



/* VariantDestruct<Signal>::ptr_destruct(void*) */

void VariantDestruct<Signal>::ptr_destruct(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((StringName::configured != '\0') && (*param_1 != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* VariantDestruct<Dictionary>::ptr_destruct(void*) */

void VariantDestruct<Dictionary>::ptr_destruct(void *param_1)

{
  Dictionary::~Dictionary((Dictionary *)param_1);
  return;
}



/* VariantDestruct<Array>::ptr_destruct(void*) */

void VariantDestruct<Array>::ptr_destruct(void *param_1)

{
  Array::~Array((Array *)param_1);
  return;
}



/* VariantDestruct<Vector<unsigned char> >::ptr_destruct(void*) */

void VariantDestruct<Vector<unsigned_char>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<int> >::ptr_destruct(void*) */

void VariantDestruct<Vector<int>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<long> >::ptr_destruct(void*) */

void VariantDestruct<Vector<long>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<float> >::ptr_destruct(void*) */

void VariantDestruct<Vector<float>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<double> >::ptr_destruct(void*) */

void VariantDestruct<Vector<double>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<String> >::ptr_destruct(void*) */

void VariantDestruct<Vector<String>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)((long)param_1 + 8);
      if (plVar1 != (long *)0x0) {
        lVar3 = plVar1[-1];
        *(undefined8 *)((long)param_1 + 8) = 0;
        if (lVar3 != 0) {
          lVar7 = 0;
          plVar6 = plVar1;
          do {
            if (*plVar6 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar6 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar4 = *plVar6;
                *plVar6 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
          } while (lVar3 != lVar7);
        }
        Memory::free_static(plVar1 + -2,false);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  return;
}



/* VariantDestruct<Vector<Vector2> >::ptr_destruct(void*) */

void VariantDestruct<Vector<Vector2>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<Vector3> >::ptr_destruct(void*) */

void VariantDestruct<Vector<Vector3>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<Color> >::ptr_destruct(void*) */

void VariantDestruct<Vector<Color>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* VariantDestruct<Vector<Vector4> >::ptr_destruct(void*) */

void VariantDestruct<Vector<Vector4>>::ptr_destruct(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)((long)param_1 + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)((long)param_1 + 8);
      *(undefined8 *)((long)param_1 + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}


