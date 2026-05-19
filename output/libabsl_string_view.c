// Decompiled by Ghidra: libabsl_string_view.so

// === _FINI_1 @ 00104554 ===

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00108610);
  return;
}



// === FUN_00104564 @ 00104564 ===

void FUN_00104564(void)

{
  return;
}



// === FUN_00104574 @ 00104574 ===

void FUN_00104574(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00104580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// === FUN_00104588 @ 00104588 ===

void FUN_00104588(undefined8 param_1)

{
  __cxa_atexit(FUN_00104574,param_1,&PTR_LOOP_00108610);
  return;
}



// === FUN_001045a4 @ 001045a4 ===

void FUN_001045a4(void)

{
  __register_atfork();
  return;
}



// === FUN_001045c0 @ 001045c0 ===

void FUN_001045c0(void)

{
  (*(code *)PTR_001087b8)();
  return;
}



