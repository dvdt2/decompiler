// Decompiled by Ghidra: libsamplerate.so

// === _FINI_1 @ 0026a9a4 ===

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00272070);
  return;
}



// === FUN_0026a9b4 @ 0026a9b4 ===

void FUN_0026a9b4(void)

{
  return;
}



// === FUN_0026a9c4 @ 0026a9c4 ===

void FUN_0026a9c4(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0026a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// === FUN_0026a9d8 @ 0026a9d8 ===

void FUN_0026a9d8(undefined8 param_1)

{
  __cxa_atexit(FUN_0026a9c4,param_1,&PTR_LOOP_00272070);
  return;
}



// === FUN_0026a9f4 @ 0026a9f4 ===

void FUN_0026a9f4(void)

{
  __register_atfork();
  return;
}



// === src_new @ 0026aa04 ===

void src_new(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = (int)param_1;
  if (iVar2 < 2) {
    if ((iVar2 == 0) || (iVar2 == 1)) goto LAB_0026aa64;
  }
  else {
    if (iVar2 == 2) {
LAB_0026aa64:
      uVar3 = FUN_0026bd04(param_1,param_2,&local_2c);
      goto joined_r0x0026aa80;
    }
    if (iVar2 == 3) {
      uVar3 = FUN_0026d8f8(param_2 & 0xffffffff,&local_2c);
      goto joined_r0x0026aa80;
    }
    if (iVar2 == 4) {
      uVar3 = FUN_0026b594(param_2 & 0xffffffff,&local_2c);
      goto joined_r0x0026aa80;
    }
  }
  uVar3 = 0;
  local_2c = 10;
joined_r0x0026aa80:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



// === src_clone @ 0026aac4 ===

long src_clone(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_1 == (long *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 2;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (param_2 == (undefined4 *)0x0) {
      return lVar1;
    }
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = 1;
  }
  *param_2 = uVar2;
  return 0;
}



// === src_callback_new @ 0026ab28 ===

long * src_callback_new(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                       long param_5)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x11;
      return plVar1;
    }
  }
  else {
    if (param_4 == (undefined4 *)0x0) {
      plVar1 = (long *)src_new(param_2,param_3,0);
    }
    else {
      *param_4 = 0;
      plVar1 = (long *)src_new(param_2,param_3,param_4);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1[1] = 0;
      plVar1[2] = 0;
      *(undefined4 *)(plVar1 + 3) = 0;
      plVar1[7] = 0;
      plVar1[8] = 0;
      *(undefined4 *)(plVar1 + 4) = 1;
      plVar1[5] = param_1;
      plVar1[6] = param_5;
    }
  }
  return plVar1;
}



// === src_reset @ 0026abc8 ===

undefined8 src_reset(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x10))();
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return 0;
  }
  return 2;
}



// === src_delete @ 0026ac0c ===

undefined8 src_delete(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))();
  }
  return 0;
}



// === src_process @ 0026ac30 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 src_process(long *param_1,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 == (long *)0x0) {
    uVar2 = 2;
  }
  else {
    if ((int)param_1[4] != 0) {
      return 0x12;
    }
    if (param_2 == (ulong *)0x0) {
      return 3;
    }
    uVar4 = *param_2;
    if ((uVar4 == 0) && (0 < (long)param_2[2])) {
      return 4;
    }
    uVar5 = param_2[1];
    if ((uVar5 == 0) && (0 < (long)param_2[3])) {
      return 4;
    }
    dVar7 = (double)param_2[7];
    uVar2 = 6;
    if ((0.00390625 <= dVar7) && (dVar7 == 256.0 || dVar7 < 256.0 != NAN(dVar7))) {
      uVar3 = param_2[2];
      if ((long)uVar3 < 0) {
        uVar3 = 0;
        param_2[2] = 0;
        uVar6 = param_2[3];
      }
      else {
        uVar6 = param_2[3];
      }
      if ((long)uVar6 < 0) {
        uVar6 = 0;
        param_2[3] = 0;
        iVar1 = *(int *)((long)param_1 + 0x1c);
      }
      else {
        iVar1 = *(int *)((long)param_1 + 0x1c);
      }
      if (uVar4 < uVar5) {
        if (uVar5 < uVar4 + uVar3 * (long)iVar1 * 4) {
          return 0x10;
        }
      }
      else if (uVar4 < uVar5 + uVar6 * (long)iVar1 * 4) {
        return 0x10;
      }
      param_2[4] = 0;
      param_2[5] = 0;
      dVar8 = (double)param_1[1];
      if ((double)param_1[1] < 0.00390625) {
        param_1[1] = (long)dVar7;
        dVar8 = dVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0026ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + (ulong)(ABS(dVar8 - dVar7) < _DAT_00100eb8) * 8))();
      return uVar2;
    }
  }
  return uVar2;
}



// === src_callback_read @ 0026ad6c ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long src_callback_read(double param_1,long *param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  double local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  dVar2 = _DAT_00100eb8;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 != (long *)0x0) && (0 < param_3)) {
    if ((int)param_2[4] == 1) {
      if (param_2[5] == 0) {
        iVar3 = 0x13;
      }
      else {
        local_90 = 0;
        lStack_88 = 0;
        local_80 = 0;
        if ((0.00390625 <= param_1) && (param_1 == 256.0 || param_1 < 256.0 != NAN(param_1))) {
          local_a0 = param_2[7];
          local_b0 = (undefined1 *)param_2[8];
          lVar5 = 0;
          local_a8 = param_4;
          lStack_98 = param_3;
          local_78 = param_1;
          do {
            if (local_a0 != 0) {
LAB_0026ae50:
              *(undefined4 *)(param_2 + 4) = 0;
              if (local_b0 != (undefined1 *)0x0) goto LAB_0026ae60;
LAB_0026ae58:
              if (local_a0 < 1) goto LAB_0026ae60;
LAB_0026afbc:
              iVar3 = 4;
LAB_0026afe0:
              *(undefined4 *)(param_2 + 4) = 1;
LAB_0026afe8:
              param_2[7] = local_a0;
              param_2[8] = (long)local_b0;
              goto LAB_0026aff0;
            }
            local_b8 = auStack_6c;
            local_a0 = (*(code *)param_2[5])(param_2[6],&local_b8);
            local_b0 = local_b8;
            if (local_a0 != 0) goto LAB_0026ae50;
            local_80 = CONCAT44(local_80._4_4_,1);
            *(undefined4 *)(param_2 + 4) = 0;
            if (local_b8 == (undefined1 *)0x0) goto LAB_0026ae58;
LAB_0026ae60:
            if ((local_a8 == (undefined1 *)0x0) && (0 < lStack_98)) goto LAB_0026afbc;
            iVar3 = 6;
            if ((local_78 < 0.00390625) || (local_78 != 256.0 && local_78 < 256.0 == NAN(local_78)))
            goto LAB_0026afe0;
            if (local_a0 < 0) {
              local_a0 = 0;
              if (-1 < lStack_98) goto LAB_0026ae9c;
LAB_0026aec8:
              lStack_98 = 0;
              lVar4 = (long)*(int *)((long)param_2 + 0x1c);
              if (local_b0 < local_a8) goto LAB_0026aea8;
LAB_0026aedc:
              if (local_b0 < local_a8 + lStack_98 * lVar4 * 4) goto LAB_0026afdc;
            }
            else {
              if (lStack_98 < 0) goto LAB_0026aec8;
LAB_0026ae9c:
              lVar4 = (long)*(int *)((long)param_2 + 0x1c);
              if (local_a8 <= local_b0) goto LAB_0026aedc;
LAB_0026aea8:
              if (local_a8 < local_b0 + local_a0 * lVar4 * 4) {
LAB_0026afdc:
                iVar3 = 0x10;
                goto LAB_0026afe0;
              }
            }
            local_90 = 0;
            lStack_88 = 0;
            dVar6 = (double)param_2[1];
            if ((double)param_2[1] < 0.00390625) {
              param_2[1] = (long)local_78;
              dVar6 = local_78;
            }
            if (dVar2 <= ABS(dVar6 - local_78)) {
              lVar4 = 0;
            }
            else {
              lVar4 = 8;
            }
            iVar3 = (**(code **)(*param_2 + lVar4))(param_2,&local_b0);
            *(undefined4 *)(param_2 + 4) = 1;
            if (iVar3 != 0) goto LAB_0026afe8;
            local_a0 = local_a0 - local_90;
            lStack_98 = lStack_98 - lStack_88;
            lVar5 = lStack_88 + lVar5;
            local_b0 = local_b0 + local_90 * *(int *)((long)param_2 + 0x1c) * 4;
            local_a8 = local_a8 + lStack_88 * *(int *)((long)param_2 + 0x1c) * 4;
          } while ((((int)local_80 != 1) || (lStack_88 != 0)) && (lVar5 < param_3));
          param_2[7] = local_a0;
          param_2[8] = (long)local_b0;
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return lVar5;
          }
          goto LAB_0026afd8;
        }
        iVar3 = 6;
      }
    }
    else {
      iVar3 = 0x12;
    }
LAB_0026aff0:
    *(int *)(param_2 + 3) = iVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 0;
  }
LAB_0026afd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === src_set_ratio @ 0026b03c ===

undefined8 src_set_ratio(double param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 6;
    if ((0.00390625 <= param_1) && (param_1 == 256.0 || param_1 < 256.0 != NAN(param_1))) {
      uVar1 = 0;
      *(double *)(param_2 + 8) = param_1;
    }
    return uVar1;
  }
  return 2;
}



// === src_get_channels @ 0026b07c ===

undefined4 src_get_channels(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  return 0xfffffffe;
}



// === src_get_name @ 0026b090 ===

void src_get_name(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0026bcbc();
  if ((lVar1 == 0) && (lVar1 = FUN_0026d8d0(param_1), lVar1 == 0)) {
    FUN_0026b56c(param_1);
    return;
  }
  return;
}



// === src_get_description @ 0026b0d0 ===

void src_get_description(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_0026bce0();
  if ((lVar1 == 0) && (lVar1 = FUN_0026d8e4(param_1), lVar1 == 0)) {
    FUN_0026b580(param_1);
    return;
  }
  return;
}



// === src_get_version @ 0026b110 ===

char * src_get_version(void)

{
  return "libsamplerate-0.2.2 (c) 2002-2008 Erik de Castro Lopo";
}



// === src_is_valid_ratio @ 0026b11c ===

bool src_is_valid_ratio(double param_1)

{
  return (param_1 == 256.0 || param_1 < 256.0 != NAN(param_1)) && 0.00390625 <= param_1;
}



// === src_error @ 0026b140 ===

ulong src_error(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x18);
  }
  return param_1;
}



// === src_strerror @ 0026b14c ===

undefined * src_strerror(uint param_1)

{
  if (param_1 < 0x18) {
    return &DAT_00101498 + *(int *)(&DAT_00101498 + (ulong)param_1 * 4);
  }
  return (undefined *)0x0;
}



// === src_simple @ 0026b170 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void src_simple(ulong *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)src_new(param_2,param_3,&local_3c);
  if (plVar2 == (long *)0x0) goto LAB_0026b1d0;
  lVar7 = plVar2[4];
  *(undefined4 *)(param_1 + 6) = 1;
  if ((int)lVar7 == 0) {
    uVar4 = *param_1;
    if (((uVar4 == 0) && (0 < (long)param_1[2])) ||
       ((uVar5 = param_1[1], uVar5 == 0 && (0 < (long)param_1[3])))) {
      local_3c = 4;
    }
    else {
      dVar8 = (double)param_1[7];
      local_3c = 6;
      if ((0.00390625 <= dVar8) && (dVar8 == 256.0 || dVar8 < 256.0 != NAN(dVar8))) {
        uVar3 = param_1[2];
        if ((long)uVar3 < 0) {
          uVar3 = 0;
          param_1[2] = 0;
          uVar6 = param_1[3];
          if ((long)uVar6 < 0) goto LAB_0026b298;
LAB_0026b240:
          lVar7 = (long)*(int *)((long)plVar2 + 0x1c);
          if (uVar4 < uVar5) goto LAB_0026b24c;
LAB_0026b2ac:
          if (uVar5 + uVar6 * lVar7 * 4 <= uVar4) goto LAB_0026b2bc;
        }
        else {
          uVar6 = param_1[3];
          if (-1 < (long)uVar6) goto LAB_0026b240;
LAB_0026b298:
          uVar6 = 0;
          param_1[3] = 0;
          lVar7 = (long)*(int *)((long)plVar2 + 0x1c);
          if (uVar5 <= uVar4) goto LAB_0026b2ac;
LAB_0026b24c:
          if (uVar4 + uVar3 * lVar7 * 4 <= uVar5) {
LAB_0026b2bc:
            param_1[4] = 0;
            param_1[5] = 0;
            dVar9 = (double)plVar2[1];
            if ((double)plVar2[1] < 0.00390625) {
              plVar2[1] = (long)dVar8;
              dVar9 = dVar8;
            }
            local_3c = (**(code **)(*plVar2 + (ulong)(ABS(dVar9 - dVar8) < _DAT_00100eb8) * 8))
                                 (plVar2,param_1);
            goto LAB_0026b1c0;
          }
        }
        local_3c = 0x10;
      }
    }
  }
  else {
    local_3c = 0x12;
  }
LAB_0026b1c0:
  (**(code **)(*plVar2 + 0x20))();
LAB_0026b1d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}



// === src_short_to_float_array @ 0026b314 ===

void src_short_to_float_array(short *param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  short *psVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    if (param_3 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0x7ffffff8;
      uVar4 = uVar3;
      puVar6 = param_2;
      psVar7 = param_1;
      do {
        uVar4 = uVar4 - 8;
        auVar10._0_8_ = (long)(int)psVar7[4];
        auVar10._8_8_ = (long)(int)psVar7[5];
        auVar11._0_8_ = (long)(int)*psVar7;
        auVar11._8_8_ = (long)(int)psVar7[1];
        auVar9._0_8_ = (long)(int)psVar7[6];
        auVar9._8_8_ = (long)(int)psVar7[7];
        auVar8._0_8_ = (long)(int)psVar7[2];
        auVar8._8_8_ = (long)(int)psVar7[3];
        auVar10 = NEON_scvtf(auVar10,8);
        auVar11 = NEON_scvtf(auVar11,8);
        auVar9 = NEON_scvtf(auVar9,8);
        auVar8 = NEON_scvtf(auVar8,8);
        puVar6[1] = CONCAT44((float)(auVar8._8_8_ * 3.0517578125e-05),
                             (float)(auVar8._0_8_ * 3.0517578125e-05));
        *puVar6 = CONCAT44((float)(auVar11._8_8_ * 3.0517578125e-05),
                           (float)(auVar11._0_8_ * 3.0517578125e-05));
        puVar6[3] = CONCAT44((float)(auVar9._8_8_ * 3.0517578125e-05),
                             (float)(auVar9._0_8_ * 3.0517578125e-05));
        puVar6[2] = CONCAT44((float)(auVar10._8_8_ * 3.0517578125e-05),
                             (float)(auVar10._0_8_ * 3.0517578125e-05));
        puVar6 = puVar6 + 4;
        psVar7 = psVar7 + 8;
      } while (uVar4 != 0);
      if (uVar3 == uVar1) {
        return;
      }
    }
    lVar2 = uVar1 - uVar3;
    pfVar5 = (float *)((long)param_2 + uVar3 * 4);
    psVar7 = param_1 + uVar3;
    do {
      lVar2 = lVar2 + -1;
      *pfVar5 = (float)(int)*psVar7 / 32768.0;
      pfVar5 = pfVar5 + 1;
      psVar7 = psVar7 + 1;
    } while (lVar2 != 0);
  }
  return;
}



// === src_float_to_short_array @ 0026b3d0 ===

void src_float_to_short_array(float *param_1,undefined2 *param_2,uint param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  float fVar3;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      fVar3 = *param_1 * 32768.0;
      if (fVar3 < 32767.0 == NAN(fVar3)) {
        uVar2 = 0x7fff;
      }
      else if (fVar3 <= -32768.0) {
        uVar2 = 0x8000;
      }
      else {
        uVar2 = (undefined2)(long)(float)(int)fVar3;
      }
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}



// === src_int_to_float_array @ 0026b438 ===

void src_int_to_float_array(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (0 < (int)param_3) {
    uVar9 = (ulong)param_3;
    if (param_3 < 8) {
      uVar11 = 0;
    }
    else {
      piVar12 = (int *)(param_1 + 0x10);
      puVar14 = (undefined8 *)(param_2 + 0x10);
      uVar11 = uVar9 & 0x7ffffff8;
      uVar15 = uVar11;
      do {
        piVar1 = piVar12 + -4;
        piVar2 = piVar12 + -3;
        piVar3 = piVar12 + -2;
        piVar4 = piVar12 + -1;
        iVar5 = *piVar12;
        piVar6 = piVar12 + 1;
        piVar7 = piVar12 + 2;
        piVar8 = piVar12 + 3;
        uVar15 = uVar15 - 8;
        piVar12 = piVar12 + 8;
        auVar18._0_8_ = (long)*piVar1;
        auVar18._8_8_ = (long)*piVar2;
        auVar19._0_8_ = (long)iVar5;
        auVar19._8_8_ = (long)*piVar6;
        auVar16._0_8_ = (long)*piVar3;
        auVar16._8_8_ = (long)*piVar4;
        auVar17._0_8_ = (long)*piVar7;
        auVar17._8_8_ = (long)*piVar8;
        auVar18 = NEON_scvtf(auVar18,8);
        auVar19 = NEON_scvtf(auVar19,8);
        auVar16 = NEON_scvtf(auVar16,8);
        auVar17 = NEON_scvtf(auVar17,8);
        puVar14[-1] = CONCAT44((float)(auVar16._8_8_ * 4.656612873077393e-10),
                               (float)(auVar16._0_8_ * 4.656612873077393e-10));
        puVar14[-2] = CONCAT44((float)(auVar18._8_8_ * 4.656612873077393e-10),
                               (float)(auVar18._0_8_ * 4.656612873077393e-10));
        puVar14[1] = CONCAT44((float)(auVar17._8_8_ * 4.656612873077393e-10),
                              (float)(auVar17._0_8_ * 4.656612873077393e-10));
        *puVar14 = CONCAT44((float)(auVar19._8_8_ * 4.656612873077393e-10),
                            (float)(auVar19._0_8_ * 4.656612873077393e-10));
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      if (uVar11 == uVar9) {
        return;
      }
    }
    lVar10 = uVar9 - uVar11;
    pfVar13 = (float *)(param_2 + uVar11 * 4);
    piVar12 = (int *)(param_1 + uVar11 * 4);
    do {
      lVar10 = lVar10 + -1;
      *pfVar13 = (float)*piVar12 / 2.1474836e+09;
      pfVar13 = pfVar13 + 1;
      piVar12 = piVar12 + 1;
    } while (lVar10 != 0);
  }
  return;
}



// === src_float_to_int_array @ 0026b4f8 ===

void src_float_to_int_array(float *param_1,undefined4 *param_2,uint param_3)

{
  float fVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      fVar1 = *param_1 * 2.1474836e+09;
      if (fVar1 < 2.1474836e+09 == NAN(fVar1)) {
        uVar3 = 0x7fffffff;
      }
      else if (fVar1 <= -2.1474836e+09) {
        uVar3 = 0x80000000;
      }
      else {
        uVar3 = (undefined4)(long)(double)(long)fVar1;
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
      *param_2 = uVar3;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}



// === FUN_0026b56c @ 0026b56c ===

char * FUN_0026b56c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Linear Interpolator";
  if (param_1 != 4) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// === FUN_0026b580 @ 0026b580 ===

char * FUN_0026b580(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Linear interpolator, very fast, poor quality.";
  if (param_1 != 4) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// === FUN_0026b594 @ 0026b594 ===

undefined8 * FUN_0026b594(int param_1,undefined4 *param_2)

{
  undefined8 *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  __ptr = (undefined8 *)calloc(1,0x50);
  if (__ptr == (undefined8 *)0x0) {
LAB_0026b618:
    *param_2 = uVar2;
    return __ptr;
  }
  *(int *)((long)__ptr + 0x1c) = param_1;
  __ptr_00 = (undefined4 *)calloc(1,0x30);
  if (__ptr_00 != (undefined4 *)0x0) {
    *__ptr_00 = 0x787c4fc;
    pvVar1 = calloc((long)param_1,4);
    *(void **)(__ptr_00 + 10) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = 0;
      __ptr[9] = __ptr_00;
      *__ptr = &PTR_FUN_002762c8;
      goto LAB_0026b618;
    }
    free(__ptr_00);
  }
  free(__ptr);
  *param_2 = 1;
  return (undefined8 *)0x0;
}



// === FUN_0026b660 @ 0026b660 ===

void FUN_0026b660(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined1 *)(lVar2 + 4) = 0;
    memset(*(void **)(lVar2 + 0x28),0,(long)iVar1 << 2);
    return;
  }
  return;
}



// === FUN_0026b684 @ 0026b684 ===

undefined4 FUN_0026b684(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  double dVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  lVar12 = param_2[2];
  if (lVar12 < 1) {
    return 0;
  }
  lVar16 = *(long *)(param_1 + 0x48);
  if (lVar16 == 0) {
    return 5;
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  lVar14 = (long)(int)uVar2;
  uVar15 = (ulong)uVar2;
  if ((*(byte *)(lVar16 + 4) & 1) == 0) {
    if (0 < (int)uVar2) {
      lVar18 = *param_2;
      lVar19 = *(long *)(lVar16 + 0x28);
      uVar20 = 0;
      if ((7 < uVar2) && (0x1f < (ulong)(lVar19 - lVar18))) {
        uVar20 = uVar15 & 0x7ffffff8;
        puVar10 = (undefined8 *)(lVar18 + 0x10);
        puVar22 = (undefined8 *)(lVar19 + 0x10);
        uVar6 = uVar20;
        do {
          puVar5 = puVar10 + -1;
          uVar24 = puVar10[-2];
          uVar28 = puVar10[1];
          uVar26 = *puVar10;
          uVar6 = uVar6 - 8;
          puVar10 = puVar10 + 4;
          puVar22[-1] = *puVar5;
          puVar22[-2] = uVar24;
          puVar22[1] = uVar28;
          *puVar22 = uVar26;
          puVar22 = puVar22 + 4;
        } while (uVar6 != 0);
        if (uVar20 == uVar15) goto LAB_0026b720;
      }
      lVar21 = uVar15 - uVar20;
      puVar13 = (undefined4 *)(lVar18 + uVar20 * 4);
      puVar17 = (undefined4 *)(lVar19 + uVar20 * 4);
      do {
        lVar21 = lVar21 + -1;
        *puVar17 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar21 != 0);
    }
LAB_0026b720:
    *(undefined1 *)(lVar16 + 4) = 1;
  }
  lVar12 = lVar12 * lVar14;
  dVar27 = *(double *)(param_1 + 8);
  lVar18 = param_2[3] * lVar14;
  *(long *)(lVar16 + 8) = lVar12;
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(long *)(lVar16 + 0x18) = lVar18;
  *(undefined8 *)(lVar16 + 0x20) = 0;
  dVar3 = DAT_00100eb0;
  if ((dVar27 < 0.00390625) || (dVar27 != 256.0 && dVar27 < 256.0 == NAN(dVar27))) {
    return 0x16;
  }
  dVar29 = *(double *)(param_1 + 0x10);
  lVar19 = 0;
  dVar25 = dVar27;
  if (dVar29 < 1.0) {
    uVar20 = uVar15 & 0x7ffffffc;
    do {
      if ((lVar18 <= lVar19) ||
         (dVar31 = (double)NEON_fmadd((double)(int)uVar2,dVar29 + 1.0,0),
         dVar31 < (double)lVar12 == (NAN(dVar31) || NAN((double)lVar12)))) break;
      if (0 < lVar18) {
        dVar31 = ABS(dVar27 - (double)param_2[7]);
        if (dVar31 != dVar3 && dVar31 < dVar3 == (NAN(dVar31) || NAN(dVar3))) {
          dVar25 = dVar27 + (((double)param_2[7] - dVar27) * (double)lVar19) / (double)lVar18;
        }
      }
      if (0 < (int)uVar2) {
        puVar10 = (undefined8 *)*param_2;
        lVar21 = param_2[1];
        puVar22 = *(undefined8 **)(lVar16 + 0x28);
        if (uVar2 < 4) {
          uVar6 = 0;
LAB_0026b810:
          lVar4 = uVar15 - uVar6;
          pfVar7 = (float *)((long)puVar22 + uVar6 * 4);
          pfVar23 = (float *)((long)puVar10 + uVar6 * 4);
          do {
            lVar4 = lVar4 + -1;
            dVar31 = (double)NEON_fmadd(dVar29,(double)*pfVar23 - (double)*pfVar7,(double)*pfVar7);
            *(float *)(lVar21 + lVar19 * 4) = (float)dVar31;
            lVar19 = lVar19 + 1;
            pfVar7 = pfVar7 + 1;
            pfVar23 = pfVar23 + 1;
          } while (lVar4 != 0);
        }
        else {
          puVar5 = (undefined8 *)(lVar21 + lVar19 * 4);
          uVar6 = 0;
          if (((ulong)((long)puVar5 - (long)puVar22) < 0x10) ||
             ((ulong)((long)puVar5 - (long)puVar10) < 0x10)) goto LAB_0026b810;
          lVar19 = lVar19 + uVar20;
          uVar6 = uVar20;
          puVar8 = puVar10;
          puVar11 = puVar22;
          do {
            uVar6 = uVar6 - 4;
            uVar24 = *puVar8;
            dVar32 = (double)(float)*puVar11;
            dVar33 = (double)(float)((ulong)*puVar11 >> 0x20);
            dVar31 = (double)(float)puVar11[1];
            dVar30 = (double)(float)((ulong)puVar11[1] >> 0x20);
            puVar5[1] = CONCAT44((float)(dVar30 + ((double)(float)((ulong)puVar8[1] >> 0x20) -
                                                  dVar30) * dVar29),
                                 (float)(dVar31 + ((double)(float)puVar8[1] - dVar31) * dVar29));
            *puVar5 = CONCAT44((float)(dVar33 + ((double)(float)((ulong)uVar24 >> 0x20) - dVar33) *
                                                dVar29),
                               (float)(dVar32 + ((double)(float)uVar24 - dVar32) * dVar29));
            puVar5 = puVar5 + 2;
            puVar8 = puVar8 + 2;
            puVar11 = puVar11 + 2;
          } while (uVar6 != 0);
          uVar6 = uVar20;
          if (uVar20 != uVar15) goto LAB_0026b810;
        }
        *(long *)(lVar16 + 0x20) = lVar19;
      }
      dVar29 = dVar29 + 1.0 / dVar25;
    } while (dVar29 < 1.0);
  }
  dVar3 = DAT_00100eb0;
  dVar30 = dVar29 - (double)(long)(double)(long)dVar29;
  dVar31 = dVar30 + 1.0;
  if (0.0 <= dVar30) {
    dVar31 = dVar30;
  }
  lVar21 = (long)(double)(long)(dVar29 - dVar31) * lVar14;
  if (lVar19 < lVar18) {
    uVar20 = uVar15 & 0x7ffffffc;
    do {
      dVar29 = (double)NEON_fmadd((double)(int)uVar2,dVar31,(double)lVar21);
      if ((double)lVar12 <= dVar29) break;
      if (0 < lVar18) {
        dVar29 = ABS(dVar27 - (double)param_2[7]);
        if (dVar29 != dVar3 && dVar29 < dVar3 == (NAN(dVar29) || NAN(dVar3))) {
          dVar25 = dVar27 + (((double)param_2[7] - dVar27) * (double)lVar19) / (double)lVar18;
        }
      }
      if (0 < (int)uVar2) {
        lVar4 = *param_2;
        lVar1 = param_2[1];
        if (uVar2 < 4) {
          uVar6 = 0;
LAB_0026b9d4:
          lVar9 = uVar15 - uVar6;
          pfVar7 = (float *)(lVar4 + uVar6 * 4 + lVar21 * 4);
          do {
            lVar9 = lVar9 + -1;
            dVar29 = (double)NEON_fmadd(dVar31,(double)*pfVar7 - (double)pfVar7[-lVar14],
                                        (double)pfVar7[-lVar14]);
            *(float *)(lVar1 + lVar19 * 4) = (float)dVar29;
            lVar19 = lVar19 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar9 != 0);
        }
        else {
          puVar10 = (undefined8 *)(lVar1 + lVar19 * 4);
          uVar6 = 0;
          if (((ulong)((long)puVar10 - (lVar21 * 4 + lVar4)) < 0x10) ||
             ((ulong)((long)puVar10 - (lVar4 + lVar14 * -4 + lVar21 * 4)) < 0x10))
          goto LAB_0026b9d4;
          lVar19 = lVar19 + uVar20;
          puVar22 = (undefined8 *)(lVar4 + lVar21 * 4);
          uVar6 = uVar20;
          do {
            puVar5 = (undefined8 *)((long)puVar22 + lVar14 * -4);
            uVar26 = puVar5[1];
            uVar24 = *puVar5;
            uVar28 = *puVar22;
            uVar6 = uVar6 - 4;
            dVar29 = (double)(float)uVar24;
            dVar33 = (double)(float)((ulong)uVar24 >> 0x20);
            dVar30 = (double)(float)uVar26;
            dVar32 = (double)(float)((ulong)uVar26 >> 0x20);
            puVar10[1] = CONCAT44((float)(dVar32 + ((double)(float)((ulong)puVar22[1] >> 0x20) -
                                                   dVar32) * dVar31),
                                  (float)(dVar30 + ((double)(float)puVar22[1] - dVar30) * dVar31));
            *puVar10 = CONCAT44((float)(dVar33 + ((double)(float)((ulong)uVar28 >> 0x20) - dVar33) *
                                                 dVar31),
                                (float)(dVar29 + ((double)(float)uVar28 - dVar29) * dVar31));
            puVar10 = puVar10 + 2;
            puVar22 = puVar22 + 2;
          } while (uVar6 != 0);
          uVar6 = uVar20;
          if (uVar20 != uVar15) goto LAB_0026b9d4;
        }
        *(long *)(lVar16 + 0x20) = lVar19;
      }
      dVar30 = dVar31 + 1.0 / dVar25;
      dVar29 = dVar30 - (double)(long)(double)(long)dVar30;
      dVar31 = dVar29 + 1.0;
      if (0.0 <= dVar29) {
        dVar31 = dVar29;
      }
      lVar21 = lVar21 + (long)(double)(long)(dVar30 - dVar31) * lVar14;
    } while (lVar19 < lVar18);
  }
  if (lVar21 - lVar12 != 0 && lVar12 <= lVar21) {
    lVar18 = 0;
    if (lVar14 != 0) {
      lVar18 = (lVar21 - lVar12) / lVar14;
    }
    dVar31 = dVar31 + (double)lVar18;
    lVar21 = lVar12;
  }
  *(long *)(lVar16 + 0x10) = lVar21;
  *(double *)(param_1 + 0x10) = dVar31;
  if ((0 < lVar21) && (0 < (int)uVar2)) {
    lVar12 = *param_2;
    lVar16 = *(long *)(lVar16 + 0x28);
    if ((uVar2 < 0xc) || ((ulong)((lVar14 * 4 - (lVar21 * 4 + lVar12)) + lVar16) < 0x20)) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar15 & 0x7ffffff8;
      puVar10 = (undefined8 *)(lVar16 + 0x10);
      puVar22 = (undefined8 *)(lVar21 * 4 + lVar14 * -4 + lVar12 + 0x10);
      uVar6 = uVar20;
      do {
        puVar5 = puVar22 + -1;
        uVar24 = puVar22[-2];
        uVar28 = puVar22[1];
        uVar26 = *puVar22;
        uVar6 = uVar6 - 8;
        puVar22 = puVar22 + 4;
        puVar10[-1] = *puVar5;
        puVar10[-2] = uVar24;
        puVar10[1] = uVar28;
        *puVar10 = uVar26;
        puVar10 = puVar10 + 4;
      } while (uVar6 != 0);
      if (uVar20 == uVar15) goto LAB_0026bb28;
    }
    lVar18 = uVar15 - uVar20;
    puVar13 = (undefined4 *)(lVar12 + uVar20 * 4 + lVar21 * 4 + lVar14 * -4);
    puVar17 = (undefined4 *)(lVar16 + uVar20 * 4);
    do {
      lVar18 = lVar18 + -1;
      *puVar17 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar17 = puVar17 + 1;
    } while (lVar18 != 0);
  }
LAB_0026bb28:
  lVar12 = 0;
  if (lVar14 != 0) {
    lVar12 = lVar21 / lVar14;
  }
  *(double *)(param_1 + 8) = dVar25;
  lVar16 = 0;
  if (lVar14 != 0) {
    lVar16 = lVar19 / lVar14;
  }
  param_2[4] = lVar12;
  param_2[5] = lVar16;
  return 0;
}



// === FUN_0026bb7c @ 0026bb7c ===

undefined8 * FUN_0026bb7c(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  void *__dest;
  size_t __size;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  __ptr = (undefined8 *)calloc(1,0x50);
  if (__ptr != (undefined8 *)0x0) {
    uVar2 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    uVar7 = param_1[9];
    uVar6 = param_1[8];
    __ptr[5] = param_1[5];
    __ptr[4] = uVar2;
    __ptr[7] = uVar4;
    __ptr[6] = uVar3;
    uVar5 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_1[3];
    uVar2 = param_1[2];
    __ptr[9] = uVar7;
    __ptr[8] = uVar6;
    __ptr[1] = uVar5;
    *__ptr = uVar4;
    __ptr[3] = uVar3;
    __ptr[2] = uVar2;
    __ptr_00 = (undefined8 *)calloc(1,0x30);
    if (__ptr_00 == (undefined8 *)0x0) {
      free(__ptr);
      return (undefined8 *)0x0;
    }
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    uVar3 = puVar1[3];
    uVar2 = puVar1[2];
    __size = (long)*(int *)((long)param_1 + 0x1c) << 2;
    __ptr_00[4] = puVar1[4];
    __ptr_00[1] = uVar5;
    *__ptr_00 = uVar4;
    __ptr_00[3] = uVar3;
    __ptr_00[2] = uVar2;
    __dest = malloc(__size);
    __ptr_00[5] = __dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      free(__ptr_00);
      return (undefined8 *)0x0;
    }
    memcpy(__dest,(void *)puVar1[5],__size);
    __ptr[9] = __ptr_00;
  }
  return __ptr;
}



// === FUN_0026bc78 @ 0026bc78 ===

void FUN_0026bc78(void *param_1)

{
  void *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(void **)((long)param_1 + 0x48);
    if (__ptr != (void *)0x0) {
      if (*(void **)((long)__ptr + 0x28) != (void *)0x0) {
        free(*(void **)((long)__ptr + 0x28));
      }
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}



// === FUN_0026bcbc @ 0026bcbc ===

undefined * FUN_0026bcbc(uint param_1)

{
  if (param_1 < 3) {
    return &DAT_00265e58 + *(int *)(&DAT_00265e58 + (ulong)param_1 * 4);
  }
  return (undefined *)0x0;
}



// === FUN_0026bce0 @ 0026bce0 ===

undefined * FUN_0026bce0(uint param_1)

{
  if (param_1 < 3) {
    return &DAT_00265e64 + *(int *)(&DAT_00265e64 + (ulong)param_1 * 4);
  }
  return (undefined *)0x0;
}



// === FUN_0026bd04 @ 0026bd04 ===

undefined8 * FUN_0026bd04(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *__ptr;
  undefined4 *__ptr_00;
  void *pvVar5;
  undefined4 uVar6;
  double dVar7;
  
  if ((int)param_2 < 0x81) {
    uVar6 = 1;
    __ptr = (undefined8 *)calloc(1,0x50);
    if (__ptr != (undefined8 *)0x0) {
      *(uint *)((long)__ptr + 0x1c) = param_2;
      if (param_2 - 1 < 6) {
        *__ptr = (&PTR_PTR_FUN_00272078)[param_2 - 1];
        __ptr_00 = (undefined4 *)calloc(1,0x860);
      }
      else {
        *__ptr = &PTR_FUN_00276390;
        __ptr_00 = (undefined4 *)calloc(1,0x860);
      }
      if (__ptr_00 != (undefined4 *)0x0) {
        *__ptr_00 = 0x26a5050;
        if (param_1 < 3) {
          lVar3 = (ulong)param_1 * 8;
          lVar4 = (ulong)param_1 * 4;
          dVar7 = *(double *)(&DAT_00265eb0 + lVar3) / *(double *)(&DAT_00265e98 + lVar3);
          uVar6 = *(undefined4 *)(&DAT_00265e7c + lVar4);
          uVar2 = *(undefined4 *)(&DAT_00265e88 + lVar4);
          *(undefined **)(__ptr_00 + 0x10) = &DAT_00265e70 + *(int *)(&DAT_00265e70 + lVar4);
          __ptr_00[10] = uVar6;
          __ptr_00[0xb] = uVar2;
        }
        else {
          dVar7 = INFINITY;
        }
        dVar7 = (double)NEON_fmadd(dVar7,0x4070000000000000,0x3ff0000000000000);
        iVar1 = (int)(long)(double)(long)dVar7 * 3;
        if ((int)(long)(double)(long)dVar7 < 0x556) {
          iVar1 = 0x1000;
        }
        iVar1 = iVar1 * param_2 + 1;
        __ptr_00[0x15] = iVar1;
        pvVar5 = calloc((long)(int)(iVar1 + param_2),4);
        *(void **)(__ptr_00 + 0x216) = pvVar5;
        if (pvVar5 != (void *)0x0) {
          __ptr[9] = __ptr_00;
          __ptr_00[0x14] = 0xffffffff;
          memset((void *)((long)pvVar5 + (long)iVar1 * 4),0xaa,
                 -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2);
          *param_3 = 0;
          return __ptr;
        }
        free(__ptr_00);
      }
      free(__ptr);
      *param_3 = 1;
      return (undefined8 *)0x0;
    }
  }
  else {
    __ptr = (undefined8 *)0x0;
    uVar6 = 0xb;
  }
  *param_3 = uVar6;
  return __ptr;
}



// === FUN_0026bee8 @ 0026bee8 ===

void FUN_0026bee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    memset(*(void **)(lVar1 + 0x858),0,(long)*(int *)(lVar1 + 0x54) << 2);
    memset((void *)(*(long *)(lVar1 + 0x858) + (long)*(int *)(lVar1 + 0x54) * 4),0xaa,
           (long)*(int *)(param_1 + 0x1c) << 2);
    return;
  }
  return;
}



// === FUN_0026bf54 @ 0026bf54 ===

undefined8 FUN_0026bf54(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar19 = *(long *)(param_1 + 0x48);
  if (lVar19 == 0) {
    uVar5 = 5;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0x1c);
    uVar7 = (ulong)uVar18;
    dVar26 = *(double *)(param_1 + 8);
    lVar12 = *(long *)(param_2 + 0x10);
    lVar14 = (long)(int)uVar18;
    uVar5 = 0x16;
    lVar15 = *(long *)(param_2 + 0x18) * lVar14;
    *(long *)(lVar19 + 0x18) = lVar15;
    *(undefined8 *)(lVar19 + 0x20) = 0;
    *(long *)(lVar19 + 8) = lVar12 * lVar14;
    *(undefined8 *)(lVar19 + 0x10) = 0;
    if ((0.00390625 <= dVar26) && (dVar26 == 256.0 || dVar26 < 256.0 != NAN(dVar26))) {
      dVar21 = *(double *)(param_1 + 0x10);
      dVar25 = dVar21 - (double)(long)(double)(long)dVar21;
      dVar20 = dVar26;
      if (*(double *)(param_2 + 0x38) <= dVar26) {
        dVar20 = *(double *)(param_2 + 0x38);
      }
      dVar27 = dVar25 + 1.0;
      if (0.0 <= dVar25) {
        dVar27 = dVar25;
      }
      lVar12 = (long)*(int *)(lVar19 + 0x48) + (long)(double)(long)(dVar21 - dVar27) * lVar14;
      uVar10 = (ulong)*(int *)(lVar19 + 0x54);
      iVar11 = 0;
      if (uVar10 != 0) {
        iVar11 = (int)(lVar12 / (long)uVar10);
      }
      iVar11 = (int)lVar12 - iVar11 * *(int *)(lVar19 + 0x54);
      *(int *)(lVar19 + 0x48) = iVar11;
      dVar21 = DAT_00100ea8;
      if (lVar15 < 1) {
        lVar19 = 0;
        lVar12 = 0;
      }
      else {
        dVar20 = (double)NEON_fminnm(dVar20,0x3ff0000000000000);
        iVar1 = uVar18 + uVar18 * (int)(long)(double)(long)((((double)*(int *)(lVar19 + 0x28) + 2.0)
                                                            / (double)*(int *)(lVar19 + 0x2c)) /
                                                           dVar20);
        iVar13 = *(int *)(lVar19 + 0x4c);
        dVar20 = 1.0 / dVar26 + DAT_00100eb0;
        do {
          iVar8 = (int)uVar10;
          iVar9 = (iVar13 - iVar11) + iVar8;
          iVar2 = 0;
          if (iVar8 != 0) {
            iVar2 = iVar9 / iVar8;
          }
          if (iVar9 - iVar2 * iVar8 <= iVar1) {
            uVar5 = FUN_0026c43c(lVar19,uVar7,param_2,iVar1);
            *(int *)(param_1 + 0x18) = (int)uVar5;
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar11 = *(int *)(lVar19 + 0x48);
            iVar13 = *(int *)(lVar19 + 0x4c);
            uVar18 = *(uint *)(lVar19 + 0x54);
            uVar10 = (ulong)uVar18;
            iVar9 = (iVar13 - iVar11) + uVar18;
            iVar2 = 0;
            if (uVar18 != 0) {
              iVar2 = iVar9 / (int)uVar18;
            }
            if ((int)(iVar9 - iVar2 * uVar18) <= iVar1) break;
          }
          if (-1 < *(int *)(lVar19 + 0x50)) {
            dVar22 = (double)*(int *)(lVar19 + 0x50);
            dVar25 = dVar20 + dVar27 + (double)iVar11;
            if (dVar25 != dVar22 && dVar25 < dVar22 == (NAN(dVar25) || NAN(dVar22))) break;
          }
          lVar12 = *(long *)(lVar19 + 0x18);
          if (0 < lVar12) {
            dVar25 = *(double *)(param_1 + 8);
            dVar22 = ABS(dVar25 - *(double *)(param_2 + 0x38));
            if (dVar22 != dVar21 && dVar22 < dVar21 == (NAN(dVar22) || NAN(dVar21))) {
              dVar26 = dVar25 + ((*(double *)(param_2 + 0x38) - dVar25) *
                                (double)*(long *)(lVar19 + 0x20)) / (double)lVar12;
            }
          }
          dVar25 = (double)NEON_fminnm(dVar26,0x3ff0000000000000);
          iVar9 = *(int *)(lVar19 + 0x28) * 0x1000;
          dVar25 = dVar25 * (double)*(int *)(lVar19 + 0x2c);
          iVar16 = (int)(long)(double)(long)(dVar27 * dVar25 * 4096.0);
          iVar2 = 0;
          iVar8 = (int)(long)(double)(long)(dVar25 * 4096.0);
          if (iVar8 != 0) {
            iVar2 = (iVar9 - iVar16) / iVar8;
          }
          uVar3 = iVar11 - iVar2;
          uVar18 = iVar16 + iVar2 * iVar8 + (uVar3 * iVar8 & (int)uVar3 >> 0x1f);
          if ((int)uVar18 < 0) {
            lVar14 = *(long *)(lVar19 + 0x40);
            lVar15 = *(long *)(lVar19 + 0x858);
            dVar22 = 0.0;
          }
          else {
            dVar22 = 0.0;
            lVar14 = *(long *)(lVar19 + 0x40);
            lVar15 = *(long *)(lVar19 + 0x858);
            lVar6 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 2;
            do {
              pfVar4 = (float *)(lVar15 + lVar6);
              lVar6 = lVar6 + 4;
              pfVar17 = (float *)(lVar14 + (ulong)(uVar18 >> 0xc) * 4);
              fVar24 = *pfVar17;
              uVar3 = uVar18 & 0xfff;
              uVar18 = uVar18 - iVar8;
              uVar5 = NEON_fmadd((double)uVar3 / 4096.0,(double)(pfVar17[1] - fVar24),(double)fVar24
                                );
              dVar22 = (double)NEON_fmadd(uVar5,(double)*pfVar4,dVar22);
            } while (-1 < (int)uVar18);
          }
          dVar23 = 0.0;
          iVar2 = 0;
          if (iVar8 != 0) {
            iVar2 = (iVar9 - (iVar8 - iVar16)) / iVar8;
          }
          uVar18 = (iVar8 - iVar16) + iVar2 * iVar8;
          pfVar17 = (float *)(lVar15 + (long)(iVar11 + iVar2 + 1) * 4);
          do {
            pfVar4 = (float *)(lVar14 + (long)((int)uVar18 >> 0xc) * 4);
            fVar24 = *pfVar4;
            uVar3 = uVar18 & 0xfff;
            uVar18 = uVar18 - iVar8;
            uVar5 = NEON_fmadd((double)uVar3 / 4096.0,(double)(pfVar4[1] - fVar24),(double)fVar24);
            dVar23 = (double)NEON_fmadd(uVar5,(double)*pfVar17,dVar23);
            pfVar17 = pfVar17 + -1;
          } while (0 < (int)uVar18);
          uVar7 = (ulong)*(int *)(param_1 + 0x1c);
          lVar14 = *(long *)(lVar19 + 0x20);
          *(float *)(*(long *)(param_2 + 8) + lVar14 * 4) =
               (float)((dVar25 / (double)*(int *)(lVar19 + 0x2c)) * (dVar22 + dVar23));
          dVar25 = dVar27 + 1.0 / dVar26;
          dVar22 = dVar25 - (double)(long)(double)(long)dVar25;
          dVar27 = dVar22 + 1.0;
          if (0.0 <= dVar22) {
            dVar27 = dVar22;
          }
          lVar15 = (long)(double)(long)(dVar25 - dVar27) * uVar7 + (long)iVar11;
          iVar9 = (int)uVar10;
          iVar11 = 0;
          if ((long)iVar9 != 0) {
            iVar11 = (int)(lVar15 / (long)iVar9);
          }
          iVar11 = (int)lVar15 - iVar11 * iVar9;
          lVar14 = lVar14 + 1;
          *(long *)(lVar19 + 0x20) = lVar14;
          *(int *)(lVar19 + 0x48) = iVar11;
        } while (lVar14 < lVar12);
        lVar12 = *(long *)(lVar19 + 0x10);
        lVar14 = (long)*(int *)(param_1 + 0x1c);
        lVar19 = *(long *)(lVar19 + 0x20);
      }
      lVar15 = 0;
      if (lVar14 != 0) {
        lVar15 = lVar12 / lVar14;
      }
      uVar5 = 0;
      *(double *)(param_1 + 8) = dVar26;
      *(double *)(param_1 + 0x10) = dVar27;
      lVar12 = 0;
      if (lVar14 != 0) {
        lVar12 = lVar19 / lVar14;
      }
      *(long *)(param_2 + 0x20) = lVar15;
      *(long *)(param_2 + 0x28) = lVar12;
    }
  }
  return uVar5;
}



// === FUN_0026c2f8 @ 0026c2f8 ===

undefined8 * FUN_0026c2f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *__ptr;
  void *__dest;
  void *__dest_00;
  void *__src;
  ulong __size;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  __src = (void *)param_1[9];
  if (__src == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  __ptr = (undefined8 *)calloc(1,0x50);
  if (__ptr != (undefined8 *)0x0) {
    uVar2 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    uVar7 = param_1[9];
    uVar6 = param_1[8];
    __ptr[5] = param_1[5];
    __ptr[4] = uVar2;
    __ptr[7] = uVar4;
    __ptr[6] = uVar3;
    uVar5 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_1[3];
    uVar2 = param_1[2];
    __ptr[9] = uVar7;
    __ptr[8] = uVar6;
    __ptr[1] = uVar5;
    *__ptr = uVar4;
    __ptr[3] = uVar3;
    __ptr[2] = uVar2;
    __dest = calloc(1,0x860);
    if (__dest == (void *)0x0) {
      free(__ptr);
      return (undefined8 *)0x0;
    }
    memcpy(__dest,__src,0x858);
    uVar1 = *(int *)((long)param_1 + 0x1c) + *(int *)((long)__src + 0x54);
    __size = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    __dest_00 = malloc(__size);
    *(void **)((long)__dest + 0x858) = __dest_00;
    if (__dest_00 == (void *)0x0) {
      free(__ptr);
      free(__dest);
      return (undefined8 *)0x0;
    }
    memcpy(__dest_00,*(void **)((long)__src + 0x858),__size);
    __ptr[9] = __dest;
  }
  return __ptr;
}



// === FUN_0026c3f8 @ 0026c3f8 ===

void FUN_0026c3f8(void *param_1)

{
  void *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(void **)((long)param_1 + 0x48);
    if (__ptr != (void *)0x0) {
      if (*(void **)((long)__ptr + 0x858) != (void *)0x0) {
        free(*(void **)((long)__ptr + 0x858));
      }
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}



// === FUN_0026c43c @ 0026c43c ===

undefined8 FUN_0026c43c(long param_1,int param_2,long *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((-1 < *(int *)(param_1 + 0x50)) || (*param_3 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x48) = param_4;
    *(uint *)(param_1 + 0x4c) = param_4;
    uVar5 = iVar4 + param_4 * -2;
    uVar6 = param_4;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x54);
    if ((int)(param_4 + param_2 + uVar6) < iVar4) {
      uVar5 = iVar4 - (iVar2 + param_4);
    }
    else {
      uVar6 = (uVar6 - iVar2) + param_4;
      memmove(*(void **)(param_1 + 0x858),
              (void *)((long)*(void **)(param_1 + 0x858) + (long)(int)param_4 * -4 + (long)iVar2 * 4
                      ),-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
      iVar4 = *(int *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x48) = param_4;
      *(uint *)(param_1 + 0x4c) = uVar6;
      uVar5 = iVar4 + param_4 * -2;
    }
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  }
  uVar3 = *(int *)(param_1 + 8) - (int)*(long *)(param_1 + 0x10);
  if ((int)uVar3 <= (int)uVar5) {
    uVar5 = uVar3;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = (int)uVar5 / param_2;
  }
  uVar5 = iVar2 * param_2;
  if ((-1 < (int)uVar5) && ((int)(uVar6 + uVar5) <= iVar4)) {
    memcpy((void *)(*(long *)(param_1 + 0x858) + (long)(int)uVar6 * 4),
           (void *)(*param_3 + *(long *)(param_1 + 0x10) * 4),(ulong)uVar5 << 2);
    uVar6 = *(int *)(param_1 + 0x4c) + uVar5;
    lVar1 = *(long *)(param_1 + 0x10) + (ulong)uVar5;
    *(uint *)(param_1 + 0x4c) = uVar6;
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == *(long *)(param_1 + 8)) {
      iVar2 = uVar6 - *(int *)(param_1 + 0x48);
      if (((int)(iVar2 + param_4 * -2) < 0 != SBORROW4(iVar2,param_4 * 2)) && ((int)param_3[6] != 0)
         ) {
        iVar4 = *(int *)(param_1 + 0x54);
        uVar5 = param_4 + 5;
        if ((int)(iVar4 - uVar6) < (int)uVar5) {
          uVar6 = iVar2 + param_4;
          memmove(*(void **)(param_1 + 0x858),
                  (void *)((long)*(void **)(param_1 + 0x858) +
                          (long)(int)param_4 * -4 + (long)*(int *)(param_1 + 0x48) * 4),
                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2);
          iVar4 = *(int *)(param_1 + 0x54);
          *(uint *)(param_1 + 0x48) = param_4;
          *(uint *)(param_1 + 0x4c) = uVar6;
        }
        *(uint *)(param_1 + 0x50) = uVar6;
        uVar3 = iVar4 - uVar6;
        if ((int)(uVar6 + uVar5) <= iVar4 && -6 < (int)param_4) {
          uVar3 = uVar5;
        }
        memset((void *)(*(long *)(param_1 + 0x858) + (long)(int)uVar6 * 4),0,
               -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
        *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar3;
        return 0;
      }
    }
    return 0;
  }
  return 0x15;
}



// === FUN_0026c658 @ 0026c658 ===

undefined8 FUN_0026c658(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  lVar21 = *(long *)(param_1 + 0x48);
  if (lVar21 == 0) {
    uVar7 = 5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c);
    dVar34 = *(double *)(param_1 + 8);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar16 = (long)iVar3;
    uVar7 = 0x16;
    lVar17 = *(long *)(param_2 + 0x18) * lVar16;
    *(long *)(lVar21 + 0x18) = lVar17;
    *(undefined8 *)(lVar21 + 0x20) = 0;
    *(long *)(lVar21 + 8) = lVar14 * lVar16;
    *(undefined8 *)(lVar21 + 0x10) = 0;
    if ((0.00390625 <= dVar34) && (dVar34 == 256.0 || dVar34 < 256.0 != NAN(dVar34))) {
      dVar25 = *(double *)(param_1 + 0x10);
      dVar28 = *(double *)(param_2 + 0x38);
      dVar30 = dVar25 - (double)(long)(double)(long)dVar25;
      uVar22 = SUB84(dVar34,0);
      uVar23 = (undefined4)((ulong)dVar34 >> 0x20);
      if (dVar28 <= dVar34) {
        uVar22 = SUB84(dVar28,0);
        uVar23 = (undefined4)((ulong)dVar28 >> 0x20);
      }
      dVar28 = dVar30 + 1.0;
      if (0.0 <= dVar30) {
        dVar28 = dVar30;
      }
      lVar14 = (long)*(int *)(lVar21 + 0x48) + (long)(double)(long)(dVar25 - dVar28) * lVar16;
      uVar12 = (ulong)*(int *)(lVar21 + 0x54);
      iVar13 = 0;
      if (uVar12 != 0) {
        iVar13 = (int)(lVar14 / (long)uVar12);
      }
      iVar13 = (int)lVar14 - iVar13 * *(int *)(lVar21 + 0x54);
      *(int *)(lVar21 + 0x48) = iVar13;
      dVar25 = DAT_00100ea8;
      if (lVar17 < 1) {
        lVar21 = 0;
        lVar14 = 0;
      }
      else {
        dVar30 = (double)NEON_fminnm(CONCAT44(uVar23,uVar22),0x3ff0000000000000);
        iVar4 = iVar3 + iVar3 * (int)(long)(double)(long)((((double)*(int *)(lVar21 + 0x28) + 2.0) /
                                                          (double)*(int *)(lVar21 + 0x2c)) / dVar30)
        ;
        iVar15 = *(int *)(lVar21 + 0x4c);
        dVar30 = 1.0 / dVar34 + DAT_00100eb0;
        do {
          iVar10 = (int)uVar12;
          iVar11 = (iVar15 - iVar13) + iVar10;
          iVar6 = 0;
          if (iVar10 != 0) {
            iVar6 = iVar11 / iVar10;
          }
          if (iVar11 - iVar6 * iVar10 <= iVar4) {
            uVar7 = FUN_0026c43c(lVar21,iVar3,param_2,iVar4);
            *(int *)(param_1 + 0x18) = (int)uVar7;
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            iVar13 = *(int *)(lVar21 + 0x48);
            iVar15 = *(int *)(lVar21 + 0x4c);
            uVar19 = *(uint *)(lVar21 + 0x54);
            uVar12 = (ulong)uVar19;
            iVar3 = (iVar15 - iVar13) + uVar19;
            iVar11 = 0;
            if (uVar19 != 0) {
              iVar11 = iVar3 / (int)uVar19;
            }
            if ((int)(iVar3 - iVar11 * uVar19) <= iVar4) break;
          }
          if ((-1 < *(int *)(lVar21 + 0x50)) &&
             (dVar26 = (double)*(int *)(lVar21 + 0x50), dVar31 = dVar30 + dVar28 + (double)iVar13,
             dVar31 < dVar26 == (NAN(dVar31) || NAN(dVar26)))) break;
          lVar14 = *(long *)(lVar21 + 0x18);
          if (lVar14 < 1) {
            lVar16 = *(long *)(lVar21 + 0x20);
          }
          else {
            dVar31 = *(double *)(param_1 + 8);
            lVar16 = *(long *)(lVar21 + 0x20);
            dVar26 = ABS(dVar31 - *(double *)(param_2 + 0x38));
            if (dVar26 != dVar25 && dVar26 < dVar25 == (NAN(dVar26) || NAN(dVar25))) {
              dVar34 = dVar31 + ((*(double *)(param_2 + 0x38) - dVar31) * (double)lVar16) /
                                (double)lVar14;
            }
          }
          dVar31 = (double)NEON_fminnm(dVar34,0x3ff0000000000000);
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar11 = *(int *)(lVar21 + 0x28) * 0x1000;
          dVar31 = dVar31 * (double)*(int *)(lVar21 + 0x2c);
          iVar18 = (int)(long)(double)(long)(dVar28 * dVar31 * 4096.0);
          iVar6 = 0;
          iVar10 = (int)(long)(double)(long)(dVar31 * 4096.0);
          if (iVar10 != 0) {
            iVar6 = (iVar11 - iVar18) / iVar10;
          }
          iVar5 = iVar13 - iVar6 * iVar3;
          uVar19 = iVar18 + iVar6 * iVar10;
          if (iVar5 < 0) {
            uVar2 = 2 - iVar5;
            if (-1 < (int)(1U - iVar5)) {
              uVar2 = 1U - iVar5;
            }
            iVar5 = (uVar2 & 0xfffffffe) + iVar5;
            uVar19 = uVar19 - ((int)uVar2 >> 1) * iVar10;
            lVar17 = *(long *)(lVar21 + 0x40);
            lVar8 = *(long *)(lVar21 + 0x858);
          }
          else {
            lVar17 = *(long *)(lVar21 + 0x40);
            lVar8 = *(long *)(lVar21 + 0x858);
          }
          dVar27 = 0.0;
          dVar26 = 0.0;
          if (-1 < (int)uVar19) {
            dVar27 = 0.0;
            dVar26 = 0.0;
            puVar9 = (undefined8 *)(lVar8 + (long)iVar5 * 4);
            do {
              pfVar1 = (float *)(lVar17 + (ulong)(uVar19 >> 0xc) * 4);
              fVar29 = *pfVar1;
              uVar2 = uVar19 & 0xfff;
              uVar19 = uVar19 - iVar10;
              dVar33 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar29),
                                          (double)fVar29);
              dVar26 = dVar26 + (double)(float)*puVar9 * dVar33;
              dVar27 = dVar27 + (double)(float)((ulong)*puVar9 >> 0x20) * dVar33;
              puVar9 = puVar9 + 1;
            } while (-1 < (int)uVar19);
          }
          dVar33 = 0.0;
          dVar24 = 0.0;
          dVar31 = dVar31 / (double)*(int *)(lVar21 + 0x2c);
          lVar20 = *(long *)(param_2 + 8);
          iVar6 = 0;
          if (iVar10 != 0) {
            iVar6 = (iVar11 - (iVar10 - iVar18)) / iVar10;
          }
          uVar19 = iVar6 * iVar10 + (iVar10 - iVar18);
          puVar9 = (undefined8 *)(lVar8 + (long)(iVar3 + iVar3 * iVar6 + iVar13) * 4);
          do {
            pfVar1 = (float *)(lVar17 + (long)((int)uVar19 >> 0xc) * 4);
            fVar29 = *pfVar1;
            uVar2 = uVar19 & 0xfff;
            uVar19 = uVar19 - iVar10;
            dVar32 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar29),
                                        (double)fVar29);
            dVar33 = dVar33 + (double)(float)*puVar9 * dVar32;
            dVar24 = dVar24 + (double)(float)((ulong)*puVar9 >> 0x20) * dVar32;
            puVar9 = puVar9 + -1;
          } while (0 < (int)uVar19);
          *(long *)(lVar21 + 0x20) = lVar16 + 2;
          *(ulong *)(lVar20 + lVar16 * 4) =
               CONCAT44((float)((dVar27 + dVar24) * dVar31),(float)((dVar26 + dVar33) * dVar31));
          dVar31 = dVar28 + 1.0 / dVar34;
          dVar26 = dVar31 - (double)(long)(double)(long)dVar31;
          dVar28 = dVar26 + 1.0;
          if (0.0 <= dVar26) {
            dVar28 = dVar26;
          }
          lVar17 = (long)(double)(long)(dVar31 - dVar28) * (long)iVar3 + (long)iVar13;
          iVar11 = (int)uVar12;
          iVar13 = 0;
          if ((long)iVar11 != 0) {
            iVar13 = (int)(lVar17 / (long)iVar11);
          }
          iVar13 = (int)lVar17 - iVar13 * iVar11;
          *(int *)(lVar21 + 0x48) = iVar13;
        } while (lVar16 + 2 < lVar14);
        lVar14 = *(long *)(lVar21 + 0x10);
        lVar16 = (long)*(int *)(param_1 + 0x1c);
        lVar21 = *(long *)(lVar21 + 0x20);
      }
      lVar17 = 0;
      if (lVar16 != 0) {
        lVar17 = lVar14 / lVar16;
      }
      uVar7 = 0;
      *(double *)(param_1 + 8) = dVar34;
      *(double *)(param_1 + 0x10) = dVar28;
      lVar14 = 0;
      if (lVar16 != 0) {
        lVar14 = lVar21 / lVar16;
      }
      *(long *)(param_2 + 0x20) = lVar17;
      *(long *)(param_2 + 0x28) = lVar14;
    }
  }
  return uVar7;
}



// === FUN_0026ca34 @ 0026ca34 ===

undefined8 FUN_0026ca34(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  lVar21 = *(long *)(param_1 + 0x48);
  if (lVar21 == 0) {
    uVar8 = 5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c);
    dVar38 = *(double *)(param_1 + 8);
    lVar14 = *(long *)(param_2 + 0x10);
    lVar16 = (long)iVar3;
    uVar8 = 0x16;
    lVar17 = *(long *)(param_2 + 0x18) * lVar16;
    *(long *)(lVar21 + 0x18) = lVar17;
    *(undefined8 *)(lVar21 + 0x20) = 0;
    *(long *)(lVar21 + 8) = lVar14 * lVar16;
    *(undefined8 *)(lVar21 + 0x10) = 0;
    if ((0.00390625 <= dVar38) && (dVar38 == 256.0 || dVar38 < 256.0 != NAN(dVar38))) {
      dVar25 = *(double *)(param_1 + 0x10);
      dVar28 = *(double *)(param_2 + 0x38);
      dVar31 = dVar25 - (double)(long)(double)(long)dVar25;
      uVar22 = SUB84(dVar38,0);
      uVar23 = (undefined4)((ulong)dVar38 >> 0x20);
      if (dVar28 <= dVar38) {
        uVar22 = SUB84(dVar28,0);
        uVar23 = (undefined4)((ulong)dVar28 >> 0x20);
      }
      dVar28 = dVar31 + 1.0;
      if (0.0 <= dVar31) {
        dVar28 = dVar31;
      }
      lVar14 = (long)*(int *)(lVar21 + 0x48) + (long)(double)(long)(dVar25 - dVar28) * lVar16;
      uVar12 = (ulong)*(int *)(lVar21 + 0x54);
      iVar13 = 0;
      if (uVar12 != 0) {
        iVar13 = (int)(lVar14 / (long)uVar12);
      }
      iVar13 = (int)lVar14 - iVar13 * *(int *)(lVar21 + 0x54);
      *(int *)(lVar21 + 0x48) = iVar13;
      dVar25 = DAT_00100ea8;
      if (lVar17 < 1) {
        lVar21 = 0;
        lVar14 = 0;
      }
      else {
        dVar31 = (double)NEON_fminnm(CONCAT44(uVar23,uVar22),0x3ff0000000000000);
        iVar4 = iVar3 + iVar3 * (int)(long)(double)(long)((((double)*(int *)(lVar21 + 0x28) + 2.0) /
                                                          (double)*(int *)(lVar21 + 0x2c)) / dVar31)
        ;
        iVar15 = *(int *)(lVar21 + 0x4c);
        dVar31 = 1.0 / dVar38 + DAT_00100eb0;
        do {
          iVar10 = (int)uVar12;
          iVar11 = (iVar15 - iVar13) + iVar10;
          iVar6 = 0;
          if (iVar10 != 0) {
            iVar6 = iVar11 / iVar10;
          }
          if (iVar11 - iVar6 * iVar10 <= iVar4) {
            uVar8 = FUN_0026c43c(lVar21,iVar3,param_2,iVar4);
            *(int *)(param_1 + 0x18) = (int)uVar8;
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            iVar13 = *(int *)(lVar21 + 0x48);
            iVar15 = *(int *)(lVar21 + 0x4c);
            uVar7 = *(uint *)(lVar21 + 0x54);
            uVar12 = (ulong)uVar7;
            iVar3 = (iVar15 - iVar13) + uVar7;
            iVar11 = 0;
            if (uVar7 != 0) {
              iVar11 = iVar3 / (int)uVar7;
            }
            if ((int)(iVar3 - iVar11 * uVar7) <= iVar4) break;
          }
          if ((-1 < *(int *)(lVar21 + 0x50)) &&
             (dVar26 = (double)*(int *)(lVar21 + 0x50), dVar32 = dVar31 + dVar28 + (double)iVar13,
             dVar32 < dVar26 == (NAN(dVar32) || NAN(dVar26)))) break;
          lVar14 = *(long *)(lVar21 + 0x18);
          if (lVar14 < 1) {
            lVar16 = *(long *)(lVar21 + 0x20);
          }
          else {
            dVar32 = *(double *)(param_1 + 8);
            lVar16 = *(long *)(lVar21 + 0x20);
            dVar26 = ABS(dVar32 - *(double *)(param_2 + 0x38));
            if (dVar26 != dVar25 && dVar26 < dVar25 == (NAN(dVar26) || NAN(dVar25))) {
              dVar38 = dVar32 + ((*(double *)(param_2 + 0x38) - dVar32) * (double)lVar16) /
                                (double)lVar14;
            }
          }
          dVar32 = (double)NEON_fminnm(dVar38,0x3ff0000000000000);
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar11 = *(int *)(lVar21 + 0x28) * 0x1000;
          dVar32 = dVar32 * (double)*(int *)(lVar21 + 0x2c);
          iVar18 = (int)(long)(double)(long)(dVar28 * dVar32 * 4096.0);
          iVar6 = 0;
          iVar10 = (int)(long)(double)(long)(dVar32 * 4096.0);
          if (iVar10 != 0) {
            iVar6 = (iVar11 - iVar18) / iVar10;
          }
          iVar5 = iVar13 - iVar6 * iVar3;
          uVar7 = iVar18 + iVar6 * iVar10;
          if (iVar5 < 0) {
            uVar2 = 6 - iVar5;
            if (-1 < (int)(3U - iVar5)) {
              uVar2 = 3U - iVar5;
            }
            iVar5 = (uVar2 & 0xfffffffc) + iVar5;
            uVar7 = uVar7 - ((int)uVar2 >> 2) * iVar10;
            lVar17 = *(long *)(lVar21 + 0x40);
            lVar19 = *(long *)(lVar21 + 0x858);
          }
          else {
            lVar17 = *(long *)(lVar21 + 0x40);
            lVar19 = *(long *)(lVar21 + 0x858);
          }
          dVar30 = 0.0;
          dVar29 = 0.0;
          dVar27 = 0.0;
          dVar26 = 0.0;
          if (-1 < (int)uVar7) {
            dVar30 = 0.0;
            dVar29 = 0.0;
            dVar27 = 0.0;
            dVar26 = 0.0;
            puVar9 = (undefined8 *)(lVar19 + (long)iVar5 * 4);
            do {
              pfVar1 = (float *)(lVar17 + (ulong)(uVar7 >> 0xc) * 4);
              fVar35 = *pfVar1;
              uVar2 = uVar7 & 0xfff;
              uVar7 = uVar7 - iVar10;
              dVar36 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar35),
                                          (double)fVar35);
              dVar29 = dVar29 + (double)(float)puVar9[1] * dVar36;
              dVar30 = dVar30 + (double)(float)((ulong)puVar9[1] >> 0x20) * dVar36;
              dVar26 = dVar26 + (double)(float)*puVar9 * dVar36;
              dVar27 = dVar27 + (double)(float)((ulong)*puVar9 >> 0x20) * dVar36;
              puVar9 = puVar9 + 2;
            } while (-1 < (int)uVar7);
          }
          dVar36 = 0.0;
          dVar24 = 0.0;
          dVar32 = dVar32 / (double)*(int *)(lVar21 + 0x2c);
          dVar33 = 0.0;
          dVar34 = 0.0;
          iVar6 = 0;
          if (iVar10 != 0) {
            iVar6 = (iVar11 - (iVar10 - iVar18)) / iVar10;
          }
          puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + lVar16 * 4);
          uVar7 = iVar6 * iVar10 + (iVar10 - iVar18);
          puVar20 = (undefined8 *)(lVar19 + (long)(iVar3 + iVar3 * iVar6 + iVar13) * 4);
          do {
            pfVar1 = (float *)(lVar17 + (long)((int)uVar7 >> 0xc) * 4);
            fVar35 = *pfVar1;
            uVar2 = uVar7 & 0xfff;
            uVar7 = uVar7 - iVar10;
            dVar37 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar35),
                                        (double)fVar35);
            dVar33 = dVar33 + (double)(float)puVar20[1] * dVar37;
            dVar34 = dVar34 + (double)(float)((ulong)puVar20[1] >> 0x20) * dVar37;
            dVar36 = dVar36 + (double)(float)*puVar20 * dVar37;
            dVar24 = dVar24 + (double)(float)((ulong)*puVar20 >> 0x20) * dVar37;
            puVar20 = puVar20 + -2;
          } while (0 < (int)uVar7);
          *(long *)(lVar21 + 0x20) = lVar16 + 4;
          puVar9[1] = CONCAT44((float)((dVar30 + dVar34) * dVar32),
                               (float)((dVar29 + dVar33) * dVar32));
          *puVar9 = CONCAT44((float)((dVar27 + dVar24) * dVar32),(float)((dVar26 + dVar36) * dVar32)
                            );
          dVar32 = dVar28 + 1.0 / dVar38;
          dVar26 = dVar32 - (double)(long)(double)(long)dVar32;
          dVar28 = dVar26 + 1.0;
          if (0.0 <= dVar26) {
            dVar28 = dVar26;
          }
          lVar17 = (long)(double)(long)(dVar32 - dVar28) * (long)iVar3 + (long)iVar13;
          iVar11 = (int)uVar12;
          iVar13 = 0;
          if ((long)iVar11 != 0) {
            iVar13 = (int)(lVar17 / (long)iVar11);
          }
          iVar13 = (int)lVar17 - iVar13 * iVar11;
          *(int *)(lVar21 + 0x48) = iVar13;
        } while (lVar16 + 4 < lVar14);
        lVar14 = *(long *)(lVar21 + 0x10);
        lVar16 = (long)*(int *)(param_1 + 0x1c);
        lVar21 = *(long *)(lVar21 + 0x20);
      }
      lVar17 = 0;
      if (lVar16 != 0) {
        lVar17 = lVar14 / lVar16;
      }
      uVar8 = 0;
      *(double *)(param_1 + 8) = dVar38;
      *(double *)(param_1 + 0x10) = dVar28;
      lVar14 = 0;
      if (lVar16 != 0) {
        lVar14 = lVar21 / lVar16;
      }
      *(long *)(param_2 + 0x20) = lVar17;
      *(long *)(param_2 + 0x28) = lVar14;
    }
  }
  return uVar8;
}



// === FUN_0026ce38 @ 0026ce38 ===

undefined8 FUN_0026ce38(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  
  lVar20 = *(long *)(param_1 + 0x48);
  if (lVar20 == 0) {
    uVar7 = 5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1c);
    dVar41 = *(double *)(param_1 + 8);
    lVar15 = *(long *)(param_2 + 0x10);
    lVar17 = (long)iVar3;
    uVar7 = 0x16;
    lVar18 = *(long *)(param_2 + 0x18) * lVar17;
    *(long *)(lVar20 + 0x18) = lVar18;
    *(undefined8 *)(lVar20 + 0x20) = 0;
    *(long *)(lVar20 + 8) = lVar15 * lVar17;
    *(undefined8 *)(lVar20 + 0x10) = 0;
    if ((0.00390625 <= dVar41) && (dVar41 == 256.0 || dVar41 < 256.0 != NAN(dVar41))) {
      dVar24 = *(double *)(param_1 + 0x10);
      dVar28 = *(double *)(param_2 + 0x38);
      dVar31 = dVar24 - (double)(long)(double)(long)dVar24;
      uVar21 = SUB84(dVar41,0);
      uVar22 = (undefined4)((ulong)dVar41 >> 0x20);
      if (dVar28 <= dVar41) {
        uVar21 = SUB84(dVar28,0);
        uVar22 = (undefined4)((ulong)dVar28 >> 0x20);
      }
      dVar28 = dVar31 + 1.0;
      if (0.0 <= dVar31) {
        dVar28 = dVar31;
      }
      lVar15 = (long)*(int *)(lVar20 + 0x48) + (long)(double)(long)(dVar24 - dVar28) * lVar17;
      uVar13 = (ulong)*(int *)(lVar20 + 0x54);
      iVar14 = 0;
      if (uVar13 != 0) {
        iVar14 = (int)(lVar15 / (long)uVar13);
      }
      iVar14 = (int)lVar15 - iVar14 * *(int *)(lVar20 + 0x54);
      *(int *)(lVar20 + 0x48) = iVar14;
      dVar24 = DAT_00100ea8;
      if (lVar18 < 1) {
        lVar20 = 0;
        lVar15 = 0;
      }
      else {
        dVar31 = (double)NEON_fminnm(CONCAT44(uVar22,uVar21),0x3ff0000000000000);
        iVar4 = iVar3 + iVar3 * (int)(long)(double)(long)((((double)*(int *)(lVar20 + 0x28) + 2.0) /
                                                          (double)*(int *)(lVar20 + 0x2c)) / dVar31)
        ;
        iVar16 = *(int *)(lVar20 + 0x4c);
        dVar31 = 1.0 / dVar41 + DAT_00100eb0;
        do {
          iVar11 = (int)uVar13;
          iVar12 = (iVar16 - iVar14) + iVar11;
          iVar5 = 0;
          if (iVar11 != 0) {
            iVar5 = iVar12 / iVar11;
          }
          if (iVar12 - iVar5 * iVar11 <= iVar4) {
            uVar7 = FUN_0026c43c(lVar20,iVar3,param_2,iVar4);
            *(int *)(param_1 + 0x18) = (int)uVar7;
            if ((int)uVar7 != 0) {
              return uVar7;
            }
            iVar14 = *(int *)(lVar20 + 0x48);
            iVar16 = *(int *)(lVar20 + 0x4c);
            uVar6 = *(uint *)(lVar20 + 0x54);
            uVar13 = (ulong)uVar6;
            iVar3 = (iVar16 - iVar14) + uVar6;
            iVar12 = 0;
            if (uVar6 != 0) {
              iVar12 = iVar3 / (int)uVar6;
            }
            if ((int)(iVar3 - iVar12 * uVar6) <= iVar4) break;
          }
          if ((-1 < *(int *)(lVar20 + 0x50)) &&
             (dVar25 = (double)*(int *)(lVar20 + 0x50), dVar34 = dVar31 + dVar28 + (double)iVar14,
             dVar34 < dVar25 == (NAN(dVar34) || NAN(dVar25)))) break;
          lVar15 = *(long *)(lVar20 + 0x18);
          if (lVar15 < 1) {
            lVar17 = *(long *)(lVar20 + 0x20);
          }
          else {
            dVar34 = *(double *)(param_1 + 8);
            lVar17 = *(long *)(lVar20 + 0x20);
            dVar25 = ABS(dVar34 - *(double *)(param_2 + 0x38));
            if (dVar25 != dVar24 && dVar25 < dVar24 == (NAN(dVar25) || NAN(dVar24))) {
              dVar41 = dVar34 + ((*(double *)(param_2 + 0x38) - dVar34) * (double)lVar17) /
                                (double)lVar15;
            }
          }
          dVar34 = (double)NEON_fminnm(dVar41,0x3ff0000000000000);
          iVar3 = *(int *)(param_1 + 0x1c);
          iVar12 = *(int *)(lVar20 + 0x28) * 0x1000;
          dVar34 = dVar34 * (double)*(int *)(lVar20 + 0x2c);
          iVar19 = (int)(long)(double)(long)(dVar28 * dVar34 * 4096.0);
          iVar5 = 0;
          iVar11 = (int)(long)(double)(long)(dVar34 * 4096.0);
          if (iVar11 != 0) {
            iVar5 = (iVar12 - iVar19) / iVar11;
          }
          iVar9 = iVar14 - iVar5 * iVar3;
          uVar6 = iVar19 + iVar5 * iVar11;
          if (iVar9 < 0) {
            iVar5 = (5 - iVar9) / 6;
            uVar6 = uVar6 - iVar5 * iVar11;
            iVar9 = iVar9 + iVar5 * 6;
          }
          dVar25 = 0.0;
          dVar23 = 0.0;
          dVar26 = 0.0;
          dVar27 = 0.0;
          dVar29 = 0.0;
          dVar30 = 0.0;
          dVar32 = 0.0;
          dVar33 = 0.0;
          if (-1 < (int)uVar6) {
            puVar10 = (undefined8 *)(*(long *)(lVar20 + 0x858) + (long)iVar9 * 4 + 0x10);
            do {
              pfVar1 = (float *)(*(long *)(lVar20 + 0x40) + (ulong)(uVar6 >> 0xc) * 4);
              fVar36 = *pfVar1;
              uVar2 = uVar6 & 0xfff;
              uVar6 = uVar6 - iVar11;
              dVar37 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar36),
                                          (double)fVar36);
              dVar29 = dVar29 + (double)(float)puVar10[-1] * dVar37;
              dVar30 = dVar30 + (double)(float)((ulong)puVar10[-1] >> 0x20) * dVar37;
              dVar26 = dVar26 + (double)(float)puVar10[-2] * dVar37;
              dVar27 = dVar27 + (double)(float)((ulong)puVar10[-2] >> 0x20) * dVar37;
              dVar32 = dVar32 + (double)(float)*puVar10 * dVar37;
              dVar33 = dVar33 + (double)(float)((ulong)*puVar10 >> 0x20) * dVar37;
              puVar10 = puVar10 + 3;
            } while (-1 < (int)uVar6);
          }
          dVar34 = dVar34 / (double)*(int *)(lVar20 + 0x2c);
          dVar38 = 0.0;
          dVar39 = 0.0;
          dVar37 = 0.0;
          dVar35 = 0.0;
          iVar5 = 0;
          if (iVar11 != 0) {
            iVar5 = (iVar12 - (iVar11 - iVar19)) / iVar11;
          }
          puVar10 = (undefined8 *)(*(long *)(param_2 + 8) + lVar17 * 4);
          uVar6 = iVar5 * iVar11 + (iVar11 - iVar19);
          puVar8 = (undefined8 *)
                   (*(long *)(lVar20 + 0x858) + (long)(iVar3 + iVar3 * iVar5 + iVar14) * 4 + 0x10);
          do {
            pfVar1 = (float *)(*(long *)(lVar20 + 0x40) + (long)((int)uVar6 >> 0xc) * 4);
            fVar36 = *pfVar1;
            uVar2 = uVar6 & 0xfff;
            uVar6 = uVar6 - iVar11;
            dVar40 = (double)NEON_fmadd((double)uVar2 / 4096.0,(double)(pfVar1[1] - fVar36),
                                        (double)fVar36);
            dVar38 = dVar38 + (double)(float)puVar8[-1] * dVar40;
            dVar39 = dVar39 + (double)(float)((ulong)puVar8[-1] >> 0x20) * dVar40;
            dVar25 = dVar25 + (double)(float)puVar8[-2] * dVar40;
            dVar23 = dVar23 + (double)(float)((ulong)puVar8[-2] >> 0x20) * dVar40;
            dVar37 = dVar37 + (double)(float)*puVar8 * dVar40;
            dVar35 = dVar35 + (double)(float)((ulong)*puVar8 >> 0x20) * dVar40;
            puVar8 = puVar8 + -3;
          } while (0 < (int)uVar6);
          *(long *)(lVar20 + 0x20) = lVar17 + 6;
          puVar10[1] = CONCAT44((float)((dVar30 + dVar39) * dVar34),
                                (float)((dVar29 + dVar38) * dVar34));
          *puVar10 = CONCAT44((float)((dVar27 + dVar23) * dVar34),
                              (float)((dVar26 + dVar25) * dVar34));
          puVar10[2] = CONCAT44((float)((dVar33 + dVar35) * dVar34),
                                (float)((dVar32 + dVar37) * dVar34));
          dVar34 = dVar28 + 1.0 / dVar41;
          dVar25 = dVar34 - (double)(long)(double)(long)dVar34;
          dVar28 = dVar25 + 1.0;
          if (0.0 <= dVar25) {
            dVar28 = dVar25;
          }
          lVar18 = (long)(double)(long)(dVar34 - dVar28) * (long)iVar3 + (long)iVar14;
          iVar12 = (int)uVar13;
          iVar14 = 0;
          if ((long)iVar12 != 0) {
            iVar14 = (int)(lVar18 / (long)iVar12);
          }
          iVar14 = (int)lVar18 - iVar14 * iVar12;
          *(int *)(lVar20 + 0x48) = iVar14;
        } while (lVar17 + 6 < lVar15);
        lVar15 = *(long *)(lVar20 + 0x10);
        lVar17 = (long)*(int *)(param_1 + 0x1c);
        lVar20 = *(long *)(lVar20 + 0x20);
      }
      lVar18 = 0;
      if (lVar17 != 0) {
        lVar18 = lVar15 / lVar17;
      }
      uVar7 = 0;
      *(double *)(param_1 + 8) = dVar41;
      *(double *)(param_1 + 0x10) = dVar28;
      lVar15 = 0;
      if (lVar17 != 0) {
        lVar15 = lVar20 / lVar17;
      }
      *(long *)(param_2 + 0x20) = lVar18;
      *(long *)(param_2 + 0x28) = lVar15;
    }
  }
  return uVar7;
}



// === FUN_0026d25c @ 0026d25c ===

undefined8 FUN_0026d25c(long param_1,long param_2)

{
  bool bVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  int iVar22;
  double *pdVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  int local_cc;
  long local_b8;
  
  lVar30 = *(long *)(param_1 + 0x48);
  if (lVar30 == 0) {
    uVar13 = 5;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar14 = (ulong)uVar4;
    lVar19 = *(long *)(param_2 + 0x10);
    lVar15 = (long)(int)uVar4;
    dVar49 = *(double *)(param_1 + 8);
    uVar13 = 0x16;
    lVar17 = *(long *)(param_2 + 0x18) * lVar15;
    *(long *)(lVar30 + 0x18) = lVar17;
    *(undefined8 *)(lVar30 + 0x20) = 0;
    *(long *)(lVar30 + 8) = lVar19 * lVar15;
    *(undefined8 *)(lVar30 + 0x10) = 0;
    if ((0.00390625 <= dVar49) && (dVar49 == 256.0 || dVar49 < 256.0 != NAN(dVar49))) {
      dVar11 = *(double *)(param_1 + 0x10);
      dVar39 = dVar11 - (double)(long)(double)(long)dVar11;
      dVar35 = dVar49;
      if (*(double *)(param_2 + 0x38) <= dVar49) {
        dVar35 = *(double *)(param_2 + 0x38);
      }
      dVar50 = dVar39 + 1.0;
      if (0.0 <= dVar39) {
        dVar50 = dVar39;
      }
      lVar19 = (long)*(int *)(lVar30 + 0x48) + (long)(double)(long)(dVar11 - dVar50) * lVar15;
      iVar28 = *(int *)(lVar30 + 0x54);
      iVar22 = 0;
      if ((long)iVar28 != 0) {
        iVar22 = (int)(lVar19 / (long)iVar28);
      }
      iVar22 = (int)lVar19 - iVar22 * iVar28;
      *(int *)(lVar30 + 0x48) = iVar22;
      dVar11 = DAT_00100ea8;
      if (lVar17 < 1) {
        lVar30 = 0;
        lVar19 = 0;
      }
      else {
        dVar35 = (double)NEON_fminnm(dVar35,0x3ff0000000000000);
        local_cc = *(int *)(lVar30 + 0x4c);
        iVar5 = uVar4 + uVar4 * (int)(long)(double)(long)((((double)*(int *)(lVar30 + 0x28) + 2.0) /
                                                          (double)*(int *)(lVar30 + 0x2c)) / dVar35)
        ;
        dVar35 = 1.0 / dVar49 + DAT_00100eb0;
        do {
          iVar3 = (local_cc - iVar22) + iVar28;
          iVar6 = 0;
          if (iVar28 != 0) {
            iVar6 = iVar3 / iVar28;
          }
          if (iVar3 - iVar6 * iVar28 <= iVar5) {
            uVar13 = FUN_0026c43c(lVar30,uVar14,param_2,iVar5);
            *(int *)(param_1 + 0x18) = (int)uVar13;
            if ((int)uVar13 != 0) {
              return uVar13;
            }
            iVar22 = *(int *)(lVar30 + 0x48);
            local_cc = *(int *)(lVar30 + 0x4c);
            iVar28 = *(int *)(lVar30 + 0x54);
            iVar3 = (local_cc - iVar22) + iVar28;
            iVar6 = 0;
            if (iVar28 != 0) {
              iVar6 = iVar3 / iVar28;
            }
            if (iVar3 - iVar6 * iVar28 <= iVar5) break;
          }
          if ((-1 < *(int *)(lVar30 + 0x50)) &&
             (dVar39 = (double)*(int *)(lVar30 + 0x50), dVar36 = dVar35 + dVar50 + (double)iVar22,
             dVar36 < dVar39 == (NAN(dVar36) || NAN(dVar39)))) break;
          lVar19 = *(long *)(lVar30 + 0x18);
          if (lVar19 < 1) {
            local_b8 = *(long *)(lVar30 + 0x20);
          }
          else {
            dVar36 = *(double *)(param_1 + 8);
            local_b8 = *(long *)(lVar30 + 0x20);
            dVar39 = ABS(dVar36 - *(double *)(param_2 + 0x38));
            if (dVar39 != dVar11 && dVar39 < dVar11 == (NAN(dVar39) || NAN(dVar11))) {
              dVar49 = dVar36 + ((*(double *)(param_2 + 0x38) - dVar36) * (double)local_b8) /
                                (double)lVar19;
            }
          }
          iVar3 = *(int *)(lVar30 + 0x2c);
          dVar39 = (double)NEON_fminnm(dVar49,0x3ff0000000000000);
          uVar4 = *(uint *)(param_1 + 0x1c);
          uVar14 = (ulong)(int)uVar4;
          iVar6 = *(int *)(lVar30 + 0x28) * 0x1000;
          dVar39 = dVar39 * (double)iVar3;
          iVar32 = (int)(long)(double)(long)(dVar50 * dVar39 * 4096.0);
          iVar7 = 0;
          iVar29 = (int)(long)(double)(long)(dVar39 * 4096.0);
          if (iVar29 != 0) {
            iVar7 = (iVar6 - iVar32) / iVar29;
          }
          uVar33 = iVar22 - iVar7 * uVar4;
          uVar31 = iVar32 + iVar7 * iVar29;
          if ((int)uVar33 < 0) {
            iVar7 = 0;
            if (uVar4 != 0) {
              iVar7 = (int)(uVar4 + ~uVar33) / (int)uVar4;
            }
            uVar31 = uVar31 - iVar7 * iVar29;
            uVar33 = uVar33 + iVar7 * uVar4;
          }
          lVar15 = *(long *)(param_2 + 8);
          memset((void *)(lVar30 + 0x58),0,uVar14 << 3);
          lVar17 = *(long *)(lVar30 + 0x40);
          if (-1 < (int)uVar31) {
            if ((int)uVar4 < 1) {
              do {
                uVar31 = uVar31 - iVar29;
              } while (-1 < (int)uVar31);
            }
            else {
              uVar20 = uVar14 & 0x7ffffffc;
              lVar16 = *(long *)(lVar30 + 0x858) + (long)(int)uVar33 * 4;
              puVar18 = (undefined8 *)(lVar16 + 8);
              do {
                pfVar21 = (float *)(lVar17 + (ulong)(uVar31 >> 0xc) * 4);
                fVar34 = *pfVar21;
                dVar36 = (double)NEON_fmadd((double)(uVar31 & 0xfff) / 4096.0,
                                            (double)(pfVar21[1] - fVar34),(double)fVar34);
                pdVar23 = (double *)(lVar30 + 0x68);
                puVar24 = puVar18;
                uVar25 = uVar20;
                if (uVar4 < 4) {
                  uVar25 = 0;
LAB_0026d618:
                  lVar27 = uVar14 - uVar25;
                  puVar24 = (undefined8 *)(lVar30 + 0x58 + uVar25 * 8);
                  pfVar21 = (float *)(lVar16 + uVar25 * 4);
                  do {
                    lVar27 = lVar27 + -1;
                    uVar13 = NEON_fmadd(dVar36,(double)*pfVar21,*puVar24);
                    *puVar24 = uVar13;
                    puVar24 = puVar24 + 1;
                    pfVar21 = pfVar21 + 1;
                  } while (lVar27 != 0);
                }
                else {
                  do {
                    uVar13 = puVar24[-1];
                    uVar40 = *puVar24;
                    uVar25 = uVar25 - 4;
                    pdVar23[-1] = pdVar23[-1] + (double)(float)((ulong)uVar13 >> 0x20) * dVar36;
                    pdVar23[-2] = pdVar23[-2] + (double)(float)uVar13 * dVar36;
                    pdVar23[1] = pdVar23[1] + (double)(float)((ulong)uVar40 >> 0x20) * dVar36;
                    *pdVar23 = *pdVar23 + (double)(float)uVar40 * dVar36;
                    pdVar23 = pdVar23 + 4;
                    puVar24 = puVar24 + 2;
                  } while (uVar25 != 0);
                  uVar25 = uVar20;
                  if (uVar20 != uVar14) goto LAB_0026d618;
                }
                uVar31 = uVar31 - iVar29;
                puVar18 = (undefined8 *)((long)puVar18 + uVar14 * 4);
                lVar16 = lVar16 + uVar14 * 4;
              } while (-1 < (int)uVar31);
            }
          }
          iVar7 = 0;
          if (iVar29 != 0) {
            iVar7 = (iVar6 - (iVar29 - iVar32)) / iVar29;
          }
          uVar31 = iVar7 * iVar29 + (iVar29 - iVar32);
          memset((void *)(lVar30 + 0x458),0,uVar14 << 3);
          if ((int)uVar4 < 1) {
            do {
              uVar31 = uVar31 - iVar29;
            } while (0 < (int)uVar31);
          }
          else {
            lVar16 = *(long *)(lVar30 + 0x858);
            uVar20 = uVar14 & 0x7ffffffc;
            uVar33 = uVar4 + uVar4 * iVar7 + iVar22;
            do {
              pfVar21 = (float *)(lVar17 + (long)((int)uVar31 >> 0xc) * 4);
              fVar34 = *pfVar21;
              uVar25 = -(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2;
              dVar36 = (double)NEON_fmadd((double)(uVar31 & 0xfff) / 4096.0,
                                          (double)(pfVar21[1] - fVar34),(double)fVar34);
              if (uVar4 < 4) {
                uVar26 = 0;
LAB_0026d738:
                lVar27 = uVar14 - uVar26;
                puVar18 = (undefined8 *)(lVar30 + 0x458 + uVar26 * 8);
                pfVar21 = (float *)(lVar16 + uVar25 + uVar26 * 4);
                do {
                  lVar27 = lVar27 + -1;
                  uVar13 = NEON_fmadd(dVar36,(double)*pfVar21,*puVar18);
                  *puVar18 = uVar13;
                  puVar18 = puVar18 + 1;
                  pfVar21 = pfVar21 + 1;
                } while (lVar27 != 0);
              }
              else {
                puVar18 = (undefined8 *)(lVar16 + 8 + uVar25);
                uVar26 = uVar20;
                pdVar23 = (double *)(lVar30 + 0x468);
                do {
                  uVar13 = puVar18[-1];
                  uVar40 = *puVar18;
                  uVar26 = uVar26 - 4;
                  puVar18 = puVar18 + 2;
                  pdVar23[-1] = pdVar23[-1] + (double)(float)((ulong)uVar13 >> 0x20) * dVar36;
                  pdVar23[-2] = pdVar23[-2] + (double)(float)uVar13 * dVar36;
                  pdVar23[1] = pdVar23[1] + (double)(float)((ulong)uVar40 >> 0x20) * dVar36;
                  *pdVar23 = *pdVar23 + (double)(float)uVar40 * dVar36;
                  pdVar23 = pdVar23 + 4;
                } while (uVar26 != 0);
                uVar26 = uVar20;
                if (uVar20 != uVar14) goto LAB_0026d738;
              }
              uVar8 = uVar31 - iVar29;
              uVar33 = uVar33 - uVar4;
              bVar1 = iVar29 <= (int)uVar31;
              uVar31 = uVar8;
            } while (uVar8 != 0 && bVar1);
          }
          if (0 < (int)uVar4) {
            dVar39 = dVar39 / (double)iVar3;
            if (uVar4 < 8) {
              uVar25 = 0;
            }
            else {
              uVar25 = uVar14 & 0x7ffffff8;
              puVar18 = (undefined8 *)(lVar15 + local_b8 * 4 + 0x10);
              uVar20 = uVar25;
              lVar17 = lVar30;
              do {
                dVar37 = *(double *)(lVar17 + 0x60);
                dVar36 = *(double *)(lVar17 + 0x58);
                dVar42 = *(double *)(lVar17 + 0x80);
                dVar41 = *(double *)(lVar17 + 0x78);
                dVar44 = *(double *)(lVar17 + 0x480);
                dVar43 = *(double *)(lVar17 + 0x478);
                dVar46 = *(double *)(lVar17 + 0x490);
                dVar45 = *(double *)(lVar17 + 0x488);
                uVar20 = uVar20 - 8;
                dVar38 = *(double *)(lVar17 + 0x460);
                dVar12 = *(double *)(lVar17 + 0x458);
                dVar48 = *(double *)(lVar17 + 0x90);
                dVar47 = *(double *)(lVar17 + 0x88);
                pdVar23 = (double *)(lVar17 + 0x468);
                pdVar9 = (double *)(lVar17 + 0x470);
                pdVar2 = (double *)(lVar17 + 0x68);
                pdVar10 = (double *)(lVar17 + 0x70);
                lVar17 = lVar17 + 0x40;
                puVar18[-1] = CONCAT44((float)((*pdVar10 + *pdVar9) * dVar39),
                                       (float)((*pdVar2 + *pdVar23) * dVar39));
                puVar18[-2] = CONCAT44((float)((dVar37 + dVar38) * dVar39),
                                       (float)((dVar36 + dVar12) * dVar39));
                puVar18[1] = CONCAT44((float)((dVar48 + dVar46) * dVar39),
                                      (float)((dVar47 + dVar45) * dVar39));
                *puVar18 = CONCAT44((float)((dVar42 + dVar44) * dVar39),
                                    (float)((dVar41 + dVar43) * dVar39));
                puVar18 = puVar18 + 4;
              } while (uVar20 != 0);
              if (uVar25 == uVar14) goto LAB_0026d3b0;
            }
            lVar17 = lVar30 + uVar25 * 8;
            lVar16 = uVar14 - uVar25;
            pfVar21 = (float *)(lVar15 + local_b8 * 4 + uVar25 * 4);
            do {
              pdVar23 = (double *)(lVar17 + 0x58);
              pdVar2 = (double *)(lVar17 + 0x458);
              lVar16 = lVar16 + -1;
              lVar17 = lVar17 + 8;
              *pfVar21 = (float)(dVar39 * (*pdVar23 + *pdVar2));
              pfVar21 = pfVar21 + 1;
            } while (lVar16 != 0);
          }
LAB_0026d3b0:
          uVar14 = (ulong)*(int *)(param_1 + 0x1c);
          dVar36 = dVar50 + 1.0 / dVar49;
          dVar39 = dVar36 - (double)(long)(double)(long)dVar36;
          dVar50 = dVar39 + 1.0;
          if (0.0 <= dVar39) {
            dVar50 = dVar39;
          }
          lVar15 = (long)(double)(long)(dVar36 - dVar50) * uVar14 + (long)iVar22;
          iVar22 = 0;
          if ((long)iVar28 != 0) {
            iVar22 = (int)(lVar15 / (long)iVar28);
          }
          iVar22 = (int)lVar15 - iVar22 * iVar28;
          *(ulong *)(lVar30 + 0x20) = local_b8 + uVar14;
          *(int *)(lVar30 + 0x48) = iVar22;
        } while ((long)(local_b8 + uVar14) < lVar19);
        lVar19 = *(long *)(lVar30 + 0x10);
        lVar15 = (long)*(int *)(param_1 + 0x1c);
        lVar30 = *(long *)(lVar30 + 0x20);
      }
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = lVar19 / lVar15;
      }
      uVar13 = 0;
      *(double *)(param_1 + 8) = dVar49;
      *(double *)(param_1 + 0x10) = dVar50;
      lVar19 = 0;
      if (lVar15 != 0) {
        lVar19 = lVar30 / lVar15;
      }
      *(long *)(param_2 + 0x20) = lVar17;
      *(long *)(param_2 + 0x28) = lVar19;
    }
  }
  return uVar13;
}



// === FUN_0026d8d0 @ 0026d8d0 ===

char * FUN_0026d8d0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "ZOH Interpolator";
  if (param_1 != 3) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// === FUN_0026d8e4 @ 0026d8e4 ===

char * FUN_0026d8e4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Zero order hold interpolator, very fast, poor quality.";
  if (param_1 != 3) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// === FUN_0026d8f8 @ 0026d8f8 ===

undefined8 * FUN_0026d8f8(int param_1,undefined4 *param_2)

{
  undefined8 *__ptr;
  undefined4 *__ptr_00;
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  __ptr = (undefined8 *)calloc(1,0x50);
  if (__ptr == (undefined8 *)0x0) {
LAB_0026d97c:
    *param_2 = uVar2;
    return __ptr;
  }
  *(int *)((long)__ptr + 0x1c) = param_1;
  __ptr_00 = (undefined4 *)calloc(1,0x30);
  if (__ptr_00 != (undefined4 *)0x0) {
    *__ptr_00 = 0x6f70a93;
    pvVar1 = calloc((long)param_1,4);
    *(void **)(__ptr_00 + 10) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = 0;
      __ptr[9] = __ptr_00;
      *__ptr = &PTR_FUN_002763b8;
      goto LAB_0026d97c;
    }
    free(__ptr_00);
  }
  free(__ptr);
  *param_2 = 1;
  return (undefined8 *)0x0;
}



// === FUN_0026d9c4 @ 0026d9c4 ===

void FUN_0026d9c4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined1 *)(lVar2 + 4) = 0;
    memset(*(void **)(lVar2 + 0x28),0,(long)iVar1 << 2);
    return;
  }
  return;
}



// === FUN_0026d9e8 @ 0026d9e8 ===

undefined4 FUN_0026d9e8(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar9 = param_2[2];
  if (lVar9 < 1) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x48);
  if (lVar12 == 0) {
    return 5;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  lVar10 = (long)(int)uVar1;
  uVar11 = (ulong)uVar1;
  if ((*(byte *)(lVar12 + 4) & 1) == 0) {
    if (0 < (int)uVar1) {
      lVar14 = *param_2;
      lVar15 = *(long *)(lVar12 + 0x28);
      uVar16 = 0;
      if ((7 < uVar1) && (0x1f < (ulong)(lVar15 - lVar14))) {
        uVar16 = uVar11 & 0x7ffffff8;
        puVar4 = (undefined8 *)(lVar14 + 0x10);
        puVar8 = (undefined8 *)(lVar15 + 0x10);
        uVar5 = uVar16;
        do {
          puVar2 = puVar4 + -1;
          uVar20 = puVar4[-2];
          uVar24 = puVar4[1];
          uVar22 = *puVar4;
          uVar5 = uVar5 - 8;
          puVar4 = puVar4 + 4;
          puVar8[-1] = *puVar2;
          puVar8[-2] = uVar20;
          puVar8[1] = uVar24;
          *puVar8 = uVar22;
          puVar8 = puVar8 + 4;
        } while (uVar5 != 0);
        if (uVar16 == uVar11) goto LAB_0026da88;
      }
      lVar17 = uVar11 - uVar16;
      puVar6 = (undefined4 *)(lVar14 + uVar16 * 4);
      puVar13 = (undefined4 *)(lVar15 + uVar16 * 4);
      do {
        lVar17 = lVar17 + -1;
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar17 != 0);
    }
LAB_0026da88:
    *(undefined1 *)(lVar12 + 4) = 1;
  }
  lVar9 = lVar9 * lVar10;
  dVar23 = *(double *)(param_1 + 8);
  lVar14 = param_2[3] * lVar10;
  *(long *)(lVar12 + 8) = lVar9;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(long *)(lVar12 + 0x18) = lVar14;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  dVar3 = DAT_00100eb0;
  if (dVar23 < 0.00390625) {
    return 0x16;
  }
  if (dVar23 != 256.0 && dVar23 < 256.0 == NAN(dVar23)) {
    return 0x16;
  }
  dVar25 = *(double *)(param_1 + 0x10);
  lVar15 = 0;
  dVar21 = dVar23;
  if (dVar25 < 1.0) {
    uVar16 = uVar11 & 0x7ffffff8;
    do {
      if ((lVar14 <= lVar15) ||
         (dVar27 = (double)NEON_fmadd((double)(int)uVar1,dVar25,0),
         dVar27 < (double)lVar9 == (NAN(dVar27) || NAN((double)lVar9)))) break;
      if (0 < lVar14) {
        dVar27 = ABS(dVar23 - (double)param_2[7]);
        if (dVar27 != dVar3 && dVar27 < dVar3 == (NAN(dVar27) || NAN(dVar3))) {
          dVar21 = dVar23 + (((double)param_2[7] - dVar23) * (double)lVar15) / (double)lVar14;
        }
      }
      if (0 < (int)uVar1) {
        lVar18 = *(long *)(lVar12 + 0x28);
        lVar17 = param_2[1];
        if ((uVar1 < 8) || (lVar19 = lVar15 * 4, (ulong)((lVar19 + lVar17) - lVar18) < 0x20)) {
          uVar5 = 0;
LAB_0026db88:
          lVar19 = uVar11 - uVar5;
          puVar6 = (undefined4 *)(lVar18 + uVar5 * 4);
          do {
            lVar19 = lVar19 + -1;
            *(undefined4 *)(lVar17 + lVar15 * 4) = *puVar6;
            lVar15 = lVar15 + 1;
            puVar6 = puVar6 + 1;
          } while (lVar19 != 0);
        }
        else {
          lVar15 = lVar15 + uVar16;
          puVar4 = (undefined8 *)(lVar18 + 0x10);
          puVar8 = (undefined8 *)(lVar17 + lVar19 + 0x10);
          uVar5 = uVar16;
          do {
            puVar2 = puVar4 + -1;
            uVar20 = puVar4[-2];
            uVar24 = puVar4[1];
            uVar22 = *puVar4;
            uVar5 = uVar5 - 8;
            puVar4 = puVar4 + 4;
            puVar8[-1] = *puVar2;
            puVar8[-2] = uVar20;
            puVar8[1] = uVar24;
            *puVar8 = uVar22;
            puVar8 = puVar8 + 4;
          } while (uVar5 != 0);
          uVar5 = uVar16;
          if (uVar16 != uVar11) goto LAB_0026db88;
        }
        *(long *)(lVar12 + 0x20) = lVar15;
      }
      dVar25 = dVar25 + 1.0 / dVar21;
    } while (dVar25 < 1.0);
  }
  dVar3 = DAT_00100eb0;
  dVar26 = dVar25 - (double)(long)(double)(long)dVar25;
  dVar27 = dVar26 + 1.0;
  if (0.0 <= dVar26) {
    dVar27 = dVar26;
  }
  lVar17 = (long)(double)(long)(dVar25 - dVar27) * lVar10;
  if (lVar15 < lVar14) {
    uVar16 = uVar11 & 0x7ffffff8;
    do {
      dVar25 = (double)NEON_fmadd((double)(int)uVar1,dVar27,(double)lVar17);
      if ((double)lVar9 < dVar25) break;
      if (0 < lVar14) {
        dVar25 = ABS(dVar23 - (double)param_2[7]);
        if (dVar25 != dVar3 && dVar25 < dVar3 == (NAN(dVar25) || NAN(dVar3))) {
          dVar21 = dVar23 + (((double)param_2[7] - dVar23) * (double)lVar15) / (double)lVar14;
        }
      }
      if (0 < (int)uVar1) {
        lVar18 = *param_2;
        lVar19 = param_2[1];
        if (uVar1 < 8) {
LAB_0026dd08:
          uVar5 = 0;
LAB_0026dd0c:
          lVar7 = uVar11 - uVar5;
          puVar6 = (undefined4 *)(lVar18 + lVar10 * -4 + uVar5 * 4 + lVar17 * 4);
          do {
            lVar7 = lVar7 + -1;
            *(undefined4 *)(lVar19 + lVar15 * 4) = *puVar6;
            lVar15 = lVar15 + 1;
            puVar6 = puVar6 + 1;
          } while (lVar7 != 0);
        }
        else {
          lVar7 = lVar15 * 4;
          if ((ulong)((lVar7 + lVar19) - (lVar18 + lVar10 * -4 + lVar17 * 4)) < 0x20)
          goto LAB_0026dd08;
          lVar15 = lVar15 + uVar16;
          puVar4 = (undefined8 *)(lVar19 + lVar7 + 0x10);
          puVar8 = (undefined8 *)(lVar18 + lVar10 * -4 + 0x10 + lVar17 * 4);
          uVar5 = uVar16;
          do {
            puVar2 = puVar8 + -1;
            uVar20 = puVar8[-2];
            uVar24 = puVar8[1];
            uVar22 = *puVar8;
            uVar5 = uVar5 - 8;
            puVar8 = puVar8 + 4;
            puVar4[-1] = *puVar2;
            puVar4[-2] = uVar20;
            puVar4[1] = uVar24;
            *puVar4 = uVar22;
            puVar4 = puVar4 + 4;
          } while (uVar5 != 0);
          uVar5 = uVar16;
          if (uVar16 != uVar11) goto LAB_0026dd0c;
        }
        *(long *)(lVar12 + 0x20) = lVar15;
      }
      dVar26 = dVar27 + 1.0 / dVar21;
      dVar25 = dVar26 - (double)(long)(double)(long)dVar26;
      dVar27 = dVar25 + 1.0;
      if (0.0 <= dVar25) {
        dVar27 = dVar25;
      }
      lVar17 = lVar17 + (long)(double)(long)(dVar26 - dVar27) * lVar10;
    } while (lVar15 < lVar14);
  }
  if (lVar17 - lVar9 != 0 && lVar9 <= lVar17) {
    lVar14 = 0;
    if (lVar10 != 0) {
      lVar14 = (lVar17 - lVar9) / lVar10;
    }
    dVar27 = dVar27 + (double)lVar14;
    lVar17 = lVar9;
  }
  *(long *)(lVar12 + 0x10) = lVar17;
  *(double *)(param_1 + 0x10) = dVar27;
  if ((0 < lVar17) && (0 < (int)uVar1)) {
    lVar9 = *param_2;
    lVar12 = *(long *)(lVar12 + 0x28);
    if ((uVar1 < 0xc) || ((ulong)((lVar10 * 4 - (lVar17 * 4 + lVar9)) + lVar12) < 0x20)) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar11 & 0x7ffffff8;
      puVar4 = (undefined8 *)(lVar12 + 0x10);
      puVar8 = (undefined8 *)(lVar17 * 4 + lVar10 * -4 + lVar9 + 0x10);
      uVar5 = uVar16;
      do {
        puVar2 = puVar8 + -1;
        uVar20 = puVar8[-2];
        uVar24 = puVar8[1];
        uVar22 = *puVar8;
        uVar5 = uVar5 - 8;
        puVar8 = puVar8 + 4;
        puVar4[-1] = *puVar2;
        puVar4[-2] = uVar20;
        puVar4[1] = uVar24;
        *puVar4 = uVar22;
        puVar4 = puVar4 + 4;
      } while (uVar5 != 0);
      if (uVar16 == uVar11) goto LAB_0026de00;
    }
    lVar14 = uVar11 - uVar16;
    puVar6 = (undefined4 *)(lVar9 + uVar16 * 4 + lVar17 * 4 + lVar10 * -4);
    puVar13 = (undefined4 *)(lVar12 + uVar16 * 4);
    do {
      lVar14 = lVar14 + -1;
      *puVar13 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar14 != 0);
  }
LAB_0026de00:
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar9 = lVar17 / lVar10;
  }
  *(double *)(param_1 + 8) = dVar21;
  lVar12 = 0;
  if (lVar10 != 0) {
    lVar12 = lVar15 / lVar10;
  }
  param_2[4] = lVar9;
  param_2[5] = lVar12;
  return 0;
}



// === FUN_0026de5c @ 0026de5c ===

undefined8 * FUN_0026de5c(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  void *__dest;
  size_t __size;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  __ptr = (undefined8 *)calloc(1,0x50);
  if (__ptr != (undefined8 *)0x0) {
    uVar2 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    uVar7 = param_1[9];
    uVar6 = param_1[8];
    __ptr[5] = param_1[5];
    __ptr[4] = uVar2;
    __ptr[7] = uVar4;
    __ptr[6] = uVar3;
    uVar5 = param_1[1];
    uVar4 = *param_1;
    uVar3 = param_1[3];
    uVar2 = param_1[2];
    __ptr[9] = uVar7;
    __ptr[8] = uVar6;
    __ptr[1] = uVar5;
    *__ptr = uVar4;
    __ptr[3] = uVar3;
    __ptr[2] = uVar2;
    __ptr_00 = (undefined8 *)calloc(1,0x30);
    if (__ptr_00 == (undefined8 *)0x0) {
      free(__ptr);
      return (undefined8 *)0x0;
    }
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    uVar3 = puVar1[3];
    uVar2 = puVar1[2];
    __size = (long)*(int *)((long)param_1 + 0x1c) << 2;
    __ptr_00[4] = puVar1[4];
    __ptr_00[1] = uVar5;
    *__ptr_00 = uVar4;
    __ptr_00[3] = uVar3;
    __ptr_00[2] = uVar2;
    __dest = malloc(__size);
    __ptr_00[5] = __dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      free(__ptr_00);
      return (undefined8 *)0x0;
    }
    memcpy(__dest,(void *)puVar1[5],__size);
    __ptr[9] = __ptr_00;
  }
  return __ptr;
}



// === FUN_0026df58 @ 0026df58 ===

void FUN_0026df58(void *param_1)

{
  void *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(void **)((long)param_1 + 0x48);
    if (__ptr != (void *)0x0) {
      if (*(void **)((long)__ptr + 0x28) != (void *)0x0) {
        free(*(void **)((long)__ptr + 0x28));
      }
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}



// === FUN_0026dfa0 @ 0026dfa0 ===

void FUN_0026dfa0(void)

{
  (*(code *)PTR_00272268)();
  return;
}



