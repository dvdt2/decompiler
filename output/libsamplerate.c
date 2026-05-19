// Decompiled by Ghidra: libsamplerate.so

// === _FINI_1 @ 0026a9a4 ===

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00272070);
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



