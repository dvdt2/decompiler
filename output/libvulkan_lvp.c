// Decompiled by Ghidra: libvulkan_lvp.so

// === _FINI_1 @ 00a251e0 ===

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00d1e270);
  return;
}



// === vk_icdNegotiateLoaderICDInterfaceVersion @ 00a8c81c ===

undefined8 vk_icdNegotiateLoaderICDInterfaceVersion(uint *param_1)

{
  if (*param_1 <= DAT_00d747b0) {
    DAT_00d747b0 = *param_1;
  }
  *param_1 = DAT_00d747b0;
  return 0;
}



// === vk_icdGetPhysicalDeviceProcAddr @ 00a8c844 ===

void vk_icdGetPhysicalDeviceProcAddr(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a8c9d4();
  FUN_00a8c8d0(uVar1,param_2);
  return;
}



// === ddebug_screen_create @ 00b0fb30 ===

byte * ddebug_screen_create(byte *param_1)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  byte *__s1;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  size_t __size;
  FILE *__s;
  long lVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_78;
  undefined4 local_74;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_74 = 1000;
  local_78 = 0;
  __s1 = (byte *)FUN_00ae2d00("GALLIUM_DDEBUG",0);
  pbVar9 = param_1;
  if (__s1 == (byte *)0x0) {
LAB_00b0fcc8:
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return pbVar9;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1);
  }
  iVar6 = strcmp((char *)__s1,"help");
  if (iVar6 == 0) {
    iVar6 = puts("Gallium driver debugger");
    FUN_00b10700(iVar6);
    iVar6 = puts("Usage:");
    FUN_00b10700(iVar6);
    puts(
        "  GALLIUM_DDEBUG=\"[<timeout in ms>] [(always|apitrace <call#)] [flush] [transfers] [verbose]\""
        );
    iVar6 = puts("  GALLIUM_DDEBUG_SKIP=[count]");
    FUN_00b10700(iVar6);
    puts("Dump context and driver information of draw calls into");
    puts("$HOME/ddebug_dumps/. By default, watch for GPU hangs and only dump information");
    iVar6 = puts("about draw calls related to the hang.");
    FUN_00b10700(iVar6);
    puts("<timeout in ms>");
    puts("  Change the default timeout for GPU hang detection (default=1000ms).");
    iVar6 = puts("  Setting this to 0 will disable GPU hang detection entirely.");
    FUN_00b10700(iVar6);
    puts("always");
    iVar6 = puts("  Dump information about all draw calls.");
    FUN_00b10700(iVar6);
    puts("transfers");
    iVar6 = puts("  Also dump and do hang detection on transfers.");
    FUN_00b10700(iVar6);
    puts("apitrace <call#>");
    puts("  Dump information about the draw call corresponding to the given");
    iVar6 = puts("  apitrace call number and exit.");
    FUN_00b10700(iVar6);
    puts("flush");
    iVar6 = puts("  Flush after every draw call.");
    FUN_00b10700(iVar6);
    puts("verbose");
    iVar6 = puts("  Write additional information to stderr.");
    FUN_00b10700(iVar6);
    puts("GALLIUM_DDEBUG_SKIP=count");
    iVar6 = puts("  Skip dumping on the first count draw calls (only relevant with \'always\').");
    FUN_00b10700(iVar6);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  bVar14 = 0;
  bVar13 = 0;
  iVar6 = 0;
  bVar4 = 0;
  local_70 = __s1;
LAB_00b0fbd4:
  for (; bVar2 = *local_70, bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0;
      local_70 = local_70 + 1) {
  }
  if (bVar2 == 0) {
    pbVar9 = (byte *)calloc(1,0x8b8);
    __s1 = pbVar9;
    if (pbVar9 != (byte *)0x0) {
      *(code **)(pbVar9 + 0x650) = FUN_00b103ec;
      lVar11 = *(long *)(param_1 + 0x768);
      *(code **)(pbVar9 + 0x658) = FUN_00b10414;
      *(code **)(pbVar9 + 0x660) = FUN_00b10420;
      *(code **)(pbVar9 + 0x668) = FUN_00b1042c;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b10438;
      }
      lVar11 = *(long *)(param_1 + 0x688);
      *(code **)(pbVar9 + 0x768) = pcVar1;
      *(code **)(pbVar9 + 0x760) = FUN_00b10444;
      lVar12 = *(long *)(param_1 + 0x6b8);
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b10450;
      }
      *(code **)(pbVar9 + 0x688) = pcVar1;
      *(code **)(pbVar9 + 0x698) = FUN_00b1045c;
      *(code **)(pbVar9 + 0x6a8) = FUN_00b1048c;
      lVar11 = *(long *)(param_1 + 0x790);
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10498;
      }
      *(code **)(pbVar9 + 0x6b8) = pcVar1;
      *(code **)(pbVar9 + 0x6c0) = FUN_00b104a4;
      *(code **)(pbVar9 + 0x770) = FUN_00b104d0;
      *(code **)(pbVar9 + 0x778) = FUN_00b104fc;
      *(code **)(pbVar9 + 0x6d8) = FUN_00b10508;
      lVar12 = *(long *)(param_1 + 0x6e0);
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b10534;
      }
      lVar11 = *(long *)(param_1 + 0x6e8);
      *(code **)(pbVar9 + 0x790) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10560;
      }
      *(code **)(pbVar9 + 0x6e0) = pcVar1;
      lVar12 = *(long *)(param_1 + 0x700);
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b1058c;
      }
      *(code **)(pbVar9 + 0x6e8) = pcVar1;
      *(code **)(pbVar9 + 0x6f0) = FUN_00b10598;
      lVar11 = *(long *)(param_1 + 0x708);
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b105ac;
      }
      *(code **)(pbVar9 + 0x700) = pcVar1;
      lVar12 = *(long *)(param_1 + 0x718);
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b105c8;
      }
      *(code **)(pbVar9 + 0x708) = pcVar1;
      *(code **)(pbVar9 + 0x710) = FUN_00b105dc;
      lVar11 = *(long *)(param_1 + 0x720);
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b105e8;
      }
      lVar12 = *(long *)(param_1 + 0x730);
      *(code **)(pbVar9 + 0x718) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b105fc;
      }
      lVar11 = *(long *)(param_1 + 0x738);
      *(code **)(pbVar9 + 0x720) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10608;
      }
      lVar12 = *(long *)(param_1 + 0x780);
      *(code **)(pbVar9 + 0x730) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b1061c;
      }
      lVar11 = *(long *)(param_1 + 0x788);
      *(code **)(pbVar9 + 0x738) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10628;
      }
      lVar12 = *(long *)(param_1 + 0x750);
      *(code **)(pbVar9 + 0x780) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b10634;
      }
      lVar11 = *(long *)(param_1 + 0x758);
      *(code **)(pbVar9 + 0x788) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10640;
      }
      lVar12 = *(long *)(param_1 + 0x798);
      *(code **)(pbVar9 + 0x750) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b1064c;
      }
      lVar11 = *(long *)(param_1 + 0x7a0);
      *(code **)(pbVar9 + 0x758) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10658;
      }
      lVar12 = *(long *)(param_1 + 0x7d8);
      *(code **)(pbVar9 + 0x798) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b10664;
      }
      lVar11 = *(long *)(param_1 + 0x838);
      *(code **)(pbVar9 + 0x7a0) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10670;
      }
      lVar12 = *(long *)(param_1 + 0x840);
      *(code **)(pbVar9 + 0x7d8) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b1067c;
      }
      lVar11 = *(long *)(param_1 + 0x848);
      *(code **)(pbVar9 + 0x838) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b10690;
      }
      *(code **)(pbVar9 + 0x840) = pcVar1;
      lVar12 = *(long *)(param_1 + 0x828);
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b106bc;
      }
      *(code **)(pbVar9 + 0x848) = pcVar1;
      *(code **)(pbVar9 + 0x890) = FUN_00b106c8;
      lVar11 = *(long *)(param_1 + 0x830);
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b106dc;
      }
      lVar12 = *(long *)(param_1 + 0x728);
      *(code **)(pbVar9 + 0x828) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar11 != 0) {
        pcVar1 = FUN_00b106e8;
      }
      *(code **)(pbVar9 + 0x830) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar12 != 0) {
        pcVar1 = FUN_00b106f4;
      }
      *(code **)(pbVar9 + 0x728) = pcVar1;
      memcpy(pbVar9 + 0x10,param_1 + 0x10,0x2f8);
      memcpy(pbVar9 + 0x5a8,param_1 + 0x5a8,0x50);
      memcpy(pbVar9 + 0x308,param_1 + 0x308,0x2a0);
      *(byte **)(pbVar9 + 0x898) = param_1;
      uVar16 = *(undefined8 *)(param_1 + 0x600);
      uVar15 = *(undefined8 *)(param_1 + 0x5f8);
      uVar18 = *(undefined8 *)(param_1 + 0x610);
      uVar17 = *(undefined8 *)(param_1 + 0x608);
      *(int *)(pbVar9 + 0x8a4) = iVar6;
      *(undefined8 *)(pbVar9 + 0x600) = uVar16;
      *(undefined8 *)(pbVar9 + 0x5f8) = uVar15;
      *(undefined8 *)(pbVar9 + 0x610) = uVar18;
      *(undefined8 *)(pbVar9 + 0x608) = uVar17;
      uVar18 = *(undefined8 *)(param_1 + 0x620);
      uVar17 = *(undefined8 *)(param_1 + 0x618);
      uVar16 = *(undefined8 *)(param_1 + 0x630);
      uVar15 = *(undefined8 *)(param_1 + 0x628);
      *(undefined4 *)(pbVar9 + 0x8a0) = local_74;
      *(undefined8 *)(pbVar9 + 0x620) = uVar18;
      *(undefined8 *)(pbVar9 + 0x618) = uVar17;
      *(undefined8 *)(pbVar9 + 0x630) = uVar16;
      *(undefined8 *)(pbVar9 + 0x628) = uVar15;
      pbVar9[0x8a8] = bVar14;
      puVar5 = PTR_stderr_00d6c450;
      pbVar9[0x8a9] = bVar13;
      __s = *(FILE **)puVar5;
      *(undefined4 *)(pbVar9 + 0x8b0) = local_78;
      pbVar9[0x8aa] = bVar4;
      if (iVar6 == 2) {
        pcVar10 = "Gallium debugger active. Going to dump an apitrace call.\n";
        __size = 0x39;
      }
      else if (iVar6 == 1) {
        pcVar10 = "Gallium debugger active. Logging all calls.\n";
        __size = 0x2c;
      }
      else {
        pcVar10 = "Gallium debugger active.\n";
        __size = 0x19;
      }
      fwrite(pcVar10,__size,1,__s);
      if (*(int *)(pbVar9 + 0x8a0) == 0) {
        fwrite("Hang detection is disabled.\n",0x1c,1,*(FILE **)puVar5);
      }
      else {
        fprintf(*(FILE **)puVar5,"Hang detection timeout is %ums.\n");
      }
      __s1 = (byte *)FUN_00ae2e54("GALLIUM_DDEBUG_SKIP",0);
      *(int *)(pbVar9 + 0x8ac) = (int)__s1;
      if ((int)__s1 != 0) {
        uVar7 = fprintf(*(FILE **)puVar5,"Gallium debugger skipping the first %u draw calls.\n");
        __s1 = (byte *)(ulong)uVar7;
      }
    }
    goto LAB_00b0fcc8;
  }
  uVar8 = FUN_00b102b8(&local_70,"always");
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_00b102b8(&local_70,"flush");
    if ((uVar8 & 1) != 0) {
      bVar14 = 1;
      goto LAB_00b0fbd4;
    }
    uVar8 = FUN_00b102b8(&local_70,"transfers");
    if ((uVar8 & 1) != 0) {
      bVar13 = 1;
      goto LAB_00b0fbd4;
    }
    uVar8 = FUN_00b102b8(&local_70,"verbose");
    if ((uVar8 & 1) != 0) {
      bVar4 = 1;
      goto LAB_00b0fbd4;
    }
    uVar8 = FUN_00b102b8(&local_70,"apitrace");
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_00b1033c(&local_70,&local_74);
      if ((uVar8 & 1) == 0) {
        printf("ddebug: bad options: %s\n",local_70);
LAB_00b10138:
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      goto LAB_00b0fbd4;
    }
    if (iVar6 != 0) {
      pcVar10 = "ddebug: \'apitrace\' can only appear once and not mixed with \'always\'";
      goto LAB_00b10134;
    }
    uVar8 = FUN_00b1033c(&local_70,&local_78);
    if ((uVar8 & 1) != 0) {
      iVar6 = 2;
      goto LAB_00b0fbd4;
    }
    pcVar10 = "ddebug: expected call number after \'apitrace\'";
  }
  else {
    if (iVar6 != 2) {
      iVar6 = 1;
      goto LAB_00b0fbd4;
    }
    pcVar10 = "ddebug: both \'always\' and \'apitrace\' specified";
  }
LAB_00b10134:
  puts(pcVar10);
  goto LAB_00b10138;
}



// === noop_screen_create @ 00b161f8 ===

void * noop_screen_create(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_00d78934 & 1) == 0) {
    uVar3 = FUN_00ae2d80("GALLIUM_NOOP",0);
    uVar1 = FUN_00ae2c14(uVar3,0);
    DAT_00d78938 = uVar1 & 1;
    DAT_00d78934 = 1;
    uVar1 = uVar1 & 1;
  }
  else {
    uVar1 = DAT_00d78938 & 1;
  }
  pvVar2 = param_1;
  if ((uVar1 != 0) && (pvVar2 = calloc(1,0x8b0), pvVar2 != (void *)0x0)) {
    *(code **)((long)pvVar2 + 0x650) = FUN_00b164a8;
    *(code **)((long)pvVar2 + 0x6f0) = FUN_00b168e0;
    *(code **)((long)pvVar2 + 0x658) = FUN_00b164d8;
    *(code **)((long)pvVar2 + 0x660) = FUN_00b164e4;
    *(code **)((long)pvVar2 + 0x668) = FUN_00b164f0;
    *(code **)((long)pvVar2 + 0x6a8) = FUN_00b164fc;
    *(code **)((long)pvVar2 + 0x698) = FUN_00b16508;
    *(code **)((long)pvVar2 + 0x6c0) = FUN_00b16740;
    *(code **)((long)pvVar2 + 0x6d8) = FUN_00b16890;
    lVar4 = *(long *)((long)param_1 + 0x700);
    *(void **)((long)pvVar2 + 0x898) = param_1;
    if (lVar4 != 0) {
      *(code **)((long)pvVar2 + 0x700) = FUN_00b16980;
    }
    *(code **)((long)pvVar2 + 0x710) = FUN_00b16a38;
    *(code **)((long)pvVar2 + 0x840) = FUN_00b16b84;
    *(code **)((long)pvVar2 + 0x718) = FUN_00b16a64;
    *(code **)((long)pvVar2 + 0x848) = FUN_00b16c04;
    *(code **)((long)pvVar2 + 0x688) = FUN_00b16a68;
    *(code **)((long)pvVar2 + 0x720) = FUN_00b16a70;
    *(code **)((long)pvVar2 + 0x730) = thunk_FUN_00b16fb4;
    *(code **)((long)pvVar2 + 0x760) = FUN_00b16ab0;
    *(code **)((long)pvVar2 + 0x768) = FUN_00b16abc;
    *(code **)((long)pvVar2 + 0x7d8) = FUN_00b16ac8;
    *(code **)((long)pvVar2 + 0x6e8) = thunk_FUN_00b16fb4;
    *(code **)((long)pvVar2 + 0x7b8) = FUN_00b16ad8;
    *(code **)((long)pvVar2 + 0x7c0) = thunk_FUN_00b16fb4;
    *(code **)((long)pvVar2 + 0x828) = FUN_00b16ae0;
    *(code **)((long)pvVar2 + 0x830) = FUN_00b16aec;
    *(code **)((long)pvVar2 + 0x798) = FUN_00b16af8;
    *(code **)((long)pvVar2 + 0x7a0) = FUN_00b16b04;
    *(code **)((long)pvVar2 + 0x7a8) = FUN_00b16b10;
    *(code **)((long)pvVar2 + 0x7b0) = FUN_00b16b1c;
    *(code **)((long)pvVar2 + 0x778) = FUN_00b16b28;
    *(code **)((long)pvVar2 + 0x770) = FUN_00b16b34;
    if (*(long *)((long)param_1 + 0x838) != 0) {
      *(code **)((long)pvVar2 + 0x838) = FUN_00b16c44;
    }
    *(code **)((long)pvVar2 + 0x860) = FUN_00b16c58;
    lVar4 = *(long *)((long)param_1 + 0x728);
    *(code **)((long)pvVar2 + 0x868) = FUN_00b16c70;
    *(code **)((long)pvVar2 + 0x890) = FUN_00b16c88;
    if (lVar4 != 0) {
      *(code **)((long)pvVar2 + 0x728) = FUN_00b16c9c;
    }
    memcpy((void *)((long)pvVar2 + 0x10),(void *)((long)param_1 + 0x10),0x2f8);
    memcpy((void *)((long)pvVar2 + 0x5a8),(void *)((long)param_1 + 0x5a8),0x50);
    memcpy((void *)((long)pvVar2 + 0x308),(void *)((long)param_1 + 0x308),0x2a0);
    uVar3 = *(undefined8 *)((long)param_1 + 0x5f8);
    uVar6 = *(undefined8 *)((long)param_1 + 0x610);
    uVar5 = *(undefined8 *)((long)param_1 + 0x608);
    *(undefined8 *)((long)pvVar2 + 0x600) = *(undefined8 *)((long)param_1 + 0x600);
    *(undefined8 *)((long)pvVar2 + 0x5f8) = uVar3;
    *(undefined8 *)((long)pvVar2 + 0x610) = uVar6;
    *(undefined8 *)((long)pvVar2 + 0x608) = uVar5;
    uVar3 = *(undefined8 *)((long)param_1 + 0x618);
    uVar6 = *(undefined8 *)((long)param_1 + 0x630);
    uVar5 = *(undefined8 *)((long)param_1 + 0x628);
    *(undefined8 *)((long)pvVar2 + 0x620) = *(undefined8 *)((long)param_1 + 0x620);
    *(undefined8 *)((long)pvVar2 + 0x618) = uVar3;
    *(undefined8 *)((long)pvVar2 + 0x630) = uVar6;
    *(undefined8 *)((long)pvVar2 + 0x628) = uVar5;
    FUN_00b17020((long)pvVar2 + 0x8a0,0x38,0x40);
  }
  return pvVar2;
}



// === trace_screen_create @ 00b18d8c ===

void trace_screen_create(void *param_1)

{
  code *pcVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pcVar5 = (char *)FUN_00ae2d00("MESA_LOADER_DRIVER_OVERRIDE",0);
  if ((pcVar5 != (char *)0x0) && (iVar4 = strcmp(pcVar5,"zink"), iVar4 == 0)) {
    uVar6 = FUN_00ae2db0("ZINK_TRACE_LAVAPIPE",0);
    pcVar5 = (char *)FUN_00b1b494(*(undefined8 *)((long)param_1 + 0x658));
    iVar4 = strncmp(pcVar5,"zink",4);
    if (iVar4 == 0) {
      if ((uVar6 & 1) != 0) goto LAB_00b1935c;
    }
    else if ((uVar6 & 1) == 0) goto LAB_00b1935c;
  }
  uVar6 = FUN_00b18d48();
  if ((uVar6 & 1) != 0) {
    FUN_00b182e0(&DAT_0016fed1,"pipe_screen_create");
    pvVar7 = calloc(1,0x8b0);
    if (pvVar7 == (void *)0x0) {
      FUN_00b183c4();
      FUN_00b1b3dc();
      FUN_00b18424();
      FUN_00b1830c();
    }
    else {
      lVar9 = *(long *)((long)param_1 + 0x768);
      *(code **)((long)pvVar7 + 0x650) = FUN_00b19388;
      *(code **)((long)pvVar7 + 0x658) = FUN_00b19410;
      *(code **)((long)pvVar7 + 0x660) = FUN_00b19460;
      *(code **)((long)pvVar7 + 0x668) = FUN_00b194b0;
      lVar8 = *(long *)((long)param_1 + 0x678);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b19500;
      }
      *(code **)((long)pvVar7 + 0x768) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x6b0);
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b19550;
      }
      *(code **)((long)pvVar7 + 0x678) = pcVar1;
      *(code **)((long)pvVar7 + 0x6a8) = FUN_00b195ec;
      lVar8 = *(long *)((long)param_1 + 0x698);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b196c4;
      }
      *(code **)((long)pvVar7 + 0x6b0) = pcVar1;
      if (lVar8 == 0) {
        uVar10 = FUN_00b1b6f4();
                    /* WARNING: Subroutine does not return */
        __assert2(uVar10,0x5ca,"struct pipe_screen *trace_screen_create(struct pipe_screen *)",
                  "screen->context_create");
      }
      lVar9 = *(long *)((long)param_1 + 0x770);
      *(code **)((long)pvVar7 + 0x698) = FUN_00b19754;
      *(code **)((long)pvVar7 + 0x6c0) = FUN_00b19828;
      lVar8 = *(long *)((long)param_1 + 0x6c8);
      *(void **)((long)pvVar7 + 0x898) = param_1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b198a4;
      }
      *(code **)((long)pvVar7 + 0x770) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x7f8);
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b19a04;
      }
      *(code **)((long)pvVar7 + 0x6c8) = pcVar1;
      *(code **)((long)pvVar7 + 0x810) = FUN_00b19a98;
      *(code **)((long)pvVar7 + 0x7e0) = FUN_00b19970;
      *(code **)((long)pvVar7 + 0x6d8) = FUN_00b19b4c;
      *(code **)((long)pvVar7 + 0x7e8) = FUN_00b19bec;
      lVar8 = *(long *)((long)param_1 + 0x808);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b19c50;
      }
      *(code **)((long)pvVar7 + 0x7f8) = pcVar1;
      *(code **)((long)pvVar7 + 0x7f0) = FUN_00b19cec;
      lVar9 = *(long *)((long)param_1 + 0x760);
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b19d38;
      }
      *(code **)((long)pvVar7 + 0x808) = pcVar1;
      *(code **)((long)pvVar7 + 0x818) = FUN_00b19d84;
      *(code **)((long)pvVar7 + 0x820) = FUN_00b19de8;
      lVar8 = *(long *)((long)param_1 + 0x778);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b19e34;
      }
      lVar9 = *(long *)((long)param_1 + 0x6a0);
      *(code **)((long)pvVar7 + 0x760) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b19e84;
      }
      lVar8 = *(long *)((long)param_1 + 0x828);
      *(code **)((long)pvVar7 + 0x778) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b19fc0;
      }
      lVar9 = *(long *)((long)param_1 + 0x830);
      *(code **)((long)pvVar7 + 0x6a0) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1a0d8;
      }
      lVar8 = *(long *)((long)param_1 + 0x6e8);
      *(code **)((long)pvVar7 + 0x828) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1a188;
      }
      pcVar2 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar2 = FUN_00b1a208;
      }
      *(code **)((long)pvVar7 + 0x830) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x700);
      *(code **)((long)pvVar7 + 0x6e8) = pcVar2;
      *(code **)((long)pvVar7 + 0x6f0) = FUN_00b1a228;
      lVar8 = *(long *)((long)param_1 + 0x888);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1a2e8;
      }
      lVar9 = *(long *)((long)param_1 + 0x790);
      *(code **)((long)pvVar7 + 0x700) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1a434;
      }
      lVar8 = *(long *)((long)param_1 + 0x708);
      *(code **)((long)pvVar7 + 0x888) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1a498;
      }
      *(code **)((long)pvVar7 + 0x790) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x728);
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1a538;
      }
      *(code **)((long)pvVar7 + 0x708) = pcVar1;
      *(code **)((long)pvVar7 + 0x710) = FUN_00b1a588;
      *(code **)((long)pvVar7 + 0x720) = FUN_00b1a5b0;
      lVar8 = *(long *)((long)param_1 + 0x738);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1a638;
      }
      lVar9 = *(long *)((long)param_1 + 0x748);
      *(code **)((long)pvVar7 + 0x728) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1a680;
      }
      pcVar2 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar2 = FUN_00b1a6f8;
      }
      *(code **)((long)pvVar7 + 0x738) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x780);
      *(code **)((long)pvVar7 + 0x748) = pcVar2;
      *(code **)((long)pvVar7 + 0x730) = FUN_00b1a7c4;
      lVar8 = *(long *)((long)param_1 + 0x788);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1a88c;
      }
      *(code **)((long)pvVar7 + 0x780) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1a90c;
      }
      lVar9 = *(long *)((long)param_1 + 0x798);
      *(code **)((long)pvVar7 + 0x788) = pcVar1;
      *(code **)((long)pvVar7 + 0x718) = FUN_00b1a95c;
      *(code **)((long)pvVar7 + 0x688) = FUN_00b1aa2c;
      lVar8 = *(long *)((long)param_1 + 0x7a0);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1aa7c;
      }
      lVar9 = *(long *)((long)param_1 + 0x7a8);
      *(code **)((long)pvVar7 + 0x798) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1aac8;
      }
      lVar8 = *(long *)((long)param_1 + 0x7b0);
      *(code **)((long)pvVar7 + 0x7a0) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1ab14;
      }
      lVar9 = *(long *)((long)param_1 + 0x7d8);
      *(code **)((long)pvVar7 + 0x7a8) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1ab60;
      }
      lVar8 = *(long *)((long)param_1 + 0x840);
      *(code **)((long)pvVar7 + 0x7b0) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1abb8;
      }
      *(code **)((long)pvVar7 + 0x7d8) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x848);
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1abd8;
      }
      *(code **)((long)pvVar7 + 0x840) = pcVar1;
      uVar10 = *(undefined8 *)((long)param_1 + 0x648);
      lVar8 = *(long *)((long)param_1 + 0x838);
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1ad34;
      }
      *(code **)((long)pvVar7 + 0x848) = pcVar1;
      lVar9 = *(long *)((long)param_1 + 0x7c8);
      *(undefined8 *)((long)pvVar7 + 0x648) = uVar10;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1ad8c;
      }
      lVar8 = *(long *)((long)param_1 + 0x860);
      *(code **)((long)pvVar7 + 0x838) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1af0c;
      }
      lVar9 = *(long *)((long)param_1 + 0x868);
      *(code **)((long)pvVar7 + 0x7c8) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1af88;
      }
      lVar8 = *(long *)((long)param_1 + 0x870);
      *(code **)((long)pvVar7 + 0x860) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1b078;
      }
      lVar9 = *(long *)((long)param_1 + 0x878);
      *(code **)((long)pvVar7 + 0x868) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1b15c;
      }
      lVar8 = *(long *)((long)param_1 + 0x880);
      *(code **)((long)pvVar7 + 0x870) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar9 != 0) {
        pcVar1 = FUN_00b1b1e4;
      }
      *(code **)((long)pvVar7 + 0x878) = pcVar1;
      pcVar1 = (code *)0x0;
      if (lVar8 != 0) {
        pcVar1 = FUN_00b1b240;
      }
      *(code **)((long)pvVar7 + 0x880) = pcVar1;
      *(code **)((long)pvVar7 + 0x890) = FUN_00b1b2c8;
      FUN_00b183c4();
      FUN_00b1b3dc();
      FUN_00b18424();
      FUN_00b1830c();
      if (DAT_00d78d70 == 0) {
        DAT_00d78d70 = FUN_00adb26c(0,PTR_FUN_00d6c498,PTR_FUN_00d6c4a0);
      }
      FUN_00adb76c(DAT_00d78d70,param_1,pvVar7);
      bVar3 = FUN_00ae2db0("GALLIUM_TRACE_TC",0);
      *(byte *)((long)pvVar7 + 0x8a8) = bVar3 & 1;
      memcpy((void *)((long)pvVar7 + 0x10),(void *)((long)param_1 + 0x10),0x2f8);
      memcpy((void *)((long)pvVar7 + 0x5a8),(void *)((long)param_1 + 0x5a8),0x50);
      memcpy((void *)((long)pvVar7 + 0x308),(void *)((long)param_1 + 0x308),0x2a0);
      uVar10 = *(undefined8 *)((long)param_1 + 0x5f8);
      uVar12 = *(undefined8 *)((long)param_1 + 0x610);
      uVar11 = *(undefined8 *)((long)param_1 + 0x608);
      *(undefined8 *)((long)pvVar7 + 0x600) = *(undefined8 *)((long)param_1 + 0x600);
      *(undefined8 *)((long)pvVar7 + 0x5f8) = uVar10;
      *(undefined8 *)((long)pvVar7 + 0x610) = uVar12;
      *(undefined8 *)((long)pvVar7 + 0x608) = uVar11;
      uVar10 = *(undefined8 *)((long)param_1 + 0x618);
      uVar12 = *(undefined8 *)((long)param_1 + 0x630);
      uVar11 = *(undefined8 *)((long)param_1 + 0x628);
      *(undefined8 *)((long)pvVar7 + 0x620) = *(undefined8 *)((long)param_1 + 0x620);
      *(undefined8 *)((long)pvVar7 + 0x618) = uVar10;
      *(undefined8 *)((long)pvVar7 + 0x630) = uVar12;
      *(undefined8 *)((long)pvVar7 + 0x628) = uVar11;
      param_1 = pvVar7;
    }
  }
LAB_00b1935c:
  FUN_00b1b528(param_1);
  return;
}



// === util_run_tests @ 00b3efec ===

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void util_run_tests(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  int __fd;
  int __fd_00;
  int __fd_01;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  code *pcVar18;
  int __fd_02;
  long unaff_x29;
  undefined1 auVar19 [16];
  long local_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  int local_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined3 uStack_1e0;
  undefined5 local_1dd;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  
  lVar8 = FUN_00b40a18();
  plVar9 = (long *)(**(code **)(lVar8 + 0x698))(lVar8,0,0);
  uStack_240 = 0;
  local_248 = 0;
  uStack_250 = 0;
  lStack_258 = 0;
  uVar10 = FUN_00af970c(plVar9,0);
  uVar11 = FUN_00b40870(*plVar9);
  *(undefined8 *)(unaff_x29 + -0x10) = uVar11;
  FUN_00b3ec84(uVar10,plVar9,uVar11);
  local_260 = 0x40000000000;
  FUN_00afa31c(uVar10,&local_260);
  FUN_00b409b4(uVar10);
  uVar11 = FUN_00b415c0(plVar9);
  FUN_00afa49c(uVar10,uVar11);
  uVar12 = (*(code *)plVar9[0xe])(plVar9,6,0);
  FUN_00b40990(plVar9[0x11]);
  FUN_00b3eeec(uVar10);
  FUN_00b40990(plVar9[0x12]);
  (*(code *)plVar9[0x13])(plVar9,uVar12,1,&local_230);
  FUN_00b409c8();
  FUN_00b4099c(plVar9[0x32]);
  (*(code *)plVar9[0x2f])(plVar9,uVar11);
  FUN_00b40984(plVar9[0x10]);
  FUN_00b3ef94(unaff_x29 + -0x10);
  FUN_00b3edb8(local_230 == 2,"disabled_fragment_shader");
  if (*(char *)(*plVar9 + 0x44) == '\x01') {
    uVar10 = FUN_00b40910();
    lVar13 = FUN_00b40870(*plVar9);
    local_260 = lVar13;
    FUN_00b3ec84(uVar10,plVar9,lVar13);
    uVar11 = FUN_00b414c8(plVar9,5,1,1);
    FUN_00afa49c(uVar10,uVar11);
    FUN_00b3ee9c(uVar10,plVar9,1);
    memset((void *)((long)&local_230 + 4),0,0x180);
    local_230 = CONCAT44(local_230._4_4_,2);
    local_230 = CONCAT17(0x18,(undefined7)local_230);
    local_220._0_4_ = CONCAT13(0x18,(undefined3)local_220);
    uStack_228 = CONCAT44(uStack_228._4_4_,0x20);
    uVar6 = (uint)(undefined4)local_220 >> 0x10;
    local_220 = CONCAT62((uint6)(ushort)uVar6,0x10);
    local_220 = CONCAT44(0x20,(undefined4)local_220);
    FUN_00b43658(uVar10,&local_230,&DAT_00d74e18,7,4);
    uVar6 = FUN_00b3ef8c(plVar9,lVar13,*(undefined4 *)(lVar13 + 0x40),*(undefined4 *)(lVar13 + 0x44)
                         ,&DAT_00278b3c);
    FUN_00b409c8();
    FUN_00b40984(plVar9[0x32]);
    FUN_00b4099c(plVar9[0x2f]);
    FUN_00b3ef94(&local_260);
    uVar6 = uVar6 & 1;
  }
  else {
    uVar6 = 0xffffffff;
  }
  FUN_00b3edb8(uVar6,"tgsi_vs_window_space_position");
  FUN_00b3f6e4(plVar9,2);
  FUN_00b3f6e4(plVar9,0);
  FUN_00b3e9e0(plVar9,0);
  lVar13 = *plVar9;
  if (*(char *)(lVar13 + 0x6e) != '\x01') goto LAB_00b3f614;
  uVar10 = FUN_00b40910();
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  local_210 = 0;
  iStack_20c = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  local_1dd = 0;
  uStack_1e8 = 0x5100010001;
  uStack_1d8 = 0;
  local_1f0 = DAT_00202460;
  lVar14 = (**(code **)(lVar13 + 0x6c0))(lVar13,&local_230);
  *(long *)(unaff_x29 + -0x10) = lVar14;
  lVar15 = FUN_00b3eba0(lVar13,0x1000,0x400,0x51,0);
  pcVar18 = (code *)plVar9[0x66];
  uVar4 = *(undefined4 *)(lVar14 + 0x40);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(long *)(unaff_x29 + -0x18) = lVar15;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  uVar11 = (*pcVar18)(plVar9,lVar14,0,uVar4,unaff_x29 + -0x2c,4);
  FUN_00b40904(plVar9[0x68],uVar11,unaff_x29 + -0x20);
  uStack_250 = CONCAT44(uStack_250._4_4_,0x10000);
  lStack_258 = *(long *)(lVar15 + 0x40) << 0x20;
  local_260 = *(long *)(lVar15 + 0x40) << 0x20;
  uVar11 = (*(code *)plVar9[0x65])(plVar9,lVar15,0,&local_260,unaff_x29 + -0x2c);
  FUN_00b40904(plVar9[0x68],uVar11,unaff_x29 + -0x28);
  lVar15 = *(long *)(unaff_x29 + -0x28);
  lVar2 = *(long *)(unaff_x29 + -0x20);
  __fd = (**(code **)(lVar13 + 0x738))(lVar13,lVar2);
  __fd_00 = (**(code **)(lVar13 + 0x738))(lVar13,*(undefined8 *)(unaff_x29 + -0x28));
  uStack_204 = 0;
  iStack_20c = 0;
  uStack_208 = 0;
  uStack_228 = _UNK_00203608;
  local_230 = _DAT_00203600;
  uStack_218 = _UNK_00203618;
  local_220 = _DAT_00203610;
  local_210 = __fd_00;
  do {
    __fd_01 = ioctl(__fd,0xc0303e03,&local_230);
    if (__fd_01 != -1) {
      if (-1 < __fd_01) {
        __fd_01 = iStack_20c;
      }
      goto LAB_00b3f3f4;
    }
    piVar16 = (int *)__errno();
  } while (*piVar16 == 4 || *piVar16 == 0xb);
  __fd_01 = -1;
LAB_00b3f3f4:
  pcVar18 = (code *)plVar9[0x69];
  local_230 = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  (*pcVar18)(plVar9,&local_230,__fd,0);
  (*(code *)plVar9[0x69])(plVar9,unaff_x29 + -0x38,__fd_00,0);
  (*(code *)plVar9[0x69])(plVar9,unaff_x29 + -0x40,__fd_01,0);
  lVar5 = local_230;
  lVar1 = *(long *)(unaff_x29 + -0x40);
  lVar3 = *(long *)(unaff_x29 + -0x38);
  pcVar18 = (code *)plVar9[0x6a];
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  (*pcVar18)(plVar9,lVar1,0);
  pcVar18 = (code *)plVar9[0x66];
  uVar4 = *(undefined4 *)(lVar14 + 0x40);
  *(undefined4 *)(unaff_x29 + -0x2c) = 0xff;
  uVar11 = (*pcVar18)(plVar9,lVar14,0,uVar4,unaff_x29 + -0x2c,4);
  FUN_00b40904(plVar9[0x68],uVar11,unaff_x29 + -0x48);
  lVar14 = *(long *)(unaff_x29 + -0x48);
  uVar17 = (**(code **)(lVar13 + 0x738))(lVar13,lVar14);
  uVar6 = 0;
  __fd_02 = (int)uVar17;
  if ((((-1 < __fd_01 && (((lVar2 != 0 && lVar15 != 0) && -1 < __fd) && -1 < __fd_00)) &&
       (lVar5 != 0)) && (lVar3 != 0)) && ((lVar1 != 0 && (lVar14 != 0)))) {
    if (((-1 < __fd_02) &&
        ((uVar17 = FUN_00b407ac(uVar17 & 0xffffffff,0xffffffff), (int)uVar17 == 0 &&
         (uVar17 = FUN_00b409c0(__fd), (int)uVar17 == 0)))) &&
       (uVar17 = FUN_00b409c0(__fd_00), (int)uVar17 == 0)) {
      auVar19 = FUN_00b409c0(__fd_01);
      uVar17 = auVar19._0_8_;
      if (auVar19._0_4_ == 0) {
        auVar19 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,
                               *(undefined8 *)(unaff_x29 + -0x20));
        uVar17 = auVar19._0_8_;
        if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          auVar19 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,
                                 *(undefined8 *)(unaff_x29 + -0x28));
          uVar17 = auVar19._0_8_;
          if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            auVar19 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,local_230);
            uVar17 = auVar19._0_8_;
            if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              auVar19 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,
                                     *(undefined8 *)(unaff_x29 + -0x38));
              uVar17 = auVar19._0_8_;
              if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                auVar19 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,
                                       *(undefined8 *)(unaff_x29 + -0x40));
                uVar17 = auVar19._0_8_;
                if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                  uVar17 = FUN_00b40888(*(undefined8 *)(lVar13 + 0x730),uVar17,auVar19._8_8_,
                                        *(undefined8 *)(unaff_x29 + -0x48));
                  uVar6 = (uint)uVar17 & 1;
                  goto joined_r0x00b3f6b8;
                }
              }
            }
          }
        }
      }
    }
    uVar6 = 0;
  }
joined_r0x00b3f6b8:
  if (-1 < __fd) {
    uVar7 = close(__fd);
    uVar17 = (ulong)uVar7;
  }
  if (-1 < __fd_00) {
    uVar7 = close(__fd_00);
    uVar17 = (ulong)uVar7;
  }
  if (-1 < __fd_01) {
    uVar7 = close(__fd_01);
    uVar17 = (ulong)uVar7;
  }
  if (-1 < __fd_02) {
    uVar7 = close(__fd_02);
    uVar17 = (ulong)uVar7;
  }
  uVar11 = FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar17,unaff_x29 + -0x20);
  uVar11 = FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar11,unaff_x29 + -0x28);
  uVar11 = FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar11,&local_230);
  uVar11 = FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar11,unaff_x29 + -0x38);
  uVar11 = FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar11,unaff_x29 + -0x40);
  FUN_00b408b0(*(undefined8 *)(lVar13 + 0x720),uVar11,unaff_x29 + -0x48);
  FUN_00afa058(uVar10);
  FUN_00b3ef94(unaff_x29 + -0x10);
  FUN_00b3ef94(unaff_x29 + -0x18);
  FUN_00b3edb8(uVar6,"test_sync_file_fences");
LAB_00b3f614:
  for (uVar6 = 1; uVar6 < 9; uVar6 = uVar6 << 1) {
    FUN_00b3f880(plVar9,0,uVar6);
  }
  for (uVar6 = 1; uVar6 < 9; uVar6 = uVar6 << 1) {
    FUN_00b3f880(plVar9,1,uVar6);
  }
  FUN_00b409a8();
  uVar10 = (**(code **)(lVar8 + 0x698))(lVar8,0,1);
  FUN_00b3fd58();
  FUN_00b3fecc(uVar10);
  FUN_00b3ffe4(uVar10);
  FUN_00b409a8();
  FUN_00b40154(lVar8);
  puts("Done. Exiting..");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



// === ~basic_ostringstream @ 00b71334 ===

/* std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  ~basic_ostringstream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  return;
}



// === ~basic_ostringstream @ 00b71c14 ===

/* std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >::~basic_ostringstream() */

void __thiscall
std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_ostringstream
          (basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
           *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[3];
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_stringbuf((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)(this + 8));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  return;
}



// === ~basic_stringbuf @ 00b71c58 ===

/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::~basic_stringbuf() */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_stringbuf(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this)

{
  *(undefined **)this = PTR_vtable_00d6c7f0 + 0x10;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (this + 0x40));
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)this);
  return;
}



// === reserveAllocationSpace @ 00bc2988 ===

/* llvm::RuntimeDyld::MemoryManager::reserveAllocationSpace(unsigned long, llvm::Align, unsigned
   long, llvm::Align, unsigned long, llvm::Align) */

void llvm::RuntimeDyld::MemoryManager::reserveAllocationSpace(void)

{
  return;
}



// === needsToReserveAllocationSpace @ 00bc298c ===

/* llvm::RuntimeDyld::MemoryManager::needsToReserveAllocationSpace() */

undefined8 llvm::RuntimeDyld::MemoryManager::needsToReserveAllocationSpace(void)

{
  return 0;
}



// === allowStubAllocation @ 00bc2994 ===

/* llvm::RuntimeDyld::MemoryManager::allowStubAllocation() const */

undefined8 llvm::RuntimeDyld::MemoryManager::allowStubAllocation(void)

{
  return 1;
}



// === notifyObjectLoaded @ 00bc2a40 ===

/* llvm::RuntimeDyld::MemoryManager::notifyObjectLoaded(llvm::RuntimeDyld&, llvm::object::ObjectFile
   const&) */

void llvm::RuntimeDyld::MemoryManager::notifyObjectLoaded(RuntimeDyld *param_1,ObjectFile *param_2)

{
  return;
}



// === notifyObjectLoaded @ 00bc2a44 ===

/* llvm::MCJITMemoryManager::notifyObjectLoaded(llvm::ExecutionEngine*, llvm::object::ObjectFile
   const&) */

void llvm::MCJITMemoryManager::notifyObjectLoaded(ExecutionEngine *param_1,ObjectFile *param_2)

{
  return;
}



// === getSymbolAddress @ 00bc2a48 ===

/* llvm::RTDyldMemoryManager::getSymbolAddress(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
llvm::RTDyldMemoryManager::getSymbolAddress(RTDyldMemoryManager *this,basic_string *param_1)

{
  llvm::RTDyldMemoryManager::getSymbolAddressInProcess(param_1);
  return;
}



// === findSymbol @ 00bc2a50 ===

/* llvm::RTDyldMemoryManager::findSymbol(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
llvm::RTDyldMemoryManager::findSymbol(RTDyldMemoryManager *this,basic_string *param_1)

{
  undefined8 uVar1;
  long in_x8;
  
  uVar1 = (**(code **)(*(long *)this + 0x70))();
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x20) = uVar1;
  *(undefined2 *)(in_x8 + 0x28) = 0x1000;
  return;
}



// === getSymbolAddressInLogicalDylib @ 00bc2a84 ===

/* llvm::RTDyldMemoryManager::getSymbolAddressInLogicalDylib(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 llvm::RTDyldMemoryManager::getSymbolAddressInLogicalDylib(basic_string *param_1)

{
  return 0;
}



// === findSymbolInLogicalDylib @ 00bc2a8c ===

/* llvm::RTDyldMemoryManager::findSymbolInLogicalDylib(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
llvm::RTDyldMemoryManager::findSymbolInLogicalDylib(RTDyldMemoryManager *this,basic_string *param_1)

{
  undefined8 uVar1;
  long in_x8;
  
  uVar1 = (**(code **)(*(long *)this + 0x80))();
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x20) = uVar1;
  *(undefined2 *)(in_x8 + 0x28) = 0x1000;
  return;
}



// === allowsZeroSymbols @ 00bc2b64 ===

/* llvm::JITSymbolResolver::allowsZeroSymbols() */

undefined8 llvm::JITSymbolResolver::allowsZeroSymbols(void)

{
  return 0;
}



// === findSymbolInLogicalDylib @ 00bc2b6c ===

/* non-virtual thunk to
   llvm::RTDyldMemoryManager::findSymbolInLogicalDylib(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
llvm::RTDyldMemoryManager::findSymbolInLogicalDylib(RTDyldMemoryManager *this,basic_string *param_1)

{
  undefined8 uVar1;
  long in_x8;
  
  uVar1 = (**(code **)(*(long *)(this + -0x10) + 0x80))();
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x20) = uVar1;
  *(undefined2 *)(in_x8 + 0x28) = 0x1000;
  return;
}



// === findSymbol @ 00bc2ba0 ===

/* non-virtual thunk to llvm::RTDyldMemoryManager::findSymbol(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
llvm::RTDyldMemoryManager::findSymbol(RTDyldMemoryManager *this,basic_string *param_1)

{
  undefined8 uVar1;
  long in_x8;
  
  uVar1 = (**(code **)(*(long *)(this + -0x10) + 0x70))();
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x20) = uVar1;
  *(undefined2 *)(in_x8 + 0x28) = 0x1000;
  return;
}



// === ~ObjectCache @ 00bc2e74 ===

/* llvm::ObjectCache::~ObjectCache() */

void __thiscall llvm::ObjectCache::~ObjectCache(ObjectCache *this)

{
  return;
}



// === _INIT_2 @ 00bc38d8 ===

void _INIT_2(void)

{
  int iVar1;
  
  iVar1 = LLVMIsMultithreaded();
  if (iVar1 != 0) {
    return;
  }
  LLVMStartMultithreaded();
  return;
}



// === spvDiagnosticCreate @ 00cf148c ===

undefined8 * spvDiagnosticCreate(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  sVar2 = strlen(param_2);
  __dest = (char *)operator_new__(sVar2 + 1);
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar3 = param_1[2];
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = __dest;
  memset(__dest,0,sVar2 + 1);
  strcpy(__dest,param_2);
  return puVar1;
}



// === spvDiagnosticDestroy @ 00cf1510 ===

void spvDiagnosticDestroy(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)param_1 + 0x18));
    }
    operator_delete(param_1,0x28);
    return;
  }
  return;
}



// === spvDiagnosticPrint @ 00cf154c ===

undefined8 spvDiagnosticPrint(long *param_1)

{
  long lVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar2;
  undefined8 uVar3;
  undefined *puVar4;
  size_t sVar5;
  char *__s;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffff8;
  }
  lVar1 = param_1[4];
  pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_00cf1dd8(PTR_cerr_00d6cea0,"error: ",7);
  puVar4 = PTR_cerr_00d6cea0;
  if ((char)lVar1 == '\x01') {
    uVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (pbVar2,*param_1 + 1);
    pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             FUN_00cf1dd8(uVar3,&DAT_001eb6d0,2);
    uVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (pbVar2,param_1[1] + 1);
    puVar4 = (undefined *)FUN_00cf1dd8(uVar3,&DAT_001eb6d0,2);
  }
  else if (param_1[2] != 0) {
    uVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)PTR_cerr_00d6cea0,
                       param_1[2]);
    FUN_00cf1dd8(uVar3,&DAT_001eb6d0,2);
  }
  __s = (char *)param_1[3];
  sVar5 = strlen(__s);
  uVar3 = FUN_00cf1dd8(puVar4,__s,sVar5);
  FUN_00cf1dd8(uVar3,&DAT_001bc181,1);
  return 0;
}



// === DiagnosticStream @ 00cf163c ===

/* spvtools::DiagnosticStream::DiagnosticStream(spvtools::DiagnosticStream&&) */

void __thiscall
spvtools::DiagnosticStream::DiagnosticStream(DiagnosticStream *this,DiagnosticStream *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined7 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  DiagnosticStream *pDVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_58;
  undefined7 *local_50;
  long local_48;
  
  puVar5 = PTR_vtable_00d6c7d8;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar2 = *(long *)(PTR_VTT_00d6c7e0 + 8);
  uVar8 = *(undefined8 *)(PTR_VTT_00d6c7e0 + 0x10);
  puVar1 = PTR_vtable_00d6c7d8 + 0x40;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined **)(this + 0x70) = puVar1;
  *(long *)this = lVar2;
  *(undefined8 *)(this + *(long *)(lVar2 + -0x18)) = uVar8;
  pDVar7 = this + *(long *)(*(long *)this + -0x18);
  std::__ndk1::ios_base::init(pDVar7);
  *(undefined8 *)(pDVar7 + 0x88) = 0;
  puVar6 = PTR_vtable_00d6cdf8;
  *(undefined4 *)(pDVar7 + 0x90) = 0xffffffff;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)this = puVar5 + 0x18;
  *(undefined **)(this + 8) = puVar6 + 0x10;
  std::__ndk1::locale::locale((locale *)(this + 0x10));
  *(undefined **)(this + 8) = PTR_vtable_00d6c7f0 + 0x10;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0x10;
  FUN_00cf1ccc(this + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  uVar8 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x118) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(this + 0x110) = uVar9;
  *(undefined8 *)(this + 0x108) = uVar8;
  pDVar7 = *(DiagnosticStream **)(param_1 + 0x140);
  if (pDVar7 == (DiagnosticStream *)0x0) {
    *(undefined8 *)(this + 0x140) = 0;
  }
  else if (pDVar7 == param_1 + 0x120) {
    *(DiagnosticStream **)(this + 0x140) = this + 0x120;
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))();
  }
  else {
    uVar8 = (**(code **)(*(long *)pDVar7 + 0x10))();
    *(undefined8 *)(this + 0x140) = uVar8;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x150);
  uVar8 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(this + 0x158) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(this + 0x150) = uVar9;
  *(undefined8 *)(this + 0x160) = uVar8;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x168) = 4;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  puVar4 = local_50;
  if ((local_60 & 1) == 0) {
    local_58 = (ulong)(local_60 >> 1);
    puVar4 = &uStack_5f;
  }
  FUN_00cf1dd8(this,puVar4,local_58);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ~DiagnosticStream @ 00cf180c ===

/* spvtools::DiagnosticStream::~DiagnosticStream() */

void __thiscall spvtools::DiagnosticStream::~DiagnosticStream(DiagnosticStream *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  DiagnosticStream *pDVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  id local_78;
  undefined7 uStack_77;
  undefined7 *local_68;
  undefined7 *local_60;
  char *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(this + 0x168) != 4) && (*(long *)(this + 0x140) != 0)) {
    uVar1 = *(int *)(this + 0x168) + 6;
    if (uVar1 < 0xc) {
      uVar9 = *(undefined4 *)(&DAT_00928c98 + (ulong)uVar1 * 4);
      uVar2 = (ulong)((byte)this[0x150] >> 1);
      if (((byte)this[0x150] & 1) != 0) {
        uVar2 = *(ulong *)(this + 0x158);
      }
    }
    else {
      uVar9 = 2;
      uVar2 = (ulong)((byte)this[0x150] >> 1);
      if (((byte)this[0x150] & 1) != 0) {
        uVar2 = *(ulong *)(this + 0x158);
      }
    }
    if (uVar2 != 0) {
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet(&local_78);
      (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale((locale *)&local_78);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)this);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar8 = FUN_00cf1dd8(this,&DAT_001c7a43,2);
      uVar2 = (ulong)((byte)this[0x150] >> 1);
      pDVar6 = this + 0x151;
      if (((byte)this[0x150] & 1) != 0) {
        uVar2 = *(ulong *)(this + 0x158);
        pDVar6 = *(DiagnosticStream **)(this + 0x160);
      }
      cVar4 = FUN_00cf1dd8(uVar8,pDVar6,uVar2);
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet(&local_78);
      (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale((locale *)&local_78);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    plVar5 = *(long **)(this + 0x140);
    local_60 = local_68;
    if (((byte)local_78 & 1) == 0) {
      local_60 = &uStack_77;
    }
    local_58 = "input";
    local_4c = uVar9;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf20c8();
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_4c,&local_58,this + 0x108,&local_60);
    if (((byte)local_78 & 1) != 0) {
      operator_delete(local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe);
    }
  }
  if (((byte)this[0x150] & 1) != 0) {
    operator_delete(*(void **)(this + 0x160),*(ulong *)(this + 0x150) & 0xfffffffffffffffe);
  }
  pDVar6 = *(DiagnosticStream **)(this + 0x140);
  if (pDVar6 == this + 0x120) {
    lVar7 = 0x20;
  }
  else {
    if (pDVar6 == (DiagnosticStream *)0x0) goto LAB_00cf1a2c;
    lVar7 = 0x28;
  }
  (**(code **)(*(long *)pDVar6 + lVar7))();
LAB_00cf1a2c:
  lVar7 = *(long *)PTR_VTT_00d6c7e0;
  uVar8 = *(undefined8 *)(PTR_VTT_00d6c7e0 + 0x18);
  *(long *)this = lVar7;
  *(undefined8 *)(this + *(long *)(lVar7 + -0x18)) = uVar8;
  *(undefined **)(this + 8) = PTR_vtable_00d6c7f0 + 0x10;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58),*(ulong *)(this + 0x48) & 0xfffffffffffffffe);
  }
  *(undefined **)(this + 8) = PTR_vtable_00d6cdf8 + 0x10;
  std::__ndk1::locale::~locale((locale *)(this + 0x10));
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x70));
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === UseDiagnosticAsMessageConsumer @ 00cf1acc ===

/* spvtools::UseDiagnosticAsMessageConsumer(spv_context_t*, spv_diagnostic_t**) */

void spvtools::UseDiagnosticAsMessageConsumer(spv_context_t *param_1,spv_diagnostic_t **param_2)

{
  long lVar1;
  long lVar2;
  undefined **local_60;
  spv_diagnostic_t **ppsStack_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_00d6ade8;
  ppsStack_58 = param_2;
  SetContextMessageConsumer(param_1,&local_60);
  if ((undefined ***)local_40 == &local_60) {
    lVar2 = 0x20;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00cf1b2c;
    lVar2 = 0x28;
  }
  (**(code **)(*local_40 + lVar2))();
LAB_00cf1b2c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvResultToString @ 00cf1b50 ===

/* spvtools::spvResultToString(spv_result_t) */

void __thiscall spvtools::spvResultToString(char *param_1,int param_2)

{
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  if (param_2 + 0xcU < 0x12) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_1);
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1);
  return;
}



// === InstructionDisassembler @ 00cf20e0 ===

/* spvtools::disassemble::InstructionDisassembler::InstructionDisassembler(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned int,
   std::__ndk1::function<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > (unsigned int)>) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::InstructionDisassembler
          (InstructionDisassembler *this,undefined8 param_1,uint param_2,long param_4)

{
  long lVar1;
  
  *(undefined8 *)this = param_1;
  this[8] = (InstructionDisassembler)((byte)(param_2 >> 1) & 1);
  this[9] = (InstructionDisassembler)((byte)(param_2 >> 2) & 1);
  this[0x10] = (InstructionDisassembler)((byte)(param_2 >> 8) & 1);
  lVar1 = *(long *)(param_4 + 0x20);
  *(uint *)(this + 0xc) = -(param_2 >> 3 & 1) & 0xf;
  *(uint *)(this + 0x14) = param_2 >> 7 & 1;
  this[0x18] = (InstructionDisassembler)((byte)(param_2 >> 4) & 1);
  if (lVar1 == 0) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    return;
  }
  if (lVar1 != param_4) {
    *(long *)(this + 0x40) = lVar1;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    return;
  }
  *(InstructionDisassembler **)(this + 0x40) = this + 0x20;
  (**(code **)(**(long **)(param_4 + 0x20) + 0x18))(*(long **)(param_4 + 0x20));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}



// === EmitHeaderSpirv @ 00cf21b4 ===

/* spvtools::disassemble::InstructionDisassembler::EmitHeaderSpirv() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitHeaderSpirv(InstructionDisassembler *this)

{
  FUN_00cf1dd8(*(undefined8 *)this,"; SPIR-V\n",9);
  return;
}



// === EmitHeaderVersion @ 00cf21c8 ===

/* spvtools::disassemble::InstructionDisassembler::EmitHeaderVersion(unsigned int) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitHeaderVersion
          (InstructionDisassembler *this,uint param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_00cf1dd8(*(undefined8 *)this,"; Version: ",0xb);
  uVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar1,param_1 >> 0x10 & 0xff);
  pbVar1 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)FUN_00cf1dd8(uVar2,&DAT_001714ea,1)
  ;
  uVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar1,param_1 >> 8 & 0xff);
  FUN_00cf1dd8(uVar2,&DAT_001bc181,1);
  return;
}



// === EmitHeaderGenerator @ 00cf2224 ===

/* spvtools::disassemble::InstructionDisassembler::EmitHeaderGenerator(unsigned int) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitHeaderGenerator
          (InstructionDisassembler *this,uint param_1)

{
  int iVar1;
  char *__s;
  undefined8 uVar2;
  size_t sVar3;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar4;
  
  __s = (char *)spvGeneratorStr(param_1 >> 0x10);
  uVar2 = FUN_00cf1dd8(*(undefined8 *)this,"; Generator: ",0xd);
  sVar3 = strlen(__s);
  FUN_00cf1dd8(uVar2,__s,sVar3);
  iVar1 = strcmp("Unknown",__s);
  if (iVar1 == 0) {
    pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             FUN_00cf1dd8(*(undefined8 *)this,&DAT_001a3ce0,1);
    uVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (pbVar4,param_1 >> 0x10);
    FUN_00cf1dd8(uVar2,&DAT_0018c1fd,1);
  }
  pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_00cf1dd8(*(undefined8 *)this,&DAT_001a3ce2,2);
  uVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar4,param_1 & 0xffff);
  FUN_00cf1dd8(uVar2,&DAT_001bc181,1);
  return;
}



// === EmitHeaderIdBound @ 00cf2300 ===

/* spvtools::disassemble::InstructionDisassembler::EmitHeaderIdBound(unsigned int) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitHeaderIdBound
          (InstructionDisassembler *this,uint param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  undefined8 uVar1;
  
  this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(*(undefined8 *)this,"; Bound: ",9);
  uVar1 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (this_00,param_1);
  FUN_00cf1dd8(uVar1,&DAT_001bc181,1);
  return;
}



// === EmitHeaderSchema @ 00cf2344 ===

/* spvtools::disassemble::InstructionDisassembler::EmitHeaderSchema(unsigned int) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitHeaderSchema
          (InstructionDisassembler *this,uint param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  undefined8 uVar1;
  
  this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(*(undefined8 *)this,"; Schema: ",10);
  uVar1 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (this_00,param_1);
  FUN_00cf1dd8(uVar1,&DAT_001bc181,1);
  return;
}



// === EmitInstruction @ 00cf2388 ===

/* spvtools::disassemble::InstructionDisassembler::EmitInstruction(spv_parsed_instruction_t const&,
   unsigned long) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitInstruction
          (InstructionDisassembler *this,spv_parsed_instruction_t *param_1,ulong param_2)

{
  EmitInstructionImpl(this,param_1,param_2,0,false);
  return;
}



// === EmitInstructionImpl @ 00cf2394 ===

/* WARNING: Type propagation algorithm not settling */
/* spvtools::disassemble::InstructionDisassembler::EmitInstructionImpl(spv_parsed_instruction_t
   const&, unsigned long, unsigned int, bool) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitInstructionImpl
          (InstructionDisassembler *this,spv_parsed_instruction_t *param_1,ulong param_2,
          uint param_3,bool param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  InstructionDisassembler IVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined7 *puVar9;
  uint uVar10;
  long *plVar11;
  char *pcVar12;
  size_t sVar13;
  undefined8 uVar14;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  piecewise_construct_t *ppVar25;
  void *pvVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined1 uVar29;
  byte local_2c8;
  undefined7 uStack_2c7;
  ulong local_2c0;
  undefined7 *local_2b8;
  byte local_2b0;
  undefined7 uStack_2af;
  ulong local_2a8;
  undefined7 *local_2a0;
  undefined8 local_298;
  ulong local_290;
  void *local_288;
  undefined8 local_280;
  undefined *local_278;
  void *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined *local_210 [3];
  undefined8 uStack_1f8;
  uint auStack_1f0 [4];
  undefined8 local_1e0;
  undefined *local_178 [2];
  locale alStack_168 [8];
  ulong local_160 [8];
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar1 = PTR_vtable_00d6c7d8;
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  puVar23 = *(undefined **)(PTR_VTT_00d6c7e0 + 8);
  uVar14 = *(undefined8 *)(PTR_VTT_00d6c7e0 + 0x10);
  puVar27 = PTR_vtable_00d6c7d8 + 0x40;
  local_d8 = 0;
  sVar4 = *(short *)(param_1 + 10);
  local_178[0] = puVar23;
  local_108[0] = puVar27;
  *(undefined8 *)((long)local_178 + *(long *)(puVar23 + -0x18)) = uVar14;
  lVar17 = *(long *)(local_178[0] + -0x18);
  std::__ndk1::ios_base::init((void *)((long)local_178 + lVar17));
  *(undefined8 *)((long)&uStack_f0 + lVar17) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar17) = 0xffffffff;
  local_178[0] = puVar1 + 0x18;
  local_178[1] = PTR_vtable_00d6cdf8 + 0x10;
  local_108[0] = puVar27;
  std::__ndk1::locale::locale(alStack_168);
  local_178[1] = PTR_vtable_00d6c7f0 + 0x10;
  local_160[5] = 0;
  local_160[4] = 0;
  local_160[3] = 0;
  local_160[2] = 0;
  local_160[1] = 0;
  local_160[0] = 0;
  local_160[7] = 0;
  local_160[6] = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  FUN_00cf1ccc(local_178 + 1);
  if ((this[0x10] == (InstructionDisassembler)0x1) && (sVar4 == 0xf8)) {
    uVar24 = *(undefined8 *)this;
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet((id *)&local_280);
    (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_280);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar24);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  }
  ppVar25 = (piecewise_construct_t *)(param_1 + 0x14);
  iVar16 = *(int *)ppVar25;
  if (iVar16 == 0) {
    uVar10 = *(uint *)(this + 0xc);
    puVar27 = (undefined *)(long)(int)uVar10;
    if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94();
    }
    if (uVar10 < 0x17) {
      pvVar26 = (void *)((ulong)&local_280 | 1);
      local_280 = (undefined *)CONCAT71(local_280._1_7_,(char)(uVar10 << 1));
      if (uVar10 != 0) goto LAB_00cf2684;
    }
    else {
      uVar18 = 0x1a;
      if (((ulong)puVar27 | 7) != 0x17) {
        uVar18 = ((ulong)puVar27 | 7) + 1;
      }
      pvVar26 = operator_new(uVar18);
      local_280 = (undefined *)(uVar18 | 1);
      local_278 = puVar27;
      local_270 = pvVar26;
LAB_00cf2684:
      memset(pvVar26,0x20,(size_t)puVar27);
    }
    *(undefined1 *)((long)pvVar26 + (long)puVar27) = 0;
    puVar27 = local_278;
    pvVar26 = local_270;
    if (((ulong)local_280 & 1) == 0) {
      puVar27 = (undefined *)((ulong)local_280 >> 1 & 0x7f);
      pvVar26 = (void *)((long)&local_280 + 1);
    }
    FUN_00cf1dd8(local_178,pvVar26,puVar27);
    if (((ulong)local_280 & 1) != 0) {
      operator_delete(local_270,(ulong)local_280 & 0xfffffffffffffffe);
    }
  }
  else {
    if (this[9] == (InstructionDisassembler)0x1) {
      local_280 = (undefined *)CONCAT71(local_280._1_7_,this[8]);
      pcVar12 = clr::blue::operator_cast_to_char_((blue *)&local_280);
      sVar13 = strlen(pcVar12);
      FUN_00cf1dd8(local_178,pcVar12,sVar13);
      iVar16 = *(int *)ppVar25;
    }
    plVar11 = *(long **)(this + 0x40);
    local_298 = (piecewise_construct_t *)CONCAT44(local_298._4_4_,iVar16);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf20c8();
    }
    (**(code **)(*plVar11 + 0x30))(&local_280,plVar11,&local_298);
    if (*(int *)(this + 0xc) != 0) {
      uVar10 = (uint)((byte)local_280._0_1_ >> 1);
      if (((ulong)local_280 & 1) != 0) {
        uVar10 = (uint)local_278;
      }
      uVar10 = (*(int *)(this + 0xc) - uVar10) - 3;
      *(ulong *)((long)local_160 + *(long *)(local_178[0] + -0x18)) =
           (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
    }
    uVar24 = FUN_00cf1dd8(local_178,&DAT_0015c6b7,1);
    puVar27 = local_278;
    pvVar26 = local_270;
    if (((ulong)local_280 & 1) == 0) {
      puVar27 = (undefined *)((ulong)local_280 >> 1 & 0x7f);
      pvVar26 = (void *)((long)&local_280 + 1);
    }
    FUN_00cf1dd8(uVar24,pvVar26,puVar27);
    if (this[9] == (InstructionDisassembler)0x1) {
      local_298 = (piecewise_construct_t *)CONCAT71(local_298._1_7_,this[8]);
      pcVar12 = clr::reset::operator_cast_to_char_((reset *)&local_298);
      sVar13 = strlen(pcVar12);
      FUN_00cf1dd8(local_178,pcVar12,sVar13);
    }
    FUN_00cf1dd8(local_178,&DAT_001a1dc8,3);
    if (((ulong)local_280 & 1) != 0) {
      operator_delete(local_270,(ulong)local_280 & 0xfffffffffffffffe);
    }
  }
  if ((param_4) && (((byte)this[0x10] & 1) != 0)) {
    uVar10 = (uint)(sVar4 != 0xf8) * 2 + param_3 * 2;
    puVar27 = (undefined *)(ulong)uVar10;
    if (uVar10 < 0x17) {
      pvVar26 = (void *)((ulong)&local_280 | 1);
      local_280._1_7_ = (undefined7)((ulong)local_280 >> 8);
      local_280 = (undefined *)CONCAT71(local_280._1_7_,(char)uVar10 * '\x02');
      if (uVar10 != 0) goto LAB_00cf2740;
    }
    else {
      uVar18 = 0x1a;
      if (((ulong)puVar27 | 7) != 0x17) {
        uVar18 = ((ulong)puVar27 | 7) + 1;
      }
      pvVar26 = operator_new(uVar18);
      local_280 = (undefined *)(uVar18 | 1);
      local_278 = puVar27;
      local_270 = pvVar26;
LAB_00cf2740:
      memset(pvVar26,0x20,(size_t)puVar27);
    }
    *(undefined1 *)((long)pvVar26 + (long)puVar27) = 0;
    puVar27 = local_278;
    pvVar26 = local_270;
    if (((ulong)local_280 & 1) == 0) {
      puVar27 = (undefined *)((ulong)local_280 >> 1 & 0x7f);
      pvVar26 = (void *)((long)&local_280 + 1);
    }
    FUN_00cf1dd8(local_178,pvVar26,puVar27);
    if (((ulong)local_280 & 1) != 0) {
      operator_delete(local_270,(ulong)local_280 & 0xfffffffffffffffe);
    }
  }
  uVar24 = FUN_00cf1dd8(local_178,&DAT_001e9857,2);
  pcVar12 = (char *)spvOpcodeString(sVar4);
  sVar13 = strlen(pcVar12);
  FUN_00cf1dd8(uVar24,pcVar12,sVar13);
  uVar18 = (ulong)*(ushort *)(param_1 + 0x20);
  if (*(ushort *)(param_1 + 0x20) != 0) {
    uVar28 = 0;
    lVar17 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 0x18) + lVar17) != 3) {
        FUN_00cf1dd8(local_178,&DAT_0015427f,1);
        EmitOperand(this,(basic_ostream *)local_178,param_1,(ushort)uVar28);
        uVar18 = (ulong)*(ushort *)(param_1 + 0x20);
      }
      uVar28 = uVar28 + 1;
      lVar17 = lVar17 + 0x14;
    } while (uVar28 < uVar18);
  }
  if (*(int *)(this + 0x14) != 0) {
    GenerateCommentForDecoratedId(this,param_1);
  }
  puVar1 = PTR_vtable_00d6c7d8;
  local_1e0 = 0;
  puVar27 = PTR_vtable_00d6c7d8 + 0x40;
  local_280 = puVar23;
  local_210[0] = puVar27;
  *(undefined8 *)((long)&local_280 + *(long *)(puVar23 + -0x18)) = uVar14;
  lVar17 = *(long *)(local_280 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_280 + lVar17));
  *(undefined8 *)((long)&uStack_1f8 + lVar17) = 0;
  *(undefined4 *)((long)auStack_1f0 + lVar17) = 0xffffffff;
  local_280 = puVar1 + 0x18;
  local_278 = PTR_vtable_00d6cdf8 + 0x10;
  local_210[0] = puVar27;
  std::__ndk1::locale::locale((locale *)&local_270);
  local_278 = PTR_vtable_00d6c7f0 + 0x10;
  uStack_240 = 0;
  local_248 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uStack_230 = 0;
  local_238 = 0;
  uStack_220 = 0;
  local_228 = (void *)0x0;
  local_218 = 0x10;
  FUN_00cf1ccc(&local_278);
  if (this[0x18] == (InstructionDisassembler)0x1) {
    if (this[9] == (InstructionDisassembler)0x1) {
      local_298 = (piecewise_construct_t *)CONCAT71(local_298._1_7_,this[8]);
      pcVar12 = clr::grey::operator_cast_to_char_((grey *)&local_298);
      sVar13 = strlen(pcVar12);
      FUN_00cf1dd8(&local_280,pcVar12,sVar13);
    }
    lVar17 = *(long *)(local_280 + -0x18);
    uVar10 = *(uint *)((long)auStack_1f0 + lVar17);
    uVar2 = *(undefined4 *)((long)&local_278 + lVar17);
    if (uVar10 == 0xffffffff) {
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet((id *)&local_298);
      uVar10 = (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
      std::__ndk1::locale::~locale((locale *)&local_298);
      uVar10 = uVar10 & 0xff;
      *(uint *)((long)auStack_1f0 + lVar17) = uVar10;
    }
    uVar14 = FUN_00cf1dd8(&local_280,&DAT_0016fed1,0);
    pbVar15 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(uVar14,&DAT_0019e0d5,2);
    lVar17 = *(long *)pbVar15;
    *(undefined8 *)(pbVar15 + *(long *)(lVar17 + -0x18) + 0x18) = 8;
    *(uint *)(pbVar15 + *(long *)(lVar17 + -0x18) + 8) =
         *(uint *)(pbVar15 + *(long *)(lVar17 + -0x18) + 8) & 0xffffffb5 | 8;
    lVar17 = *(long *)(lVar17 + -0x18);
    if (*(int *)(pbVar15 + lVar17 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet((id *)&local_298);
      (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
      std::__ndk1::locale::~locale((locale *)&local_298);
    }
    *(undefined4 *)(pbVar15 + lVar17 + 0x90) = 0x30;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar15,param_2);
    *(undefined4 *)((long)&local_278 + *(long *)(local_280 + -0x18)) = uVar2;
    lVar17 = *(long *)(local_280 + -0x18);
    if (*(int *)((long)auStack_1f0 + lVar17) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet((id *)&local_298);
      (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
      std::__ndk1::locale::~locale((locale *)&local_298);
    }
    plVar11 = (long *)PTR_VTT_00d6c7e0;
    IVar3 = this[9];
    *(uint *)((long)auStack_1f0 + lVar17) = uVar10 & 0xff;
    if (IVar3 == (InstructionDisassembler)0x1) {
      local_298 = (piecewise_construct_t *)CONCAT71(local_298._1_7_,this[8]);
      pcVar12 = clr::reset::operator_cast_to_char_((reset *)&local_298);
      sVar13 = strlen(pcVar12);
      FUN_00cf1dd8(&local_280,pcVar12,sVar13);
    }
    pcVar12 = ", ";
    iVar16 = *(int *)(this + 0x14);
  }
  else {
    pcVar12 = "";
    iVar16 = *(int *)(this + 0x14);
    plVar11 = (long *)PTR_VTT_00d6c7e0;
  }
  if ((iVar16 != 0) && (sVar4 == 5)) {
    uVar10 = *(uint *)(*(long *)param_1 + (ulong)**(ushort **)(param_1 + 0x18) * 4);
    sVar13 = strlen(pcVar12);
    uVar14 = FUN_00cf1dd8(&local_280,pcVar12,sVar13);
    pbVar15 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(uVar14,&DAT_0015e1e6,4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar15,uVar10);
    iVar16 = *(int *)(this + 0x14);
    pcVar12 = ", ";
  }
  if (iVar16 != 0) {
    uVar10 = *(uint *)ppVar25;
    uVar18 = (ulong)uVar10;
    if ((uVar10 != 0) && (uVar28 = *(ulong *)(this + 0x58), uVar28 != 0)) {
      uVar14 = NEON_cnt(uVar28,1);
      uVar29 = NEON_addv(uVar14,1);
      uVar22 = CONCAT71((int7)((ulong)uVar14 >> 8),uVar29);
      uVar20 = (uint)uVar28;
      if (uVar22 < 2) {
        uVar19 = (ulong)(uVar20 - 1 & uVar10);
      }
      else {
        uVar19 = uVar18;
        if (uVar28 <= uVar18) {
          uVar6 = 0;
          if (uVar20 != 0) {
            uVar6 = uVar10 / uVar20;
          }
          uVar19 = (ulong)(uVar10 - uVar6 * uVar20);
        }
      }
      plVar21 = *(long **)(*(long *)(this + 0x50) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar21[1] == uVar18) {
              if (*(uint *)(plVar21 + 2) == uVar10) goto LAB_00cf2c60;
            }
            else if ((plVar21[1] & uVar28 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar21[1];
            if (uVar22 == uVar18) {
              if (*(uint *)(plVar21 + 2) == uVar10) goto LAB_00cf2c60;
            }
            else {
              if (uVar28 <= uVar22) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar22 / uVar28;
                }
                uVar22 = uVar22 - uVar7 * uVar28;
              }
              if (uVar22 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_00cf2ce4;
LAB_00cf2c60:
  sVar13 = strlen(pcVar12);
  uVar14 = FUN_00cf1dd8(&local_280,pcVar12,sVar13);
  local_298 = ppVar25;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::
  __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
            ((uint *)(this + 0x50),ppVar25,(tuple *)PTR_DAT_00d6c6c0,(tuple *)&local_298);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar18 = local_290;
  pvVar26 = local_288;
  if (((ulong)local_298 & 1) == 0) {
    uVar18 = (ulong)local_298 >> 1 & 0x7f;
    pvVar26 = (void *)((long)&local_298 + 1);
  }
  FUN_00cf1dd8(uVar14,pvVar26,uVar18);
  if (((ulong)local_298 & 1) != 0) {
    operator_delete(local_288,(ulong)local_298 & 0xfffffffffffffffe);
  }
LAB_00cf2ce4:
  uVar14 = *(undefined8 *)this;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar18 = local_290;
  pvVar26 = local_288;
  if (((ulong)local_298 & 1) == 0) {
    uVar18 = (ulong)local_298 >> 1 & 0x7f;
    pvVar26 = (void *)((long)&local_298 + 1);
  }
  FUN_00cf1dd8(uVar14,pvVar26,uVar18);
  if (((ulong)local_298 & 1) != 0) {
    operator_delete(local_288,(ulong)local_298 & 0xfffffffffffffffe);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar18 = (ulong)local_298 >> 1 & 0x7f;
  if (((ulong)local_298 & 1) != 0) {
    uVar18 = local_290;
  }
  if (((ulong)local_298 & 1) != 0) {
    operator_delete(local_288,(ulong)local_298 & 0xfffffffffffffffe);
  }
  if (uVar18 == 0) {
    *(undefined4 *)(this + 0x78) = 0;
    goto LAB_00cf2f58;
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar18 = (ulong)(local_2b0 >> 1);
  if ((local_2b0 & 1) != 0) {
    uVar18 = local_2a8;
  }
  if (uVar18 == 0) {
    uVar10 = 0;
  }
  else {
    uVar28 = 0;
    uVar10 = 0;
    puVar9 = local_2a0;
    if ((local_2b0 & 1) == 0) {
      puVar9 = &uStack_2af;
    }
    do {
      if (*(char *)((long)puVar9 + uVar28) == '\x1b') {
        uVar22 = uVar18;
        if (uVar18 <= uVar28 + 1) {
          uVar22 = uVar28 + 1;
        }
        uVar19 = uVar28;
        do {
          uVar28 = uVar22;
          if (uVar22 - 1 == uVar19) break;
          lVar17 = uVar19 + 1;
          uVar28 = uVar19 + 1;
          uVar19 = uVar28;
        } while (*(char *)((long)puVar9 + lVar17) != 'm');
      }
      else {
        uVar10 = uVar10 + 1;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar18);
  }
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0,CONCAT71(uStack_2af,local_2b0) & 0xfffffffffffffffe);
  }
  uVar14 = *(undefined8 *)this;
  uVar20 = uVar10 + 2;
  if (uVar10 + 2 <= *(uint *)(this + 0x78)) {
    uVar20 = *(uint *)(this + 0x78);
  }
  uVar6 = 0x34;
  if (0x31 < uVar20) {
    uVar6 = uVar20 + 3 & 0xfffffffc;
  }
  uVar5 = uVar6 - uVar10;
  uVar18 = (ulong)uVar5;
  uVar20 = uVar6;
  if (0xff < uVar6) {
    uVar20 = 0x100;
  }
  *(uint *)(this + 0x78) = uVar20;
  if (uVar5 < 0x17) {
    pvVar26 = (void *)((ulong)&local_298 | 1);
    local_298 = (piecewise_construct_t *)CONCAT71(local_298._1_7_,(char)uVar5 * '\x02');
    if (uVar6 != uVar10) goto LAB_00cf2eac;
  }
  else {
    uVar28 = 0x1a;
    if ((uVar18 | 7) != 0x17) {
      uVar28 = (uVar18 | 7) + 1;
    }
    pvVar26 = operator_new(uVar28);
    local_298 = (piecewise_construct_t *)(uVar28 | 1);
    local_290 = uVar18;
    local_288 = pvVar26;
LAB_00cf2eac:
    memset(pvVar26,0x20,uVar18);
  }
  *(undefined1 *)((long)pvVar26 + uVar18) = 0;
  uVar18 = local_290;
  pvVar26 = local_288;
  if (((ulong)local_298 & 1) == 0) {
    uVar18 = (ulong)local_298 >> 1 & 0x7f;
    pvVar26 = (void *)((long)&local_298 + 1);
  }
  uVar14 = FUN_00cf1dd8(uVar14,pvVar26,uVar18);
  uVar14 = FUN_00cf1dd8(uVar14,&DAT_001a3ce2,2);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  puVar9 = local_2b8;
  if ((local_2c8 & 1) == 0) {
    local_2c0 = (ulong)(local_2c8 >> 1);
    puVar9 = &uStack_2c7;
  }
  FUN_00cf1dd8(uVar14,puVar9,local_2c0);
  if ((local_2c8 & 1) != 0) {
    operator_delete(local_2b8,CONCAT71(uStack_2c7,local_2c8) & 0xfffffffffffffffe);
  }
  if (((ulong)local_298 & 1) != 0) {
    operator_delete(local_288,(ulong)local_298 & 0xfffffffffffffffe);
  }
LAB_00cf2f58:
  FUN_00cf1dd8(*(undefined8 *)this,&DAT_001bc181,1);
  puVar23 = (undefined *)*plVar11;
  lVar17 = plVar11[3];
  local_280 = puVar23;
  *(long *)((long)&local_280 + *(long *)(puVar23 + -0x18)) = lVar17;
  puVar27 = PTR_vtable_00d6c7f0 + 0x10;
  if ((local_238 & 1) != 0) {
    local_278 = puVar27;
    operator_delete(local_228,local_238 & 0xfffffffffffffffe);
  }
  puVar1 = PTR_vtable_00d6cdf8 + 0x10;
  local_278 = puVar1;
  std::__ndk1::locale::~locale((locale *)&local_270);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_280);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_210);
  local_178[0] = puVar23;
  *(long *)((long)local_178 + *(long *)(puVar23 + -0x18)) = lVar17;
  if ((local_160[6] & 1) != 0) {
    local_178[1] = puVar27;
    operator_delete(local_120,local_160[6] & 0xfffffffffffffffe);
  }
  local_178[1] = puVar1;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === EmitInstructionInBlock @ 00cf3064 ===

/* spvtools::disassemble::InstructionDisassembler::EmitInstructionInBlock(spv_parsed_instruction_t
   const&, unsigned long, unsigned int) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitInstructionInBlock
          (InstructionDisassembler *this,spv_parsed_instruction_t *param_1,ulong param_2,
          uint param_3)

{
  EmitInstructionImpl(this,param_1,param_2,param_3,true);
  return;
}



// === SetBlue @ 00cf306c ===

/* spvtools::disassemble::InstructionDisassembler::SetBlue(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetBlue
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::blue::operator_cast_to_char_((blue *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ResetColor @ 00cf30ec ===

/* spvtools::disassemble::InstructionDisassembler::ResetColor(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::ResetColor
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::reset::operator_cast_to_char_((reset *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === EmitOperand @ 00cf316c ===

/* spvtools::disassemble::InstructionDisassembler::EmitOperand(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, spv_parsed_instruction_t const&, unsigned short) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitOperand
          (InstructionDisassembler *this,basic_ostream *param_1,spv_parsed_instruction_t *param_2,
          ushort param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  InstructionDisassembler *pIVar10;
  char cVar11;
  spv_parsed_operand_t *psVar12;
  undefined8 local_68;
  ulong local_60;
  char *local_58;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  psVar12 = (spv_parsed_operand_t *)(*(long *)(param_2 + 0x18) + (ulong)param_3 * 0x14);
  uVar1 = *(uint *)(psVar12 + 4);
  uVar2 = *(uint *)(*(long *)param_2 + (ulong)*(ushort *)psVar12 * 4);
  switch(uVar1) {
  case 1:
  case 2:
  case 4:
  case 5:
    if (this[9] == (InstructionDisassembler)0x1) {
      local_68 = (OperandDesc *)CONCAT71(local_68._1_7_,this[8]);
      pcVar5 = clr::yellow::operator_cast_to_char_((yellow *)&local_68);
      sVar6 = strlen(pcVar5);
      FUN_00cf1dd8(param_1,pcVar5,sVar6);
    }
    uVar7 = FUN_00cf1dd8(param_1,&DAT_0015c6b7,1);
    plVar8 = *(long **)(this + 0x40);
    if (plVar8 == (long *)0x0) {
LAB_00cf3580:
      local_4c = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_00cf20c8();
    }
    local_4c = uVar2;
    (**(code **)(*plVar8 + 0x30))(&local_68,plVar8,&local_4c);
    pcVar5 = local_58;
    if (((ulong)local_68 & 1) == 0) {
      local_60 = (ulong)local_68 >> 1 & 0x7f;
      pcVar5 = (char *)((long)&local_68 + 1);
    }
    FUN_00cf1dd8(uVar7,pcVar5,local_60);
    goto LAB_00cf353c;
  case 3:
    SetBlue(this,param_1);
    uVar7 = FUN_00cf1dd8(param_1,&DAT_0015c6b7,1);
    plVar8 = *(long **)(this + 0x40);
    if (plVar8 == (long *)0x0) goto LAB_00cf3580;
    local_4c = uVar2;
    (**(code **)(*plVar8 + 0x30))(&local_68,plVar8,&local_4c);
    FUN_00cf71a4(uVar7,&local_68);
    goto LAB_00cf353c;
  case 6:
  case 9:
  case 10:
    if (this[9] == (InstructionDisassembler)0x1) {
      local_68 = (OperandDesc *)CONCAT71(local_68._1_7_,this[8]);
      pcVar5 = clr::red::operator_cast_to_char_((red *)&local_68);
      sVar6 = strlen(pcVar5);
      FUN_00cf1dd8(param_1,pcVar5,sVar6);
    }
    EmitNumericLiteral(param_1,param_2,psVar12);
    if (this[9] != (InstructionDisassembler)0x1) goto LAB_00cf3218;
    local_68 = (OperandDesc *)CONCAT71(local_68._1_7_,this[8]);
    pcVar5 = clr::reset::operator_cast_to_char_((reset *)&local_68);
    break;
  case 7:
    SetRed(this,param_1);
    local_68 = (OperandDesc *)0x0;
    iVar4 = LookupExtInst(*(undefined4 *)(param_2 + 0xc),uVar2,&local_68);
    if (iVar4 != 0) {
      uVar9 = spvExtInstIsNonSemantic(*(undefined4 *)(param_2 + 0xc));
      if ((uVar9 & 1) != 0) {
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,uVar2);
      }
      goto LAB_00cf3218;
    }
    pcVar5 = (char *)ExtInstDesc::name();
    break;
  case 8:
    local_68 = (OperandDesc *)0x0;
    LookupOpcode(uVar2,&local_68);
    SetRed(this,param_1);
    pcVar5 = (char *)InstructionDesc::name((InstructionDesc *)local_68);
    break;
  case 0xb:
    FUN_00cf1dd8(param_1,&DAT_001c5df4,1);
    SetGreen(this,param_1);
    spvDecodeLiteralStringOperand(param_2,param_3);
    uVar9 = local_60;
    pcVar5 = local_58;
    if (((ulong)local_68 & 1) == 0) {
      uVar9 = (ulong)local_68 >> 1 & 0x7f;
      pcVar5 = (char *)((long)&local_68 + 1);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      cVar11 = *pcVar5;
      if ((cVar11 == '\\') || (cVar11 == '\"')) {
        local_4c._1_3_ = (undefined3)(local_4c >> 8);
        local_4c = CONCAT31(local_4c._1_3_,0x5c);
        FUN_00cf1dd8(param_1,&local_4c,1);
        cVar11 = *pcVar5;
      }
      local_4c = CONCAT31(local_4c._1_3_,cVar11);
      FUN_00cf1dd8(param_1,&local_4c,1);
      pcVar5 = pcVar5 + 1;
    }
    ResetColor(this,param_1);
    local_4c = CONCAT31(local_4c._1_3_,0x22);
    FUN_00cf1dd8(param_1,&local_4c,1);
LAB_00cf353c:
    if (((ulong)local_68 & 1) != 0) {
      operator_delete(local_58,(ulong)local_68 & 0xfffffffffffffffe);
    }
    goto LAB_00cf3218;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x69:
    goto LAB_00cf31f0;
  default:
    uVar9 = spvOperandIsConcreteMask(uVar1);
    uVar1 = *(uint *)(psVar12 + 4);
    pIVar10 = (InstructionDisassembler *)(ulong)uVar1;
    if ((uVar9 & 1) != 0) goto LAB_00cf327c;
    uVar9 = spvOperandIsConcrete(pIVar10);
    if ((uVar9 & 1) == 0) goto LAB_00cf3218;
    uVar1 = *(uint *)(psVar12 + 4);
LAB_00cf31f0:
    local_68 = (OperandDesc *)0x0;
    LookupOperand(uVar1,uVar2,&local_68);
    pcVar5 = (char *)OperandDesc::name(local_68);
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x38:
  case 0x3d:
  case 0x56:
    pIVar10 = this;
LAB_00cf327c:
    EmitMaskOperand(pIVar10,param_1,uVar1,uVar2);
    goto LAB_00cf3218;
  }
  sVar6 = strlen(pcVar5);
  FUN_00cf1dd8(param_1,pcVar5,sVar6);
LAB_00cf3218:
  if (this[9] == (InstructionDisassembler)0x1) {
    local_68 = (OperandDesc *)CONCAT71(local_68._1_7_,this[8]);
    pcVar5 = clr::reset::operator_cast_to_char_((reset *)&local_68);
    sVar6 = strlen(pcVar5);
    FUN_00cf1dd8(param_1,pcVar5,sVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === GenerateCommentForDecoratedId @ 00cf3584 ===

/* WARNING: Type propagation algorithm not settling */
/* spvtools::disassemble::InstructionDisassembler::GenerateCommentForDecoratedId(spv_parsed_instruction_t
   const&) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::GenerateCommentForDecoratedId
          (InstructionDisassembler *this,spv_parsed_instruction_t *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ushort uVar11;
  undefined8 local_198;
  ulong local_190;
  void *local_188;
  int local_180 [2];
  undefined *local_178 [2];
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar8 = PTR_VTT_00d6c7e0;
  puVar7 = PTR_vtable_00d6c7d8;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_178[0] = *(undefined **)(PTR_VTT_00d6c7e0 + 8);
  puVar1 = PTR_vtable_00d6c7d8 + 0x40;
  local_d8 = 0;
  sVar4 = *(short *)(param_1 + 10);
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_VTT_00d6c7e0 + 0x10);
  lVar10 = *(long *)(local_178[0] + -0x18);
  std::__ndk1::ios_base::init((void *)((long)local_178 + lVar10));
  puVar9 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar10) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar10) = 0xffffffff;
  local_178[0] = puVar7 + 0x18;
  local_178[1] = PTR_vtable_00d6cdf8 + 0x10;
  local_108[0] = puVar1;
  std::__ndk1::locale::locale(alStack_168);
  puVar1 = PTR_vtable_00d6c7f0 + 0x10;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_00cf1ccc(local_178 + 1);
  if (sVar4 == 0x47) {
    iVar3 = *(int *)(*(long *)param_1 + (ulong)**(ushort **)(param_1 + 0x18) * 4);
    local_180[0] = iVar3;
    if (1 < *(ushort *)(param_1 + 0x20)) {
      FUN_00cf1dd8(local_178,&DAT_0016fed1,0);
      EmitOperand(this,(basic_ostream *)local_178,param_1,1);
      if (2 < *(ushort *)(param_1 + 0x20)) {
        uVar11 = 2;
        do {
          FUN_00cf1dd8(local_178,&DAT_0015427f,1);
          EmitOperand(this,(basic_ostream *)local_178,param_1,uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(param_1 + 0x20));
      }
    }
    if (iVar3 != 0) {
      local_198 = local_180;
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
               ::
               __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                         ((uint *)(this + 0x50),(piecewise_construct_t *)local_180,
                          (tuple *)PTR_DAT_00d6c6c0,(tuple *)&local_198);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      uVar2 = (ulong)local_198 >> 1 & 0x7f;
      if (((ulong)local_198 & 1) != 0) {
        uVar2 = local_190;
      }
      if (((ulong)local_198 & 1) != 0) {
        operator_delete(local_188,(ulong)local_198 & 0xfffffffffffffffe);
      }
      if (uVar2 != 0) {
        FUN_00cf1dd8(lVar10 + 0x18,&DAT_001663ec,2);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pvVar6 = local_188;
      if (((ulong)local_198 & 1) == 0) {
        local_190 = (ulong)local_198 >> 1 & 0x7f;
        pvVar6 = (void *)((long)&local_198 + 1);
      }
      FUN_00cf1dd8(lVar10 + 0x18,pvVar6,local_190);
      if (((ulong)local_198 & 1) != 0) {
        operator_delete(local_188,(ulong)local_198 & 0xfffffffffffffffe);
      }
    }
  }
  local_178[0] = *(undefined **)puVar8;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar8 + 0x18);
  if ((local_130 & 1) != 0) {
    local_178[1] = puVar1;
    operator_delete(local_120,local_130 & 0xfffffffffffffffe);
  }
  local_178[1] = puVar9 + 0x10;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetGrey @ 00cf3844 ===

/* spvtools::disassemble::InstructionDisassembler::SetGrey(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetGrey
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::grey::operator_cast_to_char_((grey *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === EmitSectionComment @ 00cf38c4 ===

/* spvtools::disassemble::InstructionDisassembler::EmitSectionComment(spv_parsed_instruction_t
   const&, bool&, bool&, bool&) */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitSectionComment
          (InstructionDisassembler *this,spv_parsed_instruction_t *param_1,bool *param_2,
          bool *param_3,bool *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  short sVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  undefined4 local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(this + 0x14);
  sVar7 = *(short *)(param_1 + 10);
  if ((iVar5 != 0) && (sVar7 == 0x36)) {
    uVar8 = *(undefined8 *)this;
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_88);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (this[0x10] == (InstructionDisassembler)0x1) {
      uVar8 = *(undefined8 *)this;
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_88);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    uVar2 = *(uint *)(this + 0xc);
    uVar9 = (ulong)(int)uVar2;
    if (0xfffffff7 < uVar2) goto LAB_00cf4070;
    uVar8 = *(undefined8 *)this;
    if (uVar2 < 0x17) {
      pvVar10 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)(uVar2 << 1));
      if (uVar2 != 0) goto LAB_00cf3a6c;
    }
    else {
      uVar1 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = (uVar9 | 7) + 1;
      }
      pvVar10 = operator_new(uVar1);
      local_88 = uVar1 | 1;
      sVar7 = 0x36;
      local_80 = uVar9;
      local_78 = pvVar10;
LAB_00cf3a6c:
      memset(pvVar10,0x20,uVar9);
    }
    *(undefined1 *)((long)pvVar10 + uVar9) = 0;
    uVar9 = local_80;
    pvVar10 = local_78;
    if ((local_88 & 1) == 0) {
      uVar9 = local_88 >> 1 & 0x7f;
      pvVar10 = (void *)((long)&local_88 + 1);
    }
    FUN_00cf1dd8(uVar8,pvVar10,uVar9);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78,local_88 & 0xfffffffffffffffe);
    }
    uVar8 = FUN_00cf1dd8(*(undefined8 *)this,"; Function ",0xb);
    local_70[0] = *(undefined4 *)(param_1 + 0x14);
    plVar6 = *(long **)(this + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf20c8();
    }
    (**(code **)(*plVar6 + 0x30))(&local_88,plVar6,local_70);
    uVar9 = local_80;
    pvVar10 = local_78;
    if ((local_88 & 1) == 0) {
      uVar9 = local_88 >> 1 & 0x7f;
      pvVar10 = (void *)((long)&local_88 + 1);
    }
    cVar4 = FUN_00cf1dd8(uVar8,pvVar10,uVar9);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)local_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if ((local_88 & 1) != 0) {
      operator_delete(local_78,local_88 & 0xfffffffffffffffe);
    }
    iVar5 = *(int *)(this + 0x14);
  }
  if (((iVar5 != 0) && ((*param_2 & 1U) == 0)) &&
     (uVar9 = spvOpcodeIsDecoration(sVar7), (uVar9 & 1) != 0)) {
    *param_2 = true;
    uVar8 = *(undefined8 *)this;
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_88);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    uVar2 = *(uint *)(this + 0xc);
    uVar9 = (ulong)(int)uVar2;
    if (0xfffffff7 < uVar2) goto LAB_00cf4070;
    uVar8 = *(undefined8 *)this;
    if (uVar2 < 0x17) {
      pvVar10 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)(uVar2 << 1));
      if (uVar2 != 0) goto LAB_00cf3c60;
    }
    else {
      uVar1 = 0x1a;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = (uVar9 | 7) + 1;
      }
      pvVar10 = operator_new(uVar1);
      local_88 = uVar1 | 1;
      local_80 = uVar9;
      local_78 = pvVar10;
LAB_00cf3c60:
      memset(pvVar10,0x20,uVar9);
    }
    *(undefined1 *)((long)pvVar10 + uVar9) = 0;
    uVar9 = local_80;
    pvVar10 = local_78;
    if ((local_88 & 1) == 0) {
      uVar9 = local_88 >> 1 & 0x7f;
      pvVar10 = (void *)((long)&local_88 + 1);
    }
    FUN_00cf1dd8(uVar8,pvVar10,uVar9);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78,local_88 & 0xfffffffffffffffe);
    }
    cVar4 = FUN_00cf1dd8(*(undefined8 *)this,"; Annotations",0xd);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_88);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  }
  if (*(int *)(this + 0x14) == 0) goto LAB_00cf403c;
  if ((*param_3 & 1U) == 0) {
    uVar9 = spvOpcodeIsDebug(sVar7);
    if ((uVar9 & 1) != 0) {
      *param_3 = true;
      uVar8 = *(undefined8 *)this;
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_88);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar2 = *(uint *)(this + 0xc);
      uVar9 = (ulong)(int)uVar2;
      if (0xfffffff7 < uVar2) goto LAB_00cf4070;
      uVar8 = *(undefined8 *)this;
      if (uVar2 < 0x17) {
        pvVar10 = (void *)((ulong)&local_88 | 1);
        local_88 = CONCAT71(local_88._1_7_,(char)(uVar2 << 1));
        if (uVar2 != 0) goto LAB_00cf3df0;
      }
      else {
        uVar1 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          uVar1 = (uVar9 | 7) + 1;
        }
        pvVar10 = operator_new(uVar1);
        local_88 = uVar1 | 1;
        local_80 = uVar9;
        local_78 = pvVar10;
LAB_00cf3df0:
        memset(pvVar10,0x20,uVar9);
      }
      *(undefined1 *)((long)pvVar10 + uVar9) = 0;
      uVar9 = local_80;
      pvVar10 = local_78;
      if ((local_88 & 1) == 0) {
        uVar9 = local_88 >> 1 & 0x7f;
        pvVar10 = (void *)((long)&local_88 + 1);
      }
      FUN_00cf1dd8(uVar8,pvVar10,uVar9);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78,local_88 & 0xfffffffffffffffe);
      }
      cVar4 = FUN_00cf1dd8(*(undefined8 *)this,"; Debug Information",0x13);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
      (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)&local_88);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    if (*(int *)(this + 0x14) == 0) goto LAB_00cf403c;
  }
  if (((*param_4 & 1U) != 0) || (iVar5 = spvOpcodeGeneratesType(sVar7), iVar5 == 0))
  goto LAB_00cf403c;
  *param_4 = true;
  uVar8 = *(undefined8 *)this;
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_88);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)uVar8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  uVar2 = *(uint *)(this + 0xc);
  uVar9 = (ulong)(int)uVar2;
  if (0xfffffff7 < uVar2) {
LAB_00cf4070:
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  uVar8 = *(undefined8 *)this;
  if (uVar2 < 0x17) {
    pvVar10 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_00cf3f80;
  }
  else {
    uVar1 = 0x1a;
    if ((uVar9 | 7) != 0x17) {
      uVar1 = (uVar9 | 7) + 1;
    }
    pvVar10 = operator_new(uVar1);
    local_88 = uVar1 | 1;
    local_80 = uVar9;
    local_78 = pvVar10;
LAB_00cf3f80:
    memset(pvVar10,0x20,uVar9);
  }
  *(undefined1 *)((long)pvVar10 + uVar9) = 0;
  uVar9 = local_80;
  pvVar10 = local_78;
  if ((local_88 & 1) == 0) {
    uVar9 = local_88 >> 1 & 0x7f;
    pvVar10 = (void *)((long)&local_88 + 1);
  }
  FUN_00cf1dd8(uVar8,pvVar10,uVar9);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78,local_88 & 0xfffffffffffffffe);
  }
  cVar4 = FUN_00cf1dd8(*(undefined8 *)this,"; Types, variables and constants",0x20);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_88);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_88);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
LAB_00cf403c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetYellow @ 00cf4078 ===

/* spvtools::disassemble::InstructionDisassembler::SetYellow(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetYellow
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::yellow::operator_cast_to_char_((yellow *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetRed @ 00cf40f8 ===

/* spvtools::disassemble::InstructionDisassembler::SetRed(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetRed
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::red::operator_cast_to_char_((red *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetGreen @ 00cf4178 ===

/* spvtools::disassemble::InstructionDisassembler::SetGreen(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetGreen
          (InstructionDisassembler *this,basic_ostream *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    __s = clr::green::operator_cast_to_char_((green *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(param_1,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === EmitMaskOperand @ 00cf41f8 ===

/* spvtools::disassemble::InstructionDisassembler::EmitMaskOperand(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, spv_operand_type_t, unsigned int) const */

void __thiscall
spvtools::disassemble::InstructionDisassembler::EmitMaskOperand
          (undefined8 param_1_00,undefined8 param_1,undefined4 param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  OperandDesc *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4 != 0) {
    iVar2 = 0;
    uVar5 = 1;
    do {
      if ((uVar5 & param_4) != 0) {
        local_60 = (OperandDesc *)0x0;
        LookupOperand(param_3,uVar5,&local_60);
        if (iVar2 != 0) {
          FUN_00cf1dd8(param_1,&DAT_001abbca,1);
        }
        param_4 = uVar5 ^ param_4;
        pcVar3 = (char *)OperandDesc::name(local_60);
        sVar4 = strlen(pcVar3);
        FUN_00cf1dd8(param_1,pcVar3,sVar4);
        iVar2 = iVar2 + 1;
      }
      uVar5 = uVar5 << 1;
    } while (param_4 != 0);
    if (iVar2 != 0) goto LAB_00cf42e4;
  }
  local_60 = (OperandDesc *)0x0;
  iVar2 = LookupOperand(param_3,0,&local_60);
  if (iVar2 == 0) {
    pcVar3 = (char *)OperandDesc::name(local_60);
    sVar4 = strlen(pcVar3);
    FUN_00cf1dd8(param_1,pcVar3,sVar4);
  }
LAB_00cf42e4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ResetColor @ 00cf4314 ===

/* spvtools::disassemble::InstructionDisassembler::ResetColor() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::ResetColor(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::reset::operator_cast_to_char_((reset *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetGrey @ 00cf4394 ===

/* spvtools::disassemble::InstructionDisassembler::SetGrey() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetGrey(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::grey::operator_cast_to_char_((grey *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetBlue @ 00cf4414 ===

/* spvtools::disassemble::InstructionDisassembler::SetBlue() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetBlue(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::blue::operator_cast_to_char_((blue *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetYellow @ 00cf4494 ===

/* spvtools::disassemble::InstructionDisassembler::SetYellow() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetYellow(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::yellow::operator_cast_to_char_((yellow *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetRed @ 00cf4514 ===

/* spvtools::disassemble::InstructionDisassembler::SetRed() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetRed(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::red::operator_cast_to_char_((red *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SetGreen @ 00cf4594 ===

/* spvtools::disassemble::InstructionDisassembler::SetGreen() */

void __thiscall
spvtools::disassemble::InstructionDisassembler::SetGreen(InstructionDisassembler *this)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  InstructionDisassembler local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[9] == (InstructionDisassembler)0x1) {
    local_3c[0] = this[8];
    uVar3 = *(undefined8 *)this;
    __s = clr::green::operator_cast_to_char_((green *)local_3c);
    sVar2 = strlen(__s);
    FUN_00cf1dd8(uVar3,__s,sVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvInstructionBinaryToText @ 00cf4614 ===

/* spvtools::spvInstructionBinaryToText(spv_target_env, unsigned int const*, unsigned long, unsigned
   int const*, unsigned long, unsigned int) */

void __thiscall
spvtools::spvInstructionBinaryToText
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6,uint param_7)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  bool bVar6;
  spvtools *this;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  FriendlyNameMapper *this_00;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *local_2d0;
  undefined **local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  long alStack_2b0 [4];
  long *local_290;
  undefined *local_280;
  FriendlyNameMapper *pFStack_278;
  undefined **local_260;
  undefined *apuStack_a0 [4];
  undefined **local_80;
  long local_70;
  byte *pbVar11;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  this = (spvtools *)spvContextCreate();
  GetTrivialNameMapper(this);
  if ((param_7 >> 6 & 1) == 0) {
    this_00 = (FriendlyNameMapper *)0x0;
  }
  else {
    this_00 = (FriendlyNameMapper *)operator_new(0x58);
    FriendlyNameMapper::FriendlyNameMapper(this_00,(spv_context_t *)this,param_5,param_6);
    ppuVar5 = local_80;
    local_260 = &local_280;
    local_80 = (undefined **)0x0;
    local_280 = PTR_vtable_00d6cea8 + 0x10;
    pFStack_278 = this_00;
    if (ppuVar5 == apuStack_a0) {
      (**(code **)(*ppuVar5 + 0x20))();
      if (local_260 != (undefined **)0x0) goto LAB_00cf46d8;
LAB_00cf4704:
      local_80 = (undefined **)0x0;
    }
    else {
      if (ppuVar5 != (undefined **)0x0) {
        (**(code **)(*ppuVar5 + 0x28))();
        if (local_260 == (undefined **)0x0) goto LAB_00cf4704;
LAB_00cf46d8:
        if (local_260 != &local_280) {
          local_80 = local_260;
          goto LAB_00cf4754;
        }
      }
      local_80 = apuStack_a0;
      (**(code **)(*local_260 + 0x18))(local_260,apuStack_a0);
      if (local_260 == &local_280) {
        lVar7 = 0x20;
      }
      else {
        if (local_260 == (undefined **)0x0) goto LAB_00cf4754;
        lVar7 = 0x28;
      }
      (**(code **)(*local_260 + lVar7))();
    }
  }
LAB_00cf4754:
  if (local_80 == (undefined **)0x0) {
    local_290 = (long *)0x0;
  }
  else if (local_80 == apuStack_a0) {
    local_290 = alStack_2b0;
    (**(code **)(*local_80 + 0x18))(local_80,alStack_2b0);
  }
  else {
    local_290 = (long *)(**(code **)(*local_80 + 0x10))();
  }
  FUN_00cf4a24(&local_280,param_7,alStack_2b0);
  if (local_290 == alStack_2b0) {
    lVar7 = 0x20;
LAB_00cf47cc:
    (**(code **)(*local_290 + lVar7))();
  }
  else if (local_290 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_00cf47cc;
  }
  local_2c8 = &local_280;
  uStack_2c0 = param_3;
  local_2b8 = param_4;
  spvBinaryParse(this,&local_2c8,param_5,param_6,FUN_00cf4c58,FUN_00cf4c84,0);
  local_2d0 = (long *)0x0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00cf4cf0(&local_280,&local_2d0);
  plVar4 = local_2d0;
  pbVar12 = (byte *)*local_2d0;
  uVar1 = local_2d0[1];
  if (uVar1 < 0x17) {
    pbVar9 = param_1 + 1;
    pbVar8 = pbVar9;
    if (uVar1 != 0) goto LAB_00cf4888;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by((ulong)param_1,0x16,uVar1 - 0x16,0,0,0);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
LAB_00cf4888:
    pbVar11 = pbVar12;
    if ((0x1f < uVar1) && (0x1f < (ulong)((long)pbVar8 - (long)pbVar12))) {
      uVar13 = uVar1 & 0xffffffffffffffe0;
      pbVar11 = pbVar12 + 0x10;
      pbVar9 = pbVar8 + uVar13;
      pbVar8 = pbVar8 + 0x10;
      uVar14 = uVar13;
      do {
        pbVar10 = pbVar11 + -8;
        uVar15 = *(undefined8 *)(pbVar11 + -0x10);
        uVar17 = *(undefined8 *)(pbVar11 + 8);
        uVar16 = *(undefined8 *)pbVar11;
        uVar14 = uVar14 - 0x20;
        pbVar11 = pbVar11 + 0x20;
        *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar8 + -0x10) = uVar15;
        *(undefined8 *)(pbVar8 + 8) = uVar17;
        *(undefined8 *)pbVar8 = uVar16;
        pbVar8 = pbVar8 + 0x20;
      } while (uVar14 != 0);
      pbVar8 = pbVar9;
      pbVar11 = pbVar12 + uVar13;
      if (uVar1 == uVar13) goto LAB_00cf48f4;
    }
    do {
      pbVar10 = pbVar11 + 1;
      pbVar9 = pbVar8 + 1;
      *pbVar8 = *pbVar11;
      pbVar8 = pbVar9;
      pbVar11 = pbVar10;
    } while (pbVar10 != pbVar12 + uVar1);
  }
LAB_00cf48f4:
  *pbVar9 = 0;
  bVar2 = *param_1;
  bVar6 = (bVar2 & 1) == 0;
  if ((bVar2 & 1) == 0) {
    *param_1 = (byte)((uint)uVar1 << 1);
    uVar14 = (ulong)((uint)uVar1 & 0x7f);
    if ((bVar2 & 1) != 0) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
  }
  else {
    *(ulong *)(param_1 + 8) = uVar1;
    uVar14 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar14 = uVar1;
    }
  }
  while (uVar14 != 0) {
    pbVar12 = param_1 + 1;
    if (!bVar6) {
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar12[uVar14 - 1] != 10) break;
    lVar7 = uVar14 - 1;
    if (bVar6) {
      *param_1 = (byte)((int)lVar7 << 1);
      pbVar12 = param_1 + 1;
    }
    else {
      *(long *)(param_1 + 8) = lVar7;
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    pbVar12[lVar7] = 0;
    bVar6 = (*param_1 & 1) == 0;
    uVar14 = (ulong)(*param_1 >> 1);
    if (!bVar6) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
  }
  spvTextDestroy(plVar4);
  spvContextDestroy(this);
  FUN_00cf4de8(&local_280);
  if (local_80 == apuStack_a0) {
    lVar7 = 0x20;
  }
  else {
    if (local_80 == (undefined **)0x0) goto LAB_00cf49d8;
    lVar7 = 0x28;
  }
  (**(code **)(*local_80 + lVar7))();
LAB_00cf49d8:
  if (this_00 != (FriendlyNameMapper *)0x0) {
    FriendlyNameMapper::~FriendlyNameMapper(this_00);
    operator_delete(this_00,0x58);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvBinaryToText @ 00cf4f5c ===

int spvBinaryToText(undefined4 *param_1,uint *param_2,ulong param_3,uint param_4,undefined8 param_5,
                   spv_diagnostic_t **param_6)

{
  long lVar1;
  undefined **ppuVar2;
  int iVar3;
  long *plVar4;
  spvtools *this;
  long lVar5;
  FriendlyNameMapper *this_00;
  long alStack_2f0 [4];
  long *local_2d0;
  undefined *local_2c0;
  FriendlyNameMapper *pFStack_2b8;
  undefined **local_2a0;
  undefined *apuStack_e0 [4];
  undefined **local_c0;
  undefined4 local_b0 [4];
  spvtools asStack_a0 [32];
  spvtools *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0[0] = *param_1;
  plVar4 = *(long **)(param_1 + 0xc);
  if (plVar4 == (long *)0x0) {
    local_80 = (spvtools *)0x0;
    this = local_80;
  }
  else if (plVar4 == (long *)(param_1 + 4)) {
    local_80 = asStack_a0;
    this = (spvtools *)(**(code **)(*plVar4 + 0x18))(plVar4,asStack_a0);
  }
  else {
    this = (spvtools *)(**(code **)(*plVar4 + 0x10))();
    local_80 = this;
  }
  if (param_6 != (spv_diagnostic_t **)0x0) {
    *param_6 = (spv_diagnostic_t *)0x0;
    this = (spvtools *)spvtools::UseDiagnosticAsMessageConsumer((spv_context_t *)local_b0,param_6);
  }
  spvtools::GetTrivialNameMapper(this);
  if ((param_4 >> 6 & 1) == 0) {
    this_00 = (FriendlyNameMapper *)0x0;
  }
  else {
    this_00 = (FriendlyNameMapper *)operator_new(0x58);
    spvtools::FriendlyNameMapper::FriendlyNameMapper
              (this_00,(spv_context_t *)local_b0,param_2,param_3);
    ppuVar2 = local_c0;
    local_2a0 = &local_2c0;
    local_c0 = (undefined **)0x0;
    local_2c0 = PTR_vtable_00d6cea8 + 0x10;
    pFStack_2b8 = this_00;
    if (ppuVar2 == apuStack_e0) {
      (**(code **)(*ppuVar2 + 0x20))();
      if (local_2a0 != (undefined **)0x0) goto LAB_00cf506c;
LAB_00cf50b4:
      local_c0 = (undefined **)0x0;
    }
    else {
      if (ppuVar2 != (undefined **)0x0) {
        (**(code **)(*ppuVar2 + 0x28))();
        if (local_2a0 == (undefined **)0x0) goto LAB_00cf50b4;
LAB_00cf506c:
        if (local_2a0 != &local_2c0) {
          local_c0 = local_2a0;
          goto LAB_00cf5104;
        }
      }
      local_c0 = apuStack_e0;
      (**(code **)(*local_2a0 + 0x18))(local_2a0,apuStack_e0);
      if (local_2a0 == &local_2c0) {
        lVar5 = 0x20;
      }
      else {
        if (local_2a0 == (undefined **)0x0) goto LAB_00cf5104;
        lVar5 = 0x28;
      }
      (**(code **)(*local_2a0 + lVar5))();
    }
  }
LAB_00cf5104:
  if (local_c0 == (undefined **)0x0) {
    local_2d0 = (long *)0x0;
  }
  else if (local_c0 == apuStack_e0) {
    local_2d0 = alStack_2f0;
    (**(code **)(*local_c0 + 0x18))(local_c0,alStack_2f0);
  }
  else {
    local_2d0 = (long *)(**(code **)(*local_c0 + 0x10))();
  }
  FUN_00cf4a24(&local_2c0,param_4,alStack_2f0);
  if (local_2d0 == alStack_2f0) {
    lVar5 = 0x20;
LAB_00cf517c:
    (**(code **)(*local_2d0 + lVar5))();
  }
  else if (local_2d0 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_00cf517c;
  }
  iVar3 = spvBinaryParse(local_b0,&local_2c0,param_2,param_3,FUN_00cf5288,FUN_00cf52b0,param_6);
  if (iVar3 == 0) {
    FUN_00cf4cf0(&local_2c0,param_5);
    FUN_00cf4de8(&local_2c0);
    if (local_c0 == apuStack_e0) goto LAB_00cf5200;
LAB_00cf51d0:
    if (local_c0 != (undefined **)0x0) {
      lVar5 = 0x28;
      goto LAB_00cf5204;
    }
  }
  else {
    FUN_00cf4de8(&local_2c0);
    if (local_c0 != apuStack_e0) goto LAB_00cf51d0;
LAB_00cf5200:
    lVar5 = 0x20;
LAB_00cf5204:
    (**(code **)(*local_c0 + lVar5))();
  }
  if (this_00 != (FriendlyNameMapper *)0x0) {
    spvtools::FriendlyNameMapper::~FriendlyNameMapper(this_00);
    operator_delete(this_00,0x58);
  }
  if (local_80 == asStack_a0) {
    lVar5 = 0x20;
  }
  else {
    if (local_80 == (spvtools *)0x0) goto LAB_00cf5250;
    lVar5 = 0x28;
  }
  (**(code **)(*(long *)local_80 + lVar5))();
LAB_00cf5250:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ~__func @ 00cf71c4 ===

/* std::__ndk1::__function::__func<spvtools::FriendlyNameMapper::GetNameMapper()::{lambda(unsigned
   int)#1}, std::__ndk1::allocator<spvtools::FriendlyNameMapper::GetNameMapper()::{lambda(unsigned
   int)#1}>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > (unsigned int)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<spvtools::FriendlyNameMapper::GetNameMapper()::{lambda(unsigned_int)#1},std::__ndk1::allocator<spvtools::FriendlyNameMapper::GetNameMapper()::{lambda(unsigned_int)#1}>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(unsigned_int)>
::~__func(__func<spvtools::FriendlyNameMapper::GetNameMapper()::_lambda(unsigned_int)_1_,std::__ndk1::allocator<spvtools::FriendlyNameMapper::GetNameMapper()::_lambda(unsigned_int)_1_>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(unsigned_int)>
          *this)

{
  operator_delete(this,0x10);
  return;
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>> @ 00cf7260 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, unsigned int>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, unsigned int> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x23;
  undefined1 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  uVar12 = *(ulong *)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  uVar13 = (ulong)uVar1;
  if (uVar12 != 0) {
    uVar15 = NEON_cnt(uVar12,1);
    uVar14 = NEON_addv(uVar15,1);
    uVar7 = CONCAT71((int7)((ulong)uVar15 >> 8),uVar14);
    uVar11 = (uint)uVar12;
    if (uVar7 < 2) {
      unaff_x23 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar13;
      if (uVar12 <= uVar13) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    plVar4 = *(long **)(*(long *)param_1 + unaff_x23 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar4[1] == uVar13) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar4[1] & uVar12 - 1) != unaff_x23) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar4[1];
          if (uVar7 == uVar13) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar12 <= uVar7) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar9 * uVar12;
            }
            if (uVar7 != unaff_x23) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)operator_new(0x18);
  lVar3 = *(long *)(param_1 + 6);
  puVar5 = *(undefined4 **)param_4;
  fVar16 = (float)param_1[8];
  *plVar4 = 0;
  plVar4[1] = uVar13;
  *(undefined4 *)(plVar4 + 2) = *puVar5;
  *(undefined4 *)((long)plVar4 + 0x14) = 0;
  if ((uVar12 != 0) && ((float)(lVar3 + 1) <= fVar16 * (float)uVar12)) {
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
    goto joined_r0x00cf7564;
  }
  if (uVar12 < 3) {
    uVar7 = 1;
  }
  else {
    uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar7 = uVar7 | uVar12 << 1;
  uVar9 = (ulong)((float)(lVar3 + 1) / fVar16);
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    uVar7 = std::__ndk1::__next_prime(uVar7);
    uVar12 = *(ulong *)(param_1 + 2);
  }
  if (uVar12 < uVar7) {
LAB_00cf7450:
    __do_rehash<true>((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                       *)param_1,uVar7);
  }
  else if (uVar7 < uVar12) {
    uVar9 = (ulong)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if (uVar12 < 3) {
LAB_00cf74cc:
      uVar9 = std::__ndk1::__next_prime(uVar9);
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
    }
    else {
      uVar15 = NEON_cnt(uVar12,1);
      uVar14 = NEON_addv(uVar15,1);
      if (1 < CONCAT71((int7)((ulong)uVar15 >> 8),uVar14)) goto LAB_00cf74cc;
      if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
    }
    if (uVar7 < uVar12) goto LAB_00cf7450;
  }
  uVar12 = *(ulong *)(param_1 + 2);
  if ((uVar12 & uVar12 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar12 - 1U & uVar1);
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
  }
  else if (uVar13 < uVar12) {
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + uVar13 * 8);
    unaff_x23 = uVar13;
  }
  else {
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar13 / uVar12;
    }
    unaff_x23 = uVar13 - uVar7 * uVar12;
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
  }
joined_r0x00cf7564:
  if (plVar6 == (long *)0x0) {
    puVar8 = param_1 + 4;
    lVar10 = *(long *)puVar8;
    *(long **)puVar8 = plVar4;
    *plVar4 = lVar10;
    *(uint **)(lVar3 + unaff_x23 * 8) = puVar8;
    if (*plVar4 != 0) {
      uVar13 = *(ulong *)(*plVar4 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        *(long **)(lVar3 + (uVar13 & uVar12 - 1) * 8) = plVar4;
      }
      else {
        if (uVar12 <= uVar13) {
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar7 * uVar12;
        }
        *(long **)(lVar3 + uVar13 * 8) = plVar4;
      }
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return;
}



// === __do_rehash<true> @ 00cf759c ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, unsigned int>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, unsigned int> >
   >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>> @ 00cf7aa8 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::__unordered_map_hasher<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, std::__ndk1::basic_ostringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::hash<unsigned
   int>, std::__ndk1::equal_to<unsigned int>, true>, std::__ndk1::__unordered_map_equal<unsigned
   int, std::__ndk1::__hash_value_type<unsigned int, std::__ndk1::basic_ostringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<unsigned
   int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<unsigned int,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>,
   std::__ndk1::tuple<> >(unsigned int const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
          (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x24;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  uVar18 = *(ulong *)(param_1 + 2);
  uVar3 = *(uint *)param_2;
  uVar16 = (ulong)uVar3;
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_addv(uVar20,1);
    uVar12 = CONCAT71((int7)((ulong)uVar20 >> 8),uVar19);
    uVar17 = (uint)uVar18;
    if (uVar12 < 2) {
      unaff_x24 = (ulong)(uVar17 - 1 & uVar3);
    }
    else {
      unaff_x24 = uVar16;
      if (uVar18 <= uVar16) {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar3 / uVar17;
        }
        unaff_x24 = (ulong)(uVar3 - uVar5 * uVar17);
      }
    }
    puVar10 = *(undefined8 **)(*(long *)param_1 + unaff_x24 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar10, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar16) {
            if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_00cf7ba4;
          }
          else if ((plVar15[1] & uVar18 - 1) != unaff_x24) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar16) {
            if (*(uint *)(plVar15 + 2) == uVar3) goto LAB_00cf7ba4;
          }
          else {
            if (uVar18 <= uVar12) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar12 / uVar18;
              }
              uVar12 = uVar12 - uVar8 * uVar18;
            }
            if (uVar12 != unaff_x24) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)operator_new(0x120);
  puVar7 = PTR_VTT_00d6c7e0;
  puVar6 = PTR_vtable_00d6c7d8;
  uVar4 = **(undefined4 **)param_4;
  *plVar15 = 0;
  plVar15[1] = uVar16;
  puVar1 = puVar6 + 0x40;
  plVar15[0x17] = 0;
  *(undefined4 *)(plVar15 + 2) = uVar4;
  lVar9 = *(long *)(puVar7 + 8);
  uVar20 = *(undefined8 *)(puVar7 + 0x10);
  plVar15[0x11] = (long)puVar1;
  plVar11 = plVar15 + 3;
  *plVar11 = lVar9;
  *(undefined8 *)((long)plVar11 + *(long *)(lVar9 + -0x18)) = uVar20;
  pvVar2 = (void *)((long)plVar11 + *(long *)(*plVar11 + -0x18));
  std::__ndk1::ios_base::init(pvVar2);
  *(undefined8 *)((long)pvVar2 + 0x88) = 0;
  puVar7 = PTR_vtable_00d6cdf8;
  *(undefined4 *)((long)pvVar2 + 0x90) = 0xffffffff;
  *plVar11 = (long)(puVar6 + 0x18);
  plVar15[0x11] = (long)puVar1;
  plVar15[4] = (long)(puVar7 + 0x10);
  std::__ndk1::locale::locale((locale *)(plVar15 + 5));
  plVar15[4] = (long)(PTR_vtable_00d6c7f0 + 0x10);
  plVar15[7] = 0;
  plVar15[6] = 0;
  plVar15[9] = 0;
  plVar15[8] = 0;
  plVar15[0xb] = 0;
  plVar15[10] = 0;
  plVar15[0xd] = 0;
  plVar15[0xc] = 0;
  plVar15[0xf] = 0;
  plVar15[0xe] = 0;
  *(undefined4 *)(plVar15 + 0x10) = 0x10;
  FUN_00cf1ccc(plVar15 + 4);
  if ((uVar18 == 0) || ((float)param_1[8] * (float)uVar18 < (float)(*(long *)(param_1 + 6) + 1))) {
    if (uVar18 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar12 = uVar12 | uVar18 << 1;
    uVar18 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar12 <= uVar18) {
      uVar12 = uVar18;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      uVar12 = std::__ndk1::__next_prime(uVar12);
    }
    uVar18 = *(ulong *)(param_1 + 2);
    if (uVar18 < uVar12) {
LAB_00cf7d40:
      __do_rehash<true>((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                         *)param_1,uVar12);
    }
    else if (uVar12 < uVar18) {
      uVar8 = (ulong)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
      if (uVar18 < 3) {
LAB_00cf7db4:
        uVar8 = std::__ndk1::__next_prime(uVar8);
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_addv(uVar20,1);
        if (1 < CONCAT71((int7)((ulong)uVar20 >> 8),uVar19)) goto LAB_00cf7db4;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
        if (uVar12 <= uVar8) {
          uVar12 = uVar8;
        }
      }
      if (uVar12 < uVar18) goto LAB_00cf7d40;
    }
    uVar18 = *(ulong *)(param_1 + 2);
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar18 - 1U & uVar3);
      lVar9 = *(long *)param_1;
      plVar11 = *(long **)(lVar9 + unaff_x24 * 8);
      goto joined_r0x00cf7e3c;
    }
    if (uVar16 < uVar18) {
      lVar9 = *(long *)param_1;
      plVar11 = *(long **)(lVar9 + uVar16 * 8);
      unaff_x24 = uVar16;
      goto joined_r0x00cf7e3c;
    }
    uVar12 = 0;
    if (uVar18 != 0) {
      uVar12 = uVar16 / uVar18;
    }
    unaff_x24 = uVar16 - uVar12 * uVar18;
    lVar9 = *(long *)param_1;
    plVar11 = *(long **)(lVar9 + unaff_x24 * 8);
    if (plVar11 == (long *)0x0) goto LAB_00cf7df0;
LAB_00cf7ca0:
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
  }
  else {
    lVar9 = *(long *)param_1;
    plVar11 = *(long **)(lVar9 + unaff_x24 * 8);
joined_r0x00cf7e3c:
    if (plVar11 != (long *)0x0) goto LAB_00cf7ca0;
LAB_00cf7df0:
    puVar13 = param_1 + 4;
    lVar14 = *(long *)puVar13;
    *(long **)puVar13 = plVar15;
    *plVar15 = lVar14;
    *(uint **)(lVar9 + unaff_x24 * 8) = puVar13;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        *(long **)(lVar9 + (uVar16 & uVar18 - 1) * 8) = plVar15;
      }
      else {
        if (uVar18 <= uVar16) {
          uVar12 = 0;
          if (uVar18 != 0) {
            uVar12 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar12 * uVar18;
        }
        *(long **)(lVar9 + uVar16 * 8) = plVar15;
      }
    }
  }
  uVar20 = 1;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
LAB_00cf7cbc:
  auVar21._8_8_ = uVar20;
  auVar21._0_8_ = plVar15;
  return auVar21;
LAB_00cf7ba4:
  uVar20 = 0;
  goto LAB_00cf7cbc;
}



// === __do_rehash<true> @ 00cf7e74 ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::__unordered_map_hasher<unsigned int,
   std::__ndk1::__hash_value_type<unsigned int, std::__ndk1::basic_ostringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::hash<unsigned
   int>, std::__ndk1::equal_to<unsigned int>, true>, std::__ndk1::__unordered_map_equal<unsigned
   int, std::__ndk1::__hash_value_type<unsigned int, std::__ndk1::basic_ostringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<unsigned
   int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === ~FriendlyNameMapper @ 00cf801c ===

/* spvtools::FriendlyNameMapper::~FriendlyNameMapper() */

void __thiscall spvtools::FriendlyNameMapper::~FriendlyNameMapper(FriendlyNameMapper *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)*(void **)(this + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4],puVar1[2] & 0xfffffffffffffffe);
    }
    operator_delete(puVar1,0x28);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x30) << 3);
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x10);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 3) & 1) != 0) {
      operator_delete((void *)puVar1[5],puVar1[3] & 0xfffffffffffffffe);
    }
    operator_delete(puVar1,0x30);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2,*(long *)(this + 8) << 3);
  return;
}



// === spvBinaryHeaderGet @ 00cf80f4 ===

/* spvBinaryHeaderGet(spv_const_binary_t*, spv_endianness_t, spv_header_t*) */

undefined8 spvBinaryHeaderGet(long *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  if (4 < (ulong)param_1[1]) {
    if (param_3 == (undefined4 *)0x0) {
      return 0xfffffffd;
    }
    uVar1 = spvFixWord(*(undefined4 *)*param_1);
    lVar3 = *param_1;
    *param_3 = uVar1;
    uVar2 = spvFixWord(*(undefined4 *)(lVar3 + 4),param_2);
    param_3[1] = uVar2;
    if (((uVar2 & 0xff0000ff) == 0) && (0xfffff9fe < uVar2 - 0x10601)) {
      uVar1 = spvFixWord(*(undefined4 *)(*param_1 + 8),param_2);
      lVar3 = *param_1;
      param_3[2] = uVar1;
      uVar1 = spvFixWord(*(undefined4 *)(lVar3 + 0xc),param_2);
      lVar3 = *param_1;
      param_3[3] = uVar1;
      uVar1 = spvFixWord(*(undefined4 *)(lVar3 + 0x10),param_2);
      lVar3 = *param_1;
      param_3[4] = uVar1;
      *(long *)(param_3 + 6) = lVar3 + 0x14;
      return 0;
    }
  }
  return 0xfffffffc;
}



// === spvDecodeLiteralStringOperand @ 00cf81fc ===

/* spvDecodeLiteralStringOperand(spv_parsed_instruction_t const&, unsigned short) */

void spvDecodeLiteralStringOperand(spv_parsed_instruction_t *param_1,ushort param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  undefined8 *in_x8;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  
  puVar4 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x14);
  lVar6 = *(long *)param_1;
  uVar2 = *puVar4;
  uVar5 = (ulong)puVar4[1];
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (uVar5 != 0) {
    puVar7 = (uint *)(lVar6 + (ulong)uVar2 * 4);
    lVar6 = uVar5 << 2;
    while (uVar1 = *puVar7, (uVar1 & 0xff) != 0) {
      cVar3 = (char)in_x8;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      if ((uVar1 & 0xff00) == 0) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      if ((uVar1 & 0xff0000) == 0) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      if (uVar1 >> 0x18 == 0) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar3);
      lVar6 = lVar6 + -4;
      puVar7 = puVar7 + 1;
      if (lVar6 == 0) {
        return;
      }
    }
  }
  return;
}



// === spvBinaryParse @ 00cf82b0 ===

undefined4
spvBinaryParse(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,spv_diagnostic_t **param_7)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_1c8 [2];
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined5 uStack_188;
  undefined3 local_183;
  undefined5 uStack_180;
  undefined8 uStack_17b;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  void *local_f8;
  void *pvStack_f0;
  long local_e8;
  void *local_e0;
  void *pvStack_d8;
  long local_d0;
  void *local_c8;
  void *pvStack_c0;
  long local_b8;
  undefined4 local_b0 [4];
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0[0] = *param_1;
  plVar3 = *(long **)(param_1 + 0xc);
  if (plVar3 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if (plVar3 == (long *)(param_1 + 4)) {
    local_80 = alStack_a0;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  if (param_7 != (spv_diagnostic_t **)0x0) {
    *param_7 = (spv_diagnostic_t *)0x0;
    spvtools::UseDiagnosticAsMessageConsumer((spv_context_t *)local_b0,param_7);
  }
  local_1c8[0] = local_b0[0];
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_17b = 0;
  local_183 = 0;
  uStack_180 = 0;
  local_150 = 0x3f800000;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_128 = 0x3f800000;
  local_100 = 0x3f800000;
  local_1c0 = alStack_a0;
  uStack_1b8 = param_2;
  local_1b0 = param_5;
  uStack_1a8 = param_6;
  local_f8 = operator_new(500);
  local_e8 = (long)local_f8 + 500;
  pvStack_f0 = local_f8;
  local_e0 = operator_new(100);
  local_d0 = (long)local_e0 + 100;
  pvStack_d8 = local_e0;
  local_c8 = operator_new(100);
  local_b8 = (long)local_c8 + 100;
  pvStack_c0 = local_c8;
  uVar2 = FUN_00cf8474(local_1c8,param_3,param_4,param_7);
  FUN_00cfa0c0(&local_1a0);
  if (local_80 == alStack_a0) {
    lVar4 = 0x20;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00cf841c;
    lVar4 = 0x28;
  }
  (**(code **)(*local_80 + lVar4))();
LAB_00cf841c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvBinaryDestroy @ 00cf9e88 ===

void spvBinaryDestroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete__((void *)*param_1);
    }
    operator_delete(param_1,0x10);
    return;
  }
  return;
}



// === spv_strnlen_s @ 00cf9ec4 ===

/* spv_strnlen_s(char const*, unsigned long) */

char * spv_strnlen_s(char *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = (char *)0x0;
    pcVar1 = pcVar2;
    if (param_2 != 0) {
      do {
        pcVar1 = pcVar2;
        if (param_1[(long)pcVar2] == '\0') break;
        pcVar2 = pcVar2 + 1;
        pcVar1 = (char *)param_2;
      } while ((char *)param_2 != pcVar2);
    }
    param_1 = pcVar1;
    if (param_2 <= param_1) {
      param_1 = (char *)param_2;
    }
  }
  return param_1;
}



// === DiagnosticStream @ 00cfa8c4 ===

/* spvtools::DiagnosticStream::DiagnosticStream(spv_position_t, std::__ndk1::function<void
   (spv_message_level_t, char const*, spv_position_t const&, char const*)> const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, spv_result_t) */

void __thiscall
spvtools::DiagnosticStream::DiagnosticStream
          (DiagnosticStream *this,undefined8 *param_2,long *param_3,byte *param_4,undefined4 param_5
          )

{
  undefined *puVar1;
  DiagnosticStream *pDVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_VTT_00d6c7e0;
  puVar5 = PTR_vtable_00d6c7d8;
  *(undefined8 *)(this + 0xa0) = 0;
  lVar3 = *(long *)(puVar1 + 8);
  uVar8 = *(undefined8 *)(puVar1 + 0x10);
  puVar1 = puVar5 + 0x40;
  *(undefined **)(this + 0x70) = puVar1;
  *(long *)this = lVar3;
  *(undefined8 *)(this + *(long *)(lVar3 + -0x18)) = uVar8;
  pDVar2 = this + *(long *)(*(long *)this + -0x18);
  std::__ndk1::ios_base::init(pDVar2);
  *(undefined8 *)(pDVar2 + 0x88) = 0;
  puVar6 = PTR_vtable_00d6cdf8;
  *(undefined4 *)(pDVar2 + 0x90) = 0xffffffff;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)this = puVar5 + 0x18;
  *(undefined **)(this + 8) = puVar6 + 0x10;
  std::__ndk1::locale::locale((locale *)(this + 0x10));
  *(undefined **)(this + 8) = PTR_vtable_00d6c7f0 + 0x10;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0x10;
  FUN_00cf1ccc(this + 8);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)(this + 0x118) = param_2[2];
  *(undefined8 *)(this + 0x110) = uVar9;
  *(undefined8 *)(this + 0x108) = uVar8;
  plVar7 = (long *)param_3[4];
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(this + 0x140) = 0;
    bVar4 = *param_4;
  }
  else if (plVar7 == param_3) {
    *(DiagnosticStream **)(this + 0x140) = this + 0x120;
    (**(code **)(*(long *)param_3[4] + 0x18))();
    bVar4 = *param_4;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x10))();
    *(undefined8 *)(this + 0x140) = uVar8;
    bVar4 = *param_4;
  }
  if ((bVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_4 + 8);
    uVar8 = *(undefined8 *)param_4;
    *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(this + 0x158) = uVar9;
    *(undefined8 *)(this + 0x150) = uVar8;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x150),*(char **)(param_4 + 0x10),*(ulong *)(param_4 + 8));
  }
  *(undefined4 *)(this + 0x168) = param_5;
  return;
}



// === __init_copy_ctor_external @ 00cfaa40 ===

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init_copy_ctor_external(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  void *__dest;
  
  if (param_2 < 0x17) {
    *this = SUB41((int)param_2 << 1,0);
    memmove(this + 1,param_1,param_2 + 1);
    return;
  }
  if (param_2 < 0xfffffffffffffff8) {
    uVar1 = 0x1a;
    if ((param_2 | 7) != 0x17) {
      uVar1 = (param_2 | 7) + 1;
    }
    __dest = operator_new(uVar1);
    *(ulong *)(this + 8) = param_2;
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
    memmove(__dest,param_1,param_2 + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7a94();
}



// === operator<< @ 00cfae58 ===

/* spvtools::DiagnosticStream&
   spvtools::DiagnosticStream::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

DiagnosticStream * __thiscall
spvtools::DiagnosticStream::operator<<(DiagnosticStream *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  FUN_00cf1dd8(this,pbVar2,uVar1);
  return this;
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>> @ 00cfafc4 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, spv_ext_inst_type_t>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spv_ext_inst_type_t>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   true>, std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned
   int, spv_ext_inst_type_t>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x23;
  undefined1 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  uVar12 = *(ulong *)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  uVar13 = (ulong)uVar1;
  if (uVar12 != 0) {
    uVar15 = NEON_cnt(uVar12,1);
    uVar14 = NEON_addv(uVar15,1);
    uVar7 = CONCAT71((int7)((ulong)uVar15 >> 8),uVar14);
    uVar11 = (uint)uVar12;
    if (uVar7 < 2) {
      unaff_x23 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar13;
      if (uVar12 <= uVar13) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    plVar4 = *(long **)(*(long *)param_1 + unaff_x23 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar4[1] == uVar13) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar4[1] & uVar12 - 1) != unaff_x23) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar4[1];
          if (uVar7 == uVar13) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar12 <= uVar7) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar9 * uVar12;
            }
            if (uVar7 != unaff_x23) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)operator_new(0x18);
  lVar3 = *(long *)(param_1 + 6);
  puVar5 = *(undefined4 **)param_4;
  fVar16 = (float)param_1[8];
  *plVar4 = 0;
  plVar4[1] = uVar13;
  *(undefined4 *)(plVar4 + 2) = *puVar5;
  *(undefined4 *)((long)plVar4 + 0x14) = 0;
  if ((uVar12 != 0) && ((float)(lVar3 + 1) <= fVar16 * (float)uVar12)) {
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
    goto joined_r0x00cfb2c8;
  }
  if (uVar12 < 3) {
    uVar7 = 1;
  }
  else {
    uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar7 = uVar7 | uVar12 << 1;
  uVar9 = (ulong)((float)(lVar3 + 1) / fVar16);
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    uVar7 = std::__ndk1::__next_prime(uVar7);
    uVar12 = *(ulong *)(param_1 + 2);
  }
  if (uVar12 < uVar7) {
LAB_00cfb1b4:
    __do_rehash<true>((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
                       *)param_1,uVar7);
  }
  else if (uVar7 < uVar12) {
    uVar9 = (ulong)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if (uVar12 < 3) {
LAB_00cfb230:
      uVar9 = std::__ndk1::__next_prime(uVar9);
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
    }
    else {
      uVar15 = NEON_cnt(uVar12,1);
      uVar14 = NEON_addv(uVar15,1);
      if (1 < CONCAT71((int7)((ulong)uVar15 >> 8),uVar14)) goto LAB_00cfb230;
      if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
    }
    if (uVar7 < uVar12) goto LAB_00cfb1b4;
  }
  uVar12 = *(ulong *)(param_1 + 2);
  if ((uVar12 & uVar12 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar12 - 1U & uVar1);
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
  }
  else if (uVar13 < uVar12) {
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + uVar13 * 8);
    unaff_x23 = uVar13;
  }
  else {
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar13 / uVar12;
    }
    unaff_x23 = uVar13 - uVar7 * uVar12;
    lVar3 = *(long *)param_1;
    plVar6 = *(long **)(lVar3 + unaff_x23 * 8);
  }
joined_r0x00cfb2c8:
  if (plVar6 == (long *)0x0) {
    puVar8 = param_1 + 4;
    lVar10 = *(long *)puVar8;
    *(long **)puVar8 = plVar4;
    *plVar4 = lVar10;
    *(uint **)(lVar3 + unaff_x23 * 8) = puVar8;
    if (*plVar4 != 0) {
      uVar13 = *(ulong *)(*plVar4 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        *(long **)(lVar3 + (uVar13 & uVar12 - 1) * 8) = plVar4;
      }
      else {
        if (uVar12 <= uVar13) {
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar7 * uVar12;
        }
        *(long **)(lVar3 + uVar13 * 8) = plVar4;
      }
    }
  }
  else {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return;
}



// === __do_rehash<true> @ 00cfb300 ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spv_ext_inst_type_t>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   true>, std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned
   int, spv_ext_inst_type_t>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t> >
   >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === filterCapsAgainstTargetEnv @ 00cfb598 ===

/* spvtools::AssemblyGrammar::filterCapsAgainstTargetEnv(spv::Capability const*, unsigned int) const
    */

void spvtools::AssemblyGrammar::filterCapsAgainstTargetEnv(Capability *param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_w2;
  Capability *in_x8;
  ulong uVar6;
  long local_70 [5];
  long local_48;
  
  puVar5 = (undefined4 *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar3 = spvVersionForTargetEnv(uVar1);
  if (in_w2 != 0) {
    uVar6 = (ulong)in_w2;
    do {
      local_70[0] = 0;
      iVar4 = LookupOperand(0x21,*puVar5,local_70);
      if ((iVar4 == 0) &&
         ((((*(uint *)(local_70[0] + 0x2c) <= uVar3 && (uVar3 <= *(uint *)(local_70[0] + 0x30))) ||
           (*(int *)(local_70[0] + 0x28) != 0)) || (*(int *)(local_70[0] + 0x20) != 0)))) {
        EnumSet<spv::Capability>::insert(in_x8);
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === lookupOperandName @ 00cfb67c ===

/* spvtools::AssemblyGrammar::lookupOperandName(spv_operand_type_t, unsigned int) const */

void __thiscall
spvtools::AssemblyGrammar::lookupOperandName
          (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  OperandDesc *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (OperandDesc *)0x0;
  iVar2 = LookupOperand(param_2,param_3,&local_30);
  pcVar3 = "Unknown";
  if ((iVar2 == 0) && (local_30 != (OperandDesc *)0x0)) {
    pcVar3 = (char *)OperandDesc::name(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}



// === lookupSpecConstantOpcode @ 00cfb6f4 ===

/* spvtools::AssemblyGrammar::lookupSpecConstantOpcode(char const*, spv::Op*) const */

undefined8 __thiscall
spvtools::AssemblyGrammar::lookupSpecConstantOpcode(AssemblyGrammar *this,char *param_1,Op *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = 0x3d0;
  ppuVar2 = &PTR_s_SConvert_00d6ae70;
  do {
    iVar1 = strcmp(param_1,*ppuVar2);
    if (iVar1 == 0) {
      if (lVar3 == 0) {
        return 0xfffffff7;
      }
      *(undefined4 *)param_2 = *(undefined4 *)(ppuVar2 + -1);
      return 0;
    }
    lVar3 = lVar3 + -0x10;
    ppuVar2 = ppuVar2 + 2;
  } while (lVar3 != 0);
  return 0xfffffff7;
}



// === lookupSpecConstantOpcode @ 00cfb76c ===

/* spvtools::AssemblyGrammar::lookupSpecConstantOpcode(spv::Op) const */

undefined4 __thiscall
spvtools::AssemblyGrammar::lookupSpecConstantOpcode(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = &DAT_00d6ae68;
  lVar4 = 0x3d0;
  do {
    piVar3 = piVar2;
    if (*piVar2 == param_2) break;
    lVar4 = lVar4 + -0x10;
    piVar2 = piVar2 + 4;
    piVar3 = (int *)&UNK_00d6b238;
  } while (lVar4 != 0);
  uVar1 = 0xfffffff7;
  if (piVar3 != (int *)&UNK_00d6b238) {
    uVar1 = 0;
  }
  return uVar1;
}



// === parseMaskOperand @ 00cfb7ac ===

/* spvtools::AssemblyGrammar::parseMaskOperand(spv_operand_type_t, char const*, unsigned int*) const
    */

void __thiscall
spvtools::AssemblyGrammar::parseMaskOperand
          (undefined8 param_1,undefined4 param_2,char *param_3,uint *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_3 == (char *)0x0) {
    uVar6 = 0xfffffffb;
LAB_00cfb86c:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
  else {
    sVar4 = strlen(param_3);
    if (sVar4 == 0) {
      uVar6 = 0xfffffffb;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
    }
    else {
      uVar7 = 0;
      pcVar1 = param_3 + sVar4;
      do {
        pcVar5 = (char *)memchr(param_3,0x7c,(long)pcVar1 - (long)param_3);
        pcVar2 = pcVar1;
        if (pcVar5 != (char *)0x0) {
          pcVar2 = pcVar5;
        }
        local_60 = (uint *)0x0;
        uVar6 = LookupOperand(param_2,param_3,(long)pcVar2 - (long)param_3,&local_60);
        if ((int)uVar6 != 0) goto LAB_00cfb86c;
        param_3 = param_3 + ((long)pcVar2 - (long)param_3) + 1;
        uVar7 = *local_60 | uVar7;
      } while (pcVar2 != pcVar1);
      uVar6 = 0;
      *param_4 = uVar7;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



// === pushOperandTypesForMask @ 00cfb8b0 ===

/* spvtools::AssemblyGrammar::pushOperandTypesForMask(spv_operand_type_t, unsigned int,
   std::__ndk1::vector<spv_operand_type_t, std::__ndk1::allocator<spv_operand_type_t> >*) const */

void __thiscall
spvtools::AssemblyGrammar::pushOperandTypesForMask
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  spvPushOperandTypesForMask(param_2,param_3,param_4);
  return;
}



// === insert @ 00cfb8c0 ===

/* spvtools::EnumSet<spv::Capability>::insert(spv::Capability const&) */

void spvtools::EnumSet<spv::Capability>::insert(Capability *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint *in_x1;
  ulong *puVar4;
  undefined8 *in_x8;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 uVar9;
  long local_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = *(ulong **)param_1;
  uVar1 = *in_x1;
  uVar5 = *(long *)(param_1 + 8) - (long)puVar4 >> 4;
  if (*(long *)(param_1 + 8) - (long)puVar4 == 0) {
LAB_00cfb958:
    uVar7 = 0;
    if (uVar5 != 0) {
LAB_00cfb96c:
      if ((uint)puVar4[1] == (uVar1 & 0xffffffc0)) {
        uVar5 = 1L << ((ulong)uVar1 & 0x3f);
        if ((*puVar4 & uVar5) == 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          uVar9 = 1;
          *puVar4 = *puVar4 | uVar5;
          *(long *)(param_1 + 0x18) = lVar6 + 1;
        }
        else {
          uVar9 = 0;
        }
        goto LAB_00cfb9c0;
      }
    }
  }
  else {
    uVar7 = uVar5 - 1;
    if ((ulong)(uVar1 >> 6) <= uVar5 - 1) {
      uVar7 = (ulong)(uVar1 >> 6);
    }
    if ((uVar1 & 0xffffffc0) <= (uint)puVar4[uVar7 * 2 + 1]) {
      puVar8 = puVar4 + uVar7 * 2 + -1;
      do {
        if (uVar7 == 0) goto LAB_00cfb958;
        uVar3 = *puVar8;
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + -2;
      } while ((uVar1 & 0xffffffc0) <= (uint)uVar3);
    }
    uVar7 = uVar7 + 1;
    puVar4 = puVar4 + uVar7 * 2;
    if (uVar7 < uVar5) goto LAB_00cfb96c;
  }
  local_50 = uVar1 & 0xffffffc0;
  uVar9 = 1;
  local_58 = 1L << ((ulong)uVar1 & 0x3f);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  std::__ndk1::
  vector<spvtools::EnumSet<spv::Capability>::Bucket,std::__ndk1::allocator<spvtools::EnumSet<spv::Capability>::Bucket>>
  ::emplace<spvtools::EnumSet<spv::Capability>::Bucket>
            ((vector<spvtools::EnumSet<spv::Capability>::Bucket,std::__ndk1::allocator<spvtools::EnumSet<spv::Capability>::Bucket>>
              *)param_1,puVar4,&local_58);
LAB_00cfb9c0:
  *in_x8 = param_1;
  in_x8[1] = uVar7;
  *(uint *)(in_x8 + 2) = uVar1 & 0x3f;
  *(undefined1 *)(in_x8 + 3) = uVar9;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === emplace<spvtools::EnumSet<spv::Capability>::Bucket> @ 00cfba28 ===

/* std::__ndk1::__wrap_iter<spvtools::EnumSet<spv::Capability>::Bucket*>
   std::__ndk1::vector<spvtools::EnumSet<spv::Capability>::Bucket,
   std::__ndk1::allocator<spvtools::EnumSet<spv::Capability>::Bucket>
   >::emplace<spvtools::EnumSet<spv::Capability>::Bucket>(std::__ndk1::__wrap_iter<spvtools::EnumSet<spv::Capability>::Bucket
   const*>, spvtools::EnumSet<spv::Capability>::Bucket&&) */

undefined8 * __thiscall
std::__ndk1::
vector<spvtools::EnumSet<spv::Capability>::Bucket,std::__ndk1::allocator<spvtools::EnumSet<spv::Capability>::Bucket>>
::emplace<spvtools::EnumSet<spv::Capability>::Bucket>
          (vector<spvtools::EnumSet<spv::Capability>::Bucket,std::__ndk1::allocator<spvtools::EnumSet<spv::Capability>::Bucket>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__dest;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  puVar14 = *(undefined8 **)(this + 8);
  if (puVar14 < *(undefined8 **)(this + 0x10)) {
    puVar5 = param_2;
    if (param_2 == puVar14) {
      uVar16 = *param_3;
      puVar14[1] = param_3[1];
      *puVar14 = uVar16;
      *(undefined8 **)(this + 8) = puVar14 + 2;
    }
    else {
      uVar17 = param_3[1];
      uVar16 = *param_3;
      if (puVar14 + -2 < puVar14) {
        puVar14[1] = puVar14[-1];
        *puVar14 = puVar14[-2];
        *(undefined8 **)(this + 8) = puVar14 + 2;
      }
      else {
        *(undefined8 **)(this + 8) = puVar14;
      }
      if (puVar14 != param_2 + 2) {
        sVar6 = (long)puVar14 - (long)(param_2 + 2);
        memmove((void *)((long)puVar14 - sVar6),param_2,sVar6);
      }
      param_2[1] = uVar17;
      *param_2 = uVar16;
    }
    goto LAB_00cfbc08;
  }
  puVar15 = *(undefined8 **)this;
  uVar1 = ((long)puVar14 - (long)puVar15 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00cfba14();
LAB_00cfbc44:
                    /* WARNING: Subroutine does not return */
    FUN_00cf7234();
  }
  uVar8 = (long)*(undefined8 **)(this + 0x10) - (long)puVar15;
  uVar10 = (long)uVar8 >> 3;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffef < uVar8) {
    uVar10 = 0xfffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar4 = (void *)0x0;
    puVar5 = (undefined8 *)((long)param_2 - (long)puVar15);
    puVar13 = (undefined8 *)0x0;
    puVar11 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00cfbb3c:
      if (param_2 == puVar15) {
        puVar5 = (undefined8 *)operator_new(0x10);
        puVar13 = puVar5 + 2;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,(ulong)puVar11);
          puVar14 = *(undefined8 **)(this + 8);
        }
      }
      else {
        lVar2 = ((long)puVar11 >> 4) + 1;
        puVar5 = puVar5 + ((ulong)(lVar2 - (lVar2 >> 0x3f)) >> 1) * -2;
      }
    }
  }
  else {
    if (uVar10 >> 0x3c != 0) goto LAB_00cfbc44;
    puVar12 = (undefined8 *)(uVar10 * 0x10);
    pvVar4 = operator_new((ulong)puVar12);
    puVar11 = (undefined8 *)((long)param_2 - (long)puVar15);
    puVar5 = (undefined8 *)((long)pvVar4 + (long)puVar11);
    puVar13 = (undefined8 *)((long)pvVar4 + (long)puVar12);
    if (puVar11 == puVar12) goto LAB_00cfbb3c;
  }
  uVar16 = *param_3;
  puVar5[1] = param_3[1];
  *puVar5 = uVar16;
  memcpy(puVar5 + 2,param_2,(long)puVar14 - (long)param_2);
  lVar2 = *(long *)(this + 8);
  *(undefined8 **)(this + 8) = param_2;
  sVar6 = (long)param_2 - (long)*(void **)this;
  __dest = (void *)((long)puVar5 - sVar6);
  memcpy(__dest,*(void **)this,sVar6);
  pvVar4 = *(void **)this;
  lVar9 = *(long *)(this + 0x10);
  *(void **)this = __dest;
  *(long *)(this + 8) = (long)(puVar5 + 2) + (lVar2 - (long)param_2);
  *(undefined8 **)(this + 0x10) = puVar13;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,lVar9 - (long)pvVar4);
  }
LAB_00cfbc08:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvExtInstImportTypeGet @ 00cfbc48 ===

/* spvExtInstImportTypeGet(char const*) */

undefined4 spvExtInstImportTypeGet(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp("GLSL.std.450",param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp("OpenCL.std",param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp("SPV_AMD_shader_explicit_vertex_parameter",param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp("SPV_AMD_shader_trinary_minmax",param_1);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcmp("SPV_AMD_gcn_shader",param_1);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = strcmp("SPV_AMD_shader_ballot",param_1);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = strcmp("DebugInfo",param_1);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = strcmp("OpenCL.DebugInfo.100",param_1);
  if (iVar1 != 0) {
    iVar1 = strcmp("NonSemantic.Shader.DebugInfo.100",param_1);
    if (iVar1 == 0) {
      return 10;
    }
    iVar1 = strncmp("NonSemantic.ClspvReflection.",param_1,0x1c);
    if (iVar1 == 0) {
      return 9;
    }
    iVar1 = strncmp("NonSemantic.VkspReflection.",param_1,0x1b);
    if (iVar1 == 0) {
      return 0xb;
    }
    iVar1 = strcmp("TOSA.001000.1",param_1);
    if (iVar1 != 0) {
      iVar1 = strcmp("Arm.MotionEngine.100",param_1);
      if (iVar1 != 0) {
        iVar1 = strncmp("NonSemantic.",param_1,0xc);
        uVar2 = 0xe;
        if (iVar1 != 0) {
          uVar2 = 0;
        }
        return uVar2;
      }
      return 0xd;
    }
    return 0xc;
  }
  return 8;
}



// === spvExtInstIsNonSemantic @ 00cfbe60 ===

/* spvExtInstIsNonSemantic(spv_ext_inst_type_t) */

bool spvExtInstIsNonSemantic(uint param_1)

{
  return (param_1 & 0xfffffffb) == 10 || (param_1 & 0xfffffffd) == 9;
}



// === spvExtInstIsDebugInfo @ 00cfbe78 ===

/* spvExtInstIsDebugInfo(spv_ext_inst_type_t) */

bool spvExtInstIsDebugInfo(uint param_1)

{
  return param_1 == 7 || (param_1 & 0xfffffffd) == 8;
}



// === GetTrivialNameMapper @ 00cfbe8c ===

/* spvtools::GetTrivialNameMapper() */

void __thiscall spvtools::GetTrivialNameMapper(spvtools *this)

{
  undefined8 *in_x8;
  
  in_x8[4] = in_x8;
  *in_x8 = &PTR_FUN_00d6b248;
  return;
}



// === FriendlyNameMapper @ 00cfbea0 ===

/* spvtools::FriendlyNameMapper::FriendlyNameMapper(spv_context_t const*, unsigned int const*,
   unsigned long) */

void __thiscall
spvtools::FriendlyNameMapper::FriendlyNameMapper
          (FriendlyNameMapper *this,spv_context_t *param_1,uint *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = uVar1;
  local_30 = 0;
  spvBinaryParse(param_1,this,param_2,param_3,0,PTR_ParseInstructionForwarder_00d6ceb8,&local_30);
  spvDiagnosticDestroy(local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === NameForId @ 00cfbf30 ===

/* spvtools::FriendlyNameMapper::NameForId(unsigned int) */

void spvtools::FriendlyNameMapper::NameForId(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint in_w1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar5 = ((long *)(ulong)param_1)[1];
  if (uVar5 != 0) {
    uVar3 = (ulong)in_w1;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_addv(uVar10,1);
    uVar8 = CONCAT71((int7)((ulong)uVar10 >> 8),uVar9);
    uVar4 = (uint)uVar5;
    if (uVar8 < 2) {
      uVar6 = (ulong)(uVar4 - 1 & in_w1);
    }
    else {
      uVar6 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = in_w1 / uVar4;
        }
        uVar6 = (ulong)(in_w1 - uVar1 * uVar4);
      }
    }
    plVar7 = *(long **)(*(long *)(ulong)param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(uint *)(plVar7 + 2) == in_w1) {
LAB_00cfc008:
              if ((*(byte *)(plVar7 + 3) & 1) != 0) {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __init_copy_ctor_external(in_x8,(char *)plVar7[5],plVar7[4]);
                return;
              }
              lVar11 = plVar7[4];
              uVar10 = plVar7[3];
              *(long *)(in_x8 + 0x10) = plVar7[5];
              *(long *)(in_x8 + 8) = lVar11;
              *(undefined8 *)in_x8 = uVar10;
              return;
            }
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar3) {
            if (*(uint *)(plVar7 + 2) == in_w1) goto LAB_00cfc008;
          }
          else {
            if (uVar5 <= uVar8) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar2 * uVar5;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  to_string((spvtools *)(ulong)in_w1,in_w1);
  return;
}



// === Sanitize @ 00cfc034 ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spvtools::FriendlyNameMapper::Sanitize(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void spvtools::FriendlyNameMapper::Sanitize(basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  lVar11 = *(long *)(lVar2 + 0x28);
  bVar1 = *in_x1;
  uVar12 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar12 = *(ulong *)(in_x1 + 8);
  }
  if (uVar12 == 0) {
    *(undefined1 *)((long)in_x8 + 2) = 0;
    *(undefined2 *)in_x8 = 0x5f02;
  }
  else {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    pcVar9 = (char *)operator_new(0x40);
    uVar7 = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._32_8_;
    uVar6 = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._24_8_;
    uVar5 = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._16_8_;
    uVar4 = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._8_8_;
    uVar3 = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._0_8_;
    *(ulong *)(pcVar9 + 0x28) =
         CONCAT17(s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0[0x2f],
                  s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._40_7_);
    *(undefined8 *)(pcVar9 + 0x20) = uVar7;
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    *(undefined8 *)pcVar9 = uVar3;
    *(undefined8 *)(pcVar9 + 0x18) = uVar6;
    *(undefined8 *)(pcVar9 + 0x10) = uVar5;
    uVar8 = _DAT_00202b50;
    pcVar9[0x3f] = '\0';
    uVar3 = CONCAT71(s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._48_7_,
                     s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0[0x2f]);
    pbVar10 = *(byte **)(in_x1 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar10 = in_x1 + 1;
    }
    *(undefined8 *)(pcVar9 + 0x37) = s_abcdefghijklmnopqrstuvwxyzABCDEF_001d7ed0._55_8_;
    *(undefined8 *)(pcVar9 + 0x2f) = uVar3;
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      find(-0x60,(ulong)*pbVar10);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)in_x8);
      uVar12 = uVar12 - 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar12 != 0);
    if ((uVar8 & 1) != 0) {
      operator_delete(pcVar9,uVar8 & 0xfffffffffffffffe);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SaveName @ 00cfc14c ===

/* spvtools::FriendlyNameMapper::SaveName(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void spvtools::FriendlyNameMapper::SaveName(uint param_1,basic_string *param_2)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  basic_string *pbVar5;
  ulong *puVar6;
  long lVar7;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  void *pvVar15;
  void *pvVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  byte local_c0;
  undefined7 uStack_bf;
  void *local_b0;
  uint *local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  byte local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  char *local_68;
  uint local_5c;
  long local_58;
  
  pbVar5 = (basic_string *)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(pbVar5 + 8);
  local_5c = (uint)param_2;
  if (uVar10 != 0) {
    uVar8 = (ulong)param_2 & 0xffffffff;
    uVar18 = NEON_cnt(uVar10,1);
    uVar17 = NEON_addv(uVar18,1);
    uVar13 = CONCAT71((int7)((ulong)uVar18 >> 8),uVar17);
    uVar9 = (uint)uVar10;
    if (uVar13 < 2) {
      uVar11 = uVar9 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar10 <= uVar8) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = local_5c / uVar9;
        }
        uVar11 = (ulong)(local_5c - uVar1 * uVar9);
      }
    }
    plVar12 = *(long **)(*(long *)pbVar5 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (*(uint *)(plVar12 + 2) == local_5c) goto LAB_00cfc478;
          }
          else if ((plVar12[1] & uVar10 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar8) {
            if (*(uint *)(plVar12 + 2) == local_5c) goto LAB_00cfc478;
          }
          else {
            if (uVar10 <= uVar13) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar2 * uVar10;
            }
            if (uVar13 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  Sanitize(pbVar5);
  if ((local_78 & 1) == 0) {
    local_90 = CONCAT71(uStack_77,local_78);
    uStack_88 = uStack_70;
    local_80 = local_68;
    std::__ndk1::
    __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(pbVar5 + 0x28),(basic_string *)&local_90,(basic_string *)&local_90);
    pcVar14 = extraout_x1;
    bVar4 = local_78;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,local_68,uStack_70);
    std::__ndk1::
    __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(pbVar5 + 0x28),(basic_string *)&local_90,(basic_string *)&local_90);
    pcVar14 = extraout_x1_00;
    bVar4 = local_78;
  }
  local_78 = bVar4;
  if (((ulong)pcVar14 & 1) != 0) goto LAB_00cfc418;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = uStack_70;
  }
  uVar10 = __n + 1;
  if (0xfffffffffffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (uVar10 < 0x17) {
    local_a0 = 0;
    pvVar15 = (void *)((ulong)&local_a8 | 1);
    local_98 = (void *)0x0;
    local_a8 = (uint *)(ulong)(byte)((int)uVar10 << 1);
    pvVar16 = pvVar15;
    if (__n != 0) goto LAB_00cfc324;
  }
  else {
    uVar8 = 0x1a;
    if ((uVar10 | 7) != 0x17) {
      uVar8 = (uVar10 | 7) + 1;
    }
    pvVar15 = operator_new(uVar8);
    local_a8 = (uint *)(uVar8 | 1);
    pvVar16 = (void *)((ulong)&local_a8 | 1);
    local_a0 = uVar10;
    local_98 = pvVar15;
LAB_00cfc324:
    pcVar14 = local_68;
    if ((bVar4 & 1) == 0) {
      pcVar14 = (char *)&uStack_77;
    }
    memmove(pvVar15,pcVar14,__n);
  }
  uVar9 = 0;
  *(undefined2 *)((long)pvVar15 + __n) = 0x5f;
  do {
    to_string((spvtools *)(ulong)uVar9,(uint)pcVar14);
    pvVar15 = pvVar16;
    if (((ulong)local_a8 & 1) != 0) {
      pvVar15 = local_98;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((ulong)&local_c0,(char *)0x0,(ulong)pvVar15);
    uVar8 = puVar6[1];
    uVar10 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    pcVar14 = (char *)puVar6[2];
    puVar6[2] = 0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80,local_90 & 0xfffffffffffffffe);
    }
    local_90 = uVar10;
    uStack_88 = uVar8;
    local_80 = pcVar14;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe);
    }
    std::__ndk1::
    __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(pbVar5 + 0x28),(basic_string *)&local_90,(basic_string *)&local_90);
    uVar9 = uVar9 + 1;
    pcVar14 = extraout_x1_01;
  } while (((ulong)extraout_x1_01 & 1) == 0);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98,(ulong)local_a8 & 0xfffffffffffffffe);
  }
LAB_00cfc418:
  local_a8 = &local_5c;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                    ((uint *)pbVar5,(piecewise_construct_t *)&local_5c,(tuple *)PTR_DAT_00d6c6c0,
                     (tuple *)&local_a8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar7 + 0x18),(basic_string *)&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80,local_90 & 0xfffffffffffffffe);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe);
  }
LAB_00cfc478:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === SaveBuiltInName @ 00cfc4ac ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* spvtools::FriendlyNameMapper::SaveBuiltInName(unsigned int, unsigned int) */

void __thiscall
spvtools::FriendlyNameMapper::SaveBuiltInName(FriendlyNameMapper *this,uint param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  basic_string *pbVar8;
  long lVar9;
  uint local_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  
  pbVar8 = (basic_string *)(ulong)param_1;
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  uVar6 = (uint)this;
  if (0x113f < (int)param_2) {
    if ((int)param_2 < 0x1143) {
      if (((param_2 != 0x1140) && (param_2 != 0x1141)) && (param_2 != 0x1142))
      goto switchD_00cfc4f8_caseD_2;
    }
    else if ((param_2 != 0x1143) && (param_2 != 0x1144)) {
      if (param_2 != 0x1149) goto switchD_00cfc4f8_caseD_2;
      goto LAB_00cfca78;
    }
    goto LAB_00cfcae4;
  }
  switch(param_2) {
  case 0:
    goto LAB_00cfc808;
  case 1:
    goto LAB_00cfc97c;
  case 3:
    goto LAB_00cfca78;
  case 4:
    goto LAB_00cfca78;
  case 5:
    goto LAB_00cfc808;
  case 6:
    goto LAB_00cfca40;
  case 7:
    goto LAB_00cfca08;
  case 8:
    goto LAB_00cfca78;
  case 9:
    SaveName(uVar6,pbVar8);
    break;
  case 10:
    goto LAB_00cfc944;
  case 0xb:
    goto LAB_00cfcae4;
  case 0xc:
    goto LAB_00cfcae4;
  case 0xd:
    goto LAB_00cfc97c;
  case 0xe:
    goto LAB_00cfc944;
  case 0xf:
    goto LAB_00cfc97c;
  case 0x10:
    goto LAB_00cfca40;
  case 0x11:
    goto LAB_00cfca08;
  case 0x12:
LAB_00cfc808:
    SaveName(uVar6,pbVar8);
    break;
  case 0x13:
LAB_00cfcae4:
    SaveName(uVar6,pbVar8);
    break;
  case 0x14:
LAB_00cfca40:
    SaveName(uVar6,pbVar8);
    break;
  case 0x16:
    goto LAB_00cfc97c;
  case 0x17:
    SaveName(uVar6,pbVar8);
    break;
  case 0x18:
    goto LAB_00cfc944;
  case 0x19:
    goto LAB_00cfc944;
  case 0x1a:
    goto LAB_00cfca08;
  case 0x1b:
    goto LAB_00cfc6f0;
  case 0x1c:
    goto LAB_00cfc78c;
  case 0x1d:
    pcVar7 = (char *)operator_new(0x1a);
    uVar4 = _DAT_00202af0;
    uVar3 = s_gl_LocalInvocationIndex_001b5169._0_8_;
    uVar2 = CONCAT71(s_gl_LocalInvocationIndex_001b5169._16_7_,
                     s_gl_LocalInvocationIndex_001b5169[0xf]);
    uStack_40 = SUB81(pcVar7,0);
    uStack_3f = (undefined1)((ulong)pcVar7 >> 8);
    uStack_3e = (undefined1)((ulong)pcVar7 >> 0x10);
    uStack_3d = (undefined1)((ulong)pcVar7 >> 0x18);
    uStack_3c = (undefined1)((ulong)pcVar7 >> 0x20);
    uStack_3b = (undefined1)((ulong)pcVar7 >> 0x28);
    uStack_3a = (undefined1)((ulong)pcVar7 >> 0x30);
    uStack_39 = (undefined1)((ulong)pcVar7 >> 0x38);
    *(ulong *)(pcVar7 + 8) =
         CONCAT17(s_gl_LocalInvocationIndex_001b5169[0xf],s_gl_LocalInvocationIndex_001b5169._8_7_);
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0xf) = uVar2;
    local_50 = (uint)uVar4;
    uStack_4c = (undefined1)((ulong)uVar4 >> 0x20);
    uStack_4b = (undefined1)((ulong)uVar4 >> 0x28);
    uStack_4a = (undefined1)((ulong)uVar4 >> 0x30);
    uStack_49 = (undefined1)((ulong)uVar4 >> 0x38);
    pcVar7[0x17] = '\0';
    goto LAB_00cfc9e0;
  case 0x1e:
    SaveName(uVar6,pbVar8);
    break;
  case 0x1f:
    goto LAB_00cfc668;
  case 0x20:
LAB_00cfc78c:
    SaveName(uVar6,pbVar8);
    break;
  case 0x21:
    goto LAB_00cfc97c;
  case 0x22:
    goto LAB_00cfca08;
  case 0x24:
    goto LAB_00cfc97c;
  case 0x25:
LAB_00cfca78:
    SaveName(uVar6,pbVar8);
    break;
  case 0x26:
LAB_00cfc97c:
    SaveName(uVar6,pbVar8);
    break;
  case 0x27:
LAB_00cfc6f0:
    SaveName(uVar6,pbVar8);
    break;
  case 0x28:
LAB_00cfc668:
    SaveName(uVar6,pbVar8);
    break;
  case 0x29:
    pcVar7 = (char *)operator_new(0x20);
    uVar5 = _DAT_00202df0;
    uVar4 = s_SubgroupLocalInvocationId_0015e20c._17_8_;
    uVar3 = s_SubgroupLocalInvocationId_0015e20c._0_8_;
    uVar2 = CONCAT17(s_SubgroupLocalInvocationId_0015e20c[0x10],
                     s_SubgroupLocalInvocationId_0015e20c._9_7_);
    uStack_40 = SUB81(pcVar7,0);
    uStack_3f = (undefined1)((ulong)pcVar7 >> 8);
    uStack_3e = (undefined1)((ulong)pcVar7 >> 0x10);
    uStack_3d = (undefined1)((ulong)pcVar7 >> 0x18);
    uStack_3c = (undefined1)((ulong)pcVar7 >> 0x20);
    uStack_3b = (undefined1)((ulong)pcVar7 >> 0x28);
    uStack_3a = (undefined1)((ulong)pcVar7 >> 0x30);
    uStack_39 = (undefined1)((ulong)pcVar7 >> 0x38);
    *(ulong *)(pcVar7 + 8) =
         CONCAT71(s_SubgroupLocalInvocationId_0015e20c._9_7_,s_SubgroupLocalInvocationId_0015e20c[8]
                 );
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0x11) = uVar4;
    *(undefined8 *)(pcVar7 + 9) = uVar2;
    local_50 = (uint)uVar5;
    uStack_4c = (undefined1)((ulong)uVar5 >> 0x20);
    uStack_4b = (undefined1)((ulong)uVar5 >> 0x28);
    uStack_4a = (undefined1)((ulong)uVar5 >> 0x30);
    uStack_49 = (undefined1)((ulong)uVar5 >> 0x38);
    pcVar7[0x19] = '\0';
LAB_00cfc9e0:
    SaveName(uVar6,pbVar8);
    if ((local_50 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_39,
                                       CONCAT16(uStack_3a,
                                                CONCAT15(uStack_3b,
                                                         CONCAT14(uStack_3c,
                                                                  CONCAT13(uStack_3d,
                                                                           CONCAT12(uStack_3e,
                                                                                    CONCAT11(
                                                  uStack_3f,uStack_40))))))),
                      CONCAT17(uStack_49,
                               CONCAT16(uStack_4a,CONCAT15(uStack_4b,CONCAT14(uStack_4c,local_50))))
                      & 0xfffffffffffffffe);
    }
    break;
  case 0x2a:
LAB_00cfca08:
    SaveName(uVar6,pbVar8);
    break;
  case 0x2b:
LAB_00cfc944:
    SaveName(uVar6,pbVar8);
  }
switchD_00cfc4f8_caseD_2:
  if (*(long *)(lVar1 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === ParseInstruction @ 00cfcb3c ===

/* WARNING: Type propagation algorithm not settling */
/* spvtools::FriendlyNameMapper::ParseInstruction(spv_parsed_instruction_t const&) */

undefined8 __thiscall
spvtools::FriendlyNameMapper::ParseInstruction
          (FriendlyNameMapper *this,spv_parsed_instruction_t *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t __n;
  size_t __n_00;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined7 *puVar8;
  undefined *puVar9;
  basic_ostream bVar10;
  uint uVar11;
  undefined8 *puVar12;
  basic_ostream *pbVar13;
  ulong *puVar14;
  uint uVar15;
  uint extraout_w1;
  char *pcVar16;
  long lVar17;
  basic_string *pbVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  basic_string *pbVar22;
  undefined4 uVar23;
  long *plVar24;
  ulong uVar25;
  basic_string *pbVar26;
  char *pcVar27;
  ulong uVar28;
  char *pcVar29;
  basic_string *this_00;
  undefined1 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte local_210;
  undefined7 uStack_20f;
  undefined7 *local_200;
  byte local_1f8;
  undefined7 uStack_1f7;
  undefined7 *local_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  char *local_1d0;
  undefined8 local_1c0;
  ulong uStack_1b8;
  char *local_1b0;
  undefined4 local_1a0;
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined1 uStack_19a;
  undefined1 uStack_199;
  undefined1 uStack_198;
  uint uStack_197;
  undefined1 uStack_193;
  undefined2 uStack_192;
  char *local_190;
  basic_ostream local_180;
  undefined4 uStack_17f;
  char cStack_17b;
  char cStack_17a;
  char cStack_179;
  char cStack_178;
  undefined2 uStack_177;
  undefined1 uStack_175;
  undefined1 uStack_174;
  undefined1 uStack_173;
  undefined2 uStack_172;
  char *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined *local_110 [3];
  undefined8 uStack_f8;
  undefined4 auStack_f0 [4];
  undefined8 local_e0;
  long local_78;
  
  puVar9 = PTR_VTT_00d6c7e0;
  puVar2 = PTR_vtable_00d6c7d8;
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  uVar5 = *(ushort *)(param_1 + 10);
  uVar20 = *(uint *)(param_1 + 0x14);
  this_00 = (basic_string *)(ulong)uVar20;
  uVar11 = (uint)this;
  uVar15 = (uint)param_1;
  if (0x141 < uVar5) {
    if (uVar5 < 0x1141) {
      if (uVar5 == 0x142) {
        pcVar16 = "PipeStorage";
        uVar23 = 0x65676172;
        goto LAB_00cfd4a8;
      }
      if (uVar5 == 0x147) {
        local_180 = (basic_ostream)0x18;
        uStack_177 = 0x6972;
        uStack_175 = 0x65;
        uStack_174 = 0x72;
        uStack_17f = (undefined4)s_NamedBarrier_0019e112._0_8_;
        cStack_17b = SUB81(s_NamedBarrier_0019e112._0_8_,4);
        cStack_17a = SUB81(s_NamedBarrier_0019e112._0_8_,5);
        cStack_179 = SUB81(s_NamedBarrier_0019e112._0_8_,6);
        cStack_178 = SUB81(s_NamedBarrier_0019e112._0_8_,7);
        uStack_173 = 0;
        goto LAB_00cfdc90;
      }
    }
    else {
      if (uVar5 == 0x1141) {
        uVar31 = 0x11;
        uVar23 = *(undefined4 *)(*(long *)param_1 + 8);
        local_1a0 = 0x74705f0a;
        uStack_19c = 0x72;
        uStack_19b = 0x5f;
        uStack_19a = 0;
        goto LAB_00cfd4ec;
      }
      if (uVar5 == 0x13d4) {
        pcVar16 = "_payloadarr_";
        goto LAB_00cfcdb0;
      }
    }
switchD_00cfcb9c_caseD_6:
    if (uVar20 == 0) goto LAB_00cfdcac;
    pbVar22 = *(basic_string **)(this + 8);
    if (pbVar22 != (basic_string *)0x0) {
      uVar31 = NEON_cnt(pbVar22,1);
      uVar30 = NEON_addv(uVar31,1);
      uVar19 = CONCAT71((int7)((ulong)uVar31 >> 8),uVar30);
      uVar21 = (uint)pbVar22;
      if (uVar19 < 2) {
        pbVar18 = (basic_string *)(ulong)(uVar21 - 1 & uVar20);
      }
      else {
        pbVar18 = this_00;
        if (pbVar22 <= this_00) {
          uVar6 = 0;
          if (uVar21 != 0) {
            uVar6 = uVar20 / uVar21;
          }
          pbVar18 = (basic_string *)(ulong)(uVar20 - uVar6 * uVar21);
        }
      }
      plVar24 = *(long **)(*(long *)this + (long)pbVar18 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if ((basic_string *)plVar24[1] == this_00) {
              if (*(uint *)(plVar24 + 2) == uVar20) goto LAB_00cfdcac;
            }
            else if ((basic_string *)((ulong)plVar24[1] & (ulong)(pbVar22 + -1)) != pbVar18) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            pbVar26 = (basic_string *)plVar24[1];
            if (pbVar26 == this_00) {
              if (*(uint *)(plVar24 + 2) == uVar20) goto LAB_00cfdcac;
            }
            else {
              if (pbVar22 <= pbVar26) {
                uVar19 = 0;
                if (pbVar22 != (basic_string *)0x0) {
                  uVar19 = (ulong)pbVar26 / (ulong)pbVar22;
                }
                pbVar26 = pbVar26 + -(uVar19 * (long)pbVar22);
              }
              if (pbVar26 != pbVar18) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    to_string((spvtools *)this_00,uVar15);
    goto LAB_00cfdc90;
  }
  switch(uVar5) {
  case 5:
    uVar20 = *(uint *)(*(long *)param_1 + 4);
    spvDecodeLiteralStringOperand(param_1,1);
    this_00 = (basic_string *)(ulong)uVar20;
    break;
  default:
    goto switchD_00cfcb9c_caseD_6;
  case 0x13:
    uStack_17f = 0x64696f76;
    goto LAB_00cfd070;
  case 0x14:
    uStack_17f = 0x6c6f6f62;
    goto LAB_00cfd070;
  case 0x15:
    cStack_178 = '\0';
    uStack_177 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    uStack_173 = 0;
    uStack_172 = 0;
    local_170 = (char *)0x0;
    uStack_198 = 0;
    uStack_197 = 0;
    uStack_193 = 0;
    uStack_192 = 0;
    local_190 = (char *)0x0;
    uVar20 = *(uint *)(*(long *)param_1 + 8);
    local_180 = (basic_ostream)0x0;
    uStack_17f = 0;
    cStack_17b = '\0';
    cStack_17a = '\0';
    cStack_179 = '\0';
    local_1a0 = 0;
    uStack_19c = 0;
    uStack_19b = 0;
    uStack_19a = 0;
    uStack_199 = 0;
    uVar21 = uVar20 - 8 >> 3 | uVar20 << 0x1d;
    if ((int)uVar21 < 3) {
      if ((uVar21 == 0) || (uVar21 == 1)) goto LAB_00cfd6a0;
LAB_00cfd648:
      to_string((spvtools *)(ulong)uVar20,uVar15);
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190,
                        CONCAT17(uStack_199,
                                 CONCAT16(uStack_19a,
                                          CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0)))) &
                        0xfffffffffffffffe);
      }
      pbVar13 = &local_180;
      uStack_198 = (undefined1)uStack_1b8;
      uStack_197 = (uint)(uStack_1b8 >> 8);
      uStack_193 = (undefined1)(uStack_1b8 >> 0x28);
      uStack_192 = (undefined2)(uStack_1b8 >> 0x30);
      local_1a0 = (uint)local_1c0;
      uStack_19c = (undefined1)(local_1c0 >> 0x20);
      uStack_19b = (undefined1)(local_1c0 >> 0x28);
      uStack_19a = (undefined1)(local_1c0 >> 0x30);
      uStack_199 = (undefined1)(local_1c0 >> 0x38);
      local_190 = local_1b0;
    }
    else {
      if ((uVar21 != 3) && (uVar21 != 7)) goto LAB_00cfd648;
LAB_00cfd6a0:
      pbVar13 = (basic_ostream *)&local_1a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)pbVar13);
    if (*(int *)(*(long *)param_1 + 0xc) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_180);
    }
    bVar10 = local_180;
    uVar20 = local_1a0;
    __n = (ulong)((byte)local_180 >> 1);
    if (((byte)local_180 & 1) != 0) {
      __n = CONCAT26(uStack_172,
                     CONCAT15(uStack_173,
                              CONCAT14(uStack_174,
                                       CONCAT13(uStack_175,CONCAT21(uStack_177,cStack_178)))));
    }
    __n_00 = (ulong)((byte)local_1a0._0_1_ >> 1);
    if ((local_1a0 & 1) != 0) {
      __n_00 = CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT41(uStack_197,uStack_198)));
    }
    uVar19 = __n_00 + __n;
    if (0xfffffffffffffff7 < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94();
    }
    if (uVar19 < 0x17) {
      uVar15 = (int)uVar19 << 1;
      uStack_1b8 = 0;
      local_1b0 = (char *)0x0;
      local_1c0 = (ulong)(byte)uVar15;
    }
    else {
      uVar28 = 0x1a;
      if ((uVar19 | 7) != 0x17) {
        uVar28 = (uVar19 | 7) + 1;
      }
      local_1b0 = (char *)operator_new(uVar28);
      local_1c0 = uVar28 | 1;
      uVar15 = (uint)local_1c0 & 0xff;
      uStack_1b8 = uVar19;
    }
    pcVar16 = local_1b0;
    if ((uVar15 & 1) == 0) {
      pcVar16 = (char *)((long)&local_1c0 + 1);
    }
    if (__n != 0) {
      pcVar27 = local_170;
      if (((byte)bVar10 & 1) == 0) {
        pcVar27 = (char *)&uStack_17f;
      }
      memmove(pcVar16,pcVar27,__n);
    }
    if (__n_00 != 0) {
      pcVar27 = local_190;
      if ((uVar20 & 1) == 0) {
        pcVar27 = (char *)((long)&local_1a0 + 1);
      }
      memmove(pcVar16 + __n,pcVar27,__n_00);
    }
    (pcVar16 + __n)[__n_00] = '\0';
    SaveName(uVar11,this_00);
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190,
                      CONCAT17(uStack_199,
                               CONCAT16(uStack_19a,
                                        CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0)))) &
                      0xfffffffffffffffe);
    }
    if (((byte)local_180 & 1) == 0) goto LAB_00cfdcac;
    goto LAB_00cfdc9c;
  case 0x16:
    uVar20 = *(uint *)(*(long *)param_1 + 8);
    if (3 < *(ushort *)(param_1 + 8)) {
      iVar4 = *(int *)(*(long *)param_1 + 0xc);
      if (iVar4 == 0x1077) {
        pcVar16 = "fp8e5m2";
      }
      else if (iVar4 == 0x1076) {
        pcVar16 = "fp8e4m3";
      }
      else {
        if (iVar4 != 0) goto LAB_00cfd5b8;
        pcVar16 = "bfloat16";
      }
LAB_00cfdc78:
      _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn210000ILi0EEEPKc
                (&local_180,pcVar16);
      break;
    }
LAB_00cfd5b8:
    if (uVar20 == 0x40) {
      pcVar16 = "double";
      goto LAB_00cfdc78;
    }
    if (uVar20 == 0x20) {
      pcVar16 = "float";
      goto LAB_00cfdc78;
    }
    if (uVar20 == 0x10) {
      _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn210000ILi0EEEPKc
                (&local_180,&DAT_001d7f1d);
      break;
    }
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn210000ILi0EEEPKc
              (&local_1a0,&DAT_0016fd5e);
    to_string((spvtools *)(ulong)uVar20,extraout_w1);
    FUN_00cfdfec(&local_180,&local_1a0,&local_1c0);
    SaveName(uVar11,this_00);
    goto joined_r0x00cfd548;
  case 0x17:
    uVar19 = local_1c0 >> 0x10;
    local_1c0 = CONCAT62((uint6)uVar19 & 0xffffffffff00,0x7602);
    uVar20 = *(uint *)(*(long *)param_1 + 0xc);
    goto LAB_00cfd0e8;
  case 0x18:
    uVar20 = *(uint *)(*(long *)param_1 + 0xc);
    local_1c0 = CONCAT35(local_1c0._5_3_,0x74616d06);
LAB_00cfd0e8:
    to_string((spvtools *)(ulong)uVar20,uVar15);
    pcVar16 = local_1d0;
    if ((local_1e0 & 1) == 0) {
      pcVar16 = (char *)((long)&local_1e0 + 1);
    }
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1c0,(ulong)pcVar16);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_190 = (char *)puVar12[2];
    uStack_198 = (undefined1)uVar32;
    uStack_197 = (uint)((ulong)uVar32 >> 8);
    uStack_193 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_192 = (undefined2)((ulong)uVar32 >> 0x30);
    local_1a0 = (uint)uVar31;
    uStack_19c = (undefined1)((ulong)uVar31 >> 0x20);
    uStack_19b = (undefined1)((ulong)uVar31 >> 0x28);
    uStack_19a = (undefined1)((ulong)uVar31 >> 0x30);
    uStack_199 = (undefined1)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    NameForId(uVar11);
    puVar8 = local_1e8;
    if ((local_1f8 & 1) == 0) {
      puVar8 = &uStack_1f7;
    }
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1a0,(ulong)puVar8);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_170 = (char *)puVar12[2];
    cStack_178 = (char)uVar32;
    uStack_177 = (undefined2)((ulong)uVar32 >> 8);
    uStack_175 = (undefined1)((ulong)uVar32 >> 0x18);
    uStack_174 = (undefined1)((ulong)uVar32 >> 0x20);
    uStack_173 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_172 = (undefined2)((ulong)uVar32 >> 0x30);
    local_180 = SUB81(uVar31,0);
    uStack_17f = (undefined4)((ulong)uVar31 >> 8);
    cStack_17b = (char)((ulong)uVar31 >> 0x28);
    cStack_17a = (char)((ulong)uVar31 >> 0x30);
    cStack_179 = (char)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    SaveName(uVar11,this_00);
    if (((byte)local_180 & 1) != 0) {
      operator_delete(local_170,
                      CONCAT17(cStack_179,
                               CONCAT16(cStack_17a,
                                        CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180)))) &
                      0xfffffffffffffffe);
    }
    if ((local_1f8 & 1) != 0) {
      operator_delete(local_1e8,CONCAT71(uStack_1f7,local_1f8) & 0xfffffffffffffffe);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190,
                      CONCAT17(uStack_199,
                               CONCAT16(uStack_19a,
                                        CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0)))) &
                      0xfffffffffffffffe);
    }
    uVar19 = local_1c0;
    pcVar16 = local_1b0;
    if ((local_1e0 & 1) != 0) {
      operator_delete(local_1d0,local_1e0 & 0xfffffffffffffffe);
      uVar19 = local_1c0;
      pcVar16 = local_1b0;
    }
joined_r0x00cfd004:
    if ((uVar19 & 1) == 0) goto LAB_00cfdcac;
    goto LAB_00cfdca4;
  case 0x1c:
    local_1e0 = CONCAT17(local_1e0._7_1_,0x5f7272615f0a);
    NameForId(uVar11);
    goto LAB_00cfce9c;
  case 0x1d:
    pcVar16 = "_runtimearr_";
LAB_00cfcdb0:
    uVar31 = *(undefined8 *)pcVar16;
    uStack_197 = 0x5f727261;
    uStack_193 = 0;
    uStack_19c = (undefined1)((ulong)uVar31 >> 0x18);
    uStack_19b = (undefined1)((ulong)uVar31 >> 0x20);
    uStack_19a = (undefined1)((ulong)uVar31 >> 0x28);
    uStack_199 = (undefined1)((ulong)uVar31 >> 0x30);
    uStack_198 = (undefined1)((ulong)uVar31 >> 0x38);
    local_1a0 = CONCAT31((int3)uVar31,0x18);
    NameForId(uVar11);
    goto LAB_00cfd4fc;
  case 0x1e:
    uStack_197 = uStack_197 & 0xffffff00;
    local_1a0 = 0x74735f10;
    uStack_19c = 0x72;
    uStack_19b = 0x75;
    uStack_19a = 99;
    uStack_199 = 0x74;
    uStack_198 = 0x5f;
    to_string((spvtools *)this_00,uVar15);
    goto LAB_00cfd4fc;
  case 0x1f:
    local_1a0 = 0x61704f0e;
    uStack_19c = 0x71;
    uStack_19b = 0x75;
    uStack_19a = 0x65;
    uStack_199 = 0x5f;
    uStack_198 = 0;
    pbVar22 = (basic_string *)spvDecodeLiteralStringOperand(param_1,1);
    Sanitize(pbVar22);
    pcVar16 = local_1b0;
    if ((local_1c0 & 1) == 0) {
      pcVar16 = (char *)((long)&local_1c0 + 1);
    }
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1a0,(ulong)pcVar16);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_170 = (char *)puVar12[2];
    cStack_178 = (char)uVar32;
    uStack_177 = (undefined2)((ulong)uVar32 >> 8);
    uStack_175 = (undefined1)((ulong)uVar32 >> 0x18);
    uStack_174 = (undefined1)((ulong)uVar32 >> 0x20);
    uStack_173 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_172 = (undefined2)((ulong)uVar32 >> 0x30);
    local_180 = SUB81(uVar31,0);
    uStack_17f = (undefined4)((ulong)uVar31 >> 8);
    cStack_17b = (char)((ulong)uVar31 >> 0x28);
    cStack_17a = (char)((ulong)uVar31 >> 0x30);
    cStack_179 = (char)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    SaveName(uVar11,this_00);
    if (((byte)local_180 & 1) != 0) {
      operator_delete(local_170,
                      CONCAT17(cStack_179,
                               CONCAT16(cStack_17a,
                                        CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180)))) &
                      0xfffffffffffffffe);
    }
    uVar19 = local_1e0;
    pcVar16 = local_1d0;
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
      uVar19 = local_1e0;
      pcVar16 = local_1d0;
    }
    goto joined_r0x00cfcd84;
  case 0x20:
    local_1e0 = CONCAT17(local_1e0._7_1_,0x5f7274705f0a);
    NameForEnumOperand(&local_1f8,this,0x11,*(undefined4 *)(*(long *)param_1 + 8));
LAB_00cfce9c:
    puVar8 = local_1e8;
    if ((local_1f8 & 1) == 0) {
      puVar8 = &uStack_1f7;
    }
    puVar14 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_1e0,(ulong)puVar8);
    uStack_1b8 = puVar14[1];
    local_1c0 = *puVar14;
    local_1b0 = (char *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1c0);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_190 = (char *)puVar12[2];
    uStack_198 = (undefined1)uVar32;
    uStack_197 = (uint)((ulong)uVar32 >> 8);
    uStack_193 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_192 = (undefined2)((ulong)uVar32 >> 0x30);
    local_1a0 = (uint)uVar31;
    uStack_19c = (undefined1)((ulong)uVar31 >> 0x20);
    uStack_19b = (undefined1)((ulong)uVar31 >> 0x28);
    uStack_19a = (undefined1)((ulong)uVar31 >> 0x30);
    uStack_199 = (undefined1)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    NameForId(uVar11);
    puVar8 = local_200;
    if ((local_210 & 1) == 0) {
      puVar8 = &uStack_20f;
    }
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1a0,(ulong)puVar8);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_170 = (char *)puVar12[2];
    cStack_178 = (char)uVar32;
    uStack_177 = (undefined2)((ulong)uVar32 >> 8);
    uStack_175 = (undefined1)((ulong)uVar32 >> 0x18);
    uStack_174 = (undefined1)((ulong)uVar32 >> 0x20);
    uStack_173 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_172 = (undefined2)((ulong)uVar32 >> 0x30);
    local_180 = SUB81(uVar31,0);
    uStack_17f = (undefined4)((ulong)uVar31 >> 8);
    cStack_17b = (char)((ulong)uVar31 >> 0x28);
    cStack_17a = (char)((ulong)uVar31 >> 0x30);
    cStack_179 = (char)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    SaveName(uVar11,this_00);
    if (((byte)local_180 & 1) != 0) {
      operator_delete(local_170,
                      CONCAT17(cStack_179,
                               CONCAT16(cStack_17a,
                                        CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180)))) &
                      0xfffffffffffffffe);
    }
    if ((local_210 & 1) != 0) {
      operator_delete(local_200,CONCAT71(uStack_20f,local_210) & 0xfffffffffffffffe);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190,
                      CONCAT17(uStack_199,
                               CONCAT16(uStack_19a,
                                        CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0)))) &
                      0xfffffffffffffffe);
    }
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
    }
    uVar19 = local_1e0;
    pcVar16 = local_1d0;
    if ((local_1f8 & 1) != 0) {
      operator_delete(local_1e8,CONCAT71(uStack_1f7,local_1f8) & 0xfffffffffffffffe);
      uVar19 = local_1e0;
      pcVar16 = local_1d0;
    }
    goto joined_r0x00cfd004;
  case 0x22:
    uStack_17f = 0x6e657645;
    cStack_17b = 't';
    goto LAB_00cfd484;
  case 0x23:
    pcVar16 = "DeviceEvent";
    uVar23 = 0x746e6576;
LAB_00cfd4a8:
    uVar31 = *(undefined8 *)pcVar16;
    local_180 = (basic_ostream)0x16;
    uStack_177 = (undefined2)((uint)uVar23 >> 8);
    uStack_175 = (undefined1)((uint)uVar23 >> 0x18);
    uStack_17f = (undefined4)uVar31;
    cStack_17b = (char)((ulong)uVar31 >> 0x20);
    cStack_17a = (char)((ulong)uVar31 >> 0x28);
    cStack_179 = (char)((ulong)uVar31 >> 0x30);
    cStack_178 = (char)((ulong)uVar31 >> 0x38);
    uStack_174 = 0;
    break;
  case 0x24:
    local_180 = (basic_ostream)0x12;
    uStack_177 = 100;
    uStack_17f = (undefined4)s_ReserveId_0017ab3e._0_8_;
    cStack_17b = SUB81(s_ReserveId_0017ab3e._0_8_,4);
    cStack_17a = SUB81(s_ReserveId_0017ab3e._0_8_,5);
    cStack_179 = SUB81(s_ReserveId_0017ab3e._0_8_,6);
    cStack_178 = SUB81(s_ReserveId_0017ab3e._0_8_,7);
    break;
  case 0x25:
    uStack_17f = 0x75657551;
    goto LAB_00cfccd4;
  case 0x26:
    uVar31 = 0x1a;
    uVar23 = *(undefined4 *)(*(long *)param_1 + 8);
    uStack_19b = 0;
    local_1a0 = 0x70695008;
    uStack_19c = 0x65;
LAB_00cfd4ec:
    NameForEnumOperand(&local_1c0,this,uVar31,uVar23);
LAB_00cfd4fc:
    pcVar16 = local_1b0;
    if ((local_1c0 & 1) == 0) {
      pcVar16 = (char *)((long)&local_1c0 + 1);
    }
    puVar12 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_1a0,(ulong)pcVar16);
    uVar32 = puVar12[1];
    uVar31 = *puVar12;
    local_170 = (char *)puVar12[2];
    cStack_178 = (char)uVar32;
    uStack_177 = (undefined2)((ulong)uVar32 >> 8);
    uStack_175 = (undefined1)((ulong)uVar32 >> 0x18);
    uStack_174 = (undefined1)((ulong)uVar32 >> 0x20);
    uStack_173 = (undefined1)((ulong)uVar32 >> 0x28);
    uStack_172 = (undefined2)((ulong)uVar32 >> 0x30);
    local_180 = SUB81(uVar31,0);
    uStack_17f = (undefined4)((ulong)uVar31 >> 8);
    cStack_17b = (char)((ulong)uVar31 >> 0x28);
    cStack_17a = (char)((ulong)uVar31 >> 0x30);
    cStack_179 = (char)((ulong)uVar31 >> 0x38);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    SaveName(uVar11,this_00);
joined_r0x00cfd548:
    uVar19 = local_1c0;
    pcVar16 = local_1b0;
    if (((byte)local_180 & 1) != 0) {
      operator_delete(local_170,
                      CONCAT17(cStack_179,
                               CONCAT16(cStack_17a,
                                        CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180)))) &
                      0xfffffffffffffffe);
      uVar19 = local_1c0;
      pcVar16 = local_1b0;
    }
joined_r0x00cfcd84:
    if ((uVar19 & 1) != 0) {
      operator_delete(pcVar16,uVar19 & 0xfffffffffffffffe);
    }
    if ((local_1a0 & 1) == 0) goto LAB_00cfdcac;
    uVar19 = CONCAT17(uStack_199,
                      CONCAT16(uStack_19a,CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0))));
    pcVar16 = local_190;
    goto LAB_00cfdca4;
  case 0x29:
    uStack_17f = 0x65757274;
LAB_00cfd070:
    local_180 = (basic_ostream)0x8;
    cStack_17b = '\0';
    break;
  case 0x2a:
    uStack_17f = 0x736c6166;
LAB_00cfccd4:
    cStack_17b = 'e';
LAB_00cfd484:
    local_180 = (basic_ostream)0xa;
    cStack_17a = '\0';
    break;
  case 0x2b:
    local_e0 = 0;
    lVar17 = *(long *)(PTR_VTT_00d6c7e0 + 8);
    puVar1 = PTR_vtable_00d6c7d8 + 0x40;
    local_180 = SUB81(lVar17,0);
    uStack_17f = (undefined4)((ulong)lVar17 >> 8);
    cStack_17b = (char)((ulong)lVar17 >> 0x28);
    cStack_17a = (char)((ulong)lVar17 >> 0x30);
    cStack_179 = (char)((ulong)lVar17 >> 0x38);
    local_110[0] = puVar1;
    *(undefined8 *)(&local_180 + *(long *)(lVar17 + -0x18)) =
         *(undefined8 *)(PTR_VTT_00d6c7e0 + 0x10);
    lVar17 = *(long *)(CONCAT17(cStack_179,
                                CONCAT16(cStack_17a,
                                         CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180)))) +
                      -0x18);
    std::__ndk1::ios_base::init(&local_180 + lVar17);
    *(undefined8 *)((long)&uStack_f8 + lVar17) = 0;
    *(undefined4 *)((long)auStack_f0 + lVar17) = 0xffffffff;
    puVar2 = puVar2 + 0x18;
    puVar3 = PTR_vtable_00d6cdf8 + 0x10;
    local_180 = SUB81(puVar2,0);
    uStack_17f = (undefined4)((ulong)puVar2 >> 8);
    cStack_17b = (char)((ulong)puVar2 >> 0x28);
    cStack_17a = (char)((ulong)puVar2 >> 0x30);
    cStack_179 = (char)((ulong)puVar2 >> 0x38);
    cStack_178 = (char)puVar3;
    uStack_177 = (undefined2)((ulong)puVar3 >> 8);
    uStack_175 = (undefined1)((ulong)puVar3 >> 0x18);
    uStack_174 = (undefined1)((ulong)puVar3 >> 0x20);
    uStack_173 = (undefined1)((ulong)puVar3 >> 0x28);
    uStack_172 = (undefined2)((ulong)puVar3 >> 0x30);
    local_110[0] = puVar1;
    std::__ndk1::locale::locale((locale *)&local_170);
    puVar1 = PTR_vtable_00d6c7f0;
    puVar2 = PTR_vtable_00d6c7f0 + 0x10;
    cStack_178 = (char)puVar2;
    uStack_177 = (undefined2)((ulong)puVar2 >> 8);
    uStack_175 = (undefined1)((ulong)puVar2 >> 0x18);
    uStack_174 = (undefined1)((ulong)puVar2 >> 0x20);
    uStack_173 = (undefined1)((ulong)puVar2 >> 0x28);
    uStack_172 = (undefined2)((ulong)puVar2 >> 0x30);
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    local_118 = 0x10;
    FUN_00cf1ccc(&cStack_178);
    EmitNumericLiteral(&local_180,param_1,(spv_parsed_operand_t *)(*(long *)(param_1 + 0x18) + 0x28)
                      );
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    uVar19 = CONCAT26(uStack_192,CONCAT15(uStack_193,CONCAT41(uStack_197,uStack_198)));
    pcVar16 = local_190;
    if ((local_1a0 & 1) == 0) {
      pcVar16 = (char *)((long)&local_1a0 + 1);
      uVar19 = (ulong)((byte)local_1a0._0_1_ >> 1);
    }
    if (uVar19 != 0) {
      pcVar27 = pcVar16;
      if (7 < uVar19) {
        if (uVar19 < 0x10) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar19 & 0xfffffffffffffff0;
          pcVar27 = pcVar16 + 7;
          uVar28 = uVar25;
          do {
            uVar32 = *(undefined8 *)(pcVar27 + 1);
            uVar31 = *(undefined8 *)(pcVar27 + -7);
            if (((uint)uVar31 & 0xff) == 0x2d) {
              pcVar27[-7] = 'n';
            }
            if ((char)((ulong)uVar31 >> 8) == '-') {
              pcVar27[-6] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x10) == '-') {
              pcVar27[-5] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x18) == '-') {
              pcVar27[-4] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x20) == '-') {
              pcVar27[-3] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x28) == '-') {
              pcVar27[-2] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x30) == '-') {
              pcVar27[-1] = 'n';
            }
            if ((char)((ulong)uVar31 >> 0x38) == '-') {
              *pcVar27 = 'n';
            }
            if (((uint)uVar32 & 0xff) == 0x2d) {
              pcVar27[1] = 'n';
            }
            if ((char)((ulong)uVar32 >> 8) == '-') {
              pcVar27[2] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x10) == '-') {
              pcVar27[3] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x18) == '-') {
              pcVar27[4] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x20) == '-') {
              pcVar27[5] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x28) == '-') {
              pcVar27[6] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x30) == '-') {
              pcVar27[7] = 'n';
            }
            if ((char)((ulong)uVar32 >> 0x38) == '-') {
              pcVar27[8] = 'n';
            }
            uVar28 = uVar28 - 0x10;
            pcVar27 = pcVar27 + 0x10;
          } while (uVar28 != 0);
          if (uVar19 == uVar25) goto LAB_00cfdafc;
          if (((uint)uVar19 >> 3 & 1) == 0) {
            pcVar27 = pcVar16 + uVar25;
            goto LAB_00cfdce8;
          }
        }
        uVar28 = uVar19 & 0xfffffffffffffff8;
        pcVar27 = pcVar16 + uVar28;
        lVar17 = uVar25 - uVar28;
        pcVar29 = pcVar16 + uVar25 + 3;
        do {
          uVar31 = *(undefined8 *)(pcVar29 + -3);
          if ((char)uVar31 == '-') {
            pcVar29[-3] = 'n';
          }
          if ((char)((ulong)uVar31 >> 8) == '-') {
            pcVar29[-2] = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x10) == '-') {
            pcVar29[-1] = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x18) == '-') {
            *pcVar29 = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x20) == '-') {
            pcVar29[1] = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x28) == '-') {
            pcVar29[2] = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x30) == '-') {
            pcVar29[3] = 'n';
          }
          if ((char)((ulong)uVar31 >> 0x38) == '-') {
            pcVar29[4] = 'n';
          }
          lVar17 = lVar17 + 8;
          pcVar29 = pcVar29 + 8;
        } while (lVar17 != 0);
        if (uVar19 == uVar28) goto LAB_00cfdafc;
      }
LAB_00cfdce8:
      do {
        if (*pcVar27 == '-') {
          *pcVar27 = 'n';
        }
        pcVar27 = pcVar27 + 1;
      } while (pcVar27 != pcVar16 + uVar19);
    }
LAB_00cfdafc:
    NameForId(uVar11);
    puVar14 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_1f8);
    uStack_1d8 = puVar14[1];
    local_1e0 = *puVar14;
    local_1d0 = (char *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    pcVar16 = (char *)((ulong)&local_1a0 | 1);
    if ((local_1a0 & 1) != 0) {
      pcVar16 = local_190;
    }
    puVar14 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((char *)&local_1e0,(ulong)pcVar16);
    uStack_1b8 = puVar14[1];
    local_1c0 = *puVar14;
    local_1b0 = (char *)puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    SaveName(uVar11,this_00);
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0,local_1c0 & 0xfffffffffffffffe);
    }
    if ((local_1e0 & 1) != 0) {
      operator_delete(local_1d0,local_1e0 & 0xfffffffffffffffe);
    }
    if ((local_1f8 & 1) != 0) {
      operator_delete(local_1e8,CONCAT71(uStack_1f7,local_1f8) & 0xfffffffffffffffe);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190,
                      CONCAT17(uStack_199,
                               CONCAT16(uStack_19a,
                                        CONCAT15(uStack_19b,CONCAT14(uStack_19c,local_1a0)))) &
                      0xfffffffffffffffe);
    }
    lVar17 = *(long *)puVar9;
    local_180 = SUB81(lVar17,0);
    uStack_17f = (undefined4)((ulong)lVar17 >> 8);
    cStack_17b = (char)((ulong)lVar17 >> 0x28);
    cStack_17a = (char)((ulong)lVar17 >> 0x30);
    cStack_179 = (char)((ulong)lVar17 >> 0x38);
    *(undefined8 *)(&local_180 + *(long *)(lVar17 + -0x18)) = *(undefined8 *)(puVar9 + 0x18);
    puVar1 = puVar1 + 0x10;
    cStack_178 = (char)puVar1;
    uStack_177 = (undefined2)((ulong)puVar1 >> 8);
    uStack_175 = (undefined1)((ulong)puVar1 >> 0x18);
    uStack_174 = (undefined1)((ulong)puVar1 >> 0x20);
    uStack_173 = (undefined1)((ulong)puVar1 >> 0x28);
    uStack_172 = (undefined2)((ulong)puVar1 >> 0x30);
    if ((local_138 & 1) != 0) {
      operator_delete(local_128,local_138 & 0xfffffffffffffffe);
    }
    puVar2 = PTR_vtable_00d6cdf8 + 0x10;
    cStack_178 = (char)puVar2;
    uStack_177 = (undefined2)((ulong)puVar2 >> 8);
    uStack_175 = (undefined1)((ulong)puVar2 >> 0x18);
    uStack_174 = (undefined1)((ulong)puVar2 >> 0x20);
    uStack_173 = (undefined1)((ulong)puVar2 >> 0x28);
    uStack_172 = (undefined2)((ulong)puVar2 >> 0x30);
    std::__ndk1::locale::~locale((locale *)&local_170);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_110);
    goto LAB_00cfdcac;
  case 0x47:
    lVar17 = *(long *)param_1;
    if (*(int *)(lVar17 + 8) == 0xb) {
      SaveBuiltInName(this,*(uint *)(lVar17 + 4),*(uint *)(lVar17 + 0xc));
    }
    goto LAB_00cfdcac;
  }
LAB_00cfdc90:
  SaveName(uVar11,this_00);
  if (((byte)local_180 & 1) != 0) {
LAB_00cfdc9c:
    uVar19 = CONCAT17(cStack_179,
                      CONCAT16(cStack_17a,CONCAT15(cStack_17b,CONCAT41(uStack_17f,local_180))));
    pcVar16 = local_170;
LAB_00cfdca4:
    operator_delete(pcVar16,uVar19 & 0xfffffffffffffffe);
  }
LAB_00cfdcac:
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// === NameForEnumOperand @ 00cfdd1c ===

/* spvtools::FriendlyNameMapper::NameForEnumOperand(spv_operand_type_t, unsigned int) */

void spvtools::FriendlyNameMapper::NameForEnumOperand
               (ulong *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined7 *puVar2;
  int iVar3;
  ulong *puVar4;
  char *__s;
  size_t __n;
  uint extraout_w1;
  ulong uVar5;
  undefined1 *__dest;
  ulong uVar6;
  ulong uVar7;
  byte local_80;
  undefined7 uStack_7f;
  undefined7 *local_70;
  byte local_68;
  undefined7 uStack_67;
  char cStack_60;
  undefined4 local_5f;
  undefined1 local_5b;
  void *local_58;
  OperandDesc *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (OperandDesc *)0x0;
  iVar3 = LookupOperand(param_3,param_4,&local_50);
  if (iVar3 == 0) {
    __s = (char *)OperandDesc::name(local_50);
    __n = strlen(__s);
    if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94();
    }
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
      if (__n == 0) {
        *__dest = 0;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_00cfde4c;
      }
    }
    else {
      uVar5 = 0x1a;
      if ((__n | 7) != 0x17) {
        uVar5 = (__n | 7) + 1;
      }
      __dest = (undefined1 *)operator_new(uVar5);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    memmove(__dest,__s,__n);
    __dest[__n] = 0;
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cfde4c;
  }
  else {
    local_68 = 0x18;
    local_5f = 0x7373616c;
    uStack_67 = (undefined7)s_StorageClass_00152ad6._0_8_;
    cStack_60 = SUB81(s_StorageClass_00152ad6._0_8_,7);
    local_5b = 0;
    to_string((spvtools *)(ulong)param_4,extraout_w1);
    puVar2 = local_70;
    if ((local_80 & 1) == 0) {
      puVar2 = &uStack_7f;
    }
    puVar4 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_68,(ulong)puVar2);
    uVar7 = puVar4[1];
    uVar6 = *puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    uVar5 = puVar4[2];
    puVar4[2] = 0;
    param_1[1] = uVar7;
    *param_1 = uVar6;
    param_1[2] = uVar5;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe);
    }
    if ((local_68 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_00cfde4c:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      operator_delete(local_58,CONCAT71(uStack_67,local_68) & 0xfffffffffffffffe);
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00cfde4c;
    }
  }
  return;
}



// === ParseInstructionForwarder @ 00cfdf30 ===

/* spvtools::FriendlyNameMapper::ParseInstructionForwarder(void*, spv_parsed_instruction_t const*)
    */

undefined8
spvtools::FriendlyNameMapper::ParseInstructionForwarder
          (void *param_1,spv_parsed_instruction_t *param_2)

{
  ParseInstruction((FriendlyNameMapper *)param_1,param_2);
  return 0;
}



// === _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn210000ILi0EEEPKc @ 00cfdf48 ===

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn210000ILi0EEEPKc
               (ulong *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined1 *__dest;
  
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar1 = (__n | 7) + 1;
    }
    __dest = (undefined1 *)operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memmove(__dest,param_2,__n);
  __dest[__n] = 0;
  return;
}



// === __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&> @ 00cfe03c ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
          (__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  void *pvVar2;
  basic_string *pbVar3;
  byte bVar4;
  basic_string bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined1 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 uStack_69;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar16 = *(ulong *)(param_1 + 8);
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar16 = (ulong)((byte)*param_1 >> 1);
  }
  uVar8 = FUN_00cfe460(&uStack_69,pbVar3,uVar16);
  uVar16 = *(ulong *)(this + 8);
  if (uVar16 != 0) {
    uVar19 = NEON_cnt(uVar16,1);
    uVar17 = NEON_addv(uVar19,1);
    uVar12 = CONCAT71((int7)((ulong)uVar19 >> 8),uVar17);
    if (uVar12 < 2) {
      unaff_x27 = uVar16 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar16 <= uVar8) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar8 / uVar16;
        }
        unaff_x27 = uVar8 - uVar9 * uVar16;
      }
    }
    plVar11 = *(long **)(*(long *)this + unaff_x27 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      __n = (ulong)((byte)*param_1 >> 1);
      pbVar3 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
        pbVar3 = *(basic_string **)(param_1 + 0x10);
      }
      if (uVar12 < 2) {
        do {
          if (plVar11[1] == uVar8) {
            bVar4 = *(byte *)(plVar11 + 2);
            sVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar1 = plVar11[3];
            }
            if (sVar1 == __n) {
              pvVar2 = (void *)((long)plVar11 + 0x11);
              if ((bVar4 & 1) != 0) {
                pvVar2 = (void *)plVar11[4];
              }
              iVar7 = memcmp(pvVar2,pbVar3,__n);
              if (iVar7 == 0) goto LAB_00cfe178;
            }
          }
          else if ((plVar11[1] & uVar16 - 1) != unaff_x27) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar8) {
            bVar4 = *(byte *)(plVar11 + 2);
            sVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar1 = plVar11[3];
            }
            if (sVar1 == __n) {
              pvVar2 = (void *)((long)plVar11 + 0x11);
              if ((bVar4 & 1) != 0) {
                pvVar2 = (void *)plVar11[4];
              }
              iVar7 = memcmp(pvVar2,pbVar3,__n);
              if (iVar7 == 0) goto LAB_00cfe178;
            }
          }
          else {
            if (uVar16 <= uVar12) {
              uVar9 = 0;
              if (uVar16 != 0) {
                uVar9 = uVar12 / uVar16;
              }
              uVar12 = uVar12 - uVar9 * uVar16;
            }
            if (uVar12 != unaff_x27) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)operator_new(0x28);
  bVar5 = *param_2;
  *plVar11 = 0;
  plVar11[1] = uVar8;
  if (((byte)bVar5 & 1) == 0) {
    lVar15 = *(long *)param_2;
    lVar10 = *(long *)(param_2 + 0x10);
    plVar11[3] = *(long *)(param_2 + 8);
    plVar11[2] = lVar15;
    plVar11[4] = lVar10;
    fVar20 = *(float *)(this + 0x20);
    fVar18 = (float)(*(long *)(this + 0x18) + 1);
    if (uVar16 == 0) goto LAB_00cfe2cc;
LAB_00cfe260:
    if (fVar20 * (float)uVar16 < fVar18) goto LAB_00cfe2cc;
    lVar10 = *(long *)this;
    plVar13 = *(long **)(lVar10 + unaff_x27 * 8);
joined_r0x00cfe428:
    if (plVar13 != (long *)0x0) goto LAB_00cfe27c;
LAB_00cfe3dc:
    p_Var14 = this + 0x10;
    lVar15 = *(long *)p_Var14;
    *(long **)p_Var14 = plVar11;
    *plVar11 = lVar15;
    *(__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      **)(lVar10 + unaff_x27 * 8) = p_Var14;
    if (*plVar11 != 0) {
      uVar8 = *(ulong *)(*plVar11 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        *(long **)(lVar10 + (uVar8 & uVar16 - 1) * 8) = plVar11;
      }
      else {
        if (uVar16 <= uVar8) {
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = uVar8 / uVar16;
          }
          uVar8 = uVar8 - uVar12 * uVar16;
        }
        *(long **)(lVar10 + uVar8 * 8) = plVar11;
      }
    }
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar11 + 2),*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
    fVar20 = *(float *)(this + 0x20);
    fVar18 = (float)(*(long *)(this + 0x18) + 1);
    if (uVar16 != 0) goto LAB_00cfe260;
LAB_00cfe2cc:
    if (uVar16 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar12 = uVar12 | uVar16 << 1;
    if (uVar12 <= (ulong)(long)(fVar18 / fVar20)) {
      uVar12 = (long)(fVar18 / fVar20);
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      uVar12 = std::__ndk1::__next_prime(uVar12);
    }
    uVar16 = *(ulong *)(this + 8);
    if (uVar16 < uVar12) {
LAB_00cfe330:
      __do_rehash<true>(this,uVar12);
    }
    else if (uVar12 < uVar16) {
      uVar9 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar16 < 3) {
LAB_00cfe3a4:
        uVar9 = std::__ndk1::__next_prime(uVar9);
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
      }
      else {
        uVar19 = NEON_cnt(uVar16,1);
        uVar17 = NEON_addv(uVar19,1);
        if (1 < CONCAT71((int7)((ulong)uVar19 >> 8),uVar17)) goto LAB_00cfe3a4;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
      }
      if (uVar12 < uVar16) goto LAB_00cfe330;
    }
    uVar16 = *(ulong *)(this + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar8;
      lVar10 = *(long *)this;
      plVar13 = *(long **)(lVar10 + unaff_x27 * 8);
      goto joined_r0x00cfe428;
    }
    if (uVar8 < uVar16) {
      lVar10 = *(long *)this;
      plVar13 = *(long **)(lVar10 + uVar8 * 8);
      unaff_x27 = uVar8;
      goto joined_r0x00cfe428;
    }
    uVar12 = 0;
    if (uVar16 != 0) {
      uVar12 = uVar8 / uVar16;
    }
    unaff_x27 = uVar8 - uVar12 * uVar16;
    lVar10 = *(long *)this;
    plVar13 = *(long **)(lVar10 + unaff_x27 * 8);
    if (plVar13 == (long *)0x0) goto LAB_00cfe3dc;
LAB_00cfe27c:
    *plVar11 = *plVar13;
    *plVar13 = (long)plVar11;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar11;
  }
LAB_00cfe18c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00cfe178:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar11;
  }
  goto LAB_00cfe18c;
}



// === __do_rehash<true> @ 00cfe8ac ===

/* void std::__ndk1::__hash_table<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__do_rehash<true>(unsigned
   long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__do_rehash<true>(__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>> @ 00cfea54 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > >, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined1 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar13 = *(ulong *)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  uVar14 = (ulong)uVar1;
  if (uVar13 != 0) {
    uVar16 = NEON_cnt(uVar13,1);
    uVar15 = NEON_addv(uVar16,1);
    uVar8 = CONCAT71((int7)((ulong)uVar16 >> 8),uVar15);
    uVar12 = (uint)uVar13;
    if (uVar8 < 2) {
      unaff_x23 = (ulong)(uVar12 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar13 <= uVar14) {
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = uVar1 / uVar12;
        }
        unaff_x23 = (ulong)(uVar1 - uVar3 * uVar12);
      }
    }
    plVar5 = *(long **)(*(long *)param_1 + unaff_x23 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar5[1] == uVar14) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar5[1] & uVar13 - 1) != unaff_x23) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar5[1];
          if (uVar8 == uVar14) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar13 <= uVar8) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar8 / uVar13;
              }
              uVar8 = uVar8 - uVar10 * uVar13;
            }
            if (uVar8 != unaff_x23) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = (long *)operator_new(0x30);
  lVar6 = *(long *)(param_1 + 6);
  puVar4 = *(undefined4 **)param_4;
  fVar17 = (float)param_1[8];
  *plVar5 = 0;
  plVar5[1] = uVar14;
  uVar2 = *puVar4;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 2) = uVar2;
  if ((uVar13 != 0) && ((float)(lVar6 + 1) <= fVar17 * (float)uVar13)) {
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
    goto joined_r0x00cfed60;
  }
  if (uVar13 < 3) {
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar8 = uVar8 | uVar13 << 1;
  uVar10 = (ulong)((float)(lVar6 + 1) / fVar17);
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    uVar8 = std::__ndk1::__next_prime(uVar8);
    uVar13 = *(ulong *)(param_1 + 2);
  }
  if (uVar13 < uVar8) {
LAB_00cfec4c:
    __do_rehash<true>((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       *)param_1,uVar8);
  }
  else if (uVar8 < uVar13) {
    uVar10 = (ulong)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if (uVar13 < 3) {
LAB_00cfecc8:
      uVar10 = std::__ndk1::__next_prime(uVar10);
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
    }
    else {
      uVar16 = NEON_cnt(uVar13,1);
      uVar15 = NEON_addv(uVar16,1);
      if (1 < CONCAT71((int7)((ulong)uVar16 >> 8),uVar15)) goto LAB_00cfecc8;
      if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
    }
    if (uVar8 < uVar13) goto LAB_00cfec4c;
  }
  uVar13 = *(ulong *)(param_1 + 2);
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar13 - 1U & uVar1);
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
  }
  else if (uVar14 < uVar13) {
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + uVar14 * 8);
    unaff_x23 = uVar14;
  }
  else {
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = uVar14 / uVar13;
    }
    unaff_x23 = uVar14 - uVar8 * uVar13;
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
  }
joined_r0x00cfed60:
  if (plVar7 == (long *)0x0) {
    puVar9 = param_1 + 4;
    lVar11 = *(long *)puVar9;
    *(long **)puVar9 = plVar5;
    *plVar5 = lVar11;
    *(uint **)(lVar6 + unaff_x23 * 8) = puVar9;
    if (*plVar5 != 0) {
      uVar14 = *(ulong *)(*plVar5 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        *(long **)(lVar6 + (uVar14 & uVar13 - 1) * 8) = plVar5;
      }
      else {
        if (uVar13 <= uVar14) {
          uVar8 = 0;
          if (uVar13 != 0) {
            uVar8 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar8 * uVar13;
        }
        *(long **)(lVar6 + uVar14 * 8) = plVar5;
      }
    }
  }
  else {
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return;
}



// === __do_rehash<true> @ 00cfed98 ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === spvGeneratorStr @ 00cfef40 ===

/* spvGeneratorStr(unsigned int) */

char * spvGeneratorStr(uint param_1)

{
  if (param_1 < 0x32) {
    return *(char **)(&DAT_00928f44 + *(int *)(&DAT_00928f2c + (ulong)param_1 * 4));
  }
  return "Unknown";
}



// === spvOpcodeMake @ 00cfef6c ===

/* spvOpcodeMake(unsigned short, spv::Op) */

uint spvOpcodeMake(int param_1,uint param_2)

{
  return param_2 | param_1 << 0x10;
}



// === spvOpcodeSplit @ 00cfef74 ===

/* spvOpcodeSplit(unsigned int, unsigned short*, unsigned short*) */

void spvOpcodeSplit(uint param_1,ushort *param_2,ushort *param_3)

{
  if (param_2 != (ushort *)0x0) {
    *param_2 = (ushort)(param_1 >> 0x10);
  }
  if (param_3 != (ushort *)0x0) {
    *param_3 = (ushort)param_1;
  }
  return;
}



// === spvInstructionCopy @ 00cfef8c ===

/* spvInstructionCopy(unsigned int const*, spv::Op, unsigned short, spv_endianness_t,
   spv_instruction_t*) */

void spvInstructionCopy(long param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  plVar3 = (long *)(param_5 + 4);
  uVar4 = (ulong)param_3;
  *param_5 = param_2;
  uVar2 = *(long *)(param_5 + 6) - *plVar3 >> 2;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    if (uVar4 < uVar2) {
      *(ulong *)(param_5 + 6) = *plVar3 + uVar4 * 4;
    }
  }
  else {
    FUN_00cffb7c(plVar3,uVar4 - uVar2);
  }
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      uVar1 = spvFixWord(*(undefined4 *)(param_1 + lVar5),param_4);
      *(undefined4 *)(*plVar3 + lVar5) = uVar1;
      lVar5 = lVar5 + 4;
    } while (uVar4 * 4 - lVar5 != 0);
  }
  return;
}



// === spvOpcodeString @ 00cff02c ===

void spvOpcodeString(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  InstructionDesc *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (InstructionDesc *)0x0;
  iVar2 = spvtools::LookupOpcode(param_1,&local_30);
  if (iVar2 == 0) {
    pcVar3 = (char *)spvtools::InstructionDesc::name(local_30);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00cff098;
  }
  else {
    pcVar3 = "unknown";
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00cff098:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pcVar3);
    }
  }
  return;
}



// === spvOpcodeString @ 00cff09c ===

/* spvOpcodeString(spv::Op) */

void spvOpcodeString(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  InstructionDesc *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (InstructionDesc *)0x0;
  iVar2 = spvtools::LookupOpcode(param_1,&local_30);
  if (iVar2 == 0) {
    pcVar3 = (char *)spvtools::InstructionDesc::name(local_30);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00cff108;
  }
  else {
    pcVar3 = "unknown";
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00cff108:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pcVar3);
    }
  }
  return;
}



// === spvOpcodeIsScalarType @ 00cff10c ===

/* spvOpcodeIsScalarType(spv::Op) */

bool spvOpcodeIsScalarType(int param_1)

{
  return param_1 - 0x14U < 3;
}



// === spvOpcodeIsSpecConstant @ 00cff11c ===

/* spvOpcodeIsSpecConstant(spv::Op) */

undefined8 spvOpcodeIsSpecConstant(int param_1)

{
  if (((4 < param_1 - 0x30U) && (2 < param_1 - 0x186bU)) && (param_1 != 0x116e)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsConstant @ 00cff158 ===

/* spvOpcodeIsConstant(spv::Op) */

undefined8 spvOpcodeIsConstant(uint param_1)

{
  if ((int)param_1 < 0x13ef) {
    if ((((0x34 < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x1f7e0000000000U) == 0)) &&
        (1 < param_1 - 0x116d)) && (param_1 != 0x1055)) {
      return 0;
    }
  }
  else if ((((0x1a < param_1 - 0x13ef) ||
            ((1 << (ulong)(param_1 - 0x13ef & 0x1f) & 0x4000003U) == 0)) &&
           ((10 < param_1 - 0x15e0 || ((1 << (ulong)(param_1 - 0x15e0 & 0x1f) & 0x601U) == 0)))) &&
          (2 < param_1 - 0x186b)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsConstantOrUndef @ 00cff21c ===

/* spvOpcodeIsConstantOrUndef(spv::Op) */

void spvOpcodeIsConstantOrUndef(int param_1)

{
  if (param_1 != 1) {
    spvOpcodeIsConstant();
  }
  return;
}



// === spvOpcodeIsScalarSpecConstant @ 00cff238 ===

/* spvOpcodeIsScalarSpecConstant(spv::Op) */

bool spvOpcodeIsScalarSpecConstant(int param_1)

{
  return param_1 - 0x30U < 3;
}



// === spvOpcodeIsComposite @ 00cff248 ===

/* spvOpcodeIsComposite(spv::Op) */

undefined8 spvOpcodeIsComposite(uint param_1)

{
  if ((int)param_1 < 0x1168) {
    if ((0x1e < param_1) || ((1 << (ulong)(param_1 & 0x1f) & 0x71800000U) == 0)) {
      return 0;
    }
  }
  else if (((param_1 != 0x1168) && (param_1 != 0x14a8)) && (param_1 != 0x14ee)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeReturnsLogicalVariablePointer @ 00cff2a8 ===

/* spvOpcodeReturnsLogicalVariablePointer(spv::Op) */

undefined8 spvOpcodeReturnsLogicalVariablePointer(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x1142) {
    if ((((param_1 - 0x2eU < 0x26) &&
         ((1L << ((ulong)(param_1 - 0x2eU) & 0x3f) & 0x200038ea01U) != 0)) || (param_1 == 0xa9)) ||
       (param_1 == 0xf5)) {
      return uVar1;
    }
  }
  else {
    if ((param_1 - 0x1142U < 6) && ((1 << (ulong)(param_1 - 0x1142U & 0x1f) & 0x27U) != 0)) {
      return uVar1;
    }
    if ((param_1 - 0x13d2U < 0x35) &&
       ((1L << ((ulong)(param_1 - 0x13d2U) & 0x3f) & 0x10200000000001U) != 0)) {
      return uVar1;
    }
    if (param_1 == 0x1516) {
      return uVar1;
    }
  }
  return 0;
}



// === spvOpcodeReturnsLogicalPointer @ 00cff360 ===

/* spvOpcodeReturnsLogicalPointer(spv::Op) */

undefined8 spvOpcodeReturnsLogicalPointer(int param_1)

{
  if (param_1 < 0x1142) {
    if ((param_1 - 0x37U < 0x1d) && ((1 << (ulong)(param_1 - 0x37U & 0x1f) & 0x10000c31U) != 0)) {
      return 1;
    }
  }
  else if ((param_1 - 0x1142U < 3) ||
          (((param_1 - 0x13d2U < 0x35 &&
            ((1L << ((ulong)(param_1 - 0x13d2U) & 0x3f) & 0x10200000000001U) != 0)) ||
           (param_1 == 0x1516)))) {
    return 1;
  }
  return 0;
}



// === spvOpcodeGeneratesType @ 00cff3f0 ===

/* spvOpcodeGeneratesType(spv::Op) */

undefined8 spvOpcodeGeneratesType(int param_1)

{
  if (param_1 < 0x1043) {
    if (((0x13 < param_1 - 0x13U) && (param_1 != 0x142)) && (param_1 != 0x147)) {
      return 0;
    }
  }
  else if (param_1 < 0x14a1) {
    if (param_1 < 0x1141) {
      if ((param_1 != 0x1043) && (param_1 != 0x105e)) {
        return 0;
      }
    }
    else if ((((0x37 < param_1 - 0x1141U) ||
              ((1L << ((ulong)(param_1 - 0x1141U) & 0x3f) & 0x80008000000001U) == 0)) &&
             (param_1 != 0x13d4)) && (param_1 != 0x13fb)) {
      return 0;
    }
  }
  else if ((((0x3c < param_1 - 0x14a1U) ||
            ((1L << ((ulong)(param_1 - 0x14a1U) & 0x3f) & 0x1000000100000081U) == 0)) &&
           ((0xd < param_1 - 0x14eeU || ((1 << (ulong)(param_1 - 0x14eeU & 0x1f) & 0x3001U) == 0))))
          && (param_1 != 0x1837)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsDecoration @ 00cff50c ===

/* spvOpcodeIsDecoration(spv::Op) */

undefined8 spvOpcodeIsDecoration(int param_1)

{
  if (param_1 < 0x14c) {
    if ((4 < param_1 - 0x47U) || (param_1 - 0x47U == 2)) {
      return 0;
    }
  }
  else if (((1 < param_1 - 0x1600U) && (param_1 != 0x14c)) && (param_1 != 0x1407)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsLoad @ 00cff560 ===

/* spvOpcodeIsLoad(spv::Op) */

undefined8 spvOpcodeIsLoad(int param_1)

{
  if ((((0x25 < param_1 - 0x3dU) || ((1L << ((ulong)(param_1 - 0x3dU) & 0x3f) & 0x3ffc000001U) == 0)
       ) && ((0xf < param_1 - 0x131U || ((1 << (ulong)(param_1 - 0x131U & 0x1f) & 0x870fU) == 0))))
     && (param_1 != 0x14a3)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsBranch @ 00cff5c4 ===

/* spvOpcodeIsBranch(spv::Op) */

bool spvOpcodeIsBranch(int param_1)

{
  return param_1 - 0xf9U < 3;
}



// === spvOpcodeIsAtomicWithLoad @ 00cff5d4 ===

/* spvOpcodeIsAtomicWithLoad(spv::Op) */

undefined8 spvOpcodeIsAtomicWithLoad(int param_1)

{
  if (0xd < param_1 - 0xe5U) {
    if (param_1 < 0x15ee) {
      if ((param_1 != 0xe3) && (param_1 != 0x13e)) {
        return 0;
      }
    }
    else if ((1 < param_1 - 0x15eeU) && (param_1 != 0x1793)) {
      return 0;
    }
  }
  return 1;
}



// === spvOpcodeIsAtomicOp @ 00cff630 ===

/* spvOpcodeIsAtomicOp(spv::Op) */

bool spvOpcodeIsAtomicOp(int param_1)

{
  if (0xd < param_1 - 0xe5U) {
    if (param_1 < 0x15ee) {
      if ((param_1 != 0xe3) && (param_1 != 0x13e)) goto LAB_00cff690;
    }
    else if ((1 < param_1 - 0x15eeU) && (param_1 != 0x1793)) {
LAB_00cff690:
      return param_1 == 0x13f || param_1 == 0xe4;
    }
  }
  return true;
}



// === spvOpcodeIsReturn @ 00cff6a4 ===

/* spvOpcodeIsReturn(spv::Op) */

bool spvOpcodeIsReturn(int param_1)

{
  return param_1 - 0xfdU < 2;
}



// === spvOpcodeIsAbort @ 00cff6b4 ===

/* spvOpcodeIsAbort(spv::Op) */

undefined8 spvOpcodeIsAbort(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x1140) {
    if (param_1 == 0xfc) {
      return uVar1;
    }
    if (param_1 == 0xff) {
      return uVar1;
    }
  }
  else if (((param_1 - 0x1140U < 0x22) &&
           ((1L << ((ulong)(param_1 - 0x1140U) & 0x3f) & 0x300000001U) != 0)) || (param_1 == 0x14ae)
          ) {
    return uVar1;
  }
  return 0;
}



// === spvOpcodeIsReturnOrAbort @ 00cff71c ===

/* spvOpcodeIsReturnOrAbort(spv::Op) */

undefined8 spvOpcodeIsReturnOrAbort(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 0xfdU < 2) {
    return 1;
  }
  uVar1 = 1;
  if (param_1 < 0x1140) {
    if (param_1 == 0xfc) {
      return uVar1;
    }
    if (param_1 == 0xff) {
      return uVar1;
    }
  }
  else if (((param_1 - 0x1140U < 0x22) &&
           ((1L << ((ulong)(param_1 - 0x1140U) & 0x3f) & 0x300000001U) != 0)) || (param_1 == 0x14ae)
          ) {
    return uVar1;
  }
  return 0;
}



// === spvOpcodeIsBlockTerminator @ 00cff798 ===

/* spvOpcodeIsBlockTerminator(spv::Op) */

undefined8 spvOpcodeIsBlockTerminator(int param_1)

{
  if ((6 < param_1 - 0xf9U) &&
     (((0x21 < param_1 - 0x1140U ||
       ((1L << ((ulong)(param_1 - 0x1140U) & 0x3f) & 0x300000001U) == 0)) && (param_1 != 0x14ae))))
  {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsBaseOpaqueType @ 00cff7ec ===

/* spvOpcodeIsBaseOpaqueType(spv::Op) */

undefined8 spvOpcodeIsBaseOpaqueType(uint param_1)

{
  if ((((0x27 < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0xfc8e000000U) == 0)) &&
      (param_1 != 0x142)) && (param_1 != 0x147)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsNonUniformGroupOperation @ 00cff834 ===

/* spvOpcodeIsNonUniformGroupOperation(spv::Op) */

undefined8 spvOpcodeIsNonUniformGroupOperation(int param_1)

{
  if (((0x21 < param_1 - 0x14dU) && (1 < param_1 - 0x13f6U)) && (param_1 != 0x114f)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsScalarizable @ 00cff870 ===

/* spvOpcodeIsScalarizable(spv::Op) */

undefined8 spvOpcodeIsScalarizable(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x95) {
    if ((param_1 - 0x53U < 0x3c) &&
       ((1L << ((ulong)(param_1 - 0x53U) & 0x3f) & 0xffff803fc000001U) != 0)) {
      return uVar1;
    }
    if (param_1 == 0x4e) {
      return uVar1;
    }
  }
  else if (((param_1 - 0x95U < 0x39) &&
           ((1L << ((ulong)(param_1 - 0x95U) & 0x3f) & 0x1fde7ffffffff8fU) != 0)) ||
          (param_1 == 0xf5)) {
    return uVar1;
  }
  return 0;
}



// === spvOpcodeIsDebug @ 00cff8f0 ===

/* spvOpcodeIsDebug(spv::Op) */

undefined8 spvOpcodeIsDebug(int param_1)

{
  if (((6 < param_1 - 2U) && (param_1 != 0x13d)) && (param_1 != 0x14a)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsCommutativeBinaryOperator @ 00cff920 ===

/* spvOpcodeIsCommutativeBinaryOperator(spv::Op) */

undefined8 spvOpcodeIsCommutativeBinaryOperator(int param_1)

{
  if ((((0x37 < param_1 - 0x80U) ||
       ((1L << ((ulong)(param_1 - 0x80U) & 0x3f) & 0xf00cfc01b00033U) == 0)) &&
      (2 < param_1 - 0xc5U)) && (1 < param_1 - 0x191U)) {
    return 0;
  }
  return 1;
}



// === spvOpcodeIsLinearAlgebra @ 00cff978 ===

/* spvOpcodeIsLinearAlgebra(spv::Op) */

bool spvOpcodeIsLinearAlgebra(int param_1)

{
  return param_1 - 0x8eU < 7 || param_1 == 0x54;
}



// === spvOpcodeIsImageSample @ 00cff994 ===

/* spvOpcodeIsImageSample(spv::Op) */

undefined8 spvOpcodeIsImageSample(int param_1)

{
  if (((7 < param_1 - 0x57U) && (3 < param_1 - 0x131U)) && (param_1 != 0x14a3)) {
    return 0;
  }
  return 1;
}



// === spvIsExtendedInstruction @ 00cff9cc ===

/* spvIsExtendedInstruction(spv::Op) */

bool spvIsExtendedInstruction(int param_1)

{
  return param_1 == 0xc || param_1 == 0x1151;
}



// === spvOpcodeMemorySemanticsOperandIndices @ 00cff9e0 ===

/* spvOpcodeMemorySemanticsOperandIndices(spv::Op) */

void spvOpcodeMemorySemanticsOperandIndices(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < 0x13e) {
    if (param_2 - 0xe3U < 0x10) {
      uVar1 = 1 << (ulong)(param_2 - 0xe3U & 0x1f);
      if ((uVar1 & 0xffe5) != 0) goto LAB_00cffa18;
      if ((uVar1 & 0x18) != 0) {
        puVar3 = (undefined8 *)operator_new(8);
        *param_1 = puVar3;
        *puVar3 = 0x500000004;
        param_1[1] = puVar3 + 1;
        param_1[2] = puVar3 + 1;
        return;
      }
    }
    else if (param_2 != 0xe0) {
      if (param_2 == 0xe1) {
        puVar2 = (undefined4 *)operator_new(4);
        *param_1 = puVar2;
        *puVar2 = 1;
        param_1[1] = puVar2 + 1;
        param_1[2] = puVar2 + 1;
        return;
      }
      goto LAB_00cffad0;
    }
LAB_00cffae4:
    puVar2 = (undefined4 *)operator_new(4);
    *param_1 = puVar2;
    *puVar2 = 2;
    param_1[1] = puVar2 + 1;
    param_1[2] = puVar2 + 1;
    return;
  }
  if (param_2 < 0x149) {
    if (param_2 != 0x13e) {
      if (param_2 != 0x13f) {
LAB_00cffad0:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      goto LAB_00cffae4;
    }
  }
  else {
    if (param_2 == 0x149) goto LAB_00cffae4;
    if (param_2 != 0x1793) goto LAB_00cffad0;
  }
LAB_00cffa18:
  puVar2 = (undefined4 *)operator_new(4);
  *param_1 = puVar2;
  *puVar2 = 4;
  param_1[1] = puVar2 + 1;
  param_1[2] = puVar2 + 1;
  return;
}



// === spvOpcodeIsAccessChain @ 00cffb08 ===

/* spvOpcodeIsAccessChain(spv::Op) */

bool spvOpcodeIsAccessChain(int param_1)

{
  if ((param_1 - 0x41U < 6) && ((1 << (ulong)(param_1 - 0x41U & 0x1f) & 0x27U) != 0)) {
    return true;
  }
  return param_1 == 0x1516;
}



// === spvOpcodeIsBit @ 00cffb40 ===

/* spvOpcodeIsBit(spv::Op) */

uint spvOpcodeIsBit(int param_1)

{
  return (uint)(param_1 - 0xc2U < 0xc) & 0xc7fU >> (ulong)(param_1 - 0xc2U & 0x1f);
}



// === spvOpcodeGeneratesUntypedPointer @ 00cffb5c ===

/* spvOpcodeGeneratesUntypedPointer(spv::Op) */

uint spvOpcodeGeneratesUntypedPointer(int param_1)

{
  return (uint)(param_1 - 0x1142U < 7) & 0x67U >> (ulong)(param_1 - 0x1142U & 0x1f);
}



// === spvOperandTypeStr @ 00cffca8 ===

/* spvOperandTypeStr(spv_operand_type_t) */

char * spvOperandTypeStr(uint param_1)

{
  if (param_1 < 0x6a) {
    return &DAT_00928ff4 + *(int *)(&DAT_00928ff4 + (ulong)param_1 * 4);
  }
  return "unknown";
}



// === spvPushOperandTypes @ 00cffcd0 ===

/* spvPushOperandTypes(spv_operand_type_t const*, std::__ndk1::vector<spv_operand_type_t,
   std::__ndk1::allocator<spv_operand_type_t> >*) */

void spvPushOperandTypes(spv_operand_type_t *param_1,vector *param_2)

{
  int *piVar1;
  spv_operand_type_t *psVar2;
  long lVar3;
  
  lVar3 = 4;
  psVar2 = param_1 + -8;
  do {
    piVar1 = (int *)(psVar2 + 8);
    psVar2 = psVar2 + 4;
    lVar3 = lVar3 + -4;
  } while (*piVar1 != 0);
  for (; lVar3 != 0; lVar3 = lVar3 + 4) {
    FUN_00d015a4(param_2,psVar2);
    psVar2 = psVar2 + -4;
  }
  return;
}



// === spvPushOperandTypes @ 00cffd28 ===

/* spvPushOperandTypes(spvtools::utils::Span<spv_operand_type_t const> const&,
   std::__ndk1::vector<spv_operand_type_t, std::__ndk1::allocator<spv_operand_type_t> >*) */

void spvPushOperandTypes(Span *param_1,vector *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar3 = 0;
    uVar5 = 1;
    do {
      local_4c = *(int *)(*(long *)param_1 + uVar4 * 4 + ~uVar3 * 4);
      if (local_4c != 0) {
        FUN_00d015a4(param_2,&local_4c);
      }
      bVar1 = uVar5 < uVar4;
      uVar3 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvPushOperandTypesForMask @ 00cffdcc ===

/* spvPushOperandTypesForMask(spv_operand_type_t, unsigned int,
   std::__ndk1::vector<spv_operand_type_t, std::__ndk1::allocator<spv_operand_type_t> >*) */

void spvPushOperandTypesForMask(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  void *__src;
  ulong uVar11;
  size_t __n;
  int *piVar12;
  undefined1 auVar13 [16];
  OperandDesc *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = 0x80000000;
  do {
    if ((uVar9 & param_2) != 0) {
      local_70 = (OperandDesc *)0x0;
      iVar5 = spvtools::LookupOperand(param_1,uVar9,&local_70);
      if (iVar5 == 0) {
        auVar13 = spvtools::OperandDesc::operands(local_70);
        uVar7 = auVar13._8_8_;
        if (uVar7 != 0) {
          uVar8 = 0;
          uVar10 = 1;
          do {
            iVar5 = *(int *)(auVar13._0_8_ + uVar7 * 4 + ~uVar8 * 4);
            if (iVar5 != 0) {
              piVar2 = (int *)param_3[1];
              if (piVar2 < (int *)param_3[2]) {
                piVar12 = piVar2 + 1;
                *piVar2 = iVar5;
              }
              else {
                __src = (void *)*param_3;
                __n = (long)piVar2 - (long)__src;
                uVar8 = ((long)__n >> 2) + 1;
                if (uVar8 >> 0x3e != 0) {
                  FUN_00cfa6b0();
LAB_00cfff68:
                    /* WARNING: Subroutine does not return */
                  FUN_00cf7234();
                }
                uVar11 = (long)param_3[2] - (long)__src;
                uVar1 = (long)uVar11 >> 1;
                if ((ulong)((long)uVar11 >> 1) <= uVar8) {
                  uVar1 = uVar8;
                }
                if (0x7ffffffffffffffb < uVar11) {
                  uVar1 = 0x3fffffffffffffff;
                }
                if (uVar1 == 0) {
                  pvVar6 = (void *)0x0;
                }
                else {
                  if (uVar1 >> 0x3e != 0) goto LAB_00cfff68;
                  pvVar6 = operator_new(uVar1 << 2);
                }
                piVar2 = (int *)((long)pvVar6 + __n);
                piVar12 = piVar2 + 1;
                *piVar2 = iVar5;
                memcpy(piVar2 + -((long)__n >> 2),__src,__n);
                *param_3 = piVar2 + -((long)__n >> 2);
                param_3[1] = piVar12;
                param_3[2] = (void *)((long)pvVar6 + uVar1 * 4);
                if (__src != (void *)0x0) {
                  operator_delete(__src,uVar11);
                }
              }
              param_3[1] = piVar12;
            }
            bVar4 = uVar10 < uVar7;
            uVar8 = uVar10;
            uVar10 = (ulong)((int)uVar10 + 1);
          } while (bVar4);
        }
      }
    }
    bVar4 = uVar9 < 2;
    uVar9 = uVar9 >> 1;
    if (bVar4) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



// === spvOperandIsConcrete @ 00cfff70 ===

undefined8 spvOperandIsConcrete(int param_1)

{
  ulong uVar1;
  
  if (param_1 - 1U < 5) {
    return 1;
  }
  uVar1 = spvOperandIsConcreteMask();
  if (((uVar1 & 1) == 0) &&
     (((0x2d < param_1 - 0x39U || ((1L << ((ulong)(param_1 - 0x39U) & 0x3f) & 0x3ff09fc7ffefU) == 0)
       ) && (0x1c < param_1 - 6U)))) {
    return 0;
  }
  return 1;
}



// === spvIsIdType @ 00cffff4 ===

/* spvIsIdType(spv_operand_type_t) */

bool spvIsIdType(int param_1)

{
  return param_1 - 1U < 5;
}



// === spvOperandIsConcreteMask @ 00d00004 ===

bool spvOperandIsConcreteMask(int param_1)

{
  if ((param_1 - 0x38U < 0x30) && ((1L << ((ulong)(param_1 - 0x38U) & 0x3f) & 0x800e40200021U) != 0)
     ) {
    return true;
  }
  return param_1 - 0x23U < 7;
}



// === spvOperandIsOptional @ 00d00048 ===

/* spvOperandIsOptional(spv_operand_type_t) */

undefined8 spvOperandIsOptional(int param_1)

{
  if ((0xd < param_1 - 0x2aU) &&
     ((0x1e < param_1 - 0x4cU || ((1 << (ulong)(param_1 - 0x4cU & 0x1f) & 0x70010805U) == 0)))) {
    return 0;
  }
  return 1;
}



// === spvOperandIsVariable @ 00d0008c ===

/* spvOperandIsVariable(spv_operand_type_t) */

uint spvOperandIsVariable(int param_1)

{
  return (uint)(param_1 - 0x34U < 0x37) &
         (uint)(0x4000000000000f >> ((ulong)(param_1 - 0x34U) & 0x3f));
}



// === spvExpandOperandSequenceOnce @ 00d000ac ===

/* spvExpandOperandSequenceOnce(spv_operand_type_t, std::__ndk1::vector<spv_operand_type_t,
   std::__ndk1::allocator<spv_operand_type_t> >*) */

void spvExpandOperandSequenceOnce(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_30;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  local_2c = param_1;
  if (param_1 < 0x36) {
    if (param_1 == 0x34) {
      FUN_00d015a4(param_2,&local_2c);
LAB_00d00188:
      local_30 = 0x2a;
    }
    else {
      if (param_1 != 0x35) goto LAB_00d001a0;
      FUN_00d015a4(param_2,&local_2c);
      local_30 = 0x2d;
    }
  }
  else if (param_1 == 0x36) {
    FUN_00d015a4(param_2,&local_2c);
    local_30 = 1;
    FUN_00cfad68(param_2,&local_30);
    local_30 = 0x2f;
  }
  else {
    if (param_1 == 0x37) {
      FUN_00d015a4(param_2,&local_2c);
      local_30 = 6;
      FUN_00cfad68(param_2,&local_30);
      goto LAB_00d00188;
    }
    if (param_1 != 0x6a) goto LAB_00d001a0;
    FUN_00d015a4(param_2,&local_2c);
    local_30 = 0x69;
  }
  FUN_00cfad68(param_2,&local_30);
  uVar2 = 1;
LAB_00d001a0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



// === spvTakeFirstMatchableOperand @ 00d001c4 ===

/* spvTakeFirstMatchableOperand(std::__ndk1::vector<spv_operand_type_t,
   std::__ndk1::allocator<spv_operand_type_t> >*) */

undefined4 spvTakeFirstMatchableOperand(vector *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  do {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + -4);
    *(undefined4 **)(param_1 + 8) = (undefined4 *)(*(long *)(param_1 + 8) + -4);
    uVar2 = spvExpandOperandSequenceOnce(uVar1,param_1);
  } while ((uVar2 & 1) != 0);
  return uVar1;
}



// === spvAlternatePatternFollowingImmediate @ 00d00200 ===

/* spvAlternatePatternFollowingImmediate(std::__ndk1::vector<spv_operand_type_t,
   std::__ndk1::allocator<spv_operand_type_t> > const&) */

undefined4 * spvAlternatePatternFollowingImmediate(vector *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *in_x8;
  undefined4 *puVar6;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar7;
  
  lVar11 = 0;
  do {
    lVar2 = *(long *)(param_1 + 8) + lVar11;
    if (lVar2 == *(long *)param_1) {
      puVar5 = (undefined4 *)operator_new(4);
      *in_x8 = puVar5;
      puVar6 = puVar5 + 1;
      *puVar5 = 0x32;
      in_x8[1] = puVar6;
      in_x8[2] = puVar6;
      return puVar6;
    }
    lVar11 = lVar11 + -4;
  } while (*(int *)(lVar2 + -4) != 3);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uVar1 = (-4 - lVar11 >> 2) + 2;
  if (uVar1 >> 0x3e != 0) {
    uVar3 = FUN_00cfa6b0();
    return (undefined4 *)(ulong)(uVar3 - 1 < 5 && (uVar3 & 6) != 2);
  }
  puVar4 = (undefined4 *)operator_new(uVar1 * 4);
  puVar5 = puVar4 + uVar1;
  *in_x8 = puVar4;
  in_x8[2] = puVar5;
  puVar6 = puVar4;
  if (0x1b < (ulong)-lVar11) {
    uVar1 = ((ulong)-lVar11 >> 2) + 1;
    uVar8 = uVar1 & 0x7ffffffffffffff8;
    puVar9 = (undefined8 *)(puVar4 + 4);
    puVar6 = puVar4 + uVar8;
    uVar10 = ((ulong)-lVar11 >> 2) + 1 & 0x7ffffffffffffff8;
    do {
      uVar10 = uVar10 - 8;
      puVar9[-1] = 0x3200000032;
      puVar9[-2] = 0x3200000032;
      puVar9[1] = 0x3200000032;
      *puVar9 = 0x3200000032;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
    if (uVar1 == uVar8) goto LAB_00d002d0;
  }
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = 0x32;
    puVar6 = puVar7;
  } while (puVar7 != puVar5);
LAB_00d002d0:
  in_x8[1] = puVar5;
  puVar4[1] = 3;
  return puVar4;
}



// === spvIsInIdType @ 00d00318 ===

/* spvIsInIdType(spv_operand_type_t) */

bool spvIsInIdType(uint param_1)

{
  return param_1 - 1 < 5 && (param_1 & 6) != 2;
}



// === spvOperandCanBeForwardDeclaredFunction @ 00d00330 ===

/* spvOperandCanBeForwardDeclaredFunction(spv::Op) */

void spvOperandCanBeForwardDeclaredFunction(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar2 = spvOpcodeGeneratesType();
  if (iVar2 != 0) {
    local_70[0] = &PTR_FUN_00d6b8d0;
    goto LAB_00d00578;
  }
  if (param_2 < 0x124) {
    if (param_2 < 0x4a) {
      if (param_2 < 0x27) {
        if ((param_2 - 5U < 2) || (param_2 - 0xfU < 2)) {
LAB_00d00570:
          local_70[0] = &PTR_FUN_00d6b918;
          goto LAB_00d00578;
        }
        if (param_2 == 0x1c) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d00940(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
      }
      else {
        if (param_2 - 0x47U < 2) goto LAB_00d00570;
        if (param_2 == 0x27) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d008a8(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
        if (param_2 == 0x39) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d006e0(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
      }
LAB_00d00664:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00d00c38(param_1);
        return;
      }
      goto LAB_00d006dc;
    }
    if (0xf5 < param_2) {
      if (1 < param_2 - 0xf6U) {
        if (param_2 - 0xfaU < 2) goto LAB_00d005e8;
        if (param_2 != 0xf9) goto LAB_00d00664;
      }
      goto LAB_00d00570;
    }
    if (1 < param_2 - 0x4aU) {
      if (param_2 == 0xf5) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00d00778(param_1);
          return;
        }
        goto LAB_00d006dc;
      }
      goto LAB_00d00664;
    }
LAB_00d005e8:
    local_70[0] = &PTR_FUN_00d6b960;
  }
  else {
    if (0x1406 < param_2) {
      if (param_2 < 0x14f9) {
        if (param_2 == 0x1407) goto LAB_00d00570;
        if (param_2 == 0x14f6) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d00a70(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
        if (param_2 == 0x14f7) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d00b08(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
      }
      else {
        if ((param_2 - 0x1868U < 3) || (param_2 - 0x1600U < 2)) goto LAB_00d00570;
        if (param_2 == 0x14f9) {
          if (*(long *)(lVar1 + 0x28) == local_38) {
            FUN_00d009d8(param_1);
            return;
          }
          goto LAB_00d006dc;
        }
      }
      goto LAB_00d00664;
    }
    uVar3 = (ulong)(param_2 - 0x125U);
    if (0x27 < param_2 - 0x125U) {
LAB_00d004a4:
      if (param_2 == 0x124) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00d00810(param_1);
          return;
        }
        goto LAB_00d006dc;
      }
      if (param_2 == 0x1056) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00d00ba0(param_1);
          return;
        }
        goto LAB_00d006dc;
      }
      goto LAB_00d00664;
    }
    if ((1L << (uVar3 & 0x3f) & 3U) == 0) {
      if ((1L << (uVar3 & 0x3f) & 0xcU) == 0) {
        if ((1L << (uVar3 & 0x3f) & 0xc000000000U) != 0) goto LAB_00d00570;
        goto LAB_00d004a4;
      }
      local_70[0] = &PTR_FUN_00d6bac8;
    }
    else {
      local_70[0] = &PTR_FUN_00d6ba80;
    }
  }
LAB_00d00578:
  local_50 = (long *)local_70;
  FUN_00d01694(local_70,param_1);
  if ((undefined ***)local_50 == local_70) {
    lVar4 = 0x20;
LAB_00d005ac:
    (**(code **)(*local_50 + lVar4))();
  }
  else if (local_50 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_00d005ac;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00d006dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvDbgInfoExtOperandCanBeForwardDeclaredFunction @ 00d00cd0 ===

/* spvDbgInfoExtOperandCanBeForwardDeclaredFunction(spv::Op, spv_ext_inst_type_t, unsigned int) */

void spvDbgInfoExtOperandCanBeForwardDeclaredFunction
               (undefined8 *param_1,undefined4 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 10) {
    *(undefined4 *)(param_1 + 1) = param_2;
    *param_1 = &PTR_FUN_00d6bd08;
    param_1[4] = param_1;
  }
  else {
    param_1[4] = 0;
    if (param_3 == 8) {
      if (param_4 == 10) {
        local_60[0] = &PTR_FUN_00d6bd98;
      }
      else if (param_4 == 0x14) {
        local_60[0] = &PTR_FUN_00d6bd50;
      }
      else {
        local_60[0] = &PTR_FUN_00d6bde0;
      }
    }
    else if (param_4 == 10) {
      local_60[0] = &PTR_FUN_00d6be70;
    }
    else if (param_4 == 0x14) {
      local_60[0] = &PTR_FUN_00d6be28;
    }
    else {
      local_60[0] = &PTR_FUN_00d6beb8;
    }
    local_40 = (long *)local_60;
    FUN_00d01694(local_60,param_1);
    if ((undefined ***)local_40 == local_60) {
      lVar2 = 0x20;
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_00d00dbc;
      lVar2 = 0x28;
    }
    (**(code **)(*local_40 + lVar2))();
  }
LAB_00d00dbc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvFPEncodingFromOperandFPEncoding @ 00d00de0 ===

/* spvFPEncodingFromOperandFPEncoding(spv::FPEncoding) */

undefined8 spvFPEncodingFromOperandFPEncoding(int param_1)

{
  if (param_1 == 0) {
    return 4;
  }
  if (param_1 != 0x1077) {
    if (param_1 == 0x1076) {
      return 5;
    }
    return 0;
  }
  return 6;
}



// === EmitNumericLiteral @ 00d01828 ===

/* spvtools::EmitNumericLiteral(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >*,
   spv_parsed_instruction_t const&, spv_parsed_operand_t const&) */

void spvtools::EmitNumericLiteral
               (basic_ostream *param_1,spv_parsed_instruction_t *param_2,
               spv_parsed_operand_t *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((*(uint *)(param_3 + 4) < 0x30) &&
      ((1L << ((ulong)*(uint *)(param_3 + 4) & 0x3f) & 0xa00000000640U) != 0)) &&
     (0xfffffffd < *(ushort *)(param_3 + 2) - 3)) {
    puVar1 = (uint *)(*(long *)param_2 + (ulong)*(ushort *)param_3 * 4);
    uVar2 = *puVar1;
    if (*(ushort *)(param_3 + 2) == 1) {
      iVar3 = *(int *)(param_3 + 8);
      if (iVar3 == 1) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,uVar2);
          return;
        }
        goto LAB_00d01a98;
      }
      if (iVar3 == 3) {
        iVar3 = *(int *)(param_3 + 0x10);
        if (iVar3 < 4) {
          if (iVar3 == 0) {
            if (*(int *)(param_3 + 0xc) == 0x20) {
LAB_00d01a68:
              local_40 = (double)CONCAT44(local_40._4_4_,uVar2);
              utils::operator<<(param_1,(FloatProxy *)&local_40);
            }
            else if (*(int *)(param_3 + 0xc) == 0x10) goto LAB_00d01a58;
          }
          else if (iVar3 == 1) {
LAB_00d01a58:
            local_40 = (double)CONCAT62(local_40._2_6_,(short)uVar2);
            utils::operator<<(param_1,(HexFloat *)&local_40);
          }
          else if (iVar3 == 2) goto LAB_00d01a68;
        }
        else if (iVar3 == 4) {
          local_40 = (double)CONCAT62(local_40._2_6_,(short)uVar2);
          utils::operator<<(param_1,(HexFloat *)&local_40);
        }
        else if (iVar3 == 5) {
          local_40 = (double)CONCAT71(local_40._1_7_,(char)uVar2);
          utils::operator<<(param_1,(HexFloat *)&local_40);
        }
        else if (iVar3 == 6) {
          local_40 = (double)CONCAT71(local_40._1_7_,(char)uVar2);
          utils::operator<<(param_1,(HexFloat *)&local_40);
        }
      }
      else if (iVar3 == 2) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,uVar2);
          return;
        }
        goto LAB_00d01a98;
      }
    }
    else {
      iVar3 = *(int *)(param_3 + 8);
      dVar5 = (double)CONCAT44(puVar1[1],uVar2);
      if (iVar3 == 1) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,(ulong)dVar5);
          return;
        }
        goto LAB_00d01a98;
      }
      if (iVar3 == 3) {
        if ((dVar5 == 0.0) ||
           ((!NAN(dVar5) && ((long)ABS(dVar5) + 0xfff0000000000000U >> 0x35 < 0x3ff)))) {
          uVar6 = *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10);
          *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 0x11;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,dVar5);
          *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = uVar6;
        }
        else {
          local_40 = dVar5;
          utils::operator<<(param_1,(HexFloat *)&local_40);
        }
      }
      else if (iVar3 == 2) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,(long)dVar5);
          return;
        }
        goto LAB_00d01a98;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
LAB_00d01a98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator<< @ 00d01a9c ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, spvtools::utils::FloatProxy<float> const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,FloatProxy *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)param_2;
  if ((fVar3 == 0.0) || ((!NAN(fVar3) && ((int)ABS(fVar3) - 0x800000U >> 0x18 < 0x7f)))) {
    uVar2 = *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10);
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 9;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,fVar3);
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = uVar2;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00d01b64;
  }
  else {
    local_3c = fVar3;
    operator<<(param_1,(HexFloat *)&local_3c);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00d01b64:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return param_1;
}



// === operator<< @ 00d01b68 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > > const&)
    */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  id local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar4 = *(ushort *)param_2;
  uVar6 = uVar4 >> 10;
  uVar17 = (ulong)uVar4 << 2 & 0xffc;
  puVar1 = &UNK_001d803c;
  if (-1 < (short)uVar4) {
    puVar1 = &DAT_0016fed1;
  }
  bVar7 = (uVar6 & 0x1f) != 0;
  bVar8 = uVar17 != 0;
  lVar15 = 0;
  if (bVar7 || bVar8) {
    lVar15 = ((ulong)uVar6 & 0x1f) - 0xf;
  }
  if (((uVar6 & 0x1f) == 0) && (uVar17 != 0)) {
    if ((uVar4 >> 9 & 1) == 0) {
      uVar13 = LZCOUNT((ulong)uVar4 << 2 & 0x7fc);
      lVar15 = (lVar15 - uVar13) + 0x34;
      uVar17 = uVar17 << (0xb - (uVar13 ^ 0x3f) & 0x3f);
    }
    uVar17 = (uVar17 & 0x7fc) << 1;
  }
  if ((uVar17 & 0xc) == 0) {
    if ((uVar17 & 0xf0) == 0) {
      uVar18 = (ulong)(uVar17 != 0);
      uVar13 = 0;
      if (uVar17 != 0) {
        uVar13 = uVar17 >> 8;
      }
    }
    else {
      uVar18 = 2;
      uVar13 = uVar17 >> 4;
    }
  }
  else {
    uVar18 = 3;
    uVar13 = uVar17;
  }
  lVar14 = *(long *)(*(long *)param_1 + -0x18);
  uVar9 = *(uint *)(param_1 + lVar14 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + lVar14 + 8);
  if (uVar9 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar9 = uVar9 & 0xff;
    *(uint *)(param_1 + lVar14 + 0x90) = uVar9;
  }
  uVar11 = FUN_00cf1dd8(param_1,puVar1,uVar4 >> 0xf);
  uVar11 = FUN_00cf1dd8(uVar11,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (bVar7 || bVar8) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar11,local_70,1);
  if (uVar18 != 0) {
    pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar14 = *(long *)pbVar12;
    *(ulong *)(pbVar12 + *(long *)(lVar14 + -0x18) + 0x18) = uVar18;
    lVar16 = *(long *)(lVar14 + -0x18);
    if (*(int *)(pbVar12 + lVar16 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar14 = *(long *)pbVar12;
    }
    *(undefined4 *)(pbVar12 + lVar16 + 0x90) = 0x30;
    *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) =
         *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,uVar13);
  }
  plVar10 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) =
       *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) & 0xffffffb5 | 2;
  puVar2 = &UNK_0015e31e;
  if (lVar15 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(plVar10,puVar2,(uint)((ulong)lVar15 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,lVar15);
  lVar15 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar15 + -0x18) + 8) = uVar3;
  lVar15 = *(long *)(lVar15 + -0x18);
  if (*(int *)(param_1 + lVar15 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar15 + 0x90) = uVar9 & 0xff;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



// === operator<< @ 00d01e88 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >
   const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  HexFloat HVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  id local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  HVar4 = *param_2;
  bVar6 = (byte)HVar4 >> 3;
  uVar17 = (ulong)(byte)HVar4 << 1 & 0xe;
  puVar1 = &UNK_001d803c;
  if (-1 < (char)HVar4) {
    puVar1 = &DAT_0016fed1;
  }
  bVar7 = (bVar6 & 0xf) != 0;
  bVar8 = uVar17 != 0;
  lVar15 = 0;
  if (bVar7 || bVar8) {
    lVar15 = ((ulong)bVar6 & 0xf) - 7;
  }
  if (((bVar6 & 0xf) == 0) && (uVar17 != 0)) {
    if (((byte)HVar4 >> 2 & 1) == 0) {
      uVar13 = LZCOUNT((ulong)(byte)HVar4 << 1 & 6);
      lVar15 = (lVar15 - uVar13) + 0x3c;
      uVar17 = uVar17 << (3 - (uVar13 ^ 0x3f) & 0x3f);
    }
    uVar17 = (uVar17 & 6) << 1;
  }
  lVar14 = *(long *)(*(long *)param_1 + -0x18);
  uVar9 = *(uint *)(param_1 + lVar14 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + lVar14 + 8);
  if (uVar9 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar9 = uVar9 & 0xff;
    *(uint *)(param_1 + lVar14 + 0x90) = uVar9;
  }
  uVar11 = FUN_00cf1dd8(param_1,puVar1,(byte)HVar4 >> 7);
  uVar11 = FUN_00cf1dd8(uVar11,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (bVar7 || bVar8) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar11,local_70,1);
  if (uVar17 != 0) {
    pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar14 = *(long *)pbVar12;
    *(undefined8 *)(pbVar12 + *(long *)(lVar14 + -0x18) + 0x18) = 1;
    lVar16 = *(long *)(lVar14 + -0x18);
    if (*(int *)(pbVar12 + lVar16 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar14 = *(long *)pbVar12;
    }
    *(undefined4 *)(pbVar12 + lVar16 + 0x90) = 0x30;
    *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) =
         *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,uVar17);
  }
  plVar10 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) =
       *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) & 0xffffffb5 | 2;
  puVar2 = &UNK_0015e31e;
  if (lVar15 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(plVar10,puVar2,(uint)((ulong)lVar15 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,lVar15);
  lVar15 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar15 + -0x18) + 8) = uVar3;
  lVar15 = *(long *)(lVar15 + -0x18);
  if (*(int *)(param_1 + lVar15 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar15 + 0x90) = uVar9 & 0xff;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator<< @ 00d02170 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >
   const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  HexFloat HVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  id local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  HVar4 = *param_2;
  bVar6 = (byte)HVar4 >> 2;
  uVar17 = ((ulong)(byte)HVar4 & 3) << 2;
  puVar1 = &UNK_001d803c;
  if (-1 < (char)HVar4) {
    puVar1 = &DAT_0016fed1;
  }
  bVar7 = (bVar6 & 0x1f) != 0;
  bVar8 = ((byte)HVar4 & 3) != 0;
  lVar16 = 0;
  if (bVar7 || bVar8) {
    lVar16 = ((ulong)bVar6 & 0x1f) - 0xf;
  }
  if (((bVar6 & 0x1f) == 0) && (((byte)HVar4 & 3) != 0)) {
    uVar13 = (ulong)((byte)HVar4 >> 1) & 1;
    lVar16 = uVar13 + lVar16 + -1;
    uVar17 = (uVar17 << (uVar13 ^ 1) & 4) << 1;
  }
  lVar14 = *(long *)(*(long *)param_1 + -0x18);
  uVar9 = *(uint *)(param_1 + lVar14 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + lVar14 + 8);
  if (uVar9 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar9 = uVar9 & 0xff;
    *(uint *)(param_1 + lVar14 + 0x90) = uVar9;
  }
  uVar11 = FUN_00cf1dd8(param_1,puVar1,(byte)HVar4 >> 7);
  uVar11 = FUN_00cf1dd8(uVar11,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (bVar7 || bVar8) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar11,local_70,1);
  if (uVar17 != 0) {
    pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar14 = *(long *)pbVar12;
    *(undefined8 *)(pbVar12 + *(long *)(lVar14 + -0x18) + 0x18) = 1;
    lVar15 = *(long *)(lVar14 + -0x18);
    if (*(int *)(pbVar12 + lVar15 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar14 = *(long *)pbVar12;
    }
    *(undefined4 *)(pbVar12 + lVar15 + 0x90) = 0x30;
    *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) =
         *(uint *)(pbVar12 + *(long *)(lVar14 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,uVar17);
  }
  plVar10 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) =
       *(uint *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 8) & 0xffffffb5 | 2;
  puVar2 = &UNK_0015e31e;
  if (lVar16 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  pbVar12 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(plVar10,puVar2,(uint)((ulong)lVar16 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar12,lVar16);
  lVar16 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar16 + -0x18) + 8) = uVar3;
  lVar16 = *(long *)(lVar16 + -0x18);
  if (*(int *)(param_1 + lVar16 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar10 + 0x38))(plVar10,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar16 + 0x90) = uVar9 & 0xff;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator<< @ 00d02444 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >
   const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  id local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar4 = *(ushort *)param_2;
  uVar6 = uVar4 >> 7;
  uVar14 = (ulong)uVar4 << 1 & 0xfe;
  puVar1 = &UNK_001d803c;
  if (-1 < (short)uVar4) {
    puVar1 = &DAT_0016fed1;
  }
  bVar7 = (uVar6 & 0xff) != 0;
  bVar8 = uVar14 != 0;
  lVar15 = 0;
  if (bVar7 || bVar8) {
    lVar15 = ((ulong)uVar6 & 0xff) - 0x7f;
  }
  if (((uVar6 & 0xff) == 0) && (uVar14 != 0)) {
    if ((uVar4 >> 6 & 1) == 0) {
      uVar16 = LZCOUNT((ulong)uVar4 << 1 & 0x7e);
      lVar15 = (lVar15 - uVar16) + 0x38;
      uVar14 = uVar14 << (7 - (uVar16 ^ 0x3f) & 0x3f);
    }
    uVar14 = (uVar14 & 0x7e) << 1;
  }
  uVar16 = 0;
  if (uVar14 != 0) {
    uVar16 = uVar14;
  }
  uVar19 = (ulong)(uVar14 != 0);
  bVar9 = (uVar14 & 0xe) != 0;
  lVar17 = *(long *)(*(long *)param_1 + -0x18);
  uVar16 = uVar16 >> 4;
  if (bVar9) {
    uVar16 = uVar14;
  }
  uVar10 = *(uint *)(param_1 + lVar17 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + lVar17 + 8);
  if (bVar9) {
    uVar19 = 2;
  }
  if (uVar10 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar10 = (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar10 = uVar10 & 0xff;
    *(uint *)(param_1 + lVar17 + 0x90) = uVar10;
  }
  uVar12 = FUN_00cf1dd8(param_1,puVar1,uVar4 >> 0xf);
  uVar12 = FUN_00cf1dd8(uVar12,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (bVar7 || bVar8) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar12,local_70,1);
  if (uVar19 != 0) {
    pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar17 = *(long *)pbVar13;
    *(ulong *)(pbVar13 + *(long *)(lVar17 + -0x18) + 0x18) = uVar19;
    lVar18 = *(long *)(lVar17 + -0x18);
    if (*(int *)(pbVar13 + lVar18 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar11 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar17 = *(long *)pbVar13;
    }
    *(undefined4 *)(pbVar13 + lVar18 + 0x90) = 0x30;
    *(uint *)(pbVar13 + *(long *)(lVar17 + -0x18) + 8) =
         *(uint *)(pbVar13 + *(long *)(lVar17 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar13,uVar16);
  }
  plVar11 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) =
       *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) & 0xffffffb5 | 2;
  puVar2 = &UNK_0015e31e;
  if (lVar15 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(plVar11,puVar2,(uint)((ulong)lVar15 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar13,lVar15);
  lVar15 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar15 + -0x18) + 8) = uVar3;
  lVar15 = *(long *)(lVar15 + -0x18);
  if (*(int *)(param_1 + lVar15 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar11 + 0x38))(plVar11,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar15 + 0x90) = uVar10 & 0xff;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator<< @ 00d02750 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> > > const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  id local_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = *(uint *)param_2;
  uVar8 = uVar3 >> 0x17;
  puVar1 = &UNK_001d803c;
  if (-1 < (int)uVar3) {
    puVar1 = &DAT_0016fed1;
  }
  uVar16 = (ulong)uVar3 << 1 & 0xfffffe;
  bVar6 = (uVar8 & 0xff) != 0;
  bVar7 = uVar16 != 0;
  lVar14 = 0;
  if (bVar6 || bVar7) {
    lVar14 = ((ulong)uVar8 & 0xff) - 0x7f;
  }
  if (((uVar8 & 0xff) == 0) && (uVar16 != 0)) {
    if ((uVar3 >> 0x16 & 1) == 0) {
      uVar12 = LZCOUNT((ulong)uVar3 << 1 & 0x7ffffe);
      lVar14 = (lVar14 - uVar12) + 0x28;
      uVar16 = uVar16 << (0x17 - (uVar12 ^ 0x3f) & 0x3f);
    }
    uVar16 = (uVar16 & 0x7ffffe) << 1;
  }
  if ((uVar16 & 0xe) == 0) {
    if ((uVar16 & 0xf0) == 0) {
      if ((uVar16 & 0xf00) == 0) {
        if ((uVar16 & 0xf000) == 0) {
          if ((uVar16 & 0xf0000) == 0) {
            uVar17 = (ulong)(uVar16 != 0);
            uVar12 = 0;
            if (uVar16 != 0) {
              uVar12 = uVar16 >> 0x14;
            }
          }
          else {
            uVar17 = 2;
            uVar12 = uVar16 >> 0x10;
          }
        }
        else {
          uVar17 = 3;
          uVar12 = uVar16 >> 0xc;
        }
      }
      else {
        uVar17 = 4;
        uVar12 = uVar16 >> 8;
      }
    }
    else {
      uVar17 = 5;
      uVar12 = uVar16 >> 4;
    }
  }
  else {
    uVar17 = 6;
    uVar12 = uVar16;
  }
  lVar13 = *(long *)(*(long *)param_1 + -0x18);
  uVar8 = *(uint *)(param_1 + lVar13 + 0x90);
  uVar4 = *(undefined4 *)(param_1 + lVar13 + 8);
  if (uVar8 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar8 = (**(code **)(*plVar9 + 0x38))(plVar9,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar8 = uVar8 & 0xff;
    *(uint *)(param_1 + lVar13 + 0x90) = uVar8;
  }
  uVar10 = FUN_00cf1dd8(param_1,puVar1,uVar3 >> 0x1f);
  uVar10 = FUN_00cf1dd8(uVar10,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (bVar6 || bVar7) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar10,local_70,1);
  if (uVar17 != 0) {
    pbVar11 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar13 = *(long *)pbVar11;
    *(ulong *)(pbVar11 + *(long *)(lVar13 + -0x18) + 0x18) = uVar17;
    lVar15 = *(long *)(lVar13 + -0x18);
    if (*(int *)(pbVar11 + lVar15 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar9 + 0x38))(plVar9,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar13 = *(long *)pbVar11;
    }
    *(undefined4 *)(pbVar11 + lVar15 + 0x90) = 0x30;
    *(uint *)(pbVar11 + *(long *)(lVar13 + -0x18) + 8) =
         *(uint *)(pbVar11 + *(long *)(lVar13 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar11,uVar12);
  }
  plVar9 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 8) =
       *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 8) & 0xffffffb5 | 2;
  puVar2 = &UNK_0015e31e;
  if (lVar14 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  pbVar11 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            FUN_00cf1dd8(plVar9,puVar2,(uint)((ulong)lVar14 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar11,lVar14);
  lVar14 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar14 + -0x18) + 8) = uVar4;
  lVar14 = *(long *)(lVar14 + -0x18);
  if (*(int *)(param_1 + lVar14 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar9 + 0x38))(plVar9,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar14 + 0x90) = uVar8 & 0xff;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



// === operator<< @ 00d02aa4 ===

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> > > const&) */

basic_ostream * spvtools::utils::operator<<(basic_ostream *param_1,HexFloat *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  id local_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar17 = *(ulong *)param_2;
  uVar9 = uVar17 >> 0x34 & 0x7ff;
  uVar13 = uVar17 & 0xfffffffffffff;
  puVar1 = &UNK_001d803c;
  if (-1 < (long)uVar17) {
    puVar1 = &DAT_0016fed1;
  }
  lVar11 = uVar9 - 0x3ff;
  if (uVar9 == 0 && uVar13 == 0) {
    lVar11 = 0;
  }
  uVar14 = uVar13;
  if ((uVar9 == 0) && (uVar13 != 0)) {
    if ((uVar17 >> 0x33 & 1) == 0) {
      uVar14 = uVar13 << (0x33 - (LZCOUNT(uVar17 & 0x7ffffffffffff) ^ 0x3fU) & 0x3f);
      lVar11 = -0x3f3 - LZCOUNT(uVar17 & 0x7ffffffffffff);
    }
    uVar14 = (uVar14 & 0x7ffffffffffff) << 1;
  }
  lVar16 = 0xd;
  uVar12 = uVar14 & 0xf;
  while (uVar15 = uVar14, uVar12 == 0) {
    uVar15 = uVar14 >> 4;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) break;
    uVar12 = uVar14 & 0xf0;
    uVar14 = uVar15;
  }
  lVar10 = *(long *)(*(long *)param_1 + -0x18);
  uVar5 = *(uint *)(param_1 + lVar10 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + lVar10 + 8);
  if (uVar5 == 0xffffffff) {
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(local_70);
    uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
    uVar5 = uVar5 & 0xff;
    *(uint *)(param_1 + lVar10 + 0x90) = uVar5;
  }
  uVar7 = FUN_00cf1dd8(param_1,puVar1,uVar17 >> 0x3f);
  uVar7 = FUN_00cf1dd8(uVar7,&DAT_0019e0d5,2);
  local_70[0] = (id)0x30;
  if (uVar9 != 0 || uVar13 != 0) {
    local_70[0] = (id)0x31;
  }
  FUN_00cf1dd8(uVar7,local_70,1);
  if (lVar16 != 0) {
    pbVar8 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
             FUN_00cf1dd8(param_1,&DAT_001714ea,1);
    lVar10 = *(long *)pbVar8;
    *(long *)(pbVar8 + *(long *)(lVar10 + -0x18) + 0x18) = (long)(int)lVar16;
    lVar16 = *(long *)(lVar10 + -0x18);
    if (*(int *)(pbVar8 + lVar16 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet(local_70);
      (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      std::__ndk1::locale::~locale((locale *)local_70);
      lVar10 = *(long *)pbVar8;
    }
    *(undefined4 *)(pbVar8 + lVar16 + 0x90) = 0x30;
    *(uint *)(pbVar8 + *(long *)(lVar10 + -0x18) + 8) =
         *(uint *)(pbVar8 + *(long *)(lVar10 + -0x18) + 8) & 0xffffffb5 | 8;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar8,uVar15);
  }
  plVar6 = (long *)FUN_00cf1dd8(param_1,&DAT_0015e31c,1);
  puVar2 = &UNK_0015e31e;
  if (lVar11 < 0) {
    puVar2 = &DAT_0016fed1;
  }
  *(uint *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 8) =
       *(uint *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 8) & 0xffffffb5 | 2;
  pbVar8 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           FUN_00cf1dd8(plVar6,puVar2,(uint)((ulong)lVar11 >> 0x3f) ^ 1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar8,lVar11);
  lVar11 = *(long *)param_1;
  *(undefined4 *)(param_1 + *(long *)(lVar11 + -0x18) + 8) = uVar3;
  lVar11 = *(long *)(lVar11 + -0x18);
  if (*(int *)(param_1 + lVar11 + 0x90) == -1) {
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(local_70);
    (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
    std::__ndk1::locale::~locale((locale *)local_70);
  }
  *(uint *)(param_1 + lVar11 + 0x90) = uVar5 & 0xff;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator.cast.to.char* @ 00d02db8 ===

/* spvtools::clr::reset::operator char const*() */

char * __thiscall spvtools::clr::reset::operator_cast_to_char_(reset *this)

{
  return "\x1b[0m";
}



// === operator.cast.to.char* @ 00d02dc4 ===

/* spvtools::clr::grey::operator char const*() */

char * __thiscall spvtools::clr::grey::operator_cast_to_char_(grey *this)

{
  return "\x1b[1;30m";
}



// === operator.cast.to.char* @ 00d02dd0 ===

/* spvtools::clr::red::operator char const*() */

char * __thiscall spvtools::clr::red::operator_cast_to_char_(red *this)

{
  return "\x1b[31m";
}



// === operator.cast.to.char* @ 00d02ddc ===

/* spvtools::clr::green::operator char const*() */

char * __thiscall spvtools::clr::green::operator_cast_to_char_(green *this)

{
  return "\x1b[32m";
}



// === operator.cast.to.char* @ 00d02de8 ===

/* spvtools::clr::yellow::operator char const*() */

char * __thiscall spvtools::clr::yellow::operator_cast_to_char_(yellow *this)

{
  return "\x1b[33m";
}



// === operator.cast.to.char* @ 00d02df4 ===

/* spvtools::clr::blue::operator char const*() */

char * __thiscall spvtools::clr::blue::operator_cast_to_char_(blue *this)

{
  return "\x1b[34m";
}



// === spvFixWord @ 00d02e00 ===

/* spvFixWord(unsigned int, spv_endianness_t) */

uint spvFixWord(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_2 != 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



// === spvFixDoubleWord @ 00d02e10 ===

/* spvFixDoubleWord(unsigned int, unsigned int, spv_endianness_t) */

undefined8 spvFixDoubleWord(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_3 != 1) {
    uVar2 = param_1;
    uVar1 = param_2;
  }
  return CONCAT44(uVar1,uVar2);
}



// === spvBinaryEndianness @ 00d02e2c ===

/* spvBinaryEndianness(spv_const_binary_t*, spv_endianness_t*) */

undefined8 spvBinaryEndianness(spv_const_binary_t *param_1,spv_endianness_t *param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)param_1;
  if ((pcVar1 != (char *)0x0) && (*(long *)(param_1 + 8) != 0)) {
    if (param_2 == (spv_endianness_t *)0x0) {
      return 0xfffffffd;
    }
    if ((((*pcVar1 == '\x03') && (pcVar1[1] == '\x02')) && (pcVar1[2] == '#')) &&
       (pcVar1[3] == '\a')) {
      *(undefined4 *)param_2 = 0;
      return 0;
    }
    if (((*pcVar1 == '\a') && (pcVar1[1] == '#')) &&
       ((pcVar1[2] == '\x02' && (pcVar1[3] == '\x03')))) {
      *(undefined4 *)param_2 = 1;
      return 0;
    }
  }
  return 0xfffffffc;
}



// === spvIsHostEndian @ 00d02ec0 ===

/* spvIsHostEndian(spv_endianness_t) */

bool spvIsHostEndian(int param_1)

{
  return param_1 == 0;
}



// === spvTargetEnvDescription @ 00d02ecc ===

undefined * spvTargetEnvDescription(uint param_1)

{
  if (param_1 < 0x1b) {
    return &DAT_0092921c + *(int *)(&DAT_0092921c + (ulong)param_1 * 4);
  }
  return &DAT_0016fed1;
}



// === spvVersionForTargetEnv @ 00d02ef4 ===

/* spvVersionForTargetEnv(spv_target_env) */

undefined4 spvVersionForTargetEnv(uint param_1)

{
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&DAT_00929288 + (ulong)param_1 * 4);
  }
  return 0;
}



// === spvParseTargetEnv @ 00d02f14 ===

undefined4 spvParseTargetEnv(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  
  if (param_1 == (char *)0x0) {
LAB_00d031a4:
    uVar2 = 0;
    uVar3 = 0;
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    iVar1 = strncmp(param_1,"vulkan1.0",9);
    ppuVar4 = &spvTargetEnvNameMap;
    if (iVar1 != 0) {
      iVar1 = strncmp(param_1,"vulkan1.1spv1.4",0xf);
      if (iVar1 == 0) {
        ppuVar4 = &PTR_s_vulkan1_1spv1_4_00d6bf00;
      }
      else {
        iVar1 = strncmp(param_1,"vulkan1.1",9);
        if (iVar1 == 0) {
          ppuVar4 = (undefined **)&UNK_00d6bf10;
        }
        else {
          iVar1 = strncmp(param_1,"vulkan1.2",9);
          if (iVar1 == 0) {
            ppuVar4 = (undefined **)&UNK_00d6bf20;
          }
          else {
            iVar1 = strncmp(param_1,"vulkan1.3",9);
            if (iVar1 == 0) {
              ppuVar4 = (undefined **)&UNK_00d6bf30;
            }
            else {
              iVar1 = strncmp(param_1,"vulkan1.4",9);
              if (iVar1 == 0) {
                ppuVar4 = (undefined **)&UNK_00d6bf40;
              }
              else {
                iVar1 = strncmp(param_1,"spv1.0",6);
                if (iVar1 == 0) {
                  ppuVar4 = (undefined **)&UNK_00d6bf50;
                }
                else {
                  iVar1 = strncmp(param_1,"spv1.1",6);
                  if (iVar1 == 0) {
                    ppuVar4 = (undefined **)&UNK_00d6bf60;
                  }
                  else {
                    iVar1 = strncmp(param_1,"spv1.2",6);
                    if (iVar1 == 0) {
                      ppuVar4 = (undefined **)&UNK_00d6bf70;
                    }
                    else {
                      iVar1 = strncmp(param_1,"spv1.3",6);
                      if (iVar1 == 0) {
                        ppuVar4 = (undefined **)&UNK_00d6bf80;
                      }
                      else {
                        iVar1 = strncmp(param_1,"spv1.4",6);
                        if (iVar1 == 0) {
                          ppuVar4 = (undefined **)&UNK_00d6bf90;
                        }
                        else {
                          iVar1 = strncmp(param_1,"spv1.5",6);
                          if (iVar1 == 0) {
                            ppuVar4 = (undefined **)&UNK_00d6bfa0;
                          }
                          else {
                            iVar1 = strncmp(param_1,"spv1.6",6);
                            if (iVar1 == 0) {
                              ppuVar4 = (undefined **)&UNK_00d6bfb0;
                            }
                            else {
                              iVar1 = strncmp(param_1,"opencl1.2embedded",0x11);
                              if (iVar1 == 0) {
                                ppuVar4 = (undefined **)&UNK_00d6bfc0;
                              }
                              else {
                                iVar1 = strncmp(param_1,"opencl1.2",9);
                                if (iVar1 == 0) {
                                  ppuVar4 = (undefined **)&UNK_00d6bfd0;
                                }
                                else {
                                  iVar1 = strncmp(param_1,"opencl2.0embedded",0x11);
                                  if (iVar1 == 0) {
                                    ppuVar4 = (undefined **)&UNK_00d6bfe0;
                                  }
                                  else {
                                    iVar1 = strncmp(param_1,"opencl2.0",9);
                                    if (iVar1 == 0) {
                                      ppuVar4 = (undefined **)&UNK_00d6bff0;
                                    }
                                    else {
                                      iVar1 = strncmp(param_1,"opencl2.1embedded",0x11);
                                      if (iVar1 == 0) {
                                        ppuVar4 = &PTR_s_opencl2_1embedded_00d6c000;
                                      }
                                      else {
                                        iVar1 = strncmp(param_1,"opencl2.1",9);
                                        if (iVar1 == 0) {
                                          ppuVar4 = (undefined **)&UNK_00d6c010;
                                        }
                                        else {
                                          iVar1 = strncmp(param_1,"opencl2.2embedded",0x11);
                                          if (iVar1 == 0) {
                                            ppuVar4 = (undefined **)&UNK_00d6c020;
                                          }
                                          else {
                                            iVar1 = strncmp(param_1,"opencl2.2",9);
                                            if (iVar1 == 0) {
                                              ppuVar4 = (undefined **)&UNK_00d6c030;
                                            }
                                            else {
                                              iVar1 = strncmp(param_1,"opengl4.0",9);
                                              if (iVar1 == 0) {
                                                ppuVar4 = (undefined **)&UNK_00d6c040;
                                              }
                                              else {
                                                iVar1 = strncmp(param_1,"opengl4.1",9);
                                                if (iVar1 == 0) {
                                                  ppuVar4 = (undefined **)&UNK_00d6c050;
                                                }
                                                else {
                                                  iVar1 = strncmp(param_1,"opengl4.2",9);
                                                  if (iVar1 == 0) {
                                                    ppuVar4 = (undefined **)&UNK_00d6c060;
                                                  }
                                                  else {
                                                    iVar1 = strncmp(param_1,"opengl4.3",9);
                                                    if (iVar1 == 0) {
                                                      ppuVar4 = (undefined **)&UNK_00d6c070;
                                                    }
                                                    else {
                                                      iVar1 = strncmp(param_1,"opengl4.5",9);
                                                      if (iVar1 != 0) goto LAB_00d031a4;
                                                      ppuVar4 = (undefined **)&UNK_00d6c080;
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
    if (param_2 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined4 *)(ppuVar4 + 1);
    uVar3 = 1;
  }
  *param_2 = uVar2;
  return uVar3;
}



// === spvReadEnvironmentFromText @ 00d032c0 ===

/* spvReadEnvironmentFromText(std::__ndk1::vector<char, std::__ndk1::allocator<char> > const&,
   spv_target_env*) */

undefined8 spvReadEnvironmentFromText(vector *param_1,spv_target_env *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *(long *)param_1;
  uVar6 = *(long *)(param_1 + 8) - lVar3;
  if (uVar6 == 0) {
    return 0;
  }
  uVar8 = 0;
  do {
    pbVar1 = (byte *)(lVar3 + uVar8);
    bVar4 = *pbVar1;
    if ((4 < bVar4 - 9) && (bVar4 != 0x20)) {
      if (bVar4 != 0x3b) {
        return 0;
      }
      if (uVar6 <= uVar8 + 0xd) {
        return 0;
      }
      if (pbVar1[1] == 0x20) {
        if (pbVar1[2] == 0x56) {
          if (pbVar1[3] == 0x65) {
            if (pbVar1[4] == 0x72) {
              if (pbVar1[5] == 0x73) {
                if (pbVar1[6] == 0x69) {
                  if (pbVar1[7] == 0x6f) {
                    if (pbVar1[8] == 0x6e) {
                      if (pbVar1[9] == 0x3a) {
                        if (pbVar1[10] == 0x20) {
                          if (pbVar1[0xb] == 0x31) {
                            if (pbVar1[0xc] == 0x2e) {
                              if (uVar8 + 0xe < uVar6) {
                                bVar7 = *(byte *)(lVar3 + uVar8 + 0xe) - 0x30 < 10;
                              }
                              else {
                                bVar7 = false;
                              }
                              uVar5 = *(byte *)(lVar3 + uVar8 + 0xd) - 0x30;
                              lVar9 = 0xd;
                              if ((uVar5 < 7) && (!bVar7)) {
                                *(undefined4 *)param_2 =
                                     *(undefined4 *)(&DAT_009291b8 + (ulong)uVar5 * 4);
                                return 1;
                              }
                            }
                            else {
                              lVar9 = 0xc;
                            }
                          }
                          else {
                            lVar9 = 0xb;
                          }
                        }
                        else {
                          lVar9 = 10;
                        }
                      }
                      else {
                        lVar9 = 9;
                      }
                    }
                    else {
                      lVar9 = 8;
                    }
                  }
                  else {
                    lVar9 = 7;
                  }
                }
                else {
                  lVar9 = 6;
                }
              }
              else {
                lVar9 = 5;
              }
            }
            else {
              lVar9 = 4;
            }
          }
          else {
            lVar9 = 3;
          }
        }
        else {
          lVar9 = 2;
        }
      }
      else {
        lVar9 = 1;
      }
      uVar2 = uVar8 + lVar9;
      uVar8 = uVar2;
      for (; (uVar2 < uVar6 && (uVar8 = uVar2, *(char *)(lVar3 + uVar2) != '\n')); uVar2 = uVar2 + 1
          ) {
        uVar8 = uVar6;
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar6 <= uVar8) {
      return 0;
    }
  } while( true );
}



// === spvParseVulkanEnv @ 00d034a4 ===

undefined8 spvParseVulkanEnv(uint param_1,uint param_2,undefined4 *param_3)

{
  if (param_1 < 0x400001) {
    if (param_2 < 0x10001) {
      *param_3 = DAT_009291d4;
      return 1;
    }
LAB_00d03514:
    if (param_2 < 0x10301) {
      *param_3 = DAT_009291e0;
      return 1;
    }
    if (param_2 < 0x10401) {
      *param_3 = DAT_009291ec;
      return 1;
    }
  }
  else {
    if (param_1 < 0x401001) goto LAB_00d03514;
    if (0x402000 < param_1) {
      if (0x403000 < param_1) {
        if (0x404000 < param_1) {
          return 0;
        }
        if (0x10600 < param_2) {
          return 0;
        }
        *param_3 = DAT_00929210;
        return 1;
      }
      goto LAB_00d03538;
    }
  }
  if (param_2 < 0x10501) {
    *param_3 = DAT_009291f8;
    return 1;
  }
LAB_00d03538:
  if (0x10600 < param_2) {
    return 0;
  }
  *param_3 = DAT_00929204;
  return 1;
}



// === spvIsVulkanEnv @ 00d035c0 ===

/* spvIsVulkanEnv(spv_target_env) */

uint spvIsVulkanEnv(uint param_1)

{
  return (uint)(param_1 < 0x1b) & 0x6a40002U >> (ulong)(param_1 & 0x1f);
}



// === spvIsOpenCLEnv @ 00d035dc ===

/* spvIsOpenCLEnv(spv_target_env) */

uint spvIsOpenCLEnv(uint param_1)

{
  return (uint)(param_1 < 0x11) & 0x1f818U >> (ulong)(param_1 & 0x1f);
}



// === spvIsOpenGLEnv @ 00d035f8 ===

/* spvIsOpenGLEnv(spv_target_env) */

bool spvIsOpenGLEnv(int param_1)

{
  return param_1 - 5U < 5;
}



// === spvIsValidEnv @ 00d03608 ===

/* spvIsValidEnv(spv_target_env) */

uint spvIsValidEnv(uint param_1)

{
  return (uint)(param_1 < 0x1b) & 0x7f7ffffU >> (ulong)(param_1 & 0x1f);
}



// === spvLogStringForEnv @ 00d03620 ===

/* spvLogStringForEnv(spv_target_env) */

void spvLogStringForEnv(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  
  uVar1 = s_Universal_00198668._0_8_;
  switch(param_2) {
  case 0:
  case 2:
  case 10:
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x18:
    *param_1 = 0x12;
    param_1[9] = 0x6c;
    *(undefined8 *)(param_1 + 1) = uVar1;
    param_1[10] = 0;
    return;
  case 1:
  case 0x12:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
    *param_1 = 0xc;
    *(undefined4 *)(param_1 + 1) = 0x6b6c7556;
    *(undefined2 *)(param_1 + 5) = 0x6e61;
    param_1[7] = 0;
    return;
  case 3:
  case 4:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar2 = 0x4c43;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar2 = 0x4c47;
    break;
  default:
    *param_1 = 0xe;
    *(undefined4 *)(param_1 + 1) = 0x6e6b6e55;
    *(undefined4 *)(param_1 + 4) = 0x6e776f6e;
    param_1[8] = 0;
    return;
  }
  *param_1 = 0xc;
  *(undefined4 *)(param_1 + 1) = 0x6e65704f;
  *(undefined2 *)(param_1 + 5) = uVar2;
  param_1[7] = 0;
  return;
}



// === spvTargetEnvList @ 00d036fc ===

/* WARNING: Removing unreachable block (ram,0x00d037e8) */
/* spvTargetEnvList(int, int) */

void spvTargetEnvList(int param_1,int param_2)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  size_t __n;
  void *pvVar7;
  char *in_x8;
  void *pvVar8;
  ulong uVar9;
  char *__s;
  long lVar10;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  byte local_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  size_t local_90;
  void *local_88;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  lVar10 = 0;
  local_68 = *(long *)(lVar5 + 0x28);
  in_x8[0] = '\0';
  in_x8[1] = '\0';
  in_x8[2] = '\0';
  in_x8[3] = '\0';
  in_x8[4] = '\0';
  in_x8[5] = '\0';
  in_x8[6] = '\0';
  in_x8[7] = '\0';
  in_x8[8] = '\0';
  in_x8[9] = '\0';
  in_x8[10] = '\0';
  in_x8[0xb] = '\0';
  in_x8[0xc] = '\0';
  in_x8[0xd] = '\0';
  in_x8[0xe] = '\0';
  in_x8[0xf] = '\0';
  uVar9 = (ulong)(param_2 - param_1);
  in_x8[0x10] = '\0';
  in_x8[0x11] = '\0';
  in_x8[0x12] = '\0';
  in_x8[0x13] = '\0';
  in_x8[0x14] = '\0';
  in_x8[0x15] = '\0';
  in_x8[0x16] = '\0';
  in_x8[0x17] = '\0';
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  pvVar8 = (void *)((ulong)&local_c8 | 1);
  local_98 = 0;
  uStack_97 = 0;
  do {
    bVar6 = local_98;
    __s = *(char **)(PTR_spvTargetEnvNameMap_00d6cec0 + lVar10);
    sVar2 = (ulong)(local_98 >> 1);
    if ((local_98 & 1) != 0) {
      sVar2 = local_90;
    }
    __n = strlen(__s);
    uVar1 = sVar2 + __n;
    if (0xfffffffffffffff7 < uVar1) {
LAB_00d03a58:
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94();
    }
    if (uVar1 < 0x17) {
      local_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = (ulong)(byte)((int)uVar1 << 1);
      pvVar7 = (void *)((ulong)&local_b0 | 1);
    }
    else {
      uVar4 = 0x1a;
      if ((uVar1 | 7) != 0x17) {
        uVar4 = (uVar1 | 7) + 1;
      }
      local_a0 = operator_new(uVar4);
      local_b0 = uVar4 | 1;
      local_a8 = uVar1;
      pvVar7 = local_a0;
    }
    if (sVar2 != 0) {
      pvVar3 = (void *)((ulong)&local_98 | 1);
      if ((bVar6 & 1) != 0) {
        pvVar3 = local_88;
      }
      memmove(pvVar7,pvVar3,sVar2);
    }
    if (__n != 0) {
      memmove((void *)((long)pvVar7 + sVar2),__s,__n);
    }
    uVar1 = local_80;
    *(undefined1 *)((long)((long)pvVar7 + sVar2) + __n) = 0;
    sVar2 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      sVar2 = local_78;
    }
    uVar4 = (ulong)((byte)local_b0 >> 1);
    if ((local_b0 & 1) != 0) {
      uVar4 = local_a8;
    }
    if (uVar9 < uVar4 + sVar2) {
      uVar9 = sVar2 + 1;
      if (0xfffffffffffffff7 < uVar9) goto LAB_00d03a58;
      if (uVar9 < 0x17) {
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = (ulong)(byte)((int)uVar9 << 1);
        pvVar7 = pvVar8;
        if (sVar2 != 0) goto LAB_00d038ec;
      }
      else {
        uVar4 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          uVar4 = (uVar9 | 7) + 1;
        }
        pvVar7 = operator_new(uVar4);
        local_c8 = uVar4 | 1;
        local_c0 = uVar9;
        local_b8 = pvVar7;
LAB_00d038ec:
        pvVar3 = (void *)((ulong)&local_80 | 1);
        if ((uVar1 & 1) != 0) {
          pvVar3 = local_70;
        }
        memmove(pvVar7,pvVar3,sVar2);
      }
      *(undefined2 *)((long)pvVar7 + sVar2) = 10;
      pvVar7 = pvVar8;
      if ((local_c8 & 1) != 0) {
        pvVar7 = local_b8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,(ulong)pvVar7);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8,local_c8 & 0xfffffffffffffffe);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((ulong)&local_80,(char)param_1);
      uVar9 = (long)param_2;
    }
    pvVar7 = (void *)((ulong)&local_b0 | 1);
    if (((byte)local_b0 & 1) != 0) {
      pvVar7 = local_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_80,(ulong)pvVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_98);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0,local_b0 & 0xfffffffffffffffe);
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x1a0);
  pvVar8 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar8 = local_70;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,(ulong)pvVar8);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88,CONCAT62(uStack_96,CONCAT11(uStack_97,local_98)) & 0xfffffffffffffffe);
  }
  if ((local_80 & 1) == 0) {
    if (*(long *)(lVar5 + 0x28) != local_68) {
LAB_00d03a54:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_70,local_80 & 0xfffffffffffffffe);
    if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_00d03a54;
  }
  return;
}



// === spvContextCreate @ 00d03a5c ===

uint * spvContextCreate(uint param_1)

{
  uint *puVar1;
  
  if ((0x12 < param_1) && (6 < param_1 - 0x14)) {
    return (uint *)0x0;
  }
  puVar1 = (uint *)operator_new(0x40);
  *puVar1 = param_1;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return puVar1;
}



// === spvContextDestroy @ 00d03aac ===

void spvContextDestroy(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00d03afc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_00d03afc:
  operator_delete(param_1,0x40);
  return;
}



// === SetContextMessageConsumer @ 00d03b10 ===

/* spvtools::SetContextMessageConsumer(spv_context_t*, std::__ndk1::function<void
   (spv_message_level_t, char const*, spv_position_t const&, char const*)>) */

void spvtools::SetContextMessageConsumer(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00d03b58;
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_00d03b58:
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
  if (lVar3 != param_2) {
    *(long *)(param_1 + 0x30) = lVar3;
    *(undefined8 *)(param_2 + 0x20) = 0;
    return;
  }
  *(long **)(param_1 + 0x30) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00d03bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),plVar1);
  return;
}



// === operands @ 00d03bb8 ===

/* spvtools::OperandDesc::operands() const */

undefined1  [16] __thiscall spvtools::OperandDesc::operands(OperandDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 8);
  auVar1._0_8_ = &UNK_009294a0 + (ulong)*(uint *)(this + 4) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === name @ 00d03bcc ===

/* spvtools::OperandDesc::name() const */

undefined1  [16] __thiscall spvtools::OperandDesc::name(OperandDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x10);
  auVar1._0_8_ = "SPV_ALTERA_arbitrary_precision_fixed_point" + *(uint *)(this + 0xc);
  auVar1._12_4_ = 0;
  return auVar1;
}



// === aliases @ 00d03be0 ===

/* spvtools::OperandDesc::aliases() const */

undefined1  [16] __thiscall spvtools::OperandDesc::aliases(OperandDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x10);
  auVar1._0_8_ = &UNK_009380d0 + (ulong)*(uint *)(this + 0xc) * 8;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === capabilities @ 00d03bf4 ===

/* spvtools::OperandDesc::capabilities() const */

undefined1  [16] __thiscall spvtools::OperandDesc::capabilities(OperandDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x20);
  auVar1._0_8_ = &UNK_009387c0 + (ulong)*(uint *)(this + 0x1c) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === extensions @ 00d03c08 ===

/* spvtools::OperandDesc::extensions() const */

undefined1  [16] __thiscall spvtools::OperandDesc::extensions(OperandDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x28);
  auVar1._0_8_ = &UNK_00938cc4 + (ulong)*(uint *)(this + 0x24) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === operands @ 00d03c1c ===

/* spvtools::InstructionDesc::operands() const */

undefined1  [16] __thiscall spvtools::InstructionDesc::operands(InstructionDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0xc);
  auVar1._0_8_ = &UNK_009294a0 + (ulong)*(uint *)(this + 8) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === name @ 00d03c30 ===

/* spvtools::InstructionDesc::name() const */

undefined1  [16] __thiscall spvtools::InstructionDesc::name(InstructionDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x14);
  auVar1._0_8_ = "SPV_ALTERA_arbitrary_precision_fixed_point" + *(uint *)(this + 0x10);
  auVar1._12_4_ = 0;
  return auVar1;
}



// === aliases @ 00d03c44 ===

/* spvtools::InstructionDesc::aliases() const */

undefined1  [16] __thiscall spvtools::InstructionDesc::aliases(InstructionDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x14);
  auVar1._0_8_ = &UNK_009380d0 + (ulong)*(uint *)(this + 0x10) * 8;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === capabilities @ 00d03c58 ===

/* spvtools::InstructionDesc::capabilities() const */

undefined1  [16] __thiscall spvtools::InstructionDesc::capabilities(InstructionDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x24);
  auVar1._0_8_ = &UNK_009387c0 + (ulong)*(uint *)(this + 0x20) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === extensions @ 00d03c6c ===

/* spvtools::InstructionDesc::extensions() const */

undefined1  [16] __thiscall spvtools::InstructionDesc::extensions(InstructionDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x2c);
  auVar1._0_8_ = &UNK_00938cc4 + (ulong)*(uint *)(this + 0x28) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === operands @ 00d03c80 ===

/* spvtools::ExtInstDesc::operands() const */

undefined1  [16] __thiscall spvtools::ExtInstDesc::operands(ExtInstDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 8);
  auVar1._0_8_ = &UNK_009294a0 + (ulong)*(uint *)(this + 4) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === name @ 00d03c94 ===

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* spvtools::ExtInstDesc::name() const */

undefined1  [16] spvtools::ExtInstDesc::name(void)

{
  long in_x0;
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(in_x0 + 0x10);
  auVar1._0_8_ = "SPV_ALTERA_arbitrary_precision_fixed_point" + *(uint *)(in_x0 + 0xc);
  auVar1._12_4_ = 0;
  return auVar1;
}



// === capabilities @ 00d03ca8 ===

/* spvtools::ExtInstDesc::capabilities() const */

undefined1  [16] __thiscall spvtools::ExtInstDesc::capabilities(ExtInstDesc *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(this + 0x18);
  auVar1._0_8_ = &UNK_009387c0 + (ulong)*(uint *)(this + 0x14) * 4;
  auVar1._12_4_ = 0;
  return auVar1;
}



// === LookupOpcode @ 00d03cbc ===

/* spvtools::LookupOpcode(spv::Op, spvtools::InstructionDesc const**) */

undefined8 spvtools::LookupOpcode(uint param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x35f;
  puVar1 = (uint *)&UNK_00938ff4;
  do {
    uVar3 = uVar2 >> 1;
    if (puVar1[uVar3 * 0xf] < param_1) {
      puVar1 = puVar1 + uVar3 * 0xf + 0xf;
      uVar3 = uVar2 + ~uVar3;
    }
    uVar2 = uVar3;
  } while (uVar2 != 0);
  if ((puVar1 != (uint *)&UNK_00945a38) && (*puVar1 == param_1)) {
    *param_2 = puVar1;
    return 0;
  }
  return 0xfffffff7;
}



// === LookupOpcode @ 00d03d2c ===

/* spvtools::LookupOpcode(char const*, spvtools::InstructionDesc const**) */

int spvtools::LookupOpcode(char *param_1,InstructionDesc **param_2)

{
  int iVar1;
  char *__s1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar3 = 0x394;
  puVar2 = (uint *)&UNK_00945a38;
  do {
    uVar4 = uVar3 >> 1;
    puVar5 = puVar2 + uVar4 * 3;
    __s1 = param_1;
    if (puVar5[2] != 0xffffffff) {
      __s1 = "SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar5;
    }
    iVar1 = strcmp(__s1,param_1);
    if (iVar1 < 0) {
      puVar2 = puVar5 + 3;
      uVar4 = uVar3 + ~uVar4;
    }
    uVar3 = uVar4;
  } while (uVar3 != 0);
  if (puVar2 != (uint *)&UNK_00948528) {
    iVar1 = strcmp("SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar2,param_1);
    if (iVar1 == 0) {
      *param_2 = (InstructionDesc *)(&UNK_00938ff4 + (ulong)puVar2[2] * 0x3c);
      return iVar1;
    }
  }
  return -9;
}



// === LookupOpcodeForEnv @ 00d03e1c ===

/* spvtools::LookupOpcodeForEnv(spv_target_env, char const*, spvtools::InstructionDesc const**) */

undefined8 spvtools::LookupOpcodeForEnv(undefined4 param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *__s1;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  puVar4 = (uint *)&UNK_00945a38;
  uVar5 = 0x394;
  do {
    uVar6 = uVar5 >> 1;
    puVar7 = puVar4 + uVar6 * 3;
    __s1 = param_2;
    if (puVar7[2] != 0xffffffff) {
      __s1 = "SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar7;
    }
    iVar2 = strcmp(__s1,param_2);
    if (iVar2 < 0) {
      puVar4 = puVar7 + 3;
      uVar6 = uVar5 + ~uVar6;
    }
    uVar5 = uVar6;
  } while (uVar5 != 0);
  if ((puVar4 != (uint *)&UNK_00948528) &&
     (iVar2 = strcmp("SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar4,param_2), iVar2 == 0)) {
    lVar1 = (ulong)puVar4[2] * 0x3c;
    uVar3 = spvVersionForTargetEnv(param_1);
    if (((*(uint *)(&UNK_00939024 + lVar1) <= uVar3) && (uVar3 <= *(uint *)(&UNK_00939028 + lVar1)))
       || ((*(int *)(&UNK_00939020 + lVar1) != 0 || (*(int *)(&UNK_00939018 + lVar1) != 0)))) {
      *param_3 = &UNK_00938ff4 + lVar1;
      return 0;
    }
  }
  return 0xfffffff7;
}



// === LookupOpcodeForEnv @ 00d03f38 ===

/* spvtools::LookupOpcodeForEnv(spv_target_env, spv::Op, spvtools::InstructionDesc const**) */

undefined8 spvtools::LookupOpcodeForEnv(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)&UNK_00938ff4;
  uVar2 = 0x35f;
  do {
    uVar3 = uVar2 >> 1;
    if (puVar4[uVar3 * 0xf] < param_2) {
      puVar4 = puVar4 + uVar3 * 0xf + 0xf;
      uVar3 = uVar2 + ~uVar3;
    }
    uVar2 = uVar3;
  } while (uVar2 != 0);
  if (((puVar4 != (uint *)&UNK_00945a38) && (*puVar4 == param_2)) &&
     (((uVar1 = spvVersionForTargetEnv(), puVar4[0xc] <= uVar1 && (uVar1 <= puVar4[0xd])) ||
      ((puVar4[0xb] != 0 || (puVar4[9] != 0)))))) {
    *param_3 = puVar4;
    return 0;
  }
  return 0xfffffff7;
}



// === LookupOperand @ 00d03ff4 ===

/* spvtools::LookupOperand(spv_operand_type_t, unsigned int, spvtools::OperandDesc const**) */

undefined8 spvtools::LookupOperand(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = 0xfffffff7;
  uVar2 = 0x300000000;
  switch(param_1) {
  case 4:
    uVar2 = 0xf000003d8;
    break;
  case 5:
    uVar2 = 0x70000043c;
    break;
  default:
    goto switchD_00d0401c_caseD_6;
  case 0xc:
    uVar2 = 0xe00000476;
    break;
  case 0xd:
    uVar2 = 0x1100000315;
    break;
  case 0xe:
    uVar2 = 0x400000003;
    break;
  case 0xf:
    uVar2 = 0x4000003d4;
    break;
  case 0x10:
    uVar2 = 0x61000002b4;
    break;
  case 0x11:
    uVar2 = 0x1d00000484;
    break;
  case 0x12:
    uVar2 = 0x8000002ac;
    break;
  case 0x13:
    uVar2 = 0x50000040b;
    break;
  case 0x14:
    uVar2 = 0x200000410;
    break;
  case 0x15:
    uVar2 = 0x2a00000412;
    break;
  case 0x16:
    uVar2 = 0x1400000383;
    break;
  case 0x17:
    uVar2 = 0x1a00000369;
    break;
  case 0x18:
    uVar2 = 0x400000336;
    break;
  case 0x19:
    uVar2 = 0x3000003a0;
    break;
  case 0x1a:
  case 0x31:
    break;
  case 0x1b:
    uVar2 = 0x900000344;
    break;
  case 0x1c:
    uVar2 = 0x9500000217;
    break;
  case 0x1d:
    uVar2 = 0x8000000007;
    break;
  case 0x1e:
    uVar2 = 0x70000034d;
    break;
  case 0x1f:
    uVar2 = 0x300000399;
    break;
  case 0x20:
    uVar2 = 0x20000039c;
    break;
  case 0x21:
  case 0x69:
    uVar2 = 0x11800000087;
    break;
  case 0x22:
  case 0x33:
    uVar2 = 0x300000328;
    break;
  case 0x23:
  case 0x2b:
    uVar2 = 0x1100000358;
    break;
  case 0x24:
    uVar2 = 0x90000032d;
    break;
  case 0x25:
    uVar2 = 0x300000443;
    break;
  case 0x26:
    uVar2 = 0x14000003a8;
    break;
  case 0x27:
    uVar2 = 0x60000033e;
    break;
  case 0x28:
  case 0x2c:
    uVar2 = 0x9000003cb;
    break;
  case 0x29:
    uVar2 = 0x40000033a;
    break;
  case 0x38:
    uVar2 = 0x10000001fb;
    break;
  case 0x39:
    uVar2 = 0x8000001f0;
    break;
  case 0x3a:
    uVar2 = 0x3000001f8;
    break;
  case 0x3b:
    uVar2 = 0x300000214;
    break;
  case 0x3c:
    uVar2 = 0x90000020b;
    break;
  case 0x3d:
    uVar2 = 0x13000001ac;
    break;
  case 0x3e:
    uVar2 = 0x80000019f;
    break;
  case 0x3f:
    uVar2 = 0x3000001a7;
    break;
  case 0x40:
    uVar2 = 0x4000001c9;
    break;
  case 0x41:
    uVar2 = 0xa000001bf;
    break;
  case 0x42:
    uVar2 = 0x2000001aa;
    break;
  case 0x43:
    uVar2 = 0x200000326;
    break;
  case 0x44:
    uVar2 = 0x20000032b;
    break;
  case 0x45:
    uVar2 = 0x8000003ed;
    break;
  case 0x46:
    uVar2 = 0x4000003e8;
    break;
  case 0x47:
    uVar2 = 0xc000003f8;
    break;
  case 0x48:
    uVar2 = 0x200000409;
    break;
  case 0x49:
    uVar2 = 0x300000406;
    break;
  case 0x4a:
    uVar2 = 0x200000404;
    break;
  case 0x4b:
  case 0x4c:
    uVar2 = 0x1000003ec;
    break;
  case 0x4d:
  case 0x4e:
    uVar2 = 0x6000001e0;
    break;
  case 0x4f:
    uVar2 = 0x4000001dc;
    break;
  case 0x50:
    uVar2 = 0x3000001e9;
    break;
  case 0x51:
    uVar2 = 0x200000397;
    break;
  case 0x52:
    uVar2 = 0x400000354;
    break;
  case 0x53:
    uVar2 = 0x5000003a3;
    break;
  case 0x54:
    uVar2 = 0x4000004a1;
    break;
  case 0x55:
    uVar2 = 0x1000003e7;
    break;
  case 0x56:
  case 0x57:
    uVar2 = 0x3000003f5;
    break;
  case 0x58:
    uVar2 = 0x5000004a8;
    break;
  case 0x59:
    uVar2 = 0x3000001e6;
    break;
  case 0x5a:
    uVar2 = 0x3000004a5;
    break;
  case 0x5b:
  case 0x5c:
    uVar2 = 0xf000003bc;
    break;
  case 0x5d:
    uVar2 = 0x4000001ec;
    break;
  case 0x5e:
    uVar2 = 0xf000001cd;
    break;
  case 0x5f:
    uVar2 = 0x20000039e;
    break;
  case 0x60:
    uVar2 = 0x100000446;
    break;
  case 0x61:
    uVar2 = 0x800000447;
    break;
  case 0x62:
    uVar2 = 0x30000044f;
    break;
  case 99:
    uVar2 = 0x200000452;
    break;
  case 100:
    uVar2 = 0x1400000454;
    break;
  case 0x65:
    uVar2 = 0xa00000468;
    break;
  case 0x66:
    uVar2 = 0x400000472;
    break;
  case 0x67:
  case 0x68:
    uVar2 = 0x6000004ad;
  }
  puVar3 = (uint *)(&UNK_00948528 + (uVar2 & 0x7ff) * 0x34);
  uVar4 = uVar2 >> 0x20;
  do {
    uVar5 = uVar4 >> 1;
    if (puVar3[uVar5 * 0xd] < param_2) {
      puVar3 = puVar3 + uVar5 * 0xd + 0xd;
      uVar5 = uVar4 + ~uVar5;
    }
    uVar4 = uVar5;
  } while (uVar4 != 0);
  if ((puVar3 == (uint *)((long)(&UNK_00948528 + (uVar2 & 0x7ff) * 0x34) + (uVar2 >> 0x20) * 0xd * 4
                         )) || (*puVar3 != param_2)) {
    return 0xfffffff7;
  }
  uVar1 = 0;
  *param_3 = puVar3;
switchD_00d0401c_caseD_6:
  return uVar1;
}



// === LookupOperand @ 00d044ec ===

/* spvtools::LookupOperand(spv_operand_type_t, char const*, unsigned long, spvtools::OperandDesc
   const**) */

undefined4
spvtools::LookupOperand(undefined4 param_1,char *param_2,size_t param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = 0xfffffff7;
  uVar4 = 0x300000000;
  switch(param_1) {
  case 4:
    uVar4 = 0x1300000477;
    break;
  case 5:
    uVar4 = 0x8000004e1;
    break;
  default:
    goto switchD_00d0453c_caseD_6;
  case 0xc:
    uVar4 = 0xe0000051c;
    break;
  case 0xd:
    uVar4 = 0x1700000393;
    break;
  case 0xe:
    uVar4 = 0x500000003;
    break;
  case 0xf:
    uVar4 = 0x500000472;
    break;
  case 0x10:
    uVar4 = 0x660000032d;
    break;
  case 0x11:
    uVar4 = 0x260000052a;
    break;
  case 0x12:
    uVar4 = 0x800000325;
    break;
  case 0x13:
    uVar4 = 0x5000004b0;
    break;
  case 0x14:
    uVar4 = 0x2000004b5;
    break;
  case 0x15:
    uVar4 = 0x2a000004b7;
    break;
  case 0x16:
    uVar4 = 0x1400000412;
    break;
  case 0x17:
    uVar4 = 0x1a000003f8;
    break;
  case 0x18:
    uVar4 = 0x4000003bc;
    break;
  case 0x19:
    uVar4 = 0x300000431;
    break;
  case 0x1a:
  case 0x31:
    break;
  case 0x1b:
    uVar4 = 0xa000003cb;
    break;
  case 0x1c:
    uVar4 = 0xc500000260;
    break;
  case 0x1d:
    uVar4 = 0x9600000008;
    break;
  case 0x1e:
    uVar4 = 0xa000003d5;
    break;
  case 0x1f:
    uVar4 = 0x30000042a;
    break;
  case 0x20:
    uVar4 = 0x20000042d;
    break;
  case 0x21:
  case 0x69:
    uVar4 = 0x14a0000009e;
    break;
  case 0x22:
  case 0x33:
    uVar4 = 0x3000003ac;
    break;
  case 0x23:
  case 0x2b:
    uVar4 = 0x15000003e3;
    break;
  case 0x24:
    uVar4 = 0xb000003b1;
    break;
  case 0x25:
    uVar4 = 0x3000004e9;
    break;
  case 0x26:
    uVar4 = 0x1e00000439;
    break;
  case 0x27:
    uVar4 = 0x7000003c4;
    break;
  case 0x28:
  case 0x2c:
    uVar4 = 0xc00000466;
    break;
  case 0x29:
    uVar4 = 0x4000003c0;
    break;
  case 0x38:
    uVar4 = 0x1000000244;
    break;
  case 0x39:
    uVar4 = 0x800000239;
    break;
  case 0x3a:
    uVar4 = 0x300000241;
    break;
  case 0x3b:
    uVar4 = 0x30000025d;
    break;
  case 0x3c:
    uVar4 = 0x900000254;
    break;
  case 0x3d:
    uVar4 = 0x13000001f5;
    break;
  case 0x3e:
    uVar4 = 0x8000001e8;
    break;
  case 0x3f:
    uVar4 = 0x3000001f0;
    break;
  case 0x40:
    uVar4 = 0x400000212;
    break;
  case 0x41:
    uVar4 = 0xa00000208;
    break;
  case 0x42:
    uVar4 = 0x2000001f3;
    break;
  case 0x43:
    uVar4 = 0x2000003aa;
    break;
  case 0x44:
    uVar4 = 0x2000003af;
    break;
  case 0x45:
    uVar4 = 0x800000491;
    break;
  case 0x46:
    uVar4 = 0x40000048b;
    break;
  case 0x47:
    uVar4 = 0xd0000049c;
    break;
  case 0x48:
    uVar4 = 0x2000004ae;
    break;
  case 0x49:
    uVar4 = 0x3000004ab;
    break;
  case 0x4a:
    uVar4 = 0x2000004a9;
    break;
  case 0x4b:
  case 0x4c:
    uVar4 = 0x20000048f;
    break;
  case 0x4d:
  case 0x4e:
    uVar4 = 0x600000229;
    break;
  case 0x4f:
    uVar4 = 0x400000225;
    break;
  case 0x50:
    uVar4 = 0x300000232;
    break;
  case 0x51:
    uVar4 = 0x400000426;
    break;
  case 0x52:
    uVar4 = 0x4000003df;
    break;
  case 0x53:
    uVar4 = 0x500000434;
    break;
  case 0x54:
    uVar4 = 0x400000550;
    break;
  case 0x55:
    uVar4 = 0x10000048a;
    break;
  case 0x56:
  case 0x57:
    uVar4 = 0x300000499;
    break;
  case 0x58:
    uVar4 = 0x500000557;
    break;
  case 0x59:
    uVar4 = 0x30000022f;
    break;
  case 0x5a:
    uVar4 = 0x300000554;
    break;
  case 0x5b:
  case 0x5c:
    uVar4 = 0xf00000457;
    break;
  case 0x5d:
    uVar4 = 0x400000235;
    break;
  case 0x5e:
    uVar4 = 0xf00000216;
    break;
  case 0x5f:
    uVar4 = 0x20000042f;
    break;
  case 0x60:
    uVar4 = 0x1000004ec;
    break;
  case 0x61:
    uVar4 = 0x8000004ed;
    break;
  case 0x62:
    uVar4 = 0x3000004f5;
    break;
  case 99:
    uVar4 = 0x2000004f8;
    break;
  case 100:
    uVar4 = 0x14000004fa;
    break;
  case 0x65:
    uVar4 = 0xa0000050e;
    break;
  case 0x66:
    uVar4 = 0x400000518;
    break;
  case 0x67:
  case 0x68:
    uVar4 = 0x60000055c;
  }
  puVar6 = (uint *)(&DAT_00957984 + (uVar4 & 0x7ff) * 0xc);
  uVar8 = uVar4 >> 0x20;
  do {
    uVar7 = uVar8 >> 1;
    puVar5 = puVar6 + uVar7 * 3;
    uVar1 = puVar5[2];
    __s1 = param_2;
    if (uVar1 != 0xffffffff) {
      __s1 = "SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar5;
    }
    iVar2 = strncmp(__s1,param_2,param_3);
    if (iVar2 == 0) {
      if (uVar1 != 0xffffffff && puVar5[1] - 1 < param_3) goto LAB_00d049b8;
    }
    else if (iVar2 < 0) {
LAB_00d049b8:
      puVar6 = puVar5 + 3;
      uVar7 = uVar8 + ~uVar7;
    }
    uVar8 = uVar7;
  } while (uVar7 != 0);
  if (((puVar6 == (uint *)((long)(&DAT_00957984 + (uVar4 & 0x7ff) * 0xc) + (uVar4 >> 0x20) * 3 * 4))
      || (param_3 != puVar6[1] - 1)) ||
     (iVar2 = strncmp("SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar6,param_2,param_3),
     iVar2 != 0)) {
    uVar3 = 0xfffffff7;
  }
  else {
    *param_4 = &UNK_00948528 + (ulong)puVar6[2] * 0x34;
    uVar3 = 0;
  }
switchD_00d0453c_caseD_6:
  return uVar3;
}



// === LookupExtInst @ 00d04aa0 ===

/* spvtools::LookupExtInst(spv_ext_inst_type_t, char const*, spvtools::ExtInstDesc const**) */

undefined4 spvtools::LookupExtInst(int param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if (0xc < param_1 - 1U) {
    return 0xfffffff7;
  }
  uVar2 = *(ulong *)(&DAT_00961010 + (ulong)(param_1 - 1U) * 8);
  uVar4 = uVar2 >> 0x20;
  puVar3 = (uint *)(&UNK_0095ba1c + (uVar2 & 0x1ff) * 0xc);
  uVar5 = uVar4;
  do {
    uVar6 = uVar5 >> 1;
    puVar7 = puVar3 + uVar6 * 3;
    __s1 = param_2;
    if (puVar7[2] != 0xffffffff) {
      __s1 = "SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar7;
    }
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 < 0) {
      puVar3 = puVar7 + 3;
      uVar6 = uVar5 + ~uVar6;
    }
    uVar5 = uVar6;
  } while (uVar5 != 0);
  if ((puVar3 != (uint *)((long)(&UNK_0095ba1c + (uVar2 & 0x1ff) * 0xc) + uVar4 * 3 * 4)) &&
     (iVar1 = strcmp("SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar3,param_2), iVar1 == 0)) {
    *param_3 = &UNK_0095d144 + (ulong)puVar3[2] * 0x1c;
    return 0;
  }
  return 0xfffffff7;
}



// === LookupExtInst @ 00d04bb4 ===

/* spvtools::LookupExtInst(spv_ext_inst_type_t, unsigned int, spvtools::ExtInstDesc const**) */

undefined8 spvtools::LookupExtInst(int param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 - 1U < 0xd) {
    uVar2 = *(ulong *)(&DAT_00961010 + (ulong)(param_1 - 1U) * 8) >> 0x20;
    puVar1 = (uint *)(&UNK_0095d144 +
                     (*(ulong *)(&DAT_00961010 + (ulong)(param_1 - 1U) * 8) & 0x1ff) * 0x1c);
    uVar3 = uVar2;
    do {
      uVar4 = uVar3 >> 1;
      if (puVar1[uVar4 * 7] < param_2) {
        puVar1 = puVar1 + uVar4 * 7 + 7;
        uVar4 = uVar3 + ~uVar4;
      }
      uVar3 = uVar4;
    } while (uVar3 != 0);
    if ((puVar1 != (uint *)((long)(&UNK_0095d144 +
                                  (*(ulong *)(&DAT_00961010 + (ulong)(param_1 - 1U) * 8) & 0x1ff) *
                                  0x1c) + uVar2 * 7 * 4)) && (*puVar1 == param_2)) {
      *param_3 = puVar1;
      return 0;
    }
  }
  return 0xfffffff7;
}



// === ExtensionToString @ 00d04c4c ===

/* spvtools::ExtensionToString(spvtools::Extension) */

char * spvtools::ExtensionToString(int param_1)

{
  if (param_1 - 1U < 0xba) {
    return "SPV_ALTERA_arbitrary_precision_fixed_point" +
           *(long *)(&DAT_00961078 + (ulong)(param_1 - 1U) * 8);
  }
  return "SPV_ALTERA_arbitrary_precision_fixed_point";
}



// === GetExtensionFromString @ 00d04c84 ===

/* spvtools::GetExtensionFromString(char const*, spvtools::Extension*) */

undefined8 spvtools::GetExtensionFromString(char *param_1,Extension *param_2)

{
  int iVar1;
  char *__s1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar3 = 0xbb;
  puVar2 = (uint *)&UNK_0096074c;
  do {
    uVar4 = uVar3 >> 1;
    puVar5 = puVar2 + uVar4 * 3;
    __s1 = param_1;
    if (puVar5[2] != 0xffffffff) {
      __s1 = "SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar5;
    }
    iVar1 = strcmp(__s1,param_1);
    if (iVar1 < 0) {
      puVar2 = puVar5 + 3;
      uVar4 = uVar3 + ~uVar4;
    }
    uVar3 = uVar4;
  } while (uVar3 != 0);
  if ((puVar2 != (uint *)&DAT_00961010) &&
     (iVar1 = strcmp("SPV_ALTERA_arbitrary_precision_fixed_point" + *puVar2,param_1), iVar1 == 0)) {
    *(uint *)param_2 = puVar2[2];
    return 1;
  }
  return 0;
}



// === StorageClassToString @ 00d04d68 ===

/* spvtools::StorageClassToString(spv::StorageClass) */

char * spvtools::StorageClassToString(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x118b) {
    pcVar1 = "UniformConstant";
    switch(param_1) {
    case 0:
      goto switchD_00d04d9c_caseD_0;
    case 1:
      return "Input";
    case 2:
      return "Uniform";
    case 3:
      return "Output";
    case 4:
      return "Workgroup";
    case 5:
      return "CrossWorkgroup";
    case 6:
      return "Private";
    case 7:
      return "Function";
    case 8:
      return "Generic";
    case 9:
      return "PushConstant";
    case 10:
      return "AtomicCounter";
    case 0xb:
      return "Image";
    case 0xc:
      return "StorageBuffer";
    default:
      if (param_1 == 0x104c) {
        return "TileImageEXT";
      }
    }
  }
  else if (param_1 < 0x14df) {
    if (param_1 < 0x14d1) {
      if (param_1 == 0x118b) {
        return "TileAttachmentQCOM";
      }
      if (param_1 == 0x13cc) {
        return "NodePayloadAMDX";
      }
      if (param_1 == 0x14d0) {
        return "CallableDataKHR";
      }
    }
    else if (param_1 < 0x14db) {
      if (param_1 == 0x14d1) {
        return "IncomingCallableDataKHR";
      }
      if (param_1 == 0x14da) {
        return "RayPayloadKHR";
      }
    }
    else {
      if (param_1 == 0x14db) {
        return "HitAttributeKHR";
      }
      if (param_1 == 0x14de) {
        return "IncomingRayPayloadKHR";
      }
    }
  }
  else if (param_1 < 0x151a) {
    if (param_1 == 0x14df) {
      return "ShaderRecordBufferKHR";
    }
    if (param_1 == 0x14e5) {
      return "PhysicalStorageBuffer";
    }
    if (param_1 == 0x1509) {
      return "HitObjectAttributeNV";
    }
  }
  else if (param_1 < 0x1730) {
    if (param_1 == 0x151a) {
      return "TaskPayloadWorkgroupEXT";
    }
    if (param_1 == 0x15e5) {
      return "CodeSectionINTEL";
    }
  }
  else {
    if (param_1 == 0x1730) {
      return "DeviceOnlyINTEL";
    }
    if (param_1 == 0x1731) {
      return "HostOnlyINTEL";
    }
  }
  pcVar1 = "Unknown";
switchD_00d04d9c_caseD_0:
  return pcVar1;
}



// === spvIsValidIDCharacter @ 00d04fe0 ===

/* spvIsValidIDCharacter(char) */

bool spvIsValidIDCharacter(char param_1)

{
  return param_1 == '_' || ((byte)param_1 - 0x30 < 10 || ((byte)param_1 | 0x20) - 0x61 < 0x1a);
}



// === spvIsValidID @ 00d0500c ===

/* spvIsValidID(char const*) */

bool spvIsValidID(char *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    bVar1 = param_1[lVar2];
    if (bVar1 != 0x5f) {
      if (bVar1 == 0) {
        return lVar2 != 0;
      }
      if ((9 < bVar1 - 0x30) && (0x19 < (bVar1 | 0x20) - 0x61)) {
        return false;
      }
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



// === spvTextToLiteral @ 00d05058 ===

/* spvTextToLiteral(char const*, spv_literal_t*) */

undefined8 spvTextToLiteral(char *param_1,spv_literal_t *param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  size_t sVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  double dVar11;
  
  sVar4 = strlen(param_1);
  if (sVar4 != 0) {
    bVar3 = false;
    iVar6 = 0;
    bVar1 = false;
    uVar8 = 0;
    do {
      bVar2 = param_1[uVar8];
      if (9 < bVar2 - 0x30) {
        if (bVar2 == 0x2d) {
          bVar1 = (bool)(uVar8 != 0 | bVar1);
          bVar3 = (bool)(uVar8 == 0 | bVar3);
        }
        else if (bVar2 == 0x2e) {
          iVar6 = iVar6 + 1;
        }
        else {
          bVar1 = true;
          uVar8 = sVar4;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < sVar4);
    *(undefined4 *)param_2 = 99;
    if ((!bVar1 && iVar6 < 2) && (!(bool)(sVar4 == 1 & bVar3))) {
      if (iVar6 != 1) {
        if (bVar3) {
          uVar5 = strtoll(param_1,(char **)0x0,10);
          if (uVar5 == (long)(int)uVar5) {
            *(undefined4 *)param_2 = 0;
            *(int *)(param_2 + 8) = (int)uVar5;
            return 0;
          }
          uVar7 = 1;
        }
        else {
          uVar5 = strtoull(param_1,(char **)0x0,10);
          if (uVar5 >> 0x20 == 0) {
            *(undefined4 *)param_2 = 2;
            *(int *)(param_2 + 8) = (int)uVar5;
            return 0;
          }
          uVar7 = 3;
        }
        *(undefined4 *)param_2 = uVar7;
        *(ulonglong *)(param_2 + 8) = uVar5;
        return 0;
      }
      dVar11 = strtod(param_1,(char **)0x0);
      if (dVar11 == (double)(float)dVar11) {
        *(float *)(param_2 + 8) = (float)dVar11;
        *(undefined4 *)param_2 = 4;
        return 0;
      }
      *(double *)(param_2 + 8) = dVar11;
      *(undefined4 *)param_2 = 5;
      return 0;
    }
    if (((sVar4 != 1) && (*param_1 == '\"')) && (param_1[sVar4 - 1] == '\"')) {
      pcVar9 = param_1 + 1;
      if (pcVar9 != param_1 + (sVar4 - 1)) {
        bVar1 = false;
        lVar10 = sVar4 - 2;
        do {
          bVar1 = (bool)(*pcVar9 == '\\' & (bVar1 ^ 1U));
          if (!bVar1) {
            if ((((byte)param_2[0x10] & 1) != 0) && (0x3fffb < *(ulong *)(param_2 + 0x18))) {
              return 0xfffffffe;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)param_2 + '\x10');
          }
          lVar10 = lVar10 + -1;
          pcVar9 = pcVar9 + 1;
        } while (lVar10 != 0);
      }
      *(undefined4 *)param_2 = 6;
      return 0;
    }
  }
  return 4;
}



// === spvTextEncodeOperand @ 00d052e8 ===

/* spvTextEncodeOperand(spvtools::AssemblyGrammar const&, spvtools::AssemblyContext*,
   spv_operand_type_t, char const*, spv_instruction_t*, std::__ndk1::vector<spv_operand_type_t,
   std::__ndk1::allocator<spv_operand_type_t> >*) */

void spvTextEncodeOperand
               (AssemblyGrammar *param_1,AssemblyContext *param_2,int param_3,char *param_4,
               spv_instruction_t *param_5,vector *param_6)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  size_t sVar13;
  char *pcVar14;
  DiagnosticStream *pDVar15;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  uint local_224;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_208;
  char *local_200;
  InstructionDesc *local_1f8 [2];
  void *local_1e8;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  uint local_78;
  long local_68;
  ulong uVar16;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*param_4 == '!') {
    uVar11 = FUN_00d05d24(param_2,param_4,param_5);
    if ((int)uVar11 == 0) {
      spvAlternatePatternFollowingImmediate(param_6);
      pvVar12 = *(void **)param_6;
      if (pvVar12 != (void *)0x0) {
        *(void **)(param_6 + 8) = pvVar12;
        operator_delete(pvVar12,*(long *)(param_6 + 0x10) - (long)pvVar12);
      }
      uVar11 = 0;
      *(undefined8 *)(param_6 + 8) = local_1e0._8_8_;
      *(undefined8 *)param_6 = local_1e0._0_8_;
      *(undefined8 *)(param_6 + 0x10) = local_1d0;
    }
    goto LAB_00d05c5c;
  }
  uVar11 = spvOperandIsOptional(param_3);
  auVar21._8_8_ = local_220._8_8_;
  auVar21._0_8_ = local_220._0_8_;
  uVar9 = 4;
  if ((uVar11 & 1) == 0) {
    uVar9 = 0xfffffffb;
  }
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x2a:
    if (*param_4 == '%') {
      lVar19 = 0;
      param_4 = param_4 + 1;
LAB_00d054ac:
      bVar2 = param_4[lVar19];
      if (bVar2 == 0x5f) {
LAB_00d054a8:
        lVar19 = lVar19 + 1;
        goto LAB_00d054ac;
      }
      if (bVar2 != 0) {
        if ((9 < bVar2 - 0x30) && (0x19 < (bVar2 | 0x20) - 0x61)) goto LAB_00d056c0;
        goto LAB_00d054a8;
      }
      if (lVar19 != 0) {
        uVar9 = spvtools::AssemblyContext::spvNamedIdAssignOrGet(param_2,param_4);
        if (param_3 == 2) {
          *(undefined4 *)(param_5 + 8) = uVar9;
        }
        local_1e0._0_4_ = uVar9;
        FUN_00cfaac8(param_5 + 0x10,local_1e0);
        uVar11 = spvIsExtendedInstruction(*(undefined4 *)param_5);
        auVar7._8_8_ = local_220._8_8_;
        auVar7._0_8_ = local_220._0_8_;
        auVar5._8_8_ = local_1e0._8_8_;
        auVar5._0_8_ = local_1e0._0_8_;
        if (((uVar11 & 1) == 0) ||
           (local_1e0 = auVar5, local_220 = auVar7,
           *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10) != 0x10)) break;
        iVar10 = spvtools::AssemblyContext::getExtInstTypeForId
                           (param_2,*(uint *)(*(long *)(param_5 + 0x10) + 0xc));
        if (iVar10 != 0) {
          *(int *)(param_5 + 4) = iVar10;
          break;
        }
        spvtools::AssemblyContext::diagnostic();
        FUN_00cf1dd8(local_1e0,"Invalid extended instruction import Id ",0x27);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_1e0,
                   *(uint *)(*(long *)(param_5 + 0x10) + 8));
        goto LAB_00d0584c;
      }
LAB_00d056c0:
      local_220._8_8_ = *(undefined8 *)(param_2 + 0xa8);
      local_220._0_8_ = *(undefined8 *)(param_2 + 0xa0);
      local_210 = *(ulong *)(param_2 + 0xb0);
      local_1f8[0] = (InstructionDesc *)((ulong)local_1f8[0]._2_6_ << 0x10);
      spvtools::DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)local_1e0,local_220,param_2 + 0xc0,local_1f8,0xfffffffb);
      if (((ulong)local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8,(ulong)local_1f8[0] & 0xfffffffffffffffe);
      }
      pcVar14 = "Invalid ID ";
      uVar17 = 0xb;
LAB_00d05830:
      FUN_00cf1dd8(local_1e0,pcVar14,uVar17);
      sVar13 = strlen(param_4);
    }
    else {
      local_220._8_8_ = *(undefined8 *)(param_2 + 0xa8);
      local_220._0_8_ = *(undefined8 *)(param_2 + 0xa0);
      local_210 = *(ulong *)(param_2 + 0xb0);
      local_1f8[0] = (InstructionDesc *)((ulong)local_1f8[0]._2_6_ << 0x10);
      spvtools::DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)local_1e0,local_220,param_2 + 0xc0,local_1f8,0xfffffffb);
      if (((ulong)local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8,(ulong)local_1f8[0] & 0xfffffffffffffffe);
      }
      param_4 = "Expected id to start with %.";
      sVar13 = 0x1c;
    }
    goto LAB_00d05848;
  case 6:
  case 0x2d:
    puVar20 = (undefined8 *)&DAT_00202bf0;
    goto LAB_00d05720;
  case 7:
    local_1f8[0] = (InstructionDesc *)0x0;
    iVar10 = spvtools::LookupExtInst(*(undefined4 *)(param_5 + 4),param_4,local_1f8);
    if (iVar10 == 0) {
      local_1e0._0_4_ = *(undefined4 *)local_1f8[0];
      FUN_00cfaac8(param_5 + 0x10,local_1e0);
      local_1e0 = spvtools::ExtInstDesc::operands((ExtInstDesc *)local_1f8[0]);
      goto LAB_00d05c4c;
    }
    uVar11 = spvExtInstIsNonSemantic(*(undefined4 *)(param_5 + 4));
    if ((uVar11 & 1) == 0) {
      spvtools::AssemblyContext::diagnostic();
      pcVar14 = "Invalid extended instruction name \'";
      uVar17 = 0x23;
      goto LAB_00d05460;
    }
    local_210 = 0;
    local_208 = 0;
    local_200 = (char *)0x0;
    iVar10 = spvTextToLiteral(param_4,(spv_literal_t *)local_220);
    bVar8 = local_220._0_4_ != 2;
    if (iVar10 != 0 || bVar8) {
      spvtools::AssemblyContext::diagnostic();
      FUN_00cf1dd8(local_1e0,"Couldn\'t translate unknown extended instruction name \'",0x36);
      sVar13 = strlen(param_4);
      FUN_00cf1dd8(local_1e0,param_4,sVar13);
      FUN_00cf1dd8(local_1e0,"\' to unsigned integer.",0x16);
      spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1e0);
      uVar11 = (ulong)local_78;
    }
    else {
      local_1e0._0_4_ = local_220._8_4_;
      FUN_00cfaac8(param_5 + 0x10,local_1e0);
      local_1e0._0_4_ = 0x34;
      uVar11 = FUN_00cfad68(param_6,local_1e0);
    }
    if ((local_210 & 1) != 0) {
      uVar11 = uVar11 & 0xffffffff;
      operator_delete(local_200,local_210 & 0xfffffffffffffffe);
    }
    if (iVar10 != 0 || bVar8) goto LAB_00d05c5c;
    break;
  case 8:
    iVar10 = spvtools::AssemblyGrammar::lookupSpecConstantOpcode(param_1,param_4,(Op *)local_1f8);
    if (iVar10 == 0) {
      local_220._0_8_ = (InstructionDesc *)0x0;
      iVar10 = spvtools::LookupOpcodeForEnv
                         (*(undefined4 *)param_1,(ulong)local_1f8[0] & 0xffffffff,local_220);
      if (iVar10 == 0) {
        local_1e0._0_4_ = *(undefined4 *)local_220._0_8_;
        FUN_00cfaac8(param_5 + 0x10,local_1e0);
        auVar21 = spvtools::InstructionDesc::operands((InstructionDesc *)local_220._0_8_);
        uVar16 = auVar21._8_8_;
        uVar11 = auVar21._0_8_ + 8;
        if (1 >= uVar16 || uVar16 - 2 == 0) {
          uVar11 = 0;
        }
        auVar4._8_8_ = uVar16 - 2;
        auVar4._0_8_ = uVar11;
        local_1e0._8_8_ = 0;
        local_1e0._0_8_ = uVar11;
        if (1 < uVar16) {
          local_1e0 = auVar4;
        }
        goto LAB_00d05c4c;
      }
      spvtools::AssemblyContext::diagnostic(local_1e0,param_2,0xffffffff);
      param_4 = "OpSpecConstant opcode table out of sync";
      sVar13 = 0x27;
    }
    else {
      spvtools::AssemblyContext::diagnostic();
      FUN_00cf1dd8(local_1e0,"Invalid ",8);
      param_3 = 8;
LAB_00d05908:
      pcVar14 = (char *)spvOperandTypeStr(param_3);
      sVar13 = strlen(pcVar14);
      FUN_00cf1dd8(local_1e0,pcVar14,sVar13);
      pcVar14 = " \'";
      uVar17 = 2;
LAB_00d05460:
      FUN_00cf1dd8(local_1e0,pcVar14,uVar17);
      sVar13 = strlen(param_4);
      FUN_00cf1dd8(local_1e0,param_4,sVar13);
      param_4 = "\'.";
      sVar13 = 2;
    }
LAB_00d05848:
    FUN_00cf1dd8(local_1e0,param_4,sVar13);
LAB_00d0584c:
    spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1e0);
    uVar11 = (ulong)local_78;
    goto LAB_00d05c5c;
  case 9:
  case 0x2f:
    iVar10 = *(int *)param_5;
    local_220._8_8_ = spvtools::kUnknownType._8_8_;
    local_220._0_8_ = spvtools::kUnknownType._0_8_;
    auVar6._8_8_ = spvtools::kUnknownType._8_8_;
    auVar6._0_8_ = spvtools::kUnknownType._0_8_;
    if (iVar10 == 0x2b) {
LAB_00d05624:
      local_220 = spvtools::AssemblyContext::getTypeOfTypeGeneratingValue
                            (param_2,*(uint *)(param_5 + 8));
      auVar6 = local_220;
      if (1 < local_220._8_4_ - 1U) {
        local_1f8[0] = (InstructionDesc *)0x0;
        iVar10 = spvtools::LookupOpcode(*(undefined4 *)param_5,local_1f8);
        if (iVar10 == 0) {
          pcVar14 = (char *)spvtools::InstructionDesc::name(local_1f8[0]);
        }
        else {
          pcVar14 = "opcode";
        }
        spvtools::AssemblyContext::diagnostic();
        FUN_00cf1dd8(local_1e0,"Type for ",9);
        sVar13 = strlen(pcVar14);
        FUN_00cf1dd8(local_1e0,pcVar14,sVar13);
        param_4 = " must be a scalar floating point or integer type";
        sVar13 = 0x30;
        goto LAB_00d05848;
      }
    }
    else if (iVar10 == 0xfb) {
      local_220 = spvtools::AssemblyContext::getTypeOfValueInstruction
                            (param_2,*(uint *)(*(long *)(param_5 + 0x10) + 4));
      auVar6 = local_220;
      if (local_220._8_4_ != 1) {
        spvtools::AssemblyContext::diagnostic();
        param_4 = 
        "The selector operand for OpSwitch must be the result of an instruction that generates an integer scalar"
        ;
        sVar13 = 0x67;
        goto LAB_00d05848;
      }
    }
    else if (iVar10 == 0x32) goto LAB_00d05624;
    puVar18 = local_220;
    local_220 = auVar6;
    goto LAB_00d0597c;
  case 10:
    puVar20 = (undefined8 *)&DAT_00202fa0;
LAB_00d05720:
    local_1e0._8_8_ = puVar20[1];
    local_1e0._0_8_ = *puVar20;
    puVar18 = local_1e0;
    goto LAB_00d0597c;
  case 0xb:
  case 0x30:
    local_220._0_8_ = local_220._0_8_ & 0xffffffff00000000;
    local_220._8_8_ = local_220._8_8_ & 0xffffffff00000000;
    local_208 = 0;
    local_200 = (char *)0x0;
    local_210 = 0;
    uVar11 = spvTextToLiteral(param_4,(spv_literal_t *)local_220);
    if ((int)uVar11 == -2) goto joined_r0x00d05d18;
    if ((int)uVar11 == 0) {
      if (local_220._0_4_ != 6) {
        spvtools::AssemblyContext::diagnostic();
        pcVar14 = "Expected literal string, found literal number \'";
        uVar17 = 0x2f;
        goto LAB_00d05a38;
      }
      if (*(int *)param_5 != 0xb) {
LAB_00d05ae8:
        pcVar14 = (char *)((long)&local_210 + 1);
        if ((local_210 & 1) != 0) {
          pcVar14 = local_200;
        }
        iVar10 = spvtools::AssemblyContext::binaryEncodeString(param_2,pcVar14,param_5);
        bVar8 = iVar10 == 0;
        local_78 = 0;
        if (!bVar8) {
          local_78 = 0xfffffffb;
        }
        goto joined_r0x00d05b20;
      }
      pcVar14 = (char *)((long)&local_210 + 1);
      if ((local_210 & 1) != 0) {
        pcVar14 = local_200;
      }
      iVar10 = spvExtInstImportTypeGet(pcVar14);
      if (iVar10 == 0) {
        spvtools::AssemblyContext::diagnostic();
        FUN_00cf1dd8(local_1e0,"Invalid extended instruction import \'",0x25);
        pDVar15 = spvtools::DiagnosticStream::operator<<
                            ((DiagnosticStream *)local_1e0,(basic_string *)&local_210);
        FUN_00cf1dd8(pDVar15,&DAT_0017578a,1);
        uVar1 = *(uint *)(pDVar15 + 0x168);
        spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1e0);
        uVar11 = (ulong)uVar1;
      }
      else {
        uVar11 = spvtools::AssemblyContext::recordIdAsExtInstImport
                           (param_2,*(undefined4 *)(*(long *)(param_5 + 0x10) + 4),iVar10);
        if ((int)uVar11 == 0) goto LAB_00d05ae8;
      }
joined_r0x00d05d18:
      bVar8 = false;
    }
    else {
      spvtools::AssemblyContext::diagnostic(local_1e0,param_2,uVar9);
      pcVar14 = "Invalid literal string \'";
      uVar17 = 0x18;
LAB_00d05a38:
      FUN_00cf1dd8(local_1e0,pcVar14,uVar17);
      sVar13 = strlen(param_4);
      FUN_00cf1dd8(local_1e0,param_4,sVar13);
      FUN_00cf1dd8(local_1e0,&DAT_00175787,2);
      spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1e0);
      bVar8 = false;
joined_r0x00d05b20:
      uVar11 = (ulong)local_78;
    }
    if ((local_210 & 1) != 0) {
      uVar11 = uVar11 & 0xffffffff;
      operator_delete(local_200,local_210 & 0xfffffffffffffffe);
    }
    if (!bVar8) goto LAB_00d05c5c;
    break;
  default:
    local_220._0_8_ = (OperandDesc *)0x0;
    sVar13 = strlen(param_4);
    iVar10 = spvtools::LookupOperand(param_3,param_4,sVar13,local_220);
    if ((iVar10 != 0) ||
       (iVar10 = spvtools::AssemblyContext::binaryEncodeU32
                           (param_2,*(uint *)local_220._0_8_,param_5), iVar10 != 0)) {
      spvtools::AssemblyContext::diagnostic();
      FUN_00cf1dd8(local_1e0,"Invalid ",8);
      goto LAB_00d05908;
    }
    local_1e0 = spvtools::OperandDesc::operands((OperandDesc *)local_220._0_8_);
LAB_00d05c4c:
    spvPushOperandTypes((Span *)local_1e0,param_6);
    break;
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2b:
  case 0x2c:
  case 0x38:
  case 0x3d:
  case 0x4e:
  case 0x57:
  case 0x59:
  case 0x5a:
  case 0x5c:
  case 0x67:
  case 0x68:
    iVar10 = spvtools::AssemblyGrammar::parseMaskOperand(param_1,param_3,param_4,&local_224);
    if (iVar10 != 0) {
      local_220._8_8_ = *(undefined8 *)(param_2 + 0xa8);
      local_220._0_8_ = *(undefined8 *)(param_2 + 0xa0);
      local_210 = *(ulong *)(param_2 + 0xb0);
      local_1f8[0] = (InstructionDesc *)((ulong)local_1f8[0] & 0xffffffffffff0000);
      spvtools::DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)local_1e0,local_220,param_2 + 0xc0,local_1f8,iVar10);
      if (((ulong)local_1f8[0] & 1) != 0) {
        operator_delete(local_1e8,(ulong)local_1f8[0] & 0xfffffffffffffffe);
      }
      FUN_00cf1dd8(local_1e0,"Invalid ",8);
      pcVar14 = (char *)spvOperandTypeStr(param_3);
      sVar13 = strlen(pcVar14);
      FUN_00cf1dd8(local_1e0,pcVar14,sVar13);
      pcVar14 = " operand \'";
      uVar17 = 10;
      goto LAB_00d05460;
    }
    uVar11 = spvtools::AssemblyContext::binaryEncodeU32(param_2,local_224,param_5);
    if ((int)uVar11 != 0) goto LAB_00d05c5c;
    spvtools::AssemblyGrammar::pushOperandTypesForMask(param_1,param_3,local_224,param_6);
    break;
  case 0x2e:
    puVar18 = spvtools::kUnknownType;
    local_220 = auVar21;
LAB_00d0597c:
    uVar11 = spvtools::AssemblyContext::binaryEncodeNumericLiteral
                       (param_2,param_4,uVar9,puVar18,param_5);
    if ((int)uVar11 != 0) goto LAB_00d05c5c;
    break;
  case 0x32:
    iVar10 = spvTextEncodeOperand(param_1,param_2,0x2e,param_4,param_5,param_6);
    if ((iVar10 == 4) &&
       (iVar10 = spvTextEncodeOperand(param_1,param_2,0x30,param_4,param_5,param_6), iVar10 == 4)) {
      iVar10 = spvTextEncodeOperand(param_1,param_2,0x2a,param_4,param_5,param_6);
    }
    if (iVar10 != 0) {
      spvtools::AssemblyContext::diagnostic(local_1e0,param_2,iVar10);
      pcVar14 = "Invalid word following !<integer>: ";
      uVar17 = 0x23;
      goto LAB_00d05830;
    }
    if (*(long *)param_6 == *(long *)(param_6 + 8)) {
      local_1e0._0_4_ = 0x32;
      FUN_00cfad68(param_6,local_1e0);
    }
  }
  uVar11 = 0;
LAB_00d05c5c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}



// === spvTextToBinary @ 00d05e3c ===

void spvTextToBinary(void)

{
  spvTextToBinaryWithOptions();
  return;
}



// === spvTextToBinaryWithOptions @ 00d05e4c ===

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int spvTextToBinaryWithOptions
              (undefined4 *param_1,long param_2,undefined8 param_3,uint param_4,undefined8 *param_5,
              spv_diagnostic_t **param_6)

{
  spv_instruction_t *psVar1;
  long lVar2;
  spv_instruction_t *psVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long *plVar13;
  spv_instruction_t *psVar14;
  ulong uVar15;
  ulong uVar16;
  spv_instruction_t *psVar17;
  long lVar18;
  size_t __n;
  spv_instruction_t *psVar19;
  long lVar20;
  undefined4 local_3b4;
  long local_3b0;
  undefined8 uStack_3a8;
  ulong *local_3a0;
  ulong local_398;
  void *local_390;
  byte local_388;
  undefined1 uStack_387;
  undefined6 uStack_386;
  void *local_378;
  spv_instruction_t *local_370;
  spv_instruction_t *psStack_368;
  spv_instruction_t *local_360;
  undefined4 local_350 [4];
  long alStack_340 [4];
  long *local_320;
  ulong *local_310;
  ulong local_308;
  void *local_300;
  void *pvStack_2f8;
  long local_2f0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  spv_instruction_t *local_100;
  spv_instruction_t *psStack_f8;
  spv_instruction_t *local_f0;
  undefined1 auStack_e0 [32];
  undefined1 *local_c0;
  long *local_b0;
  undefined8 local_a8;
  ulong *local_a0;
  ulong uStack_98;
  void *local_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_350[0] = *param_1;
  plVar13 = *(long **)(param_1 + 0xc);
  if (plVar13 == (long *)0x0) {
    local_320 = (long *)0x0;
  }
  else if (plVar13 == (long *)(param_1 + 4)) {
    local_320 = alStack_340;
    (**(code **)(*plVar13 + 0x18))(plVar13,alStack_340);
  }
  else {
    local_320 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if (param_6 != (spv_diagnostic_t **)0x0) {
    *param_6 = (spv_diagnostic_t *)0x0;
    spvtools::UseDiagnosticAsMessageConsumer((spv_context_t *)local_350,param_6);
  }
  local_398 = 0;
  local_390 = (void *)0x0;
  local_3b4 = local_350[0];
  local_3b0 = param_2;
  uStack_3a8 = param_3;
  local_3a0 = &local_398;
  if ((param_4 >> 1 & 1) == 0) {
LAB_00d06198:
    psStack_f8 = (spv_instruction_t *)0x0;
    local_f0 = (spv_instruction_t *)0x0;
    local_180 = 0x3f800000;
    local_158 = 0x3f800000;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    local_130 = 0x3f800000;
    local_108 = 0x3f800000;
    local_100 = (spv_instruction_t *)0x0;
    if (local_320 == (long *)0x0) {
      local_c0 = (undefined1 *)0x0;
    }
    else if (local_320 == alStack_340) {
      local_c0 = auStack_e0;
      (**(code **)(*local_320 + 0x18))(local_320,auStack_e0);
    }
    else {
      local_c0 = (undefined1 *)(**(code **)(*local_320 + 0x10))();
    }
    local_b0 = &local_3b0;
    local_a0 = local_3a0;
    uStack_98 = local_398;
    local_a8 = 0x100000001;
    local_90 = local_390;
    if (local_390 == (void *)0x0) {
      local_a0 = &uStack_98;
      if (local_3b0 == 0) goto LAB_00d06354;
LAB_00d06258:
      if (param_5 == (undefined8 *)0x0) {
        iVar5 = -3;
      }
      else {
        local_370 = (spv_instruction_t *)0x0;
        psStack_368 = (spv_instruction_t *)0x0;
        local_360 = (spv_instruction_t *)0x0;
        spvtools::AssemblyContext::advance((AssemblyContext *)&local_1a0);
        do {
          uVar9 = spvtools::AssemblyContext::hasText((AssemblyContext *)&local_1a0);
          if ((uVar9 & 1) == 0) break;
          local_310 = (ulong *)0x0;
          local_308 = local_308 & 0xffffffff00000000;
          pvStack_2f8 = (void *)0x0;
          local_2f0 = 0;
          local_300 = (void *)0x0;
          if (psStack_368 < local_360) {
            *(undefined8 *)(psStack_368 + 0x18) = 0;
            *(undefined8 *)(psStack_368 + 0x20) = 0;
            *(undefined4 *)(psStack_368 + 8) = 0;
            *(undefined8 *)psStack_368 = 0;
            *(undefined8 *)(psStack_368 + 0x10) = 0;
            *(undefined8 *)(psStack_368 + 0x18) = 0;
            *(undefined8 *)(psStack_368 + 0x10) = 0;
            *(undefined8 *)(psStack_368 + 0x20) = 0;
            psStack_368 = psStack_368 + 0x28;
          }
          else {
            psStack_368 = std::__ndk1::
                          vector<spv_instruction_t,std::__ndk1::allocator<spv_instruction_t>>::
                          __emplace_back_slow_path<spv_instruction_t>
                                    ((vector<spv_instruction_t,std::__ndk1::allocator<spv_instruction_t>>
                                      *)&local_370,(spv_instruction_t *)&local_310);
            if (local_300 != (void *)0x0) {
              pvStack_2f8 = local_300;
              operator_delete(local_300,local_2f0 - (long)local_300);
            }
          }
          iVar5 = FUN_00d06604(&local_3b4,&local_1a0,psStack_368 + -0x28);
          psVar19 = local_370;
          if (iVar5 != 0) goto joined_r0x00d063cc;
          iVar5 = spvtools::AssemblyContext::advance((AssemblyContext *)&local_1a0);
        } while (iVar5 == 0);
        psVar3 = psStack_368;
        psVar19 = local_370;
        if (local_370 == psStack_368) {
          puVar10 = (undefined4 *)operator_new__(0x14);
          uVar9 = 5;
        }
        else {
          if (psStack_368 + (-0x28 - (long)local_370) < (spv_instruction_t *)0x28) {
            uVar9 = 5;
            psVar14 = local_370;
LAB_00d06448:
            do {
              psVar17 = psVar14 + 0x10;
              psVar1 = psVar14 + 0x18;
              psVar14 = psVar14 + 0x28;
              uVar9 = uVar9 + (*(long *)psVar1 - *(long *)psVar17 >> 2);
            } while (psVar14 != psStack_368);
          }
          else {
            uVar15 = (ulong)(psStack_368 + (-0x28 - (long)local_370)) / 0x28 + 1;
            uVar16 = uVar15 & 0xffffffffffffffe;
            psVar14 = local_370 + uVar16 * 0x28;
            psVar17 = local_370 + 0x38;
            uVar9 = uVar16;
            lVar18 = _DAT_00202a20;
            lVar20 = _UNK_00202a28;
            do {
              uVar9 = uVar9 - 2;
              lVar18 = lVar18 + (*(long *)(psVar17 + -0x20) - *(long *)(psVar17 + -0x28) >> 2);
              lVar20 = lVar20 + (*(long *)(psVar17 + 8) - *(long *)psVar17 >> 2);
              psVar17 = psVar17 + 0x50;
            } while (uVar9 != 0);
            uVar9 = lVar18 + lVar20;
            if (uVar15 != uVar16) goto LAB_00d06448;
          }
          uVar15 = uVar9 << 2;
          if (uVar9 >> 0x3e != 0) {
            uVar15 = 0xffffffffffffffff;
          }
          puVar10 = (undefined4 *)operator_new__(uVar15);
          lVar18 = 5;
          do {
            __n = *(long *)(psVar19 + 0x18) - (long)*(void **)(psVar19 + 0x10);
            memcpy(puVar10 + lVar18,*(void **)(psVar19 + 0x10),__n);
            psVar19 = psVar19 + 0x28;
            lVar18 = lVar18 + ((long)__n >> 2);
          } while (psVar19 != psVar3);
        }
        uVar8 = local_3b4;
        uVar7 = spvtools::AssemblyContext::getBound((AssemblyContext *)&local_1a0);
        *puVar10 = 0x7230203;
        uVar8 = spvVersionForTargetEnv(uVar8);
        puVar10[3] = uVar7;
        puVar10[4] = 0;
        puVar10[1] = uVar8;
        puVar10[2] = 0x70000;
        puVar11 = (undefined8 *)operator_new(0x10);
        iVar5 = 0;
        *puVar11 = puVar10;
        puVar11[1] = uVar9;
        *param_5 = puVar11;
        psVar19 = local_370;
joined_r0x00d063cc:
        local_370 = psVar19;
        psVar3 = psStack_368;
        if (psVar19 != (spv_instruction_t *)0x0) {
          for (; psVar19 != psVar3; psVar3 = psVar3 + -0x28) {
            pvVar12 = *(void **)(psVar3 + -0x18);
            if (pvVar12 != (void *)0x0) {
              *(void **)(psVar3 + -0x10) = pvVar12;
              operator_delete(pvVar12,*(long *)(psVar3 + -8) - (long)pvVar12);
            }
          }
          psStack_368 = psVar19;
          operator_delete(local_370,(long)local_360 - (long)local_370);
        }
      }
    }
    else {
      *(ulong **)(local_398 + 0x10) = &uStack_98;
      local_398 = 0;
      local_390 = (void *)0x0;
      local_3a0 = &local_398;
      if (local_3b0 != 0) goto LAB_00d06258;
LAB_00d06354:
      psStack_368 = psStack_f8;
      local_370 = local_100;
      local_360 = local_f0;
      local_388 = 0;
      uStack_387 = 0;
      spvtools::DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)&local_310,&local_370,auStack_e0,&local_388,0xfffffffb);
      if ((local_388 & 1) != 0) {
        operator_delete(local_378,
                        CONCAT62(uStack_386,CONCAT11(uStack_387,local_388)) & 0xfffffffffffffffe);
      }
      FUN_00cf1dd8(&local_310,"Missing assembly text.",0x16);
      spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)&local_310);
      iVar5 = local_1a8;
    }
    spvtools::AssemblyContext::~AssemblyContext((AssemblyContext *)&local_1a0);
  }
  else {
    local_308 = 0;
    local_300 = (void *)0x0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_160 = 0;
    local_168 = 0;
    local_180 = 0x3f800000;
    local_158 = 0x3f800000;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    local_130 = 0x3f800000;
    local_108 = 0x3f800000;
    psStack_f8 = (spv_instruction_t *)0x0;
    local_f0 = (spv_instruction_t *)0x0;
    local_100 = (spv_instruction_t *)0x0;
    local_310 = &local_308;
    if (local_320 == (long *)0x0) {
      local_c0 = (undefined1 *)0x0;
    }
    else if (local_320 == alStack_340) {
      local_c0 = auStack_e0;
      (**(code **)(*local_320 + 0x18))(local_320,auStack_e0);
    }
    else {
      local_c0 = (undefined1 *)(**(code **)(*local_320 + 0x10))();
    }
    local_b0 = &local_3b0;
    local_a0 = local_310;
    uStack_98 = local_308;
    local_a8 = 0x100000001;
    local_90 = local_300;
    if (local_300 == (void *)0x0) {
      local_a0 = &uStack_98;
      FUN_00cf7944(&local_310);
      if (local_3b0 == 0) goto LAB_00d060f4;
LAB_00d0600c:
      spvtools::AssemblyContext::advance((AssemblyContext *)&local_1a0);
      do {
        uVar9 = spvtools::AssemblyContext::hasText((AssemblyContext *)&local_1a0);
        if ((uVar9 & 1) == 0) goto LAB_00d06094;
        local_300 = (void *)0x0;
        pvStack_2f8 = (void *)0x0;
        local_2f0 = 0;
        local_310 = (ulong *)CONCAT44(local_310._4_4_,0x7fffffff);
        iVar5 = FUN_00d06604(&local_3b4,&local_1a0,&local_310);
        if (iVar5 == 0) {
          iVar6 = spvtools::AssemblyContext::advance((AssemblyContext *)&local_1a0);
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = 3;
          }
        }
        else {
          iVar5 = 1;
        }
        if (local_300 != (void *)0x0) {
          pvStack_2f8 = local_300;
          operator_delete(local_300,local_2f0 - (long)local_300);
        }
      } while (iVar5 == 0);
      if (iVar5 == 3) {
LAB_00d06094:
        spvtools::AssemblyContext::GetNumericIds();
        FUN_00cf7944(&local_3a0,local_398);
        local_390 = local_300;
        local_3a0 = local_310;
        local_398 = local_308;
        puVar4 = &local_398;
        if (local_300 != (void *)0x0) {
          local_310 = &local_308;
          *(ulong **)(local_308 + 0x10) = &local_398;
          local_308 = 0;
          local_300 = (void *)0x0;
          puVar4 = local_3a0;
        }
        local_3a0 = puVar4;
        FUN_00cf7944(&local_310,local_308);
        spvtools::AssemblyContext::~AssemblyContext((AssemblyContext *)&local_1a0);
        goto LAB_00d06198;
      }
      spvtools::AssemblyContext::~AssemblyContext((AssemblyContext *)&local_1a0);
      iVar5 = -5;
    }
    else {
      *(ulong **)(local_308 + 0x10) = &uStack_98;
      local_308 = 0;
      local_300 = (void *)0x0;
      local_310 = &local_308;
      FUN_00cf7944(&local_310,0);
      if (local_3b0 != 0) goto LAB_00d0600c;
LAB_00d060f4:
      psStack_368 = psStack_f8;
      local_370 = local_100;
      local_360 = local_f0;
      local_388 = 0;
      uStack_387 = 0;
      spvtools::DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)&local_310,&local_370,auStack_e0,&local_388,0xfffffffb);
      if ((local_388 & 1) != 0) {
        operator_delete(local_378,
                        CONCAT62(uStack_386,CONCAT11(uStack_387,local_388)) & 0xfffffffffffffffe);
      }
      FUN_00cf1dd8(&local_310,"Missing assembly text.",0x16);
      iVar5 = local_1a8;
      spvtools::DiagnosticStream::~DiagnosticStream((DiagnosticStream *)&local_310);
      spvtools::AssemblyContext::~AssemblyContext((AssemblyContext *)&local_1a0);
      if (iVar5 == 0) goto LAB_00d06198;
    }
  }
  FUN_00cf7944(&local_3a0,local_398);
  if ((param_6 != (spv_diagnostic_t **)0x0) && (*param_6 != (spv_diagnostic_t *)0x0)) {
    (*param_6)[0x20] = (spv_diagnostic_t)0x1;
  }
  if (local_320 == alStack_340) {
    lVar18 = 0x20;
  }
  else {
    if (local_320 == (long *)0x0) goto LAB_00d06590;
    lVar18 = 0x28;
  }
  (**(code **)(*local_320 + lVar18))();
LAB_00d06590:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === spvTextDestroy @ 00d065c8 ===

void spvTextDestroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete__((void *)*param_1);
    }
    operator_delete(param_1,0x10);
    return;
  }
  return;
}



// === diagnostic @ 00d07bc0 ===

/* WARNING: Removing unreachable block (ram,0x00d07c10) */
/* spvtools::AssemblyContext::diagnostic() */

void spvtools::AssemblyContext::diagnostic(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  DiagnosticStream::DiagnosticStream();
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === diagnostic @ 00d07c44 ===

/* spvtools::AssemblyContext::diagnostic(spv_result_t) */

void spvtools::AssemblyContext::diagnostic
               (DiagnosticStream *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  byte local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(param_2 + 0xa8);
  local_40 = *(undefined8 *)(param_2 + 0xa0);
  local_30 = *(undefined8 *)(param_2 + 0xb0);
  local_58 = 0;
  uStack_57 = 0;
  DiagnosticStream::DiagnosticStream(param_1,&local_40,param_2 + 0xc0,&local_58,param_3);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48,CONCAT62(uStack_56,CONCAT11(uStack_57,local_58)) & 0xfffffffffffffffe);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ParseNumber<unsigned_int> @ 00d07cc8 ===

/* bool spvtools::utils::ParseNumber<unsigned int>(char const*, unsigned int*) */

bool spvtools::utils::ParseNumber<unsigned_int>(char *param_1,uint *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t __n;
  long lVar7;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) goto LAB_00d07f1c;
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d07d5c;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d07d5c:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar7 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar7));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar7) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar7) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 7) != 2))
  {
    param_1 = (char *)0x0;
  }
  else if ((*param_1 == '-') && (*param_2 != 0)) {
    param_1 = (char *)0x0;
    *param_2 = 0;
  }
  else {
    param_1 = (char *)0x1;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d07f1c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)(char)param_1;
}



// === ~AssemblyContext @ 00d07f58 ===

/* spvtools::AssemblyContext::~AssemblyContext() */

void __thiscall spvtools::AssemblyContext::~AssemblyContext(AssemblyContext *this)

{
  undefined8 *puVar1;
  AssemblyContext *pAVar2;
  long lVar3;
  void *pvVar4;
  
  FUN_00cf7944(this + 0x100,*(undefined8 *)(this + 0x108));
  pAVar2 = *(AssemblyContext **)(this + 0xe0);
  if (pAVar2 == this + 0xc0) {
    lVar3 = 0x20;
  }
  else {
    if (pAVar2 == (AssemblyContext *)0x0) goto LAB_00d07fa4;
    lVar3 = 0x28;
  }
  (**(code **)(*(long *)pAVar2 + lVar3))();
LAB_00d07fa4:
  puVar1 = (undefined8 *)*(void **)(this + 0x88);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1,0x18);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x80) << 3);
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x60);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1,0x18);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x58) << 3);
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1,0x28);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x30) << 3);
  }
  puVar1 = (undefined8 *)*(void **)(this + 0x10);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4],puVar1[2] & 0xfffffffffffffffe);
    }
    operator_delete(puVar1,0x30);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4,*(long *)(this + 8) << 3);
  return;
}



// === __emplace_back_slow_path<spv_instruction_t> @ 00d080b0 ===

/* spv_instruction_t* std::__ndk1::vector<spv_instruction_t,
   std::__ndk1::allocator<spv_instruction_t>
   >::__emplace_back_slow_path<spv_instruction_t>(spv_instruction_t&&) */

spv_instruction_t * __thiscall
std::__ndk1::vector<spv_instruction_t,std::__ndk1::allocator<spv_instruction_t>>::
__emplace_back_slow_path<spv_instruction_t>
          (vector<spv_instruction_t,std::__ndk1::allocator<spv_instruction_t>> *this,
          spv_instruction_t *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar14 = *(long *)(this + 8) - *(long *)this;
  uVar9 = (lVar14 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar11 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar12 = lVar11 * -0x6666666666666666;
    if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
      uVar12 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    if (uVar12 < 0x666666666666667) {
      pvVar5 = operator_new(uVar12 * 0x28);
      uVar17 = *(undefined8 *)(param_1 + 0x18);
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      puVar1 = (undefined8 *)((long)pvVar5 + lVar14);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      puVar15 = *(undefined8 **)this;
      puVar3 = *(undefined8 **)(this + 8);
      uVar7 = *(undefined8 *)param_1;
      uVar4 = *(undefined4 *)(param_1 + 8);
      puVar1[4] = uVar13;
      *puVar1 = uVar7;
      *(undefined4 *)(puVar1 + 1) = uVar4;
      puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar15 - (long)puVar3));
      puVar1[3] = uVar17;
      puVar1[2] = uVar16;
      puVar8 = puVar15;
      puVar10 = puVar2;
      if ((long)puVar15 - (long)puVar3 != 0) {
        do {
          uVar7 = *puVar8;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
          *puVar10 = uVar7;
          uVar7 = puVar8[2];
          puVar10[3] = puVar8[3];
          puVar10[2] = uVar7;
          puVar10[4] = puVar8[4];
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8 = puVar8 + 5;
          puVar10 = puVar10 + 5;
        } while (puVar8 != puVar3);
        do {
          pvVar6 = (void *)puVar15[2];
          if (pvVar6 != (void *)0x0) {
            puVar15[3] = pvVar6;
            operator_delete(pvVar6,puVar15[4] - (long)pvVar6);
          }
          puVar15 = puVar15 + 5;
        } while (puVar15 != puVar3);
        puVar15 = *(undefined8 **)this;
      }
      lVar14 = *(long *)(this + 0x10);
      *(undefined8 **)this = puVar2;
      *(spv_instruction_t **)(this + 8) = (spv_instruction_t *)(puVar1 + 5);
      *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar12 * 0x28);
      if (puVar15 != (undefined8 *)0x0) {
        operator_delete(puVar15,lVar14 - (long)puVar15);
      }
      return (spv_instruction_t *)(puVar1 + 5);
    }
  }
  else {
    FUN_00d0822c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === ParseNumber<unsigned_short> @ 00d083fc ===

/* bool spvtools::utils::ParseNumber<unsigned short>(char const*, unsigned short*) */

bool spvtools::utils::ParseNumber<unsigned_short>(char *param_1,ushort *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t __n;
  long lVar7;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) goto LAB_00d08650;
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d08490;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d08490:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar7 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar7));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar7) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar7) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 7) != 2))
  {
    param_1 = (char *)0x0;
  }
  else if ((*param_1 == '-') && (*param_2 != 0)) {
    param_1 = (char *)0x0;
    *param_2 = 0;
  }
  else {
    param_1 = (char *)0x1;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d08650:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)(char)param_1;
}



// === spvNamedIdAssignOrGet @ 00d0868c ===

/* spvtools::AssemblyContext::spvNamedIdAssignOrGet(char const*) */

void __thiscall
spvtools::AssemblyContext::spvNamedIdAssignOrGet(AssemblyContext *this,char *param_1)

{
  AssemblyContext *pAVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  size_t __n;
  long lVar6;
  ulong extraout_x1;
  AssemblyContext *pAVar7;
  AssemblyContext *pAVar8;
  uint uVar9;
  AssemblyContext *pAVar11;
  void *pvVar12;
  uint local_6c;
  char *local_68;
  void *local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  AssemblyContext *pAVar10;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_68 = param_1;
  if (*(long *)(this + 0x110) == 0) {
LAB_00d08718:
    __n = strlen(param_1);
    if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94();
    }
    if (__n < 0x17) {
      pvVar12 = (void *)((ulong)&local_60 | 1);
      local_60 = (void *)CONCAT71(local_60._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00d08774;
    }
    else {
      uVar2 = 0x1a;
      if ((__n | 7) != 0x17) {
        uVar2 = (__n | 7) + 1;
      }
      pvVar12 = operator_new(uVar2);
      local_60 = (void *)(uVar2 | 1);
      local_58 = __n;
      local_50 = pvVar12;
LAB_00d08774:
      memcpy(pvVar12,param_1,__n);
    }
    *(undefined1 *)((long)pvVar12 + __n) = 0;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        *)this,(basic_string *)&local_60);
    if (((ulong)local_60 & 1) != 0) {
      operator_delete(local_50,(ulong)local_60 & 0xfffffffffffffffe);
    }
    if (lVar6 != 0) {
      local_6c = *(uint *)(lVar6 + 0x28);
      if (*(long *)(lVar4 + 0x28) == local_48) {
        return;
      }
      goto LAB_00d088e0;
    }
    local_6c = *(uint *)(this + 0xfc);
    *(uint *)(this + 0xfc) = local_6c + 1;
    if ((*(long *)(this + 0x110) != 0) &&
       (pAVar7 = *(AssemblyContext **)(this + 0x108), pAVar7 != (AssemblyContext *)0x0)) {
      pAVar8 = this + 0x108;
      pAVar10 = pAVar8;
      pAVar11 = pAVar7;
      uVar3 = local_6c + 1;
      while( true ) {
        do {
          uVar9 = uVar3;
          if (*(uint *)(pAVar11 + 0x1c) >= local_6c) {
            pAVar10 = pAVar11;
          }
          pAVar1 = pAVar11 + (ulong)(*(uint *)(pAVar11 + 0x1c) < local_6c) * 8;
          pAVar11 = *(AssemblyContext **)pAVar1;
          uVar3 = uVar9;
        } while (*(AssemblyContext **)pAVar1 != (AssemblyContext *)0x0);
        if ((pAVar10 == pAVar8) || (local_6c < *(uint *)(pAVar10 + 0x1c))) break;
        *(uint *)(this + 0xfc) = uVar9 + 1;
        pAVar10 = pAVar8;
        pAVar11 = pAVar7;
        uVar3 = uVar9 + 1;
        local_6c = uVar9;
      }
    }
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::__construct_node<char_const*&,unsigned_int&>((char **)this,(uint *)&local_68);
    FUN_00d0a94c(this,local_60);
    pvVar12 = local_60;
    if (((extraout_x1 & 1) == 0) && (local_60 = (void *)0x0, pvVar12 != (void *)0x0)) {
      if (((char)local_50 == '\x01') && ((*(byte *)((long)pvVar12 + 0x10) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar12 + 0x20),
                        *(ulong *)((long)pvVar12 + 0x10) & 0xfffffffffffffffe);
      }
      operator_delete(pvVar12,0x30);
    }
  }
  else {
    local_60 = (void *)((ulong)local_60 & 0xffffffff00000000);
    bVar5 = utils::ParseNumber<unsigned_int>(param_1,(uint *)&local_60);
    if ((!bVar5) || (pAVar7 = *(AssemblyContext **)(this + 0x108), pAVar7 == (AssemblyContext *)0x0)
       ) goto LAB_00d08718;
    pAVar8 = this + 0x108;
    do {
      if (*(uint *)(pAVar7 + 0x1c) >= (uint)local_60) {
        pAVar8 = pAVar7;
      }
      pAVar7 = *(AssemblyContext **)
                (pAVar7 + (ulong)(*(uint *)(pAVar7 + 0x1c) < (uint)local_60) * 8);
    } while (pAVar7 != (AssemblyContext *)0x0);
    if ((pAVar8 == this + 0x108) ||
       (local_6c = (uint)local_60, (uint)local_60 < *(uint *)(pAVar8 + 0x1c))) goto LAB_00d08718;
  }
  uVar3 = *(uint *)(this + 0xf8);
  if (uVar3 <= local_6c + 1) {
    uVar3 = local_6c + 1;
  }
  *(uint *)(this + 0xf8) = uVar3;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_00d088e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_6c);
}



// === getBound @ 00d088f0 ===

/* spvtools::AssemblyContext::getBound() const */

undefined4 __thiscall spvtools::AssemblyContext::getBound(AssemblyContext *this)

{
  return *(undefined4 *)(this + 0xf8);
}



// === advance @ 00d088f8 ===

/* spvtools::AssemblyContext::advance() */

undefined8 __thiscall spvtools::AssemblyContext::advance(AssemblyContext *this)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(ulong *)(this + 0xb0);
  uVar3 = (*(long **)(this + 0xf0))[1];
  if (uVar4 < uVar3) {
    lVar6 = *(long *)(this + 0xa0);
    lVar7 = *(long *)(this + 0xa8);
    lVar5 = **(long **)(this + 0xf0);
    do {
      while (bVar1 = *(byte *)(lVar5 + uVar4), bVar1 < 0xd) {
        if (bVar1 == 9) goto LAB_00d08918;
        if (bVar1 != 10) {
          if (bVar1 != 0) {
            return 0;
          }
          return 2;
        }
LAB_00d0898c:
        lVar7 = 0;
        lVar6 = lVar6 + 1;
        *(long *)(this + 0xa0) = lVar6;
        *(undefined8 *)(this + 0xa8) = 0;
        uVar4 = uVar4 + 1;
        *(ulong *)(this + 0xb0) = uVar4;
        if (uVar3 <= uVar4) {
          return 2;
        }
      }
      if ((bVar1 != 0xd) && (bVar1 != 0x20)) {
        if (bVar1 != 0x3b) {
          return 0;
        }
        while( true ) {
          lVar7 = lVar7 + 1;
          cVar2 = *(char *)(lVar5 + uVar4);
          if (cVar2 == '\0') {
            return 2;
          }
          if (cVar2 == '\n') break;
          uVar4 = uVar4 + 1;
          *(long *)(this + 0xa8) = lVar7;
          *(ulong *)(this + 0xb0) = uVar4;
          if (uVar3 == uVar4) {
            return 2;
          }
        }
        goto LAB_00d0898c;
      }
LAB_00d08918:
      lVar7 = lVar7 + 1;
      uVar4 = uVar4 + 1;
      *(long *)(this + 0xa8) = lVar7;
      *(ulong *)(this + 0xb0) = uVar4;
    } while (uVar4 < uVar3);
  }
  return 2;
}



// === getWord @ 00d08a88 ===

/* spvtools::AssemblyContext::getWord(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, spv_position_t*) */

void __thiscall
spvtools::AssemblyContext::getWord
          (AssemblyContext *this,basic_string *param_1,spv_position_t *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0xa8);
  uVar1 = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)param_2 = uVar1;
  FUN_00d08aac(*(undefined8 *)(this + 0xf0),param_2,param_1);
  return;
}



// === startsWithOp @ 00d08edc ===

/* spvtools::AssemblyContext::startsWithOp() */

bool __thiscall spvtools::AssemblyContext::startsWithOp(AssemblyContext *this)

{
  char *pcVar1;
  bool bVar2;
  
  if ((ulong)(*(long **)(this + 0xf0))[1] < *(long *)(this + 0xb0) + 3U) {
    return false;
  }
  bVar2 = false;
  pcVar1 = (char *)(**(long **)(this + 0xf0) + *(long *)(this + 0xb0));
  if ((*pcVar1 == 'O') && (pcVar1[1] == 'p')) {
    bVar2 = (byte)pcVar1[2] - 0x41 < 0x1a;
  }
  return bVar2;
}



// === isStartOfNewInst @ 00d08f34 ===

/* spvtools::AssemblyContext::isStartOfNewInst() */

void __thiscall spvtools::AssemblyContext::isStartOfNewInst(AssemblyContext *this)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  long local_50;
  long lStack_48;
  ulong local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lStack_48 = *(long *)(this + 0xa8);
  lVar12 = *(long *)(this + 0xa0);
  uVar8 = *(ulong *)(this + 0xb0);
  plVar7 = *(long **)(this + 0xf0);
  uVar10 = plVar7[1];
  local_50 = lVar12;
  local_40 = uVar8;
  if (uVar8 < uVar10) {
    lVar9 = *plVar7;
    do {
      while (bVar2 = *(byte *)(lVar9 + uVar8), 0xc < bVar2) {
        if ((bVar2 == 0xd) || (bVar2 == 0x20)) goto LAB_00d08f84;
        if (bVar2 != 0x3b) goto LAB_00d09040;
        while( true ) {
          lVar11 = lStack_48 + 1;
          if (*(char *)(lVar9 + uVar8) == '\0') goto LAB_00d09018;
          if (*(char *)(lVar9 + uVar8) == '\n') break;
          uVar8 = uVar8 + 1;
          lStack_48 = lVar11;
          local_40 = uVar8;
          if (uVar10 == uVar8) goto LAB_00d09018;
        }
LAB_00d08ff8:
        lVar12 = lVar12 + 1;
        lStack_48 = 0;
        uVar8 = uVar8 + 1;
        local_50 = lVar12;
        if (uVar10 <= uVar8) goto LAB_00d09018;
      }
      if (bVar2 != 9) {
        if (bVar2 == 10) goto LAB_00d08ff8;
        if (bVar2 != 0) {
LAB_00d09040:
          if ((((uVar8 + 3 <= uVar10) && (bVar2 == 0x4f)) && (*(char *)(lVar9 + uVar8 + 1) == 'p'))
             && (*(byte *)(lVar9 + uVar8 + 2) - 0x41 < 0x1a)) {
            bVar5 = true;
            goto LAB_00d0901c;
          }
          lStack_48 = *(long *)(this + 0xa8);
          local_50 = *(long *)(this + 0xa0);
          local_40 = *(ulong *)(this + 0xb0);
          local_68 = 0;
          uStack_60 = 0;
          local_58 = (char *)0x0;
          iVar6 = FUN_00d08aac(plVar7,&local_50,&local_68);
          if (iVar6 != 0) goto LAB_00d091d4;
          pcVar1 = local_58;
          if ((local_68 & 1) == 0) {
            pcVar1 = (char *)((long)&local_68 + 1);
          }
          if (*pcVar1 != '%') goto LAB_00d091d4;
          plVar7 = *(long **)(this + 0xf0);
          uVar8 = plVar7[1];
          if (uVar8 <= local_40) goto LAB_00d091d4;
          lVar12 = local_50;
          goto LAB_00d09100;
        }
        break;
      }
LAB_00d08f84:
      lStack_48 = lStack_48 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
  }
LAB_00d09018:
  bVar5 = false;
  goto LAB_00d0901c;
LAB_00d09100:
  do {
    bVar2 = *(byte *)(*plVar7 + local_40);
    if (bVar2 < 0xd) {
      if (bVar2 != 9) {
        if (bVar2 == 10) goto LAB_00d09160;
        if (bVar2 == 0) goto LAB_00d091d4;
LAB_00d09188:
        iVar6 = FUN_00d08aac(plVar7,&local_50,&local_68);
        if ((iVar6 != 0) || (uVar8 = FUN_00d08240(&DAT_001c05dc,&local_68), (uVar8 & 1) != 0))
        goto LAB_00d091d4;
        plVar7 = *(long **)(this + 0xf0);
        iVar6 = FUN_00d089c4(plVar7,&local_50);
        if ((iVar6 == 0) && (local_40 + 3 <= (ulong)plVar7[1])) {
          pcVar1 = (char *)(*plVar7 + local_40);
          bVar5 = false;
          if ((*pcVar1 == 'O') && (bVar5 = false, pcVar1[1] == 'p')) {
            bVar5 = (byte)pcVar1[2] - 0x41 < 0x1a;
          }
        }
        else {
LAB_00d091d4:
          bVar5 = false;
        }
        break;
      }
LAB_00d090e8:
      lStack_48 = lStack_48 + 1;
      local_40 = local_40 + 1;
      bVar5 = false;
      if (uVar8 <= local_40) break;
      goto LAB_00d09100;
    }
    if ((bVar2 == 0xd) || (bVar2 == 0x20)) goto LAB_00d090e8;
    if (bVar2 != 0x3b) goto LAB_00d09188;
    while( true ) {
      lVar9 = lStack_48 + 1;
      cVar3 = *(char *)(*plVar7 + local_40);
      if (cVar3 == '\0') goto LAB_00d091d4;
      if (cVar3 == '\n') break;
      local_40 = local_40 + 1;
      lStack_48 = lVar9;
      if (uVar8 == local_40) goto LAB_00d091d4;
    }
LAB_00d09160:
    lVar12 = lVar12 + 1;
    lStack_48 = 0;
    local_40 = local_40 + 1;
    bVar5 = false;
    local_50 = lVar12;
  } while (local_40 < uVar8);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58,local_68 & 0xfffffffffffffffe);
  }
LAB_00d0901c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}



// === peek @ 00d09234 ===

/* spvtools::AssemblyContext::peek() const */

undefined1 __thiscall spvtools::AssemblyContext::peek(AssemblyContext *this)

{
  return *(undefined1 *)(**(long **)(this + 0xf0) + *(long *)(this + 0xb0));
}



// === hasText @ 00d09248 ===

/* spvtools::AssemblyContext::hasText() const */

bool __thiscall spvtools::AssemblyContext::hasText(AssemblyContext *this)

{
  return *(ulong *)(this + 0xb0) < *(ulong *)(*(long *)(this + 0xf0) + 8);
}



// === seekForward @ 00d09260 ===

/* spvtools::AssemblyContext::seekForward(unsigned int) */

void __thiscall spvtools::AssemblyContext::seekForward(AssemblyContext *this,uint param_1)

{
  *(ulong *)(this + 0xb0) = *(long *)(this + 0xb0) + (ulong)param_1;
  *(ulong *)(this + 0xa8) = *(long *)(this + 0xa8) + (ulong)param_1;
  return;
}



// === binaryEncodeU32 @ 00d09278 ===

/* spvtools::AssemblyContext::binaryEncodeU32(unsigned int, spv_instruction_t*) */

undefined8 __thiscall
spvtools::AssemblyContext::binaryEncodeU32
          (AssemblyContext *this,uint param_1,spv_instruction_t *param_2)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
  FUN_00d0a444(param_2 + 0x10,*(undefined8 *)(param_2 + 0x18),&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === binaryEncodeNumericLiteral @ 00d092d4 ===

/* spvtools::AssemblyContext::binaryEncodeNumericLiteral(char const*, spv_result_t, spvtools::IdType
   const&, spv_instruction_t*) */

int __thiscall
spvtools::AssemblyContext::binaryEncodeNumericLiteral
          (AssemblyContext *this,char *param_1,undefined4 param_3,undefined4 *param_4,
          undefined8 param_5)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_260;
  ulong local_258;
  char *local_250;
  undefined8 local_248;
  undefined4 local_240;
  byte local_238;
  undefined1 uStack_237;
  undefined6 uStack_236;
  void *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined **local_200;
  AssemblyContext *pAStack_1f8;
  undefined8 local_1f0;
  undefined ***local_1e0;
  DiagnosticStream aDStack_1d0 [360];
  int local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = param_4[2];
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      pcVar3 = strchr(param_1,0x2e);
      if (pcVar3 == (char *)0x0) {
        local_248 = DAT_00202858;
        if (((*(byte *)(param_4 + 1) & 1) == 0) && (*param_1 != '-')) {
          local_248 = DAT_00202540;
        }
        local_240 = param_4[3];
      }
      else {
        local_240 = param_4[3];
        local_248 = DAT_00202648;
      }
    }
    else if (iVar2 == 1) {
      local_240 = param_4[3];
      if (*(char *)(param_4 + 1) == '\x01') {
        local_248 = CONCAT44(2,*param_4);
      }
      else {
        local_248 = CONCAT44(1,*param_4);
      }
    }
  }
  else if (iVar2 == 2) {
    local_240 = param_4[3];
    local_248 = CONCAT44(3,*param_4);
  }
  else if (iVar2 == 3) {
    uStack_218 = *(undefined8 *)(this + 0xa8);
    local_220 = *(undefined8 *)(this + 0xa0);
    local_210 = *(undefined8 *)(this + 0xb0);
    local_238 = 0;
    uStack_237 = 0;
    DiagnosticStream::DiagnosticStream(aDStack_1d0,&local_220,this + 0xc0,&local_238,0xffffffff);
    if ((local_238 & 1) != 0) {
      operator_delete(local_228,
                      CONCAT62(uStack_236,CONCAT11(uStack_237,local_238)) & 0xfffffffffffffffe);
    }
    FUN_00cf1dd8(aDStack_1d0,"Unexpected numeric literal type",0x1f);
    DiagnosticStream::~DiagnosticStream(aDStack_1d0);
    goto LAB_00d095ec;
  }
  local_260 = 0;
  local_258 = 0;
  local_250 = (char *)0x0;
  local_200 = &PTR_FUN_00d6c0a0;
  pAStack_1f8 = this;
  local_1f0 = param_5;
  local_1e0 = &local_200;
  iVar2 = utils::ParseAndEncodeNumber(param_1,&local_248,&local_200,&local_260);
  if (local_1e0 == &local_200) {
    lVar5 = 0x20;
LAB_00d0949c:
    (**(code **)((long)*local_1e0 + lVar5))(local_1e0);
  }
  else if (local_1e0 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_00d0949c;
  }
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        uStack_218 = *(undefined8 *)(this + 0xa8);
        local_220 = *(undefined8 *)(this + 0xa0);
        local_210 = *(undefined8 *)(this + 0xb0);
        local_238 = 0;
        uStack_237 = 0;
        DiagnosticStream::DiagnosticStream(aDStack_1d0,&local_220,this + 0xc0,&local_238,0xffffffff)
        ;
        goto joined_r0x00d09568;
      }
LAB_00d09570:
      uStack_218 = *(undefined8 *)(this + 0xa8);
      local_220 = *(undefined8 *)(this + 0xa0);
      local_210 = *(undefined8 *)(this + 0xb0);
      local_238 = 0;
      uStack_237 = 0;
      DiagnosticStream::DiagnosticStream(aDStack_1d0,&local_220,this + 0xc0,&local_238,0xffffffff);
      if ((local_238 & 1) != 0) {
        operator_delete(local_228,
                        CONCAT62(uStack_236,CONCAT11(uStack_237,local_238)) & 0xfffffffffffffffe);
      }
      pcVar3 = "Unexpected result code from ParseAndEncodeNumber()";
      uVar4 = 0x32;
      goto LAB_00d095c4;
    }
  }
  else {
    if (iVar2 == 2) {
      uStack_218 = *(undefined8 *)(this + 0xa8);
      local_220 = *(undefined8 *)(this + 0xa0);
      local_210 = *(undefined8 *)(this + 0xb0);
      local_238 = 0;
      uStack_237 = 0;
      DiagnosticStream::DiagnosticStream(aDStack_1d0,&local_220,this + 0xc0,&local_238,0xfffffffb);
    }
    else {
      if (iVar2 != 3) goto LAB_00d09570;
      uStack_218 = *(undefined8 *)(this + 0xa8);
      local_220 = *(undefined8 *)(this + 0xa0);
      local_210 = *(undefined8 *)(this + 0xb0);
      local_238 = 0;
      uStack_237 = 0;
      DiagnosticStream::DiagnosticStream(aDStack_1d0,&local_220,this + 0xc0,&local_238,param_3);
    }
joined_r0x00d09568:
    if ((local_238 & 1) != 0) {
      operator_delete(local_228,
                      CONCAT62(uStack_236,CONCAT11(uStack_237,local_238)) & 0xfffffffffffffffe);
    }
    pcVar3 = local_250;
    uVar4 = local_258;
    if ((local_260 & 1) == 0) {
      pcVar3 = (char *)((long)&local_260 + 1);
      uVar4 = local_260 >> 1 & 0x7f;
    }
LAB_00d095c4:
    FUN_00cf1dd8(aDStack_1d0,pcVar3,uVar4);
    DiagnosticStream::~DiagnosticStream(aDStack_1d0);
    iVar2 = local_68;
  }
  local_68 = iVar2;
  if ((local_260 & 1) != 0) {
    operator_delete(local_250,local_260 & 0xfffffffffffffffe);
  }
LAB_00d095ec:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_68;
}



// === binaryEncodeString @ 00d09658 ===

/* spvtools::AssemblyContext::binaryEncodeString(char const*, spv_instruction_t*) */

undefined4 __thiscall
spvtools::AssemblyContext::binaryEncodeString
          (AssemblyContext *this,char *param_1,spv_instruction_t *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  spv_instruction_t *psVar9;
  void *pvVar10;
  ulong uVar11;
  size_t __n;
  void *__dest;
  byte local_218;
  undefined1 uStack_217;
  undefined6 uStack_216;
  void *local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  ulong local_1d8;
  void *pvStack_1d0;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  sVar4 = strlen(param_1);
  psVar9 = param_2 + 0x10;
  pvVar10 = *(void **)psVar9;
  __n = *(long *)(param_2 + 0x18) - (long)pvVar10;
  uVar11 = ((long)__n >> 2) + (sVar4 >> 2) + 1;
  if (0xffff < uVar11) {
    uStack_1f8 = *(undefined8 *)(this + 0xa8);
    local_200 = *(ulong *)(this + 0xa0);
    local_1f0 = *(undefined8 *)(this + 0xb0);
    local_218 = 0;
    uStack_217 = 0;
    DiagnosticStream::DiagnosticStream
              ((DiagnosticStream *)&local_1e0,&local_200,this + 0xc0,&local_218,0xfffffffb);
    if ((local_218 & 1) != 0) {
      operator_delete(local_208,
                      CONCAT62(uStack_216,CONCAT11(uStack_217,local_218)) & 0xfffffffffffffffe);
    }
    FUN_00cf1dd8(&local_1e0,"Instruction too long: more than ",0x20);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1e0,0xffff);
    FUN_00cf1dd8(&local_1e0," words.",7);
    DiagnosticStream::~DiagnosticStream((DiagnosticStream *)&local_1e0);
    goto LAB_00d098ac;
  }
  lVar8 = *(long *)(param_2 + 0x20);
  if ((ulong)(lVar8 - (long)pvVar10 >> 2) < uVar11) {
    pvVar5 = operator_new(uVar11 * 4);
    __dest = (void *)((long)pvVar5 + __n + ((long)__n >> 2) * -4);
    memcpy(__dest,pvVar10,__n);
    *(void **)(param_2 + 0x10) = __dest;
    *(size_t *)(param_2 + 0x18) = (long)pvVar5 + __n;
    *(void **)(param_2 + 0x20) = (void *)((long)pvVar5 + uVar11 * 4);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10,lVar8 - (long)pvVar10);
    }
  }
  sVar4 = strlen(param_1);
  if (0xfffffffffffffff7 < sVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (sVar4 < 0x17) {
    pvVar10 = (void *)((ulong)&local_1e0 | 1);
    local_1e0 = CONCAT71(local_1e0._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00d097ec;
  }
  else {
    uVar11 = 0x1a;
    if ((sVar4 | 7) != 0x17) {
      uVar11 = (sVar4 | 7) + 1;
    }
    pvVar10 = operator_new(uVar11);
    local_1e0 = uVar11 | 1;
    local_1d8 = sVar4;
    pvStack_1d0 = pvVar10;
LAB_00d097ec:
    memcpy(pvVar10,param_1,sVar4);
  }
  pvVar5 = pvStack_1d0;
  uVar3 = local_1e0;
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
  uVar6 = 0;
  uVar11 = 0;
  pvVar10 = pvStack_1d0;
  uVar1 = local_1d8;
  if ((local_1e0 & 1) == 0) {
    pvVar10 = (void *)((long)&local_1e0 + 1);
    uVar1 = local_1e0 >> 1 & 0x7f;
  }
  do {
    if (uVar11 < uVar1) {
      uVar7 = (uint)*(byte *)((long)pvVar10 + uVar11);
    }
    else {
      uVar7 = 0;
    }
    uVar6 = uVar7 << (ulong)(uint)((int)(uVar11 & 3) << 3) | uVar6;
    local_200 = CONCAT44(local_200._4_4_,uVar6);
    if ((uVar11 & 3) == 3) {
      FUN_00cfaac8(psVar9,&local_200);
      uVar6 = 0;
      local_200 = local_200 & 0xffffffff00000000;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 <= uVar1);
  if ((~(uint)uVar1 & 3) != 0) {
    FUN_00cfaac8(psVar9,&local_200);
  }
  if ((uVar3 & 1) != 0) {
    operator_delete(pvVar5,local_1e0 & 0xfffffffffffffffe);
  }
  local_78 = 0;
LAB_00d098ac:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === recordTypeDefinition @ 00d098e8 ===

/* spvtools::AssemblyContext::recordTypeDefinition(spv_instruction_t const*) */

undefined4 __thiscall
spvtools::AssemblyContext::recordTypeDefinition(AssemblyContext *this,spv_instruction_t *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  undefined4 *local_208;
  uint local_1fc;
  byte local_1f8;
  undefined1 uStack_1f7;
  undefined6 uStack_1f6;
  void *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  uint *local_1c0 [45];
  undefined4 local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar13 = *(ulong *)(this + 0x30);
  uVar1 = *(uint *)(lVar9 + 4);
  uVar16 = (ulong)uVar1;
  local_1fc = uVar1;
  if (uVar13 != 0) {
    uVar18 = NEON_cnt(uVar13,1);
    uVar17 = NEON_addv(uVar18,1);
    uVar15 = CONCAT71((int7)((ulong)uVar18 >> 8),uVar17);
    uVar12 = (uint)uVar13;
    if (uVar15 < 2) {
      uVar10 = (ulong)(uVar12 - 1 & uVar1);
    }
    else {
      uVar10 = uVar16;
      if (uVar13 <= uVar16) {
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = uVar1 / uVar12;
        }
        uVar10 = (ulong)(uVar1 - uVar3 * uVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(this + 0x28) + uVar10 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar14[1] == uVar16) {
            if (*(uint *)(plVar14 + 2) == uVar1) goto LAB_00d09bf4;
          }
          else if ((plVar14[1] & uVar13 - 1) != uVar10) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar16) {
            if (*(uint *)(plVar14 + 2) == uVar1) goto LAB_00d09bf4;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar4 * uVar13;
            }
            if (uVar15 != uVar10) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  if (*(int *)param_1 != 0x16) {
    if (*(int *)param_1 == 0x15) {
      if (*(long *)(param_1 + 0x18) - lVar9 != 0x10) {
        local_1d0 = *(undefined8 *)(this + 0xb0);
        uStack_1d8 = *(undefined8 *)(this + 0xa8);
        local_1e0 = *(undefined8 *)(this + 0xa0);
        local_1f8 = 0;
        uStack_1f7 = 0;
        DiagnosticStream::DiagnosticStream
                  ((DiagnosticStream *)local_1c0,&local_1e0,this + 0xc0,&local_1f8,0xfffffffb);
        if ((local_1f8 & 1) != 0) {
          operator_delete(local_1e8,
                          CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)) & 0xfffffffffffffffe);
        }
        pcVar8 = "Invalid OpTypeInt instruction";
        uVar18 = 0x1d;
        goto LAB_00d09c6c;
      }
      uVar7 = *(undefined4 *)(lVar9 + 8);
      iVar6 = *(int *)(lVar9 + 0xc);
      local_1c0[0] = &local_1fc;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
              ::
              __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                        ((uint *)(this + 0x28),(piecewise_construct_t *)&local_1fc,
                         (tuple *)PTR_DAT_00d6c6c0,(tuple *)local_1c0);
      *(undefined4 *)(lVar9 + 0x14) = uVar7;
      uVar18 = DAT_00202330;
      *(bool *)(lVar9 + 0x18) = iVar6 != 0;
    }
    else {
      local_1c0[0] = &local_1fc;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
              ::
              __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                        ((uint *)(this + 0x28),(piecewise_construct_t *)&local_1fc,
                         (tuple *)PTR_DAT_00d6c6c0,(tuple *)local_1c0);
      *(undefined4 *)(lVar9 + 0x14) = 0;
      uVar18 = DAT_00202698;
      *(undefined1 *)(lVar9 + 0x18) = 0;
    }
    *(undefined8 *)(lVar9 + 0x1c) = uVar18;
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return 0;
    }
    goto LAB_00d09d0c;
  }
  lVar11 = *(long *)(param_1 + 0x18) - lVar9 >> 2;
  if (lVar11 == 3) {
    uVar7 = 0;
LAB_00d09cc0:
    uVar2 = *(undefined4 *)(lVar9 + 8);
    local_1c0[0] = &local_1fc;
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
            ::
            __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                      ((uint *)(this + 0x28),(piecewise_construct_t *)&local_1fc,
                       (tuple *)PTR_DAT_00d6c6c0,(tuple *)local_1c0);
    *(undefined4 *)(lVar9 + 0x14) = uVar2;
    *(undefined1 *)(lVar9 + 0x18) = 0;
    *(undefined4 *)(lVar9 + 0x1c) = 2;
    *(undefined4 *)(lVar9 + 0x20) = uVar7;
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return 0;
    }
  }
  else {
    if (lVar11 == 4) {
      local_208 = (undefined4 *)0x0;
      iVar6 = LookupOperand(0x22,*(undefined4 *)(lVar9 + 0xc),&local_208);
      if (iVar6 == 0) {
        uVar7 = spvFPEncodingFromOperandFPEncoding(*local_208);
        lVar9 = *(long *)(param_1 + 0x10);
        goto LAB_00d09cc0;
      }
      uStack_1d8 = *(undefined8 *)(this + 0xa8);
      local_1e0 = *(undefined8 *)(this + 0xa0);
      local_1d0 = *(undefined8 *)(this + 0xb0);
      local_1f8 = 0;
      uStack_1f7 = 0;
      DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)local_1c0,&local_1e0,this + 0xc0,&local_1f8,0xfffffffb);
      if ((local_1f8 & 1) != 0) {
        operator_delete(local_1e8,
                        CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)) & 0xfffffffffffffffe);
      }
      pcVar8 = "Invalid OpTypeFloat encoding";
      uVar18 = 0x1c;
    }
    else {
      local_1d0 = *(undefined8 *)(this + 0xb0);
      uStack_1d8 = *(undefined8 *)(this + 0xa8);
      local_1e0 = *(undefined8 *)(this + 0xa0);
      local_1f8 = 0;
      uStack_1f7 = 0;
      DiagnosticStream::DiagnosticStream
                ((DiagnosticStream *)local_1c0,&local_1e0,this + 0xc0,&local_1f8,0xfffffffb);
      if ((local_1f8 & 1) != 0) {
        operator_delete(local_1e8,
                        CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)) & 0xfffffffffffffffe);
      }
      pcVar8 = "Invalid OpTypeFloat instruction";
      uVar18 = 0x1f;
    }
LAB_00d09c6c:
    FUN_00cf1dd8(local_1c0,pcVar8,uVar18);
    DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1c0);
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return local_58;
    }
  }
LAB_00d09d0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d09bf4:
  local_1d0 = *(undefined8 *)(this + 0xb0);
  uStack_1d8 = *(undefined8 *)(this + 0xa8);
  local_1e0 = *(undefined8 *)(this + 0xa0);
  local_1f8 = 0;
  uStack_1f7 = 0;
  DiagnosticStream::DiagnosticStream
            ((DiagnosticStream *)local_1c0,&local_1e0,this + 0xc0,&local_1f8,0xfffffffb);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8,
                    CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)) & 0xfffffffffffffffe);
  }
  FUN_00cf1dd8(local_1c0,"Value ",6);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_1c0,uVar1);
  pcVar8 = " has already been used to generate a type";
  uVar18 = 0x29;
  goto LAB_00d09c6c;
}



// === getTypeOfTypeGeneratingValue @ 00d09d10 ===

/* spvtools::AssemblyContext::getTypeOfTypeGeneratingValue(unsigned int) const */

undefined1  [16] __thiscall
spvtools::AssemblyContext::getTypeOfTypeGeneratingValue(AssemblyContext *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(ulong *)(this + 0x30);
  if (uVar5 != 0) {
    uVar3 = (ulong)param_1;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_addv(uVar10,1);
    uVar8 = CONCAT71((int7)((ulong)uVar10 >> 8),uVar9);
    uVar4 = (uint)uVar5;
    if (uVar8 < 2) {
      uVar6 = (ulong)(uVar4 - 1 & param_1);
    }
    else {
      uVar6 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_1 / uVar4;
        }
        uVar6 = (ulong)(param_1 - uVar1 * uVar4);
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x28) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(uint *)(plVar7 + 2) == param_1) {
LAB_00d09dec:
              return *(undefined1 (*) [16])((long)plVar7 + 0x14);
            }
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar3) {
            if (*(uint *)(plVar7 + 2) == param_1) goto LAB_00d09dec;
          }
          else {
            if (uVar5 <= uVar8) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar2 * uVar5;
            }
            if (uVar8 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return ZEXT816(0);
}



// === getTypeOfValueInstruction @ 00d09df8 ===

/* spvtools::AssemblyContext::getTypeOfValueInstruction(unsigned int) const */

undefined1  [16] __thiscall
spvtools::AssemblyContext::getTypeOfValueInstruction(AssemblyContext *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(ulong *)(this + 0x58);
  if (uVar5 != 0) {
    uVar3 = (ulong)param_1;
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_addv(uVar11,1);
    uVar9 = CONCAT71((int7)((ulong)uVar11 >> 8),uVar10);
    uVar4 = (uint)uVar5;
    if (uVar9 < 2) {
      uVar6 = (ulong)(uVar4 - 1 & param_1);
    }
    else {
      uVar6 = uVar3;
      if (uVar5 <= uVar3) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = param_1 / uVar4;
        }
        uVar6 = (ulong)(param_1 - uVar7 * uVar4);
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x50) + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_00d09ecc;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar3) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_00d09ecc;
          }
          else {
            if (uVar5 <= uVar9) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar2 * uVar5;
            }
            if (uVar9 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_00d09fb4;
LAB_00d09ecc:
  uVar5 = *(ulong *)(this + 0x30);
  if (uVar5 != 0) {
    uVar4 = *(uint *)((long)plVar8 + 0x14);
    uVar3 = (ulong)uVar4;
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_addv(uVar11,1);
    uVar9 = CONCAT71((int7)((ulong)uVar11 >> 8),uVar10);
    uVar7 = (uint)uVar5;
    if (uVar9 < 2) {
      uVar6 = (ulong)(uVar7 - 1 & uVar4);
    }
    else {
      uVar6 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar4 / uVar7;
        }
        uVar6 = (ulong)(uVar4 - uVar1 * uVar7);
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x28) + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (*(uint *)(plVar8 + 2) == uVar4) {
LAB_00d09fb8:
              return *(undefined1 (*) [16])((long)plVar8 + 0x14);
            }
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar6) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar3) {
            if (*(uint *)(plVar8 + 2) == uVar4) goto LAB_00d09fb8;
          }
          else {
            if (uVar5 <= uVar9) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar2 * uVar5;
            }
            if (uVar9 != uVar6) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_00d09fb4:
  return ZEXT816(0);
}



// === recordTypeIdForValue @ 00d09fc4 ===

/* spvtools::AssemblyContext::recordTypeIdForValue(unsigned int, unsigned int) */

undefined4 __thiscall
spvtools::AssemblyContext::recordTypeIdForValue(AssemblyContext *this,uint param_1,uint param_2)

{
  long lVar1;
  ulong extraout_x1;
  byte local_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0 [45];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_1b0[0] = CONCAT44(param_2,param_1);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
  ::__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,unsigned_int>>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
              *)(this + 0x50),(uint *)local_1b0,(pair *)local_1b0);
  if ((extraout_x1 & 1) == 0) {
    uStack_1c8 = *(undefined8 *)(this + 0xa8);
    local_1d0 = *(undefined8 *)(this + 0xa0);
    local_1c0 = *(undefined8 *)(this + 0xb0);
    local_1e8 = 0;
    uStack_1e7 = 0;
    DiagnosticStream::DiagnosticStream
              ((DiagnosticStream *)local_1b0,&local_1d0,this + 0xc0,&local_1e8,0xfffffffb);
    if ((local_1e8 & 1) != 0) {
      operator_delete(local_1d8,
                      CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8)) & 0xfffffffffffffffe);
    }
    FUN_00cf1dd8(local_1b0,"Value is being defined a second time",0x24);
    DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1b0);
  }
  else {
    local_48 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === recordIdAsExtInstImport @ 00d0a0a0 ===

/* spvtools::AssemblyContext::recordIdAsExtInstImport(unsigned int, spv_ext_inst_type_t) */

undefined4 __thiscall
spvtools::AssemblyContext::recordIdAsExtInstImport(AssemblyContext *this,ulong param_2,long param_3)

{
  long lVar1;
  ulong extraout_x1;
  byte local_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  void *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulong local_1b0 [45];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_1b0[0] = param_2 & 0xffffffff | param_3 << 0x20;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
  ::__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,spv_ext_inst_type_t>>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
              *)(this + 0x78),(uint *)local_1b0,(pair *)local_1b0);
  if ((extraout_x1 & 1) == 0) {
    uStack_1c8 = *(undefined8 *)(this + 0xa8);
    local_1d0 = *(undefined8 *)(this + 0xa0);
    local_1c0 = *(undefined8 *)(this + 0xb0);
    local_1e8 = 0;
    uStack_1e7 = 0;
    DiagnosticStream::DiagnosticStream
              ((DiagnosticStream *)local_1b0,&local_1d0,this + 0xc0,&local_1e8,0xfffffffb);
    if ((local_1e8 & 1) != 0) {
      operator_delete(local_1d8,
                      CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8)) & 0xfffffffffffffffe);
    }
    FUN_00cf1dd8(local_1b0,"Import Id is being defined a second time",0x28);
    DiagnosticStream::~DiagnosticStream((DiagnosticStream *)local_1b0);
  }
  else {
    local_48 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === getExtInstTypeForId @ 00d0a17c ===

/* spvtools::AssemblyContext::getExtInstTypeForId(unsigned int) const */

undefined4 __thiscall
spvtools::AssemblyContext::getExtInstTypeForId(AssemblyContext *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(ulong *)(this + 0x80);
  if (uVar5 != 0) {
    uVar3 = (ulong)param_1;
    uVar10 = NEON_cnt(uVar5,1);
    uVar9 = NEON_addv(uVar10,1);
    uVar8 = CONCAT71((int7)((ulong)uVar10 >> 8),uVar9);
    uVar4 = (uint)uVar5;
    if (uVar8 < 2) {
      uVar6 = (ulong)(uVar4 - 1 & param_1);
    }
    else {
      uVar6 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_1 / uVar4;
        }
        uVar6 = (ulong)(param_1 - uVar1 * uVar4);
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0x78) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(uint *)(plVar7 + 2) == param_1) {
LAB_00d0a254:
              return *(undefined4 *)((long)plVar7 + 0x14);
            }
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar3) {
            if (*(uint *)(plVar7 + 2) == param_1) goto LAB_00d0a254;
          }
          else {
            if (uVar5 <= uVar8) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar2 * uVar5;
            }
            if (uVar8 != uVar6) {
              return 0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return 0;
}



// === GetNumericIds @ 00d0a25c ===

/* spvtools::AssemblyContext::GetNumericIds() const */

void spvtools::AssemblyContext::GetNumericIds(void)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  long in_x0;
  undefined8 *puVar5;
  long *in_x8;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(in_x0 + 0x10);
  plVar8 = in_x8 + 1;
  *plVar8 = 0;
  in_x8[2] = 0;
  *in_x8 = (long)plVar8;
  do {
    if (plVar9 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pcVar1 = (char *)((long)plVar9 + 0x11);
    if ((*(byte *)(plVar9 + 2) & 1) != 0) {
      pcVar1 = (char *)plVar9[4];
    }
    bVar4 = utils::ParseNumber<unsigned_int>(pcVar1,&local_5c);
    uVar3 = local_5c;
    if (bVar4) {
      plVar6 = (long *)*plVar8;
      plVar10 = plVar8;
      while (plVar11 = plVar10, plVar6 != (long *)0x0) {
        while (plVar10 = plVar6, *(uint *)((long)plVar10 + 0x1c) <= local_5c) {
          if (local_5c <= *(uint *)((long)plVar10 + 0x1c)) goto LAB_00d0a2e0;
          plVar6 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) {
            plVar11 = plVar10 + 1;
            goto LAB_00d0a350;
          }
        }
        plVar6 = (long *)*plVar10;
      }
LAB_00d0a350:
      puVar5 = (undefined8 *)operator_new(0x20);
      plVar6 = (long *)*in_x8;
      *puVar5 = 0;
      puVar5[1] = 0;
      *plVar11 = (long)puVar5;
      lVar7 = *plVar6;
      *(uint *)((long)puVar5 + 0x1c) = uVar3;
      puVar5[2] = plVar10;
      if (lVar7 != 0) {
        *in_x8 = lVar7;
      }
      FUN_00cf7758(in_x8[1],puVar5);
      in_x8[2] = in_x8[2] + 1;
    }
LAB_00d0a2e0:
    plVar9 = (long *)*plVar9;
  } while( true );
}



// === find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> @ 00d0a640 ===

/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
::find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
           *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  void *pvVar2;
  basic_string *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_1 + 8);
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar8 = (ulong)((byte)*param_1 >> 1);
  }
  uVar8 = FUN_00cfe460(&uStack_59,pbVar3,uVar8);
  uVar12 = *(ulong *)(this + 8);
  if (uVar12 != 0) {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_addv(uVar14,1);
    uVar9 = CONCAT71((int7)((ulong)uVar14 >> 8),uVar13);
    if (uVar9 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar10 = *(long **)(*(long *)this + uVar11 * 8);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        __n = (ulong)((byte)*param_1 >> 1);
        pbVar3 = param_1 + 1;
        if (((byte)*param_1 & 1) != 0) {
          __n = *(size_t *)(param_1 + 8);
          pbVar3 = *(basic_string **)(param_1 + 0x10);
        }
        if (uVar9 < 2) {
          do {
            if (plVar10[1] == uVar8) {
              bVar4 = *(byte *)(plVar10 + 2);
              sVar1 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                sVar1 = plVar10[3];
              }
              if (sVar1 == __n) {
                pvVar2 = (void *)((long)plVar10 + 0x11);
                if ((bVar4 & 1) != 0) {
                  pvVar2 = (void *)plVar10[4];
                }
                iVar7 = memcmp(pvVar2,pbVar3,__n);
                if (iVar7 == 0) break;
              }
            }
            else if ((plVar10[1] & uVar12 - 1) != uVar11) goto LAB_00d0a7e4;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar10[1];
            if (uVar9 == uVar8) {
              bVar4 = *(byte *)(plVar10 + 2);
              sVar1 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                sVar1 = plVar10[3];
              }
              if (sVar1 == __n) {
                pvVar2 = (void *)((long)plVar10 + 0x11);
                if ((bVar4 & 1) != 0) {
                  pvVar2 = (void *)plVar10[4];
                }
                iVar7 = memcmp(pvVar2,pbVar3,__n);
                if (iVar7 == 0) break;
              }
            }
            else {
              if (uVar12 <= uVar9) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar9 / uVar12;
                }
                uVar9 = uVar9 - uVar5 * uVar12;
              }
              if (uVar9 != uVar11) goto LAB_00d0a7e4;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      goto LAB_00d0a7e8;
    }
  }
LAB_00d0a7e4:
  plVar10 = (long *)0x0;
LAB_00d0a7e8:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === __construct_node<char_const*&,unsigned_int&> @ 00d0a81c ===

/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::__construct_node<char const*&, unsigned int&>(char const*&, unsigned int&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
     ::__construct_node<char_const*&,unsigned_int&>(char **param_1,uint *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  void *__dest;
  undefined8 uVar6;
  undefined4 *in_x2;
  long *in_x8;
  long lVar7;
  char *__s;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined8 *)operator_new(0x30);
  *in_x8 = (long)puVar5;
  in_x8[1] = (long)(param_1 + 2);
  __s = *(char **)param_2;
  *puVar5 = 0;
  puVar5[1] = 0;
  in_x8[2] = 0;
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)puVar5 + 0x11);
    *(char *)(puVar5 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00d0a8d8;
  }
  else {
    uVar1 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar1 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar1);
    puVar5[3] = __n;
    puVar5[4] = __dest;
    puVar5[2] = uVar1 | 1;
  }
  memmove(__dest,__s,__n);
LAB_00d0a8d8:
  *(undefined1 *)((long)__dest + __n) = 0;
  uVar2 = *in_x2;
  lVar7 = *in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined4 *)(puVar5 + 5) = uVar2;
  uVar1 = (ulong)(*(byte *)(lVar7 + 0x10) >> 1);
  lVar4 = lVar7 + 0x11;
  if ((*(byte *)(lVar7 + 0x10) & 1) != 0) {
    uVar1 = *(ulong *)(lVar7 + 0x18);
    lVar4 = *(long *)(lVar7 + 0x20);
  }
  uVar6 = FUN_00cfe460(&uStack_59,lVar4,uVar1);
  *(undefined8 *)(lVar7 + 8) = uVar6;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === __do_rehash<true> @ 00d0ad44 ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int> >
   >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>> @ 00d0aef0 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, spvtools::IdType>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, spvtools::IdType>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spvtools::IdType>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spvtools::IdType>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, spvtools::IdType> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int const&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int const&>&&,
   std::__ndk1::tuple<>&&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
     ::
     __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
               (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined1 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar13 = *(ulong *)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  uVar14 = (ulong)uVar1;
  if (uVar13 != 0) {
    uVar16 = NEON_cnt(uVar13,1);
    uVar15 = NEON_addv(uVar16,1);
    uVar8 = CONCAT71((int7)((ulong)uVar16 >> 8),uVar15);
    uVar12 = (uint)uVar13;
    if (uVar8 < 2) {
      unaff_x23 = (ulong)(uVar12 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar13 <= uVar14) {
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = uVar1 / uVar12;
        }
        unaff_x23 = (ulong)(uVar1 - uVar3 * uVar12);
      }
    }
    plVar5 = *(long **)(*(long *)param_1 + unaff_x23 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar5[1] == uVar14) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar5[1] & uVar13 - 1) != unaff_x23) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar5[1];
          if (uVar8 == uVar14) {
            if (*(uint *)(plVar5 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar13 <= uVar8) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar8 / uVar13;
              }
              uVar8 = uVar8 - uVar10 * uVar13;
            }
            if (uVar8 != unaff_x23) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  plVar5 = (long *)operator_new(0x28);
  lVar6 = *(long *)(param_1 + 6);
  puVar4 = *(undefined4 **)param_4;
  fVar17 = (float)param_1[8];
  *plVar5 = 0;
  plVar5[1] = uVar14;
  uVar2 = *puVar4;
  *(undefined8 *)((long)plVar5 + 0x14) = 0;
  *(undefined8 *)((long)plVar5 + 0x1c) = 0;
  *(undefined4 *)(plVar5 + 2) = uVar2;
  if ((uVar13 != 0) && ((float)(lVar6 + 1) <= fVar17 * (float)uVar13)) {
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
    goto joined_r0x00d0b1fc;
  }
  if (uVar13 < 3) {
    uVar8 = 1;
  }
  else {
    uVar8 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar8 = uVar8 | uVar13 << 1;
  uVar10 = (ulong)((float)(lVar6 + 1) / fVar17);
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    uVar8 = std::__ndk1::__next_prime(uVar8);
    uVar13 = *(ulong *)(param_1 + 2);
  }
  if (uVar13 < uVar8) {
LAB_00d0b0e8:
    __do_rehash<true>((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
                       *)param_1,uVar8);
  }
  else if (uVar8 < uVar13) {
    uVar10 = (ulong)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if (uVar13 < 3) {
LAB_00d0b164:
      uVar10 = std::__ndk1::__next_prime(uVar10);
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
    }
    else {
      uVar16 = NEON_cnt(uVar13,1);
      uVar15 = NEON_addv(uVar16,1);
      if (1 < CONCAT71((int7)((ulong)uVar16 >> 8),uVar15)) goto LAB_00d0b164;
      if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
    }
    if (uVar8 < uVar13) goto LAB_00d0b0e8;
  }
  uVar13 = *(ulong *)(param_1 + 2);
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar13 - 1U & uVar1);
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
  }
  else if (uVar14 < uVar13) {
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + uVar14 * 8);
    unaff_x23 = uVar14;
  }
  else {
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = uVar14 / uVar13;
    }
    unaff_x23 = uVar14 - uVar8 * uVar13;
    lVar6 = *(long *)param_1;
    plVar7 = *(long **)(lVar6 + unaff_x23 * 8);
  }
joined_r0x00d0b1fc:
  if (plVar7 == (long *)0x0) {
    puVar9 = param_1 + 4;
    lVar11 = *(long *)puVar9;
    *(long **)puVar9 = plVar5;
    *plVar5 = lVar11;
    *(uint **)(lVar6 + unaff_x23 * 8) = puVar9;
    if (*plVar5 != 0) {
      uVar14 = *(ulong *)(*plVar5 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        *(long **)(lVar6 + (uVar14 & uVar13 - 1) * 8) = plVar5;
      }
      else {
        if (uVar13 <= uVar14) {
          uVar8 = 0;
          if (uVar13 != 0) {
            uVar8 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar8 * uVar13;
        }
        *(long **)(lVar6 + uVar14 * 8) = plVar5;
      }
    }
  }
  else {
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
  }
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return;
}



// === __do_rehash<true> @ 00d0b234 ===

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, spvtools::IdType>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spvtools::IdType>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spvtools::IdType>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, spvtools::IdType> >
   >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
                    *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
  *p_Var8;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,*(long *)(this + 8) << 3);
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  if (param_1 >> 0x3d == 0) {
    pvVar1 = operator_new(param_1 << 3);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)(this + 8) << 3);
      pvVar1 = *(void **)this;
    }
    *(ulong *)(this + 8) = param_1;
    memset(pvVar1,0,param_1 << 3);
    p_Var8 = this + 0x10;
    plVar3 = *(long **)p_Var8;
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1 - 1;
      uVar4 = plVar3[1];
      if ((param_1 & uVar5) == 0) {
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
          **)((long)pvVar1 + (uVar4 & uVar5) * 8) = p_Var8;
        uVar4 = uVar4 & uVar5;
        while (plVar6 = plVar3, plVar3 = (long *)*plVar6, plVar3 != (long *)0x0) {
          uVar7 = plVar3[1] & uVar5;
          if (uVar7 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar7 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar7 * 8) = plVar6;
              uVar4 = uVar7;
            }
            else {
              *plVar6 = *plVar3;
              *plVar3 = **(long **)((long)pvVar1 + uVar7 * 8);
              **(undefined8 **)((long)pvVar1 + uVar7 * 8) = plVar3;
              plVar3 = plVar6;
            }
          }
        }
      }
      else {
        if (param_1 <= uVar4) {
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = uVar4 / param_1;
          }
          uVar4 = uVar4 - uVar5 * param_1;
        }
        *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spvtools::IdType>>>
          **)((long)pvVar1 + uVar4 * 8) = p_Var8;
        for (plVar6 = (long *)*plVar3; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          uVar5 = plVar6[1];
          if (param_1 <= uVar5) {
            uVar7 = 0;
            if (param_1 != 0) {
              uVar7 = uVar5 / param_1;
            }
            uVar5 = uVar5 - uVar7 * param_1;
          }
          if (uVar5 != uVar4) {
            if (*(long *)((long)pvVar1 + uVar5 * 8) == 0) {
              *(long **)((long)pvVar1 + uVar5 * 8) = plVar3;
              uVar4 = uVar5;
            }
            else {
              *plVar3 = *plVar6;
              *plVar6 = **(undefined8 **)((long)pvVar1 + uVar5 * 8);
              **(long **)((long)pvVar1 + uVar5 * 8) = (long)plVar6;
              plVar6 = plVar3;
            }
          }
          plVar3 = plVar6;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cf7234();
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,unsigned_int>> @ 00d0b3dc ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, unsigned int>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, unsigned int> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::pair<unsigned int, unsigned int>
   >(unsigned int const&, std::__ndk1::pair<unsigned int, unsigned int>&&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
::__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,unsigned_int>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
           *this,uint *param_1,pair *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
  *p_Var7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 uVar12;
  undefined8 uVar13;
  float fVar14;
  long lVar15;
  
  uVar10 = *(ulong *)(this + 8);
  uVar1 = *param_1;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar13 = NEON_cnt(uVar10,1);
    uVar12 = NEON_addv(uVar13,1);
    uVar6 = CONCAT71((int7)((ulong)uVar13 >> 8),uVar12);
    uVar9 = (uint)uVar10;
    if (uVar6 < 2) {
      unaff_x23 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar4 = *(long **)(*(long *)this + unaff_x23 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar4[1] == uVar11) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar4[1] & uVar10 - 1) != unaff_x23) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar4[1];
          if (uVar6 == uVar11) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar6) {
              uVar8 = 0;
              if (uVar10 != 0) {
                uVar8 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar8 * uVar10;
            }
            if (uVar6 != unaff_x23) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)operator_new(0x18);
  lVar3 = *(long *)(this + 0x18);
  lVar15 = *(long *)param_2;
  fVar14 = *(float *)(this + 0x20);
  *plVar4 = 0;
  plVar4[1] = uVar11;
  plVar4[2] = lVar15;
  if ((uVar10 != 0) && ((float)(lVar3 + 1) <= fVar14 * (float)uVar10)) {
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
    goto joined_r0x00d0b6dc;
  }
  if (uVar10 < 3) {
    uVar6 = 1;
  }
  else {
    uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar6 = uVar6 | uVar10 << 1;
  uVar8 = (ulong)((float)(lVar3 + 1) / fVar14);
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    uVar6 = std::__ndk1::__next_prime(uVar6);
    uVar10 = *(ulong *)(this + 8);
  }
  if (uVar10 < uVar6) {
LAB_00d0b5c8:
    __do_rehash<true>(this,uVar6);
  }
  else if (uVar6 < uVar10) {
    uVar8 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar10 < 3) {
LAB_00d0b644:
      uVar8 = std::__ndk1::__next_prime(uVar8);
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    else {
      uVar13 = NEON_cnt(uVar10,1);
      uVar12 = NEON_addv(uVar13,1);
      if (1 < CONCAT71((int7)((ulong)uVar13 >> 8),uVar12)) goto LAB_00d0b644;
      if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    if (uVar6 < uVar10) goto LAB_00d0b5c8;
  }
  uVar10 = *(ulong *)(this + 8);
  if ((uVar10 & uVar10 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar10 - 1U & uVar1);
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
  }
  else if (uVar11 < uVar10) {
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + uVar11 * 8);
    unaff_x23 = uVar11;
  }
  else {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar11 / uVar10;
    }
    unaff_x23 = uVar11 - uVar6 * uVar10;
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
  }
joined_r0x00d0b6dc:
  if (plVar5 == (long *)0x0) {
    p_Var7 = this + 0x10;
    lVar15 = *(long *)p_Var7;
    *(long **)p_Var7 = plVar4;
    *plVar4 = lVar15;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
      **)(lVar3 + unaff_x23 * 8) = p_Var7;
    if (*plVar4 != 0) {
      uVar11 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar3 + (uVar11 & uVar10 - 1) * 8) = plVar4;
      }
      else {
        if (uVar10 <= uVar11) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar6 * uVar10;
        }
        *(long **)(lVar3 + uVar11 * 8) = plVar4;
      }
    }
  }
  else {
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}



// === __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,spv_ext_inst_type_t>> @ 00d0b714 ===

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, spv_ext_inst_type_t>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   spv_ext_inst_type_t>, std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   true>, std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned
   int, spv_ext_inst_type_t>, std::__ndk1::equal_to<unsigned int>, std::__ndk1::hash<unsigned int>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, spv_ext_inst_type_t> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::pair<unsigned int, spv_ext_inst_type_t>
   >(unsigned int const&, std::__ndk1::pair<unsigned int, spv_ext_inst_type_t>&&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
::__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,spv_ext_inst_type_t>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
           *this,uint *param_1,pair *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
  *p_Var7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 uVar12;
  undefined8 uVar13;
  float fVar14;
  long lVar15;
  
  uVar10 = *(ulong *)(this + 8);
  uVar1 = *param_1;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar13 = NEON_cnt(uVar10,1);
    uVar12 = NEON_addv(uVar13,1);
    uVar6 = CONCAT71((int7)((ulong)uVar13 >> 8),uVar12);
    uVar9 = (uint)uVar10;
    if (uVar6 < 2) {
      unaff_x23 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar4 = *(long **)(*(long *)this + unaff_x23 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar4[1] == uVar11) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else if ((plVar4[1] & uVar10 - 1) != unaff_x23) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar4[1];
          if (uVar6 == uVar11) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar6) {
              uVar8 = 0;
              if (uVar10 != 0) {
                uVar8 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar8 * uVar10;
            }
            if (uVar6 != unaff_x23) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  plVar4 = (long *)operator_new(0x18);
  lVar3 = *(long *)(this + 0x18);
  lVar15 = *(long *)param_2;
  fVar14 = *(float *)(this + 0x20);
  *plVar4 = 0;
  plVar4[1] = uVar11;
  plVar4[2] = lVar15;
  if ((uVar10 != 0) && ((float)(lVar3 + 1) <= fVar14 * (float)uVar10)) {
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
    goto joined_r0x00d0ba14;
  }
  if (uVar10 < 3) {
    uVar6 = 1;
  }
  else {
    uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
  }
  uVar6 = uVar6 | uVar10 << 1;
  uVar8 = (ulong)((float)(lVar3 + 1) / fVar14);
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    uVar6 = std::__ndk1::__next_prime(uVar6);
    uVar10 = *(ulong *)(this + 8);
  }
  if (uVar10 < uVar6) {
LAB_00d0b900:
    __do_rehash<true>(this,uVar6);
  }
  else if (uVar6 < uVar10) {
    uVar8 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar10 < 3) {
LAB_00d0b97c:
      uVar8 = std::__ndk1::__next_prime(uVar8);
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    else {
      uVar13 = NEON_cnt(uVar10,1);
      uVar12 = NEON_addv(uVar13,1);
      if (1 < CONCAT71((int7)((ulong)uVar13 >> 8),uVar12)) goto LAB_00d0b97c;
      if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    if (uVar6 < uVar10) goto LAB_00d0b900;
  }
  uVar10 = *(ulong *)(this + 8);
  if ((uVar10 & uVar10 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar10 - 1U & uVar1);
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
  }
  else if (uVar11 < uVar10) {
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + uVar11 * 8);
    unaff_x23 = uVar11;
  }
  else {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar11 / uVar10;
    }
    unaff_x23 = uVar11 - uVar6 * uVar10;
    lVar3 = *(long *)this;
    plVar5 = *(long **)(lVar3 + unaff_x23 * 8);
  }
joined_r0x00d0ba14:
  if (plVar5 == (long *)0x0) {
    p_Var7 = this + 0x10;
    lVar15 = *(long *)p_Var7;
    *(long **)p_Var7 = plVar4;
    *plVar4 = lVar15;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,spv_ext_inst_type_t>>>
      **)(lVar3 + unaff_x23 * 8) = p_Var7;
    if (*plVar4 != 0) {
      uVar11 = *(ulong *)(*plVar4 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar3 + (uVar11 & uVar10 - 1) * 8) = plVar4;
      }
      else {
        if (uVar10 <= uVar11) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar6 * uVar10;
        }
        *(long **)(lVar3 + uVar11 * 8) = plVar4;
      }
    }
  }
  else {
    *plVar4 = *plVar5;
    *plVar5 = (long)plVar4;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}



// === ParseAndEncodeIntegerNumber @ 00d0ba4c ===

/* spvtools::utils::ParseAndEncodeIntegerNumber(char const*, spvtools::utils::NumberType const&,
   std::__ndk1::function<void (unsigned int)>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

void spvtools::utils::ParseAndEncodeIntegerNumber
               (char *param_1,NumberType *param_2,long param_3,ulong *param_4)

{
  undefined *puVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar2;
  void *pvVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  char cVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  undefined8 uVar18;
  long *plVar19;
  size_t sVar20;
  long lVar21;
  long lVar22;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar13 = tpidr_el0;
  local_58 = *(long *)(lVar13 + 0x28);
  if (param_1 == (char *)0x0) {
    if (param_4 != (ulong *)0x0) {
      plVar19 = (long *)operator_new(0x108);
      puVar1 = PTR_VTT_00d6c7e0;
      puVar14 = PTR_vtable_00d6c7d8;
      plVar19[0x14] = 0;
      lVar21 = *(long *)(puVar1 + 8);
      uVar18 = *(undefined8 *)(puVar1 + 0x10);
      puVar1 = puVar14 + 0x40;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = lVar21;
      *(undefined8 *)((long)plVar19 + *(long *)(lVar21 + -0x18)) = uVar18;
      pvVar3 = (void *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
      std::__ndk1::ios_base::init(pvVar3);
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      puVar15 = PTR_vtable_00d6cdf8;
      *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = (long)(puVar14 + 0x18);
      plVar19[1] = (long)(puVar15 + 0x10);
      std::__ndk1::locale::locale((locale *)(plVar19 + 2));
      plVar19[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
      plVar19[8] = 0;
      plVar19[7] = 0;
      plVar19[6] = 0;
      plVar19[5] = 0;
      plVar19[4] = 0;
      plVar19[3] = 0;
      plVar19[10] = 0;
      plVar19[9] = 0;
      plVar19[0xc] = 0;
      plVar19[0xb] = 0;
      *(undefined4 *)(plVar19 + 0xd) = 0x10;
      FUN_00cf1ccc(plVar19 + 1);
      FUN_00cf1dd8(plVar19,"The given text is a nullptr",0x1b);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      bVar11 = (byte)*param_4;
joined_r0x00d0bcbc:
      if ((bVar11 & 1) != 0) {
        operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
      }
      lVar21 = *plVar19;
      param_4[1] = uStack_68;
      *param_4 = CONCAT44(uStack_6c,local_70);
      param_4[2] = local_60;
      (**(code **)(lVar21 + 8))(plVar19);
    }
  }
  else {
    if (1 < *(uint *)(param_2 + 4) - 1) {
      if (param_4 == (ulong *)0x0) {
LAB_00d0bf28:
        uVar18 = 2;
        if (*(long *)(lVar13 + 0x28) == local_58) {
          return;
        }
        goto LAB_00d0c260;
      }
      plVar19 = (long *)operator_new(0x108);
      puVar1 = PTR_VTT_00d6c7e0;
      puVar14 = PTR_vtable_00d6c7d8;
      plVar19[0x14] = 0;
      lVar21 = *(long *)(puVar1 + 8);
      uVar18 = *(undefined8 *)(puVar1 + 0x10);
      puVar1 = puVar14 + 0x40;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = lVar21;
      *(undefined8 *)((long)plVar19 + *(long *)(lVar21 + -0x18)) = uVar18;
      pvVar3 = (void *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
      std::__ndk1::ios_base::init(pvVar3);
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      puVar15 = PTR_vtable_00d6cdf8;
      *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = (long)(puVar14 + 0x18);
      plVar19[1] = (long)(puVar15 + 0x10);
      std::__ndk1::locale::locale((locale *)(plVar19 + 2));
      plVar19[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
      plVar19[8] = 0;
      plVar19[7] = 0;
      plVar19[6] = 0;
      plVar19[5] = 0;
      plVar19[4] = 0;
      plVar19[3] = 0;
      plVar19[10] = 0;
      plVar19[9] = 0;
      plVar19[0xc] = 0;
      plVar19[0xb] = 0;
      *(undefined4 *)(plVar19 + 0xd) = 0x10;
      FUN_00cf1ccc(plVar19 + 1);
      FUN_00cf1dd8(plVar19,"The expected type is not a integer type",0x27);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      bVar11 = (byte)*param_4;
joined_r0x00d0bde4:
      if ((bVar11 & 1) != 0) {
        operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
      }
      lVar21 = *plVar19;
      param_4[1] = uStack_68;
      *param_4 = CONCAT44(uStack_6c,local_70);
      param_4[2] = local_60;
      (**(code **)(lVar21 + 8))(plVar19);
      uVar18 = 2;
      if (*(long *)(lVar13 + 0x28) == local_58) {
        return;
      }
      goto LAB_00d0c260;
    }
    uVar10 = *(uint *)param_2;
    if (0x40 < uVar10) {
      if (param_4 == (ulong *)0x0) {
        uVar18 = 1;
        if (*(long *)(lVar13 + 0x28) == local_58) {
          return;
        }
      }
      else {
        this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)operator_new(0x108);
        puVar1 = PTR_VTT_00d6c7e0;
        puVar14 = PTR_vtable_00d6c7d8;
        *(undefined8 *)(this + 0xa0) = 0;
        lVar21 = *(long *)(puVar1 + 8);
        uVar18 = *(undefined8 *)(puVar1 + 0x10);
        puVar1 = puVar14 + 0x40;
        *(undefined **)(this + 0x70) = puVar1;
        *(long *)this = lVar21;
        *(undefined8 *)(this + *(long *)(lVar21 + -0x18)) = uVar18;
        pbVar2 = this + *(long *)(*(long *)this + -0x18);
        std::__ndk1::ios_base::init(pbVar2);
        *(undefined8 *)(pbVar2 + 0x88) = 0;
        puVar15 = PTR_vtable_00d6cdf8;
        *(undefined4 *)(pbVar2 + 0x90) = 0xffffffff;
        *(undefined **)(this + 0x70) = puVar1;
        *(undefined **)this = puVar14 + 0x18;
        *(undefined **)(this + 8) = puVar15 + 0x10;
        std::__ndk1::locale::locale((locale *)(this + 0x10));
        *(undefined **)(this + 8) = PTR_vtable_00d6c7f0 + 0x10;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        *(undefined4 *)(this + 0x68) = 0x10;
        FUN_00cf1ccc(this + 8);
        FUN_00cf1dd8(this,"Unsupported ",0xc);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(this,uVar10);
        FUN_00cf1dd8(this,"-bit integer literals",0x15);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        if ((*param_4 & 1) != 0) {
          operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
        }
        lVar21 = *(long *)this;
        param_4[1] = uStack_68;
        *param_4 = CONCAT44(uStack_6c,local_70);
        param_4[2] = local_60;
        (**(code **)(lVar21 + 8))(this);
        uVar18 = 1;
        if (*(long *)(lVar13 + 0x28) == local_58) {
          return;
        }
      }
      goto LAB_00d0c260;
    }
    cVar12 = *param_1;
    if ((*(uint *)(param_2 + 4) < 2) && (cVar12 == '-')) {
      if (param_4 == (ulong *)0x0) goto LAB_00d0bf28;
      plVar19 = (long *)operator_new(0x108);
      puVar1 = PTR_VTT_00d6c7e0;
      puVar14 = PTR_vtable_00d6c7d8;
      plVar19[0x14] = 0;
      lVar21 = *(long *)(puVar1 + 8);
      uVar18 = *(undefined8 *)(puVar1 + 0x10);
      puVar1 = puVar14 + 0x40;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = lVar21;
      *(undefined8 *)((long)plVar19 + *(long *)(lVar21 + -0x18)) = uVar18;
      pvVar3 = (void *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
      std::__ndk1::ios_base::init(pvVar3);
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      puVar15 = PTR_vtable_00d6cdf8;
      *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
      plVar19[0xe] = (long)puVar1;
      *plVar19 = (long)(puVar14 + 0x18);
      plVar19[1] = (long)(puVar15 + 0x10);
      std::__ndk1::locale::locale((locale *)(plVar19 + 2));
      plVar19[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
      plVar19[8] = 0;
      plVar19[7] = 0;
      plVar19[6] = 0;
      plVar19[5] = 0;
      plVar19[4] = 0;
      plVar19[3] = 0;
      plVar19[10] = 0;
      plVar19[9] = 0;
      plVar19[0xc] = 0;
      plVar19[0xb] = 0;
      *(undefined4 *)(plVar19 + 0xd) = 0x10;
      FUN_00cf1ccc(plVar19 + 1);
      FUN_00cf1dd8(plVar19,"Cannot put a negative number in an unsigned literal",0x33);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      bVar11 = (byte)*param_4;
      goto joined_r0x00d0bde4;
    }
    if (cVar12 == '0') {
      bVar16 = (param_1[1] & 0xdfU) == 0x58;
      bVar17 = ParseNumber<unsigned_long>(param_1,&local_78);
joined_r0x00d0c074:
      if (!bVar17) {
        if (param_4 != (ulong *)0x0) {
          plVar19 = (long *)operator_new(0x108);
          puVar1 = PTR_VTT_00d6c7e0;
          puVar14 = PTR_vtable_00d6c7d8;
          plVar19[0x14] = 0;
          lVar21 = *(long *)(puVar1 + 8);
          uVar18 = *(undefined8 *)(puVar1 + 0x10);
          puVar1 = puVar14 + 0x40;
          plVar19[0xe] = (long)puVar1;
          *plVar19 = lVar21;
          *(undefined8 *)((long)plVar19 + *(long *)(lVar21 + -0x18)) = uVar18;
          pvVar3 = (void *)((long)plVar19 + *(long *)(*plVar19 + -0x18));
          std::__ndk1::ios_base::init(pvVar3);
          *(undefined8 *)((long)pvVar3 + 0x88) = 0;
          puVar15 = PTR_vtable_00d6cdf8;
          *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
          plVar19[0xe] = (long)puVar1;
          *plVar19 = (long)(puVar14 + 0x18);
          plVar19[1] = (long)(puVar15 + 0x10);
          std::__ndk1::locale::locale((locale *)(plVar19 + 2));
          plVar19[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
          plVar19[8] = 0;
          plVar19[7] = 0;
          plVar19[6] = 0;
          plVar19[5] = 0;
          plVar19[4] = 0;
          plVar19[3] = 0;
          plVar19[10] = 0;
          plVar19[9] = 0;
          plVar19[0xc] = 0;
          plVar19[0xb] = 0;
          *(undefined4 *)(plVar19 + 0xd) = 0x10;
          FUN_00cf1ccc(plVar19 + 1);
          FUN_00cf1dd8(plVar19,"Invalid unsigned integer literal: ",0x22);
          sVar20 = strlen(param_1);
          FUN_00cf1dd8(plVar19,param_1,sVar20);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          bVar11 = (byte)*param_4;
          goto joined_r0x00d0bcbc;
        }
        goto LAB_00d0bcf0;
      }
      uVar9 = *(uint *)param_2;
      if (2 < *(uint *)(param_2 + 4) - 1) {
        uVar9 = 0;
      }
      uVar8 = 0xffffffffffffffff;
      if (uVar9 != 0x40) {
        uVar8 = ~(-1L << ((ulong)uVar9 & 0x3f));
      }
      uVar9 = *(uint *)(param_2 + 4) & 0xfffffffe;
      uVar7 = uVar8 >> 1;
      if (uVar9 != 2) {
        uVar7 = uVar8;
      }
      uVar4 = uVar8;
      if (!bVar16) {
        uVar4 = uVar7;
      }
      if (local_78 <= uVar4) {
        uVar7 = 0;
        if (uVar9 == 2) {
          uVar7 = (uVar8 >> 1) + 1;
        }
        bVar17 = false;
        if ((uVar7 & local_78) != 0) {
          bVar17 = bVar16;
        }
        uVar7 = local_78;
        if (bVar17) {
          uVar7 = local_78 | ~uVar8;
        }
LAB_00d0c1cc:
        local_78 = uVar7;
        uVar7 = local_78;
        local_70 = (undefined4)local_78;
        if (uVar10 < 0x21) {
          plVar19 = *(long **)(param_3 + 0x20);
        }
        else {
          plVar19 = *(long **)(param_3 + 0x20);
          if (plVar19 == (long *)0x0) goto LAB_00d0c204;
          (**(code **)(*plVar19 + 0x30))(plVar19,&local_70);
          plVar19 = *(long **)(param_3 + 0x20);
          local_70 = (undefined4)(uVar7 >> 0x20);
        }
        if (plVar19 == (long *)0x0) {
LAB_00d0c204:
                    /* WARNING: Subroutine does not return */
          FUN_00cf20c8();
        }
        (**(code **)(*plVar19 + 0x30))(plVar19,&local_70);
        uVar18 = 0;
        if (*(long *)(lVar13 + 0x28) == local_58) {
          return;
        }
        goto LAB_00d0c260;
      }
      FUN_00d0c358(&local_70,param_4);
      FUN_00d0c468(&local_70,"Integer ");
      plVar19 = (long *)CONCAT44(uStack_6c,local_70);
      if (plVar19 != (long *)0x0) {
        pcVar5 = FUN_00d0d6bc;
        if (!bVar16) {
          pcVar5 = FUN_00d0d6d4;
        }
        (*pcVar5)((long)plVar19 + *(long *)(*plVar19 + -0x18));
        pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)CONCAT44(uStack_6c,local_70);
        if (pbVar2 != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
          *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
               *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) | 0x200;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar2,local_78);
        }
      }
LAB_00d0c2c4:
      FUN_00d0c468(&local_70," does not fit in a ");
      pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)CONCAT44(uStack_6c,local_70);
      if (pbVar2 != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
        *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) =
             *(uint *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 8) & 0xffffffb5 | 2;
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar2,uVar10);
      }
      FUN_00d0c468(&local_70,"-bit ");
      pcVar6 = "signed";
      if ((*(uint *)(param_2 + 4) & 0xfffffffe) != 2) {
        pcVar6 = "unsigned";
      }
      FUN_00d0c468(&local_70,pcVar6);
      param_1 = " integer";
    }
    else {
      if (cVar12 != '-') {
        bVar16 = false;
        bVar17 = ParseNumber<unsigned_long>(param_1,&local_78);
        goto joined_r0x00d0c074;
      }
      local_80 = 0;
      bVar16 = ParseNumber<long>(param_1,(long *)&local_80);
      if (bVar16) {
        bVar16 = CheckRangeAndIfHexThenSignExtend<long>(local_80,param_2,false,(long *)&local_80);
        uVar7 = local_80;
        if (bVar16) goto LAB_00d0c1cc;
        FUN_00d0c358(&local_70,param_4);
        FUN_00d0c468(&local_70,"Integer ");
        pbVar2 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)CONCAT44(uStack_6c,local_70);
        if (pbVar2 != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
          lVar21 = *(long *)pbVar2;
          lVar22 = *(long *)(lVar21 + -0x18);
          *(uint *)(pbVar2 + lVar22 + 8) = *(uint *)(pbVar2 + lVar22 + 8) & 0xffffffb5 | 2;
          lVar21 = *(long *)(lVar21 + -0x18);
          *(uint *)(pbVar2 + lVar21 + 8) = *(uint *)(pbVar2 + lVar21 + 8) | 0x200;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (pbVar2,local_80);
        }
        goto LAB_00d0c2c4;
      }
      FUN_00d0c358(&local_70,param_4);
      FUN_00d0c468(&local_70,"Invalid signed integer literal: ");
    }
    FUN_00d0c468(&local_70,param_1);
    FUN_00d0c4b4(&local_70);
  }
LAB_00d0bcf0:
  uVar18 = 3;
  if (*(long *)(lVar13 + 0x28) == local_58) {
    return;
  }
LAB_00d0c260:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar18);
}



// === DeduceEncoding @ 00d0c560 ===

/* spvtools::utils::DeduceEncoding(spvtools::utils::NumberType const&) */

int spvtools::utils::DeduceEncoding(NumberType *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)param_1;
  if (iVar1 == 0x10) {
    return 1;
  }
  if (iVar1 == 0x40) {
    return 3;
  }
  if (iVar1 == 0x20) {
    return 2;
  }
  return 0;
}



// === ParseAndEncodeFloatingPointNumber @ 00d0c5ac ===

/* spvtools::utils::ParseAndEncodeFloatingPointNumber(char const*, spvtools::utils::NumberType
   const&, std::__ndk1::function<void (unsigned int)>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

void spvtools::utils::ParseAndEncodeFloatingPointNumber
               (char *param_1,int *param_2,long param_3,ulong *param_4)

{
  undefined *puVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  bool bVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar12;
  undefined8 uVar13;
  size_t sVar14;
  char *pcVar15;
  long lVar16;
  ulong local_78;
  uint local_70;
  undefined4 uStack_6c;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  if (param_1 == (char *)0x0) {
    if (param_4 == (ulong *)0x0) goto LAB_00d0cfa0;
    plVar12 = (long *)operator_new(0x108);
    puVar1 = PTR_VTT_00d6c7e0;
    puVar8 = PTR_vtable_00d6c7d8;
    plVar12[0x14] = 0;
    lVar16 = *(long *)(puVar1 + 8);
    uVar13 = *(undefined8 *)(puVar1 + 0x10);
    puVar1 = puVar8 + 0x40;
    plVar12[0xe] = (long)puVar1;
    *plVar12 = lVar16;
    *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
    pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
    std::__ndk1::ios_base::init(pvVar3);
    *(undefined8 *)((long)pvVar3 + 0x88) = 0;
    puVar9 = PTR_vtable_00d6cdf8;
    *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
    plVar12[0xe] = (long)puVar1;
    *plVar12 = (long)(puVar8 + 0x18);
    plVar12[1] = (long)(puVar9 + 0x10);
    std::__ndk1::locale::locale((locale *)(plVar12 + 2));
    plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
    plVar12[8] = 0;
    plVar12[7] = 0;
    plVar12[6] = 0;
    plVar12[5] = 0;
    plVar12[4] = 0;
    plVar12[3] = 0;
    plVar12[10] = 0;
    plVar12[9] = 0;
    plVar12[0xc] = 0;
    plVar12[0xb] = 0;
    *(undefined4 *)(plVar12 + 0xd) = 0x10;
    FUN_00cf1ccc(plVar12 + 1);
    FUN_00cf1dd8(plVar12,"The given text is a nullptr",0x1b);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    bVar6 = (byte)*param_4;
  }
  else {
    if (param_2[1] != 3) {
      if (param_4 == (ulong *)0x0) {
        uVar13 = 2;
      }
      else {
        plVar12 = (long *)operator_new(0x108);
        puVar1 = PTR_VTT_00d6c7e0;
        puVar8 = PTR_vtable_00d6c7d8;
        plVar12[0x14] = 0;
        lVar16 = *(long *)(puVar1 + 8);
        uVar13 = *(undefined8 *)(puVar1 + 0x10);
        puVar1 = puVar8 + 0x40;
        plVar12[0xe] = (long)puVar1;
        *plVar12 = lVar16;
        *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
        pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
        std::__ndk1::ios_base::init(pvVar3);
        *(undefined8 *)((long)pvVar3 + 0x88) = 0;
        puVar9 = PTR_vtable_00d6cdf8;
        *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
        plVar12[0xe] = (long)puVar1;
        *plVar12 = (long)(puVar8 + 0x18);
        plVar12[1] = (long)(puVar9 + 0x10);
        std::__ndk1::locale::locale((locale *)(plVar12 + 2));
        plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
        plVar12[8] = 0;
        plVar12[7] = 0;
        plVar12[6] = 0;
        plVar12[5] = 0;
        plVar12[4] = 0;
        plVar12[3] = 0;
        plVar12[10] = 0;
        plVar12[9] = 0;
        plVar12[0xc] = 0;
        plVar12[0xb] = 0;
        *(undefined4 *)(plVar12 + 0xd) = 0x10;
        FUN_00cf1ccc(plVar12 + 1);
        FUN_00cf1dd8(plVar12,"The expected type is not a float type",0x25);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        if ((*param_4 & 1) != 0) {
          operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
        }
        lVar16 = *plVar12;
        param_4[1] = uStack_68;
        *param_4 = CONCAT44(uStack_6c,local_70);
        param_4[2] = local_60;
        (**(code **)(lVar16 + 8))(plVar12);
        uVar13 = 2;
      }
      goto LAB_00d0cfa4;
    }
    iVar4 = param_2[2];
    iVar5 = *param_2;
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        if (iVar5 == 0x10) goto LAB_00d0cb24;
        if (iVar5 == 0x20) goto LAB_00d0cb08;
        if (iVar5 == 0x40) goto LAB_00d0c988;
      }
      else {
        if (iVar4 == 1) {
LAB_00d0cb24:
          local_78 = (ulong)local_78._2_6_ << 0x10;
          bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
                             (param_1,(HexFloat *)&local_78);
          if (bVar11) {
            local_70 = (uint)(ushort)local_78;
            plVar12 = *(long **)(param_3 + 0x20);
            goto joined_r0x00d0c9c8;
          }
          if (param_4 != (ulong *)0x0) {
            plVar12 = (long *)operator_new(0x108);
            puVar1 = PTR_VTT_00d6c7e0;
            puVar8 = PTR_vtable_00d6c7d8;
            plVar12[0x14] = 0;
            lVar16 = *(long *)(puVar1 + 8);
            uVar13 = *(undefined8 *)(puVar1 + 0x10);
            puVar1 = puVar8 + 0x40;
            plVar12[0xe] = (long)puVar1;
            *plVar12 = lVar16;
            *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
            pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
            std::__ndk1::ios_base::init(pvVar3);
            *(undefined8 *)((long)pvVar3 + 0x88) = 0;
            puVar9 = PTR_vtable_00d6cdf8;
            *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
            plVar12[0xe] = (long)puVar1;
            *plVar12 = (long)(puVar8 + 0x18);
            plVar12[1] = (long)(puVar9 + 0x10);
            std::__ndk1::locale::locale((locale *)(plVar12 + 2));
            plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
            plVar12[8] = 0;
            plVar12[7] = 0;
            plVar12[6] = 0;
            plVar12[5] = 0;
            plVar12[4] = 0;
            plVar12[3] = 0;
            plVar12[10] = 0;
            plVar12[9] = 0;
            plVar12[0xc] = 0;
            plVar12[0xb] = 0;
            *(undefined4 *)(plVar12 + 0xd) = 0x10;
            FUN_00cf1ccc(plVar12 + 1);
            pcVar15 = "Invalid 16-bit float literal: ";
            goto LAB_00d0cdcc;
          }
          goto LAB_00d0cfa0;
        }
        if (iVar4 == 2) {
LAB_00d0cb08:
          local_78 = local_78 & 0xffffffff00000000;
          bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>>
                             (param_1,(HexFloat *)&local_78);
          if (bVar11) {
            local_70 = (uint)local_78;
            goto LAB_00d0cb60;
          }
          if (param_4 != (ulong *)0x0) {
            plVar12 = (long *)operator_new(0x108);
            puVar1 = PTR_VTT_00d6c7e0;
            puVar8 = PTR_vtable_00d6c7d8;
            plVar12[0x14] = 0;
            lVar16 = *(long *)(puVar1 + 8);
            uVar13 = *(undefined8 *)(puVar1 + 0x10);
            puVar1 = puVar8 + 0x40;
            plVar12[0xe] = (long)puVar1;
            *plVar12 = lVar16;
            *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
            pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
            std::__ndk1::ios_base::init(pvVar3);
            *(undefined8 *)((long)pvVar3 + 0x88) = 0;
            puVar9 = PTR_vtable_00d6cdf8;
            *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
            plVar12[0xe] = (long)puVar1;
            *plVar12 = (long)(puVar8 + 0x18);
            plVar12[1] = (long)(puVar9 + 0x10);
            std::__ndk1::locale::locale((locale *)(plVar12 + 2));
            plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
            plVar12[8] = 0;
            plVar12[7] = 0;
            plVar12[6] = 0;
            plVar12[5] = 0;
            plVar12[4] = 0;
            plVar12[3] = 0;
            plVar12[10] = 0;
            plVar12[9] = 0;
            plVar12[0xc] = 0;
            plVar12[0xb] = 0;
            *(undefined4 *)(plVar12 + 0xd) = 0x10;
            FUN_00cf1ccc(plVar12 + 1);
            pcVar15 = "Invalid 32-bit float literal: ";
            goto LAB_00d0cdcc;
          }
          goto LAB_00d0cfa0;
        }
      }
LAB_00d0c9d0:
      if (param_4 != (ulong *)0x0) {
        this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)operator_new(0x108);
        puVar1 = PTR_VTT_00d6c7e0;
        puVar8 = PTR_vtable_00d6c7d8;
        *(undefined8 *)(this + 0xa0) = 0;
        lVar16 = *(long *)(puVar1 + 8);
        uVar13 = *(undefined8 *)(puVar1 + 0x10);
        puVar1 = puVar8 + 0x40;
        *(undefined **)(this + 0x70) = puVar1;
        *(long *)this = lVar16;
        *(undefined8 *)(this + *(long *)(lVar16 + -0x18)) = uVar13;
        pbVar2 = this + *(long *)(*(long *)this + -0x18);
        std::__ndk1::ios_base::init(pbVar2);
        *(undefined8 *)(pbVar2 + 0x88) = 0;
        puVar9 = PTR_vtable_00d6cdf8;
        *(undefined4 *)(pbVar2 + 0x90) = 0xffffffff;
        *(undefined **)(this + 0x70) = puVar1;
        *(undefined **)this = puVar8 + 0x18;
        *(undefined **)(this + 8) = puVar9 + 0x10;
        std::__ndk1::locale::locale((locale *)(this + 0x10));
        *(undefined **)(this + 8) = PTR_vtable_00d6c7f0 + 0x10;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        *(undefined4 *)(this + 0x68) = 0x10;
        FUN_00cf1ccc(this + 8);
        FUN_00cf1dd8(this,"Unsupported ",0xc);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(this,iVar5);
        FUN_00cf1dd8(this,"-bit float literals",0x13);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        if ((*param_4 & 1) != 0) {
          operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
        }
        lVar16 = *(long *)this;
        param_4[1] = uStack_68;
        *param_4 = CONCAT44(uStack_6c,local_70);
        param_4[2] = local_60;
        (**(code **)(lVar16 + 8))(this);
      }
      uVar13 = 1;
      goto LAB_00d0cfa4;
    }
    if (4 < iVar4) {
      if (iVar4 == 5) {
        local_78 = (ulong)local_78._1_7_ << 8;
        bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
                           (param_1,(HexFloat *)&local_78);
        if (bVar11) {
LAB_00d0cb5c:
          local_70 = (uint)(byte)local_78._0_1_;
LAB_00d0cb60:
          plVar12 = *(long **)(param_3 + 0x20);
          goto joined_r0x00d0c9c8;
        }
        if (param_4 != (ulong *)0x0) {
          plVar12 = (long *)operator_new(0x108);
          puVar1 = PTR_VTT_00d6c7e0;
          puVar8 = PTR_vtable_00d6c7d8;
          plVar12[0x14] = 0;
          lVar16 = *(long *)(puVar1 + 8);
          uVar13 = *(undefined8 *)(puVar1 + 0x10);
          puVar1 = puVar8 + 0x40;
          plVar12[0xe] = (long)puVar1;
          *plVar12 = lVar16;
          *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
          pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
          std::__ndk1::ios_base::init(pvVar3);
          *(undefined8 *)((long)pvVar3 + 0x88) = 0;
          puVar9 = PTR_vtable_00d6cdf8;
          *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
          plVar12[0xe] = (long)puVar1;
          *plVar12 = (long)(puVar8 + 0x18);
          plVar12[1] = (long)(puVar9 + 0x10);
          std::__ndk1::locale::locale((locale *)(plVar12 + 2));
          plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
          plVar12[8] = 0;
          plVar12[7] = 0;
          plVar12[6] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[3] = 0;
          plVar12[10] = 0;
          plVar12[9] = 0;
          plVar12[0xc] = 0;
          plVar12[0xb] = 0;
          *(undefined4 *)(plVar12 + 0xd) = 0x10;
          FUN_00cf1ccc(plVar12 + 1);
          pcVar15 = "Invalid E4M3 float literal: ";
LAB_00d0ce98:
          uVar13 = 0x1c;
          goto LAB_00d0cf6c;
        }
      }
      else {
        if (iVar4 != 6) goto LAB_00d0c9d0;
        local_78 = (ulong)local_78._1_7_ << 8;
        bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
                           (param_1,(HexFloat *)&local_78);
        if (bVar11) goto LAB_00d0cb5c;
        if (param_4 != (ulong *)0x0) {
          plVar12 = (long *)operator_new(0x108);
          puVar1 = PTR_VTT_00d6c7e0;
          puVar8 = PTR_vtable_00d6c7d8;
          plVar12[0x14] = 0;
          lVar16 = *(long *)(puVar1 + 8);
          uVar13 = *(undefined8 *)(puVar1 + 0x10);
          puVar1 = puVar8 + 0x40;
          plVar12[0xe] = (long)puVar1;
          *plVar12 = lVar16;
          *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
          pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
          std::__ndk1::ios_base::init(pvVar3);
          *(undefined8 *)((long)pvVar3 + 0x88) = 0;
          puVar9 = PTR_vtable_00d6cdf8;
          *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
          plVar12[0xe] = (long)puVar1;
          *plVar12 = (long)(puVar8 + 0x18);
          plVar12[1] = (long)(puVar9 + 0x10);
          std::__ndk1::locale::locale((locale *)(plVar12 + 2));
          plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
          plVar12[8] = 0;
          plVar12[7] = 0;
          plVar12[6] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[3] = 0;
          plVar12[10] = 0;
          plVar12[9] = 0;
          plVar12[0xc] = 0;
          plVar12[0xb] = 0;
          *(undefined4 *)(plVar12 + 0xd) = 0x10;
          FUN_00cf1ccc(plVar12 + 1);
          pcVar15 = "Invalid E5M2 float literal: ";
          goto LAB_00d0ce98;
        }
      }
LAB_00d0cfa0:
      uVar13 = 3;
      goto LAB_00d0cfa4;
    }
    if (iVar4 == 3) {
LAB_00d0c988:
      local_78 = 0;
      bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>>>
                         (param_1,(HexFloat *)&local_78);
      uVar10 = local_78;
      if (bVar11) {
        plVar12 = *(long **)(param_3 + 0x20);
        local_70 = (uint)local_78;
        if (plVar12 == (long *)0x0) goto LAB_00d0c9cc;
        (**(code **)(*plVar12 + 0x30))(plVar12,&local_70);
        plVar12 = *(long **)(param_3 + 0x20);
        local_70 = (uint)(uVar10 >> 0x20);
joined_r0x00d0c9c8:
        if (plVar12 == (long *)0x0) {
LAB_00d0c9cc:
                    /* WARNING: Subroutine does not return */
          FUN_00cf20c8();
        }
        (**(code **)(*plVar12 + 0x30))(plVar12,&local_70);
        uVar13 = 0;
        goto LAB_00d0cfa4;
      }
      if (param_4 == (ulong *)0x0) goto LAB_00d0cfa0;
      plVar12 = (long *)operator_new(0x108);
      puVar1 = PTR_VTT_00d6c7e0;
      puVar8 = PTR_vtable_00d6c7d8;
      plVar12[0x14] = 0;
      lVar16 = *(long *)(puVar1 + 8);
      uVar13 = *(undefined8 *)(puVar1 + 0x10);
      puVar1 = puVar8 + 0x40;
      plVar12[0xe] = (long)puVar1;
      *plVar12 = lVar16;
      *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
      pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
      std::__ndk1::ios_base::init(pvVar3);
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      puVar9 = PTR_vtable_00d6cdf8;
      *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
      plVar12[0xe] = (long)puVar1;
      *plVar12 = (long)(puVar8 + 0x18);
      plVar12[1] = (long)(puVar9 + 0x10);
      std::__ndk1::locale::locale((locale *)(plVar12 + 2));
      plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
      plVar12[8] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[3] = 0;
      plVar12[10] = 0;
      plVar12[9] = 0;
      plVar12[0xc] = 0;
      plVar12[0xb] = 0;
      *(undefined4 *)(plVar12 + 0xd) = 0x10;
      FUN_00cf1ccc(plVar12 + 1);
      pcVar15 = "Invalid 64-bit float literal: ";
LAB_00d0cdcc:
      uVar13 = 0x1e;
    }
    else {
      if (iVar4 != 4) goto LAB_00d0c9d0;
      local_78 = (ulong)local_78._2_6_ << 0x10;
      bVar11 = ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
                         (param_1,(HexFloat *)&local_78);
      if (bVar11) {
        local_70 = (uint)(ushort)local_78;
        goto LAB_00d0cb60;
      }
      if (param_4 == (ulong *)0x0) goto LAB_00d0cfa0;
      plVar12 = (long *)operator_new(0x108);
      puVar1 = PTR_VTT_00d6c7e0;
      puVar8 = PTR_vtable_00d6c7d8;
      plVar12[0x14] = 0;
      lVar16 = *(long *)(puVar1 + 8);
      uVar13 = *(undefined8 *)(puVar1 + 0x10);
      puVar1 = puVar8 + 0x40;
      plVar12[0xe] = (long)puVar1;
      *plVar12 = lVar16;
      *(undefined8 *)((long)plVar12 + *(long *)(lVar16 + -0x18)) = uVar13;
      pvVar3 = (void *)((long)plVar12 + *(long *)(*plVar12 + -0x18));
      std::__ndk1::ios_base::init(pvVar3);
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      puVar9 = PTR_vtable_00d6cdf8;
      *(undefined4 *)((long)pvVar3 + 0x90) = 0xffffffff;
      plVar12[0xe] = (long)puVar1;
      *plVar12 = (long)(puVar8 + 0x18);
      plVar12[1] = (long)(puVar9 + 0x10);
      std::__ndk1::locale::locale((locale *)(plVar12 + 2));
      plVar12[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
      plVar12[8] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[3] = 0;
      plVar12[10] = 0;
      plVar12[9] = 0;
      plVar12[0xc] = 0;
      plVar12[0xb] = 0;
      *(undefined4 *)(plVar12 + 0xd) = 0x10;
      FUN_00cf1ccc(plVar12 + 1);
      pcVar15 = "Invalid bfloat16 literal: ";
      uVar13 = 0x1a;
    }
LAB_00d0cf6c:
    FUN_00cf1dd8(plVar12,pcVar15,uVar13);
    sVar14 = strlen(param_1);
    FUN_00cf1dd8(plVar12,param_1,sVar14);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    bVar6 = (byte)*param_4;
  }
  if ((bVar6 & 1) != 0) {
    operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
  }
  lVar16 = *plVar12;
  param_4[1] = uStack_68;
  *param_4 = CONCAT44(uStack_6c,local_70);
  param_4[2] = local_60;
  (**(code **)(lVar16 + 8))(plVar12);
  uVar13 = 3;
LAB_00d0cfa4:
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}



// === ParseAndEncodeNumber @ 00d0cfd4 ===

/* spvtools::utils::ParseAndEncodeNumber(char const*, spvtools::utils::NumberType const&,
   std::__ndk1::function<void (unsigned int)>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

undefined4
spvtools::utils::ParseAndEncodeNumber(long param_1,long param_2,long *param_3,ulong *param_4)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1 == 0) {
    if (param_4 == (ulong *)0x0) {
      uVar7 = 3;
      goto LAB_00d0d350;
    }
    plVar8 = (long *)operator_new(0x108);
    puVar1 = PTR_VTT_00d6c7e0;
    puVar5 = PTR_vtable_00d6c7d8;
    plVar8[0x14] = 0;
    lVar9 = *(long *)(puVar1 + 8);
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    puVar1 = puVar5 + 0x40;
    plVar8[0xe] = (long)puVar1;
    *plVar8 = lVar9;
    *(undefined8 *)((long)plVar8 + *(long *)(lVar9 + -0x18)) = uVar3;
    pvVar2 = (void *)((long)plVar8 + *(long *)(*plVar8 + -0x18));
    std::__ndk1::ios_base::init(pvVar2);
    *(undefined8 *)((long)pvVar2 + 0x88) = 0;
    puVar6 = PTR_vtable_00d6cdf8;
    *(undefined4 *)((long)pvVar2 + 0x90) = 0xffffffff;
    plVar8[0xe] = (long)puVar1;
    *plVar8 = (long)(puVar5 + 0x18);
    plVar8[1] = (long)(puVar6 + 0x10);
    std::__ndk1::locale::locale((locale *)(plVar8 + 2));
    plVar8[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
    plVar8[8] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[3] = 0;
    plVar8[10] = 0;
    plVar8[9] = 0;
    plVar8[0xc] = 0;
    plVar8[0xb] = 0;
    *(undefined4 *)(plVar8 + 0xd) = 0x10;
    FUN_00cf1ccc(plVar8 + 1);
    FUN_00cf1dd8(plVar8,"The given text is a nullptr",0x1b);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*param_4 & 1) != 0) {
      operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
    }
    param_4[1] = uStack_c0;
    *param_4 = local_c8;
    param_4[2] = local_b8;
    uVar7 = 3;
    lVar9 = 8;
  }
  else if (*(int *)(param_2 + 4) == 3) {
    plVar8 = (long *)param_3[4];
    if (plVar8 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else if (plVar8 == param_3) {
      local_60 = alStack_80;
      (**(code **)(*plVar8 + 0x18))(plVar8,alStack_80);
    }
    else {
      local_60 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
    }
    uVar7 = ParseAndEncodeFloatingPointNumber(param_1,param_2,alStack_80,param_4);
    plVar8 = local_60;
    if (local_60 == alStack_80) goto LAB_00d0d33c;
LAB_00d0d2ec:
    if (plVar8 == (long *)0x0) goto LAB_00d0d350;
    lVar9 = 0x28;
  }
  else if (*(int *)(param_2 + 4) == 0) {
    if (param_4 == (ulong *)0x0) {
      uVar7 = 2;
      goto LAB_00d0d350;
    }
    plVar8 = (long *)operator_new(0x108);
    puVar1 = PTR_VTT_00d6c7e0;
    puVar5 = PTR_vtable_00d6c7d8;
    plVar8[0x14] = 0;
    lVar9 = *(long *)(puVar1 + 8);
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    puVar1 = puVar5 + 0x40;
    plVar8[0xe] = (long)puVar1;
    *plVar8 = lVar9;
    *(undefined8 *)((long)plVar8 + *(long *)(lVar9 + -0x18)) = uVar3;
    pvVar2 = (void *)((long)plVar8 + *(long *)(*plVar8 + -0x18));
    std::__ndk1::ios_base::init(pvVar2);
    *(undefined8 *)((long)pvVar2 + 0x88) = 0;
    puVar6 = PTR_vtable_00d6cdf8;
    *(undefined4 *)((long)pvVar2 + 0x90) = 0xffffffff;
    plVar8[0xe] = (long)puVar1;
    *plVar8 = (long)(puVar5 + 0x18);
    plVar8[1] = (long)(puVar6 + 0x10);
    std::__ndk1::locale::locale((locale *)(plVar8 + 2));
    plVar8[1] = (long)(PTR_vtable_00d6c7f0 + 0x10);
    plVar8[8] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[3] = 0;
    plVar8[10] = 0;
    plVar8[9] = 0;
    plVar8[0xc] = 0;
    plVar8[0xb] = 0;
    *(undefined4 *)(plVar8 + 0xd) = 0x10;
    FUN_00cf1ccc(plVar8 + 1);
    FUN_00cf1dd8(plVar8,"The expected type is not a integer or float type",0x30);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    if ((*param_4 & 1) != 0) {
      operator_delete((void *)param_4[2],*param_4 & 0xfffffffffffffffe);
    }
    param_4[1] = uStack_c0;
    *param_4 = local_c8;
    param_4[2] = local_b8;
    uVar7 = 2;
    lVar9 = 8;
  }
  else {
    plVar8 = (long *)param_3[4];
    if (plVar8 == (long *)0x0) {
      local_90 = (long *)0x0;
    }
    else if (plVar8 == param_3) {
      local_90 = alStack_b0;
      (**(code **)(*plVar8 + 0x18))(plVar8,alStack_b0);
    }
    else {
      local_90 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
    }
    uVar7 = ParseAndEncodeIntegerNumber(param_1,param_2,alStack_b0,param_4);
    plVar8 = local_90;
    if (local_90 != alStack_b0) goto LAB_00d0d2ec;
LAB_00d0d33c:
    lVar9 = 0x20;
  }
  (**(code **)(*plVar8 + lVar9))(plVar8);
LAB_00d0d350:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



// === ParseNumber<long> @ 00d0d380 ===

/* bool spvtools::utils::ParseNumber<long>(char const*, long*) */

bool spvtools::utils::ParseNumber<long>(char *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0d5c0;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0d418;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0d418:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0d5c0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === CheckRangeAndIfHexThenSignExtend<long> @ 00d0d5fc ===

/* bool spvtools::utils::CheckRangeAndIfHexThenSignExtend<long>(long, spvtools::utils::NumberType
   const&, bool, long*) */

bool spvtools::utils::CheckRangeAndIfHexThenSignExtend<long>
               (long param_1,NumberType *param_2,bool param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)param_2;
  if (2 < *(uint *)(param_2 + 4) - 1) {
    uVar3 = 0;
  }
  uVar2 = 0xffffffffffffffff;
  if (uVar3 != 0x40) {
    uVar2 = ~(-1L << ((ulong)uVar3 & 0x3f));
  }
  if (param_1 < 0) {
    if ((uVar2 | param_1) != 0xffffffffffffffff ||
        (param_1 | -(uVar2 >> 1) - 2) != 0xffffffffffffffff) {
      return false;
    }
    bVar4 = true;
  }
  else {
    uVar3 = *(uint *)(param_2 + 4) & 0xfffffffe;
    if (!param_3) {
      uVar1 = uVar2 >> 1;
      if (uVar3 != 2) {
        uVar1 = uVar2;
      }
      return (ulong)param_1 <= uVar1;
    }
    if (uVar2 < (ulong)param_1) {
      return false;
    }
    uVar1 = 0;
    if (uVar3 == 2) {
      uVar1 = (uVar2 >> 1) + 1;
    }
    bVar4 = (uVar1 & param_1) != 0;
  }
  if ((param_3) && (bVar4)) {
    *param_4 = param_1 | ~uVar2;
    return true;
  }
  return true;
}



// === ParseNumber<unsigned_long> @ 00d0d6ec ===

/* bool spvtools::utils::ParseNumber<unsigned long>(char const*, unsigned long*) */

bool spvtools::utils::ParseNumber<unsigned_long>(char *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t __n;
  long lVar7;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) goto LAB_00d0d940;
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0d780;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0d780:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar7 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar7));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar7) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar7) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 7) != 2))
  {
    param_1 = (char *)0x0;
  }
  else if ((*param_1 == '-') && (*param_2 != 0)) {
    param_1 = (char *)0x0;
    *param_2 = 0;
  }
  else {
    param_1 = (char *)0x1;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0d940:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)(char)param_1;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>> @ 00d0d97c ===

/* bool 
   spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >
   >(char const*,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >*)
    */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0dbbc;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0da14;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0da14:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0dbbc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>> @ 00d0dbf8 ===

/* bool 
   spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >
   >(char const*,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >*)
    */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0de38;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0dc90;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0dc90:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0de38:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>> @ 00d0de74 ===

/* bool 
   spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > > >(char
   const*, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >*) */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0e0b4;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0df0c;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0df0c:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0e0b4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>> @ 00d0e0f0 ===

/* bool 
   spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > > >(char
   const*, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > >*) */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0e330;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0e188;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0e188:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0e330:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>> @ 00d0e36c ===

/* bool spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> > > >(char const*,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> > >*) */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0e5ac;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0e404;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0e404:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0e5ac:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>>> @ 00d0e5e8 ===

/* bool spvtools::utils::ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> > > >(char const*,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> > >*) */

bool spvtools::utils::
     ParseNumber<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>>>
               (char *param_1,HexFloat *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  size_t __n;
  long lVar8;
  void *__dest;
  ulong local_190;
  size_t local_188;
  void *local_180;
  undefined *local_178;
  uint local_170 [2];
  undefined *local_168;
  locale alStack_160 [8];
  uint local_158 [12];
  ulong local_128 [2];
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [2];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined8 local_d0;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (char *)0x0) {
    bVar7 = false;
    goto LAB_00d0e828;
  }
  __n = strlen(param_1);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00cf7a94();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_190 | 1);
    local_190 = CONCAT71(local_190._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00d0e680;
  }
  else {
    uVar2 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar2 = (__n | 7) + 1;
    }
    __dest = operator_new(uVar2);
    local_190 = uVar2 | 1;
    local_188 = __n;
    local_180 = __dest;
LAB_00d0e680:
    memcpy(__dest,param_1,__n);
  }
  puVar6 = PTR_VTT_00d6ce18;
  puVar5 = PTR_vtable_00d6ce10;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_d0 = 0;
  local_178 = *(undefined **)(puVar6 + 8);
  puVar1 = puVar5 + 0x40;
  local_170[0] = 0;
  local_170[1] = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x10);
  lVar8 = *(long *)(local_178 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)&local_178 + lVar8));
  puVar4 = PTR_vtable_00d6cdf8;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
  local_178 = puVar5 + 0x18;
  local_168 = PTR_vtable_00d6cdf8 + 0x10;
  local_100[0] = puVar1;
  std::__ndk1::locale::locale(alStack_160);
  puVar1 = PTR_vtable_00d6c7f0;
  local_168 = PTR_vtable_00d6c7f0 + 0x10;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            local_128,(basic_string *)&local_190);
  FUN_00cf1ccc(&local_168);
  if ((local_190 & 1) != 0) {
    operator_delete(local_180,local_190 & 0xfffffffffffffffe);
  }
  *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) =
       *(uint *)((long)local_170 + *(long *)(local_178 + -0x18)) & 0xffffffb5;
  operator>>((basic_istream *)&local_178,param_2);
  if ((*param_1 == '\0') || ((*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 3) != 2))
  {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)((long)local_158 + *(long *)(local_178 + -0x18)) & 4) == 0;
  }
  local_178 = *(undefined **)puVar6;
  *(undefined8 *)((long)&local_178 + *(long *)(local_178 + -0x18)) = *(undefined8 *)(puVar6 + 0x18);
  local_168 = puVar1 + 0x10;
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118,local_128[0] & 0xfffffffffffffffe);
  }
  local_168 = puVar4 + 0x10;
  std::__ndk1::locale::~locale(alStack_160);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_00d0e828:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}



// === operator>> @ 00d0e864 ===

/* WARNING: Removing unreachable block (ram,0x00d0e9e0) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >&)
    */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float local_6c;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  *param_2 = (HexFloat)0x0;
  if (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar14 - 9U < 5 || (iVar14 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  iVar14 = (int)param_1;
  if ((iVar15 == 0x2d) || (iVar15 == 0x30)) {
    iVar16 = iVar15;
    if (iVar15 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar16 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar16 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar17 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar17 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar25 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar26 = 7;
        bVar1 = false;
        do {
          if (uVar17 == 0x2e) {
            bVar12 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar17 == 0x70) {
              bVar12 = false;
              bVar13 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            iVar16 = 0x1e4106;
            if ((uVar17 - 0x3a < 0xfffffff6) && ((uVar17 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d0ee28;
            pvVar18 = memchr("0123456789",uVar17,0xb);
            uVar24 = 0xff;
            if (pvVar18 == (void *)0x0) {
              pvVar18 = memchr("abcdef",uVar17,7);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1b524b;
                pvVar18 = memchr("ABCDEF",uVar17,7);
                if (pvVar18 == (void *)0x0) {
                  uVar17 = 0;
                  uVar19 = 0;
                  goto joined_r0x00d0ea70;
                }
              }
              uVar17 = ((int)pvVar18 - iVar16) + 10;
              uVar19 = uVar17 >> 3 & 1;
            }
            else {
              uVar17 = (int)pvVar18 - 0x14d070;
              uVar19 = uVar17 >> 3 & 1;
            }
joined_r0x00d0ea70:
            if (uVar21 != 0) {
              if ((uVar26 & 0xff) == 0x7f) goto LAB_00d0ee28;
              uVar23 = uVar22 & 0xff;
              uVar26 = uVar26 + 1;
              uVar4 = 7 - uVar22;
              uVar22 = uVar24;
              if (uVar23 + 1 < 0xff) {
                uVar22 = uVar23 + 1;
              }
              uVar4 = uVar19 << (ulong)(uVar4 & 0x1f);
              if ((uVar23 < 8 & uVar19) == 0) {
                uVar4 = 0;
              }
              uVar25 = uVar4 | uVar25;
            }
            uVar23 = uVar17 >> 2 & 1;
            if ((uVar19 | uVar21) != 0) {
              if ((uVar26 & 0xff) == 0x7f) goto LAB_00d0ee28;
              uVar4 = uVar22 & 0xff;
              uVar26 = uVar26 + 1;
              uVar8 = 7 - uVar22;
              uVar22 = uVar24;
              if (uVar4 + 1 < 0xff) {
                uVar22 = uVar4 + 1;
              }
              uVar8 = uVar23 << (ulong)(uVar8 & 0x1f);
              if ((uVar4 < 8 & uVar23) == 0) {
                uVar8 = 0;
              }
              uVar25 = uVar8 | uVar25;
            }
            uVar23 = uVar23 | uVar19 | uVar21;
            uVar21 = uVar17 >> 1 & 1;
            if (uVar23 != 0) {
              if ((uVar26 & 0xff) == 0x7f) goto LAB_00d0ee28;
              uVar19 = uVar22 & 0xff;
              uVar26 = uVar26 + 1;
              uVar4 = 7 - uVar22;
              uVar22 = uVar24;
              if (uVar19 + 1 < 0xff) {
                uVar22 = uVar19 + 1;
              }
              uVar4 = uVar21 << (ulong)(uVar4 & 0x1f);
              if ((uVar19 < 8 & uVar21) == 0) {
                uVar4 = 0;
              }
              uVar25 = uVar4 | uVar25;
            }
            uVar21 = uVar21 | uVar23;
            uVar17 = uVar17 & 1;
            if (uVar21 != 0) {
              if ((uVar26 & 0xff) == 0x7f) goto LAB_00d0ee28;
              uVar19 = uVar22 & 0xff;
              uVar26 = uVar26 + 1;
              if (uVar19 + 1 < 0xff) {
                uVar24 = uVar19 + 1;
              }
              uVar22 = uVar17 << (ulong)(7 - uVar22 & 0x1f);
              if ((uVar19 < 8 & uVar17) == 0) {
                uVar22 = 0;
              }
              uVar25 = uVar22 | uVar25;
              uVar22 = uVar24;
            }
            bVar12 = false;
            uVar21 = uVar17 | uVar21;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar13 = false;
        } while (!bVar12);
        if (!bVar13 && bVar12) {
          uVar21 = 0;
          uVar24 = uVar17;
          do {
            if (uVar24 != 0x70) {
              if ((uVar24 - 0x3a < 0xfffffff6) && ((uVar24 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d0ee28;
              pvVar18 = memchr("0123456789",uVar24,0xb);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1e4106;
                pvVar18 = memchr("abcdef",uVar24,7);
                if (pvVar18 == (void *)0x0) {
                  iVar16 = 0x1b524b;
                  pvVar18 = memchr("ABCDEF",uVar24,7);
                  if (pvVar18 == (void *)0x0) {
                    uVar17 = 0;
                    goto joined_r0x00d0f024;
                  }
                }
                uVar17 = ((int)pvVar18 - iVar16) + 10;
              }
              else {
                uVar17 = (int)pvVar18 - 0x14d070;
              }
joined_r0x00d0f024:
              uVar21 = uVar21 | uVar17 >> 3 & 1;
              uVar19 = uVar17 >> 3 & 1;
              if (bVar1) {
                uVar23 = uVar22 & 0xff;
                uVar8 = uVar17 >> 1 & 1;
                uVar4 = uVar19 << (ulong)(7 - uVar22 & 0x1f);
                uVar9 = uVar17 >> 2 & 1;
                if ((uVar23 < 8 & uVar19) == 0) {
                  uVar4 = 0;
                }
                uVar17 = uVar17 & 1;
                uVar22 = 0xff;
                if (uVar23 + 1 < 0xff) {
                  uVar22 = uVar23 + 1;
                }
                uVar6 = uVar9 << (ulong)(7 - uVar22 & 0x1f);
                uVar19 = uVar23 + 2;
                if ((uVar9 & uVar22 < 8) == 0) {
                  uVar6 = 0;
                }
                if (0xfe < uVar19) {
                  uVar19 = 0xff;
                }
                uVar7 = uVar8 << (ulong)(7 - uVar19 & 0x1f);
                uVar3 = uVar23 + 3;
                uVar22 = uVar23 + 4;
                if ((uVar8 & uVar19 < 8) == 0) {
                  uVar7 = 0;
                }
                if (0xfe < uVar3) {
                  uVar3 = 0xff;
                }
                uVar19 = uVar17 << (ulong)(7 - uVar3 & 0x1f);
                if ((uVar17 & uVar3 < 8) == 0) {
                  uVar19 = 0;
                }
                uVar21 = uVar17 | uVar8 | uVar9 | uVar21;
                if (0xfe < uVar22) {
                  uVar22 = 0xff;
                }
                uVar25 = uVar4 | uVar6 | uVar7 | uVar19 | uVar25;
              }
              else {
                uVar23 = 0xff;
                if (uVar21 == 0) {
                  if ((uVar26 & 0xff) == 0x80) goto LAB_00d0ee28;
                  uVar26 = uVar26 - 1;
                  uVar19 = uVar17 >> 2 & 1;
                  uVar21 = uVar19;
                  if (uVar19 != 0) goto LAB_00d0f064;
LAB_00d0f124:
                  if ((uVar26 & 0xff) == 0x80) goto LAB_00d0ee28;
                  uVar26 = uVar26 - 1;
                  uVar19 = uVar17 >> 1 & 1;
                  uVar21 = uVar19 | uVar21;
                  if (uVar21 != 0) goto LAB_00d0f09c;
LAB_00d0f140:
                  if ((uVar26 & 0xff) == 0x80) goto LAB_00d0ee28;
                  uVar26 = uVar26 - 1;
                  if ((uVar17 & 1) == 0 && uVar21 == 0) goto LAB_00d0f15c;
                }
                else {
                  uVar4 = uVar22 & 0xff;
                  uVar22 = uVar19 << (ulong)(7 - uVar22 & 0x1f);
                  if ((uVar4 < 8 & uVar19) == 0) {
                    uVar22 = 0;
                  }
                  uVar25 = uVar22 | uVar25;
                  uVar22 = uVar23;
                  if (uVar4 + 1 < 0xff) {
                    uVar22 = uVar4 + 1;
                  }
                  uVar19 = uVar17 >> 2 & 1;
                  uVar21 = uVar19 | uVar21;
                  if (uVar21 == 0) goto LAB_00d0f124;
LAB_00d0f064:
                  uVar4 = uVar22 & 0xff;
                  uVar22 = uVar19 << (ulong)(7 - uVar22 & 0x1f);
                  if ((uVar4 < 8 & uVar19) == 0) {
                    uVar22 = 0;
                  }
                  uVar25 = uVar22 | uVar25;
                  uVar22 = uVar23;
                  if (uVar4 + 1 < 0xff) {
                    uVar22 = uVar4 + 1;
                  }
                  uVar19 = uVar17 >> 1 & 1;
                  uVar21 = uVar19 | uVar21;
                  if (uVar21 == 0) goto LAB_00d0f140;
LAB_00d0f09c:
                  uVar4 = uVar22 & 0xff;
                  uVar22 = uVar19 << (ulong)(7 - uVar22 & 0x1f);
                  if ((uVar4 < 8 & uVar19) == 0) {
                    uVar22 = 0;
                  }
                  uVar25 = uVar22 | uVar25;
                  uVar22 = uVar23;
                  if (uVar4 + 1 < 0xff) {
                    uVar22 = uVar4 + 1;
                  }
                  if ((uVar17 & 1) == 0 && uVar21 == 0) {
LAB_00d0f15c:
                    if ((uVar26 & 0xff) != 0x80) {
                      uVar21 = 0;
                      uVar26 = uVar26 - 1;
                      goto LAB_00d0ef58;
                    }
                    goto LAB_00d0ee28;
                  }
                }
                uVar19 = uVar22 & 0xff;
                uVar21 = 1;
                uVar22 = (uVar17 & 1) << (ulong)(7 - uVar22 & 0x1f);
                if (((uint)(uVar19 < 8) & uVar17 & 1) == 0) {
                  uVar22 = 0;
                }
                uVar25 = uVar22 | uVar25;
                uVar22 = uVar23;
                if (uVar19 + 1 < 0xff) {
                  uVar22 = uVar19 + 1;
                }
              }
            }
LAB_00d0ef58:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar12 = uVar24 != 0x70;
            uVar24 = uVar17;
          } while (bVar12);
        }
        bVar13 = false;
        bVar12 = false;
        iVar20 = 0;
        iVar16 = 1;
        do {
          if (bVar12) {
            if (uVar17 - 0x3a < 0xfffffff6) {
              iVar14 = (int)(char)(iVar20 * iVar16);
              if ((((uint)(iVar20 * iVar16) >> 7 & 1) == 0) && ((uVar26 >> 7 & 1) == 0)) {
                uVar17 = iVar14 + uVar26;
                if (0x7e - (char)uVar26 <= iVar14) {
                  uVar17 = 0x7e;
                }
              }
              else if ((iVar14 < 0) && ((uVar26 >> 7 & 1) != 0)) {
                iVar16 = (char)uVar26 + 0x7e;
                uVar17 = iVar14 + uVar26;
                if (iVar16 == -iVar14 || iVar16 + iVar14 < 0 != SBORROW4(iVar16,-iVar14)) {
                  uVar17 = 0xffffff82;
                }
              }
              else {
                uVar17 = iVar14 + uVar26;
              }
              bVar13 = (uVar25 & 0xff) == 0;
              bVar12 = (bool)(bVar13 & (bVar1 ^ 1U));
              uVar26 = 0;
              if (!bVar12) {
                uVar26 = uVar17;
              }
              if (bVar1 == false && !bVar13) {
                uVar26 = uVar17 - 1;
              }
              uVar17 = (uint)(char)uVar26;
              uVar25 = uVar25 << (ulong)(byte)~(bVar1 | bVar13);
              if ((int)uVar17 < 1 && !bVar12) {
                uVar25 = uVar25 >> 1 | 0x80;
              }
              uVar22 = uVar25 >> 5 & 7;
              uVar25 = uVar17;
              if (((uVar26 >> 7 & 1) != 0) && (uVar26 = uVar22, !bVar12)) {
                do {
                  uVar22 = uVar26 >> 1;
                  uVar21 = 0;
                  if ((uVar26 & 0xfe) != 0) {
                    uVar21 = uVar17 + 1;
                  }
                  uVar25 = (int)(char)uVar21;
                } while (((uVar21 >> 7 & 1) != 0) &&
                        (uVar17 = uVar17 + 1, bVar1 = 1 < uVar26, uVar26 = uVar22, bVar1));
              }
              uVar17 = uVar25;
              if (0xe < (int)uVar25) {
                uVar17 = 0xf;
              }
              bVar5 = 0;
              if ((int)uVar25 < 0x10) {
                bVar5 = (byte)uVar22;
              }
              *param_2 = (HexFloat)(bVar5 | (iVar15 == 0x2d) << 7 | (byte)((uVar17 & 0xf) << 3));
              if (*(long *)(lVar10 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d0f2b0;
            }
LAB_00d0edb8:
            bVar12 = true;
            cVar2 = (char)iVar20;
            iVar20 = uVar17 + iVar20 * 10 + -0x30;
            if ((int)((-uVar17 - 0x52 & 0xff) / 10) <= (int)cVar2) {
              iVar20 = 0x7e;
            }
          }
          else {
            if ((uVar17 != 0x2d) && (uVar17 != 0x2b)) {
              if (0xfffffff5 < uVar17 - 0x3a) goto LAB_00d0edb8;
              goto LAB_00d0ee28;
            }
            if (bVar13) goto LAB_00d0ee28;
            bVar12 = false;
            iVar16 = 1;
            if (uVar17 == 0x2d) {
              iVar16 = -1;
            }
            bVar13 = true;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
    }
    local_6c = 0.0;
    ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              (param_1,iVar15 == 0x2d,(HexFloat *)&local_6c);
    if (local_6c == 448.0 || local_6c < 448.0 != NAN(local_6c)) {
      if (-448.0 <= local_6c) {
        lVar11 = -0xc;
        goto LAB_00d0ed3c;
      }
      goto LAB_00d0ed04;
    }
  }
  else {
    local_6c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_6c);
    fVar27 = local_6c;
    if (((*(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) & 5) != 0) &&
       (ABS(local_6c) == 0.0)) {
      fVar27 = 0.0;
    }
    if (ABS(local_6c) == INFINITY) {
      fVar27 = (float)((uint)fVar27 & 0x80000000 | 0x7f7fffff);
      std::__ndk1::ios_base::clear((uint)(param_1 + *(long *)(*(long *)param_1 + -0x18)));
    }
    if (fVar27 == 448.0 || fVar27 < 448.0 != NAN(fVar27)) {
      if (-448.0 <= fVar27) {
        lVar11 = -0x10;
LAB_00d0ed3c:
        HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
        ::
        castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
                  ((HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
                    *)(&stack0xffffffffffffffa0 + lVar11),param_2,0);
        if (*(long *)(lVar10 + 0x28) == local_68) {
          return param_1;
        }
        goto LAB_00d0f2b0;
      }
LAB_00d0ed04:
      std::__ndk1::ios_base::clear(iVar14 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
      *param_2 = (HexFloat)0xfe;
      if (*(long *)(lVar10 + 0x28) == local_68) {
        return param_1;
      }
      goto LAB_00d0f2b0;
    }
  }
  std::__ndk1::ios_base::clear(iVar14 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  *param_2 = (HexFloat)0x7e;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d0f2b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d0ee28:
  std::__ndk1::ios_base::clear(iVar14 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return param_1;
  }
  goto LAB_00d0f2b0;
}



// === ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>> @ 00d0f2b4 ===

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::ParseNormalFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> > >&) */

basic_istream *
spvtools::utils::
ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
          (basic_istream *param_1,bool param_2,HexFloat *param_3)

{
  float fVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2) {
    iVar3 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    if ((iVar3 == 0x2d) || (iVar3 == 0x2b)) {
      lVar6 = *(long *)param_1;
      *(undefined4 *)param_3 = 0;
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar6 + -0x18));
      if ((iVar3 - 0x2bU & 0xfffffffd) == 0) goto LAB_00d0f3cc;
    }
    local_4c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_4c);
    fVar4 = -local_4c;
  }
  else {
    local_4c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_4c);
    fVar4 = local_4c;
  }
  lVar6 = *(long *)param_1;
  *(float *)param_3 = fVar4;
  fVar1 = ABS(fVar4);
  if ((((byte)param_1[*(long *)(lVar6 + -0x18) + 0x20] & 5) != 0) && (fVar1 == 0.0)) {
    fVar4 = 0.0;
    *(undefined4 *)param_3 = 0;
  }
  if (fVar1 == INFINITY) {
    uVar5 = 0xff7fffff;
    if (!param_2 && -1 < (int)fVar4) {
      uVar5 = 0x7f7fffff;
    }
    *(undefined4 *)param_3 = uVar5;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar6 + -0x18));
  }
LAB_00d0f3cc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>> @ 00d0f3fc ===

/* void spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >
   >(spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >&,
   spvtools::utils::round_direction) */

void __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,byte *param_1,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte local_4c [4];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  *param_1 = 0;
  uVar3 = *(uint *)this;
  if ((uVar3 & 0x7fffffff) == 0) {
    if ((int)uVar3 < 0) {
      *param_1 = 0x80;
    }
  }
  else {
    local_4c[0] = 0;
    uVar6 = getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
                      (SUB84(this,0),param_3,local_4c);
    fVar4 = *(float *)this;
    uVar10 = (uint)fVar4 >> 0x17 & 0xff;
    if (uVar10 == 0) {
      if ((uVar3 >> 0x16 & 1) == 0) {
        if ((uVar3 >> 0x15 & 1) == 0) {
          if ((uVar3 >> 0x14 & 1) == 0) {
            if ((uVar3 >> 0x13 & 1) == 0) {
              if ((uVar3 >> 0x12 & 1) == 0) {
                if ((uVar3 >> 0x11 & 1) == 0) {
                  if ((uVar3 >> 0x10 & 1) == 0) {
                    if ((uVar3 >> 0xf & 1) == 0) {
                      if ((uVar3 >> 0xe & 1) == 0) {
                        if ((uVar3 >> 0xd & 1) == 0) {
                          if ((uVar3 >> 0xc & 1) == 0) {
                            if ((uVar3 >> 0xb & 1) == 0) {
                              if ((uVar3 >> 10 & 1) == 0) {
                                if ((uVar3 >> 9 & 1) == 0) {
                                  if ((uVar3 >> 8 & 1) == 0) {
                                    if ((uVar3 >> 7 & 1) == 0) {
                                      if ((uVar3 >> 6 & 1) == 0) {
                                        if ((uVar3 >> 5 & 1) == 0) {
                                          if ((uVar3 >> 4 & 1) == 0) {
                                            if ((uVar3 >> 3 & 1) == 0) {
                                              if ((uVar3 >> 2 & 1) == 0) {
                                                uVar10 = 0xffffff6b;
                                                if ((uVar3 & 2) != 0) {
                                                  uVar10 = 0xffffff6c;
                                                }
                                              }
                                              else {
                                                uVar10 = 0xffffff6d;
                                              }
                                            }
                                            else {
                                              uVar10 = 0xffffff6e;
                                            }
                                          }
                                          else {
                                            uVar10 = 0xffffff6f;
                                          }
                                        }
                                        else {
                                          uVar10 = 0xffffff70;
                                        }
                                      }
                                      else {
                                        uVar10 = 0xffffff71;
                                      }
                                    }
                                    else {
                                      uVar10 = 0xffffff72;
                                    }
                                  }
                                  else {
                                    uVar10 = 0xffffff73;
                                  }
                                }
                                else {
                                  uVar10 = 0xffffff74;
                                }
                              }
                              else {
                                uVar10 = 0xffffff75;
                              }
                            }
                            else {
                              uVar10 = 0xffffff76;
                            }
                          }
                          else {
                            uVar10 = 0xffffff77;
                          }
                        }
                        else {
                          uVar10 = 0xffffff78;
                        }
                      }
                      else {
                        uVar10 = 0xffffff79;
                      }
                    }
                    else {
                      uVar10 = 0xffffff7a;
                    }
                  }
                  else {
                    uVar10 = 0xffffff7b;
                  }
                }
                else {
                  uVar10 = 0xffffff7c;
                }
              }
              else {
                uVar10 = 0xffffff7d;
              }
            }
            else {
              uVar10 = 0xffffff7e;
            }
          }
          else {
            uVar10 = 0xffffff7f;
          }
        }
        else {
          uVar10 = 0xffffff80;
        }
      }
      else {
        uVar10 = 0xffffff81;
      }
    }
    else {
      uVar10 = uVar10 - 0x7f;
    }
    if (NAN(fVar4)) {
      bVar9 = 0x7f;
      if ((int)uVar3 < 0) {
        bVar9 = 0xff;
      }
    }
    else {
      bVar9 = (byte)(uVar3 >> 0x18);
      if ((ABS(fVar4) == INFINITY) || (7 < (int)(uVar10 + local_4c[0]))) {
        bVar9 = bVar9 & 0x80 | 0x7e;
      }
      else {
        uVar3 = (uint)(char)uVar10;
        iVar7 = 2;
        if ((int)fVar4 < 0) {
          iVar7 = 3;
        }
        uVar8 = uVar6;
        if (uVar3 == 0xfffffff9 || (int)(uVar3 + 7) < 0 != SCARRY4(uVar3,7)) {
          uVar8 = (uVar6 & 0xfe) >> 1 | 4;
        }
        uVar11 = uVar3;
        if (uVar3 == 0xfffffff8 || (int)(uVar3 + 8) < 0 != SCARRY4(uVar3,8)) {
          do {
            uVar11 = uVar10 & 0xff;
            uVar8 = uVar8 >> 1 & 0x7f;
            uVar10 = uVar10 + 1;
          } while (uVar11 < 0xf8);
          uVar11 = 0xf9;
        }
        bVar2 = (byte)uVar8;
        if (param_3 == iVar7) {
          bVar2 = 1;
        }
        bVar1 = (byte)uVar8;
        if ((((uVar3 == 0xfffffff9 || (int)(uVar3 + 7) < 0 != SCARRY4(uVar3,7)) ||
             (uVar6 & 0xff) != 0) && (uVar8 & 0xff) == 0) && (uVar11 & 0xff) == 0xf9) {
          bVar1 = bVar2;
        }
        bVar9 = bVar9 & 0x80 | (char)uVar11 * '\b' + 0x38U & 0x7f | bVar1 & 7;
      }
    }
    *param_1 = bVar9;
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>> @ 00d0f684 ===

/* spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> >
   >::uint_type spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3> > >
   >(spvtools::utils::round_direction, bool*) */

uint __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E4M3>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,int param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*PTR_last_significant_bit_00d6ce40 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_last_significant_bit_00d6ce40), iVar3 != 0)) {
    *(undefined4 *)PTR_last_significant_bit_00d6ce58 = 0x100000;
    __cxa_guard_release(PTR_last_significant_bit_00d6ce40);
  }
  if (((*PTR_first_rounded_bit_00d6ce48 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_first_rounded_bit_00d6ce48), iVar3 != 0)) {
    *(undefined4 *)PTR_first_rounded_bit_00d6ce50 = 0x80000;
    __cxa_guard_release(PTR_first_rounded_bit_00d6ce48);
  }
  uVar1 = *(uint *)this;
  *param_3 = 0;
  uVar4 = uVar1;
  if (((uVar1 & 0x7fffffff) != 0) && ((uVar1 & 0x7f800000) == 0)) {
    iVar3 = -0x76 - (int)LZCOUNT(uVar1 & 0x3fffff);
    if ((uVar1 & 0x400000) != 0) {
      iVar3 = -0x7f;
    }
    iVar3 = iVar3 + 0x7e;
    do {
      uVar4 = uVar4 << 1;
      bVar2 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  uVar5 = uVar4 & 0x7fffff;
  if ((uVar4 & 0xfffff) != 0) {
    if (param_2 == 1) {
      if (((*(uint *)PTR_first_rounded_bit_00d6ce50 & uVar5) == 0) ||
         (((uVar4 & 0xfffff & (*(uint *)PTR_first_rounded_bit_00d6ce50 ^ 0xffffffff)) == 0 &&
          ((*(uint *)PTR_last_significant_bit_00d6ce58 & uVar5) == 0)))) goto LAB_00d0f728;
    }
    else if (param_2 == 3) {
      if (-1 < (int)uVar1) goto LAB_00d0f728;
    }
    else if ((param_2 != 2) || ((int)uVar1 < 0)) goto LAB_00d0f728;
    uVar5 = *(int *)PTR_last_significant_bit_00d6ce58 + uVar5;
    if ((uVar5 >> 0x17 & 1) != 0) {
      *param_3 = 1;
      return (uVar5 >> 1 & 0xffbfffff) >> 0x14;
    }
  }
LAB_00d0f728:
  return uVar5 >> 0x14;
}



// === operator>> @ 00d0f85c ===

/* WARNING: Removing unreachable block (ram,0x00d0fbdc) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >&)
    */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  HexFloat HVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float local_6c;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  *param_2 = (HexFloat)0x0;
  if (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar15 - 9U < 5 || (iVar15 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  if ((iVar15 == 0x2d) || (iVar15 == 0x30)) {
    iVar16 = iVar15;
    if (iVar15 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar16 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar16 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar17 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar17 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar26 = 0;
        uVar25 = 0;
        uVar23 = 0;
        uVar27 = 0xf;
        bVar1 = false;
        do {
          if (uVar17 == 0x2e) {
            bVar13 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar17 == 0x70) {
              bVar13 = false;
              bVar14 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            iVar16 = 0x1e4106;
            if ((uVar17 - 0x3a < 0xfffffff6) && ((uVar17 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d0fda8;
            pvVar18 = memchr("0123456789",uVar17,0xb);
            uVar22 = 0xff;
            if (pvVar18 == (void *)0x0) {
              pvVar18 = memchr("abcdef",uVar17,7);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1b524b;
                pvVar18 = memchr("ABCDEF",uVar17,7);
                if (pvVar18 != (void *)0x0) goto LAB_00d0fa88;
                uVar17 = 0;
                uVar20 = 0;
              }
              else {
LAB_00d0fa88:
                uVar17 = ((int)pvVar18 - iVar16) + 10;
                uVar20 = uVar17 >> 3 & 1;
              }
              if (uVar25 == 0) goto LAB_00d0fa2c;
LAB_00d0fa98:
              if ((uVar27 & 0xff) == 0x7f) goto LAB_00d0fda8;
              uVar24 = uVar23 & 0xff;
              uVar27 = uVar27 + 1;
              uVar5 = 7 - uVar23;
              uVar23 = uVar22;
              if (uVar24 + 1 < 0xff) {
                uVar23 = uVar24 + 1;
              }
              uVar5 = uVar20 << (ulong)(uVar5 & 0x1f);
              if ((uVar24 < 8 & uVar20) == 0) {
                uVar5 = 0;
              }
              uVar26 = uVar5 | uVar26;
              uVar20 = uVar20 | uVar25;
              uVar25 = uVar17 >> 2 & 1;
              if (uVar20 == 0) goto LAB_00d0fa3c;
LAB_00d0fae4:
              if ((uVar27 & 0xff) == 0x7f) goto LAB_00d0fda8;
              uVar24 = uVar23 & 0xff;
              uVar27 = uVar27 + 1;
              uVar5 = 7 - uVar23;
              uVar23 = uVar22;
              if (uVar24 + 1 < 0xff) {
                uVar23 = uVar24 + 1;
              }
              uVar5 = uVar25 << (ulong)(uVar5 & 0x1f);
              if ((uVar24 < 8 & uVar25) == 0) {
                uVar5 = 0;
              }
              uVar26 = uVar5 | uVar26;
              uVar25 = uVar25 | uVar20;
              uVar20 = uVar17 >> 1 & 1;
              if (uVar25 == 0) goto LAB_00d0fa48;
LAB_00d0fb2c:
              if ((uVar27 & 0xff) == 0x7f) goto LAB_00d0fda8;
              uVar24 = uVar23 & 0xff;
              uVar27 = uVar27 + 1;
              uVar5 = 7 - uVar23;
              uVar23 = uVar22;
              if (uVar24 + 1 < 0xff) {
                uVar23 = uVar24 + 1;
              }
              uVar5 = uVar20 << (ulong)(uVar5 & 0x1f);
              if ((uVar24 < 8 & uVar20) == 0) {
                uVar5 = 0;
              }
              uVar26 = uVar5 | uVar26;
              uVar20 = uVar20 | uVar25;
            }
            else {
              uVar17 = (int)pvVar18 - 0x14d070;
              uVar20 = uVar17 >> 3 & 1;
              if (uVar25 != 0) goto LAB_00d0fa98;
LAB_00d0fa2c:
              uVar20 = uVar20 | uVar25;
              uVar25 = uVar17 >> 2 & 1;
              if (uVar20 != 0) goto LAB_00d0fae4;
LAB_00d0fa3c:
              uVar25 = uVar25 | uVar20;
              uVar20 = uVar17 >> 1 & 1;
              if (uVar25 != 0) goto LAB_00d0fb2c;
LAB_00d0fa48:
              uVar20 = uVar20 | uVar25;
            }
            uVar25 = uVar17 & 1;
            if (uVar20 != 0) {
              if ((uVar27 & 0xff) == 0x7f) goto LAB_00d0fda8;
              uVar17 = uVar23 & 0xff;
              uVar27 = uVar27 + 1;
              if (uVar17 + 1 < 0xff) {
                uVar22 = uVar17 + 1;
              }
              uVar23 = uVar25 << (ulong)(7 - uVar23 & 0x1f);
              if ((uVar17 < 8 & uVar25) == 0) {
                uVar23 = 0;
              }
              uVar26 = uVar23 | uVar26;
              uVar23 = uVar22;
            }
            bVar13 = false;
            uVar25 = uVar25 | uVar20;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar14 = false;
        } while (!bVar13);
        if (!bVar14 && bVar13) {
          uVar25 = 0;
          uVar22 = uVar17;
          do {
            if (uVar22 != 0x70) {
              if ((uVar22 - 0x3a < 0xfffffff6) && ((uVar22 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d0fda8;
              pvVar18 = memchr("0123456789",uVar22,0xb);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1e4106;
                pvVar18 = memchr("abcdef",uVar22,7);
                if (pvVar18 == (void *)0x0) {
                  iVar16 = 0x1b524b;
                  pvVar18 = memchr("ABCDEF",uVar22,7);
                  if (pvVar18 == (void *)0x0) {
                    uVar17 = 0;
                    goto joined_r0x00d0ffa4;
                  }
                }
                uVar17 = ((int)pvVar18 - iVar16) + 10;
              }
              else {
                uVar17 = (int)pvVar18 - 0x14d070;
              }
joined_r0x00d0ffa4:
              uVar25 = uVar25 | uVar17 >> 3 & 1;
              uVar20 = uVar17 >> 3 & 1;
              if (bVar1) {
                uVar24 = uVar23 & 0xff;
                uVar10 = uVar17 >> 1 & 1;
                uVar5 = uVar20 << (ulong)(7 - uVar23 & 0x1f);
                uVar11 = uVar17 >> 2 & 1;
                if ((uVar24 < 8 & uVar20) == 0) {
                  uVar5 = 0;
                }
                uVar17 = uVar17 & 1;
                uVar23 = 0xff;
                if (uVar24 + 1 < 0xff) {
                  uVar23 = uVar24 + 1;
                }
                uVar7 = uVar11 << (ulong)(7 - uVar23 & 0x1f);
                uVar20 = uVar24 + 2;
                if ((uVar11 & uVar23 < 8) == 0) {
                  uVar7 = 0;
                }
                if (0xfe < uVar20) {
                  uVar20 = 0xff;
                }
                uVar8 = uVar10 << (ulong)(7 - uVar20 & 0x1f);
                uVar3 = uVar24 + 3;
                uVar23 = uVar24 + 4;
                if ((uVar10 & uVar20 < 8) == 0) {
                  uVar8 = 0;
                }
                if (0xfe < uVar3) {
                  uVar3 = 0xff;
                }
                uVar20 = uVar17 << (ulong)(7 - uVar3 & 0x1f);
                if ((uVar17 & uVar3 < 8) == 0) {
                  uVar20 = 0;
                }
                uVar25 = uVar17 | uVar10 | uVar11 | uVar25;
                if (0xfe < uVar23) {
                  uVar23 = 0xff;
                }
                uVar26 = uVar5 | uVar7 | uVar8 | uVar20 | uVar26;
              }
              else {
                uVar24 = 0xff;
                if (uVar25 == 0) {
                  if ((uVar27 & 0xff) == 0x80) goto LAB_00d0fda8;
                  uVar27 = uVar27 - 1;
                  uVar20 = uVar17 >> 2 & 1;
                  uVar25 = uVar20;
                  if (uVar20 != 0) goto LAB_00d0ffe4;
LAB_00d100a4:
                  if ((uVar27 & 0xff) == 0x80) goto LAB_00d0fda8;
                  uVar27 = uVar27 - 1;
                  uVar20 = uVar17 >> 1 & 1;
                  uVar25 = uVar20 | uVar25;
                  if (uVar25 != 0) goto LAB_00d1001c;
LAB_00d100c0:
                  if ((uVar27 & 0xff) == 0x80) goto LAB_00d0fda8;
                  uVar27 = uVar27 - 1;
                  if ((uVar17 & 1) == 0 && uVar25 == 0) goto LAB_00d100dc;
                }
                else {
                  uVar5 = uVar23 & 0xff;
                  uVar23 = uVar20 << (ulong)(7 - uVar23 & 0x1f);
                  if ((uVar5 < 8 & uVar20) == 0) {
                    uVar23 = 0;
                  }
                  uVar26 = uVar23 | uVar26;
                  uVar23 = uVar24;
                  if (uVar5 + 1 < 0xff) {
                    uVar23 = uVar5 + 1;
                  }
                  uVar20 = uVar17 >> 2 & 1;
                  uVar25 = uVar20 | uVar25;
                  if (uVar25 == 0) goto LAB_00d100a4;
LAB_00d0ffe4:
                  uVar5 = uVar23 & 0xff;
                  uVar23 = uVar20 << (ulong)(7 - uVar23 & 0x1f);
                  if ((uVar5 < 8 & uVar20) == 0) {
                    uVar23 = 0;
                  }
                  uVar26 = uVar23 | uVar26;
                  uVar23 = uVar24;
                  if (uVar5 + 1 < 0xff) {
                    uVar23 = uVar5 + 1;
                  }
                  uVar20 = uVar17 >> 1 & 1;
                  uVar25 = uVar20 | uVar25;
                  if (uVar25 == 0) goto LAB_00d100c0;
LAB_00d1001c:
                  uVar5 = uVar23 & 0xff;
                  uVar23 = uVar20 << (ulong)(7 - uVar23 & 0x1f);
                  if ((uVar5 < 8 & uVar20) == 0) {
                    uVar23 = 0;
                  }
                  uVar26 = uVar23 | uVar26;
                  uVar23 = uVar24;
                  if (uVar5 + 1 < 0xff) {
                    uVar23 = uVar5 + 1;
                  }
                  if ((uVar17 & 1) == 0 && uVar25 == 0) {
LAB_00d100dc:
                    if ((uVar27 & 0xff) != 0x80) {
                      uVar25 = 0;
                      uVar27 = uVar27 - 1;
                      goto LAB_00d0fed8;
                    }
                    goto LAB_00d0fda8;
                  }
                }
                uVar20 = uVar23 & 0xff;
                uVar25 = 1;
                uVar23 = (uVar17 & 1) << (ulong)(7 - uVar23 & 0x1f);
                if (((uint)(uVar20 < 8) & uVar17 & 1) == 0) {
                  uVar23 = 0;
                }
                uVar26 = uVar23 | uVar26;
                uVar23 = uVar24;
                if (uVar20 + 1 < 0xff) {
                  uVar23 = uVar20 + 1;
                }
              }
            }
LAB_00d0fed8:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar13 = uVar22 != 0x70;
            uVar22 = uVar17;
          } while (bVar13);
        }
        bVar14 = false;
        bVar13 = false;
        iVar21 = 0;
        iVar16 = 1;
        do {
          if (bVar13) {
            if (uVar17 - 0x3a < 0xfffffff6) {
              iVar9 = (int)(char)(iVar21 * iVar16);
              if ((((uint)(iVar21 * iVar16) >> 7 & 1) == 0) && ((uVar27 >> 7 & 1) == 0)) {
                uVar17 = iVar9 + uVar27;
                if (0x7e - (char)uVar27 <= iVar9) {
                  uVar17 = 0x7e;
                }
              }
              else if ((iVar9 < 0) && ((uVar27 >> 7 & 1) != 0)) {
                iVar16 = (char)uVar27 + 0x7e;
                uVar17 = iVar9 + uVar27;
                if (iVar16 == -iVar9 || iVar16 + iVar9 < 0 != SBORROW4(iVar16,-iVar9)) {
                  uVar17 = 0xffffff82;
                }
              }
              else {
                uVar17 = iVar9 + uVar27;
              }
              bVar14 = (uVar26 & 0xff) == 0;
              bVar13 = (bool)(bVar14 & (bVar1 ^ 1U));
              uVar27 = 0;
              if (!bVar13) {
                uVar27 = uVar17;
              }
              if (bVar1 == false && !bVar14) {
                uVar27 = uVar17 - 1;
              }
              uVar17 = (uint)(char)uVar27;
              uVar26 = uVar26 << (ulong)(byte)~(bVar1 | bVar14);
              if ((int)uVar17 < 1 && !bVar13) {
                uVar26 = uVar26 >> 1 | 0x80;
              }
              uVar23 = uVar26 >> 6 & 3;
              uVar26 = uVar17;
              if (((uVar27 >> 7 & 1) != 0) && (uVar27 = uVar23, !bVar13)) {
                do {
                  uVar23 = uVar27 >> 1;
                  uVar25 = 0;
                  if ((uVar27 & 0xfe) != 0) {
                    uVar25 = uVar17 + 1;
                  }
                  uVar26 = (int)(char)uVar25;
                } while (((uVar25 >> 7 & 1) != 0) &&
                        (uVar17 = uVar17 + 1, bVar1 = 1 < uVar27, uVar27 = uVar23, bVar1));
              }
              uVar17 = uVar26;
              if (0x1e < (int)uVar26) {
                uVar17 = 0x1f;
              }
              bVar6 = 0;
              if ((int)uVar26 < 0x20) {
                bVar6 = (byte)uVar23;
              }
              *param_2 = (HexFloat)(bVar6 | (iVar15 == 0x2d) << 7 | (byte)((uVar17 & 0x1f) << 2));
              if (*(long *)(lVar12 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d0fcf0;
            }
LAB_00d0fd38:
            bVar13 = true;
            cVar2 = (char)iVar21;
            iVar21 = uVar17 + iVar21 * 10 + -0x30;
            if ((int)((-uVar17 - 0x52 & 0xff) / 10) <= (int)cVar2) {
              iVar21 = 0x7e;
            }
          }
          else {
            if ((uVar17 != 0x2d) && (uVar17 != 0x2b)) {
              if (0xfffffff5 < uVar17 - 0x3a) goto LAB_00d0fd38;
              goto LAB_00d0fda8;
            }
            if (bVar14) goto LAB_00d0fda8;
            bVar13 = false;
            iVar16 = 1;
            if (uVar17 == 0x2d) {
              iVar16 = -1;
            }
            bVar14 = true;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
    }
    local_6c = 0.0;
    ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              (param_1,iVar15 == 0x2d,(HexFloat *)&local_6c);
  }
  else {
    local_6c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_6c);
    fVar4 = ABS(local_6c);
    if (((*(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) & 5) != 0) &&
       (fVar4 == 0.0)) {
      local_6c = 0.0;
    }
    if (fVar4 == INFINITY) {
      local_6c = (float)((uint)local_6c & 0x80000000 | 0x7f7fffff);
      std::__ndk1::ios_base::clear((uint)(param_1 + *(long *)(*(long *)param_1 + -0x18)));
    }
  }
  HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
  ::
  castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
            ((HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              *)&local_6c,param_2,0);
  if (((byte)*param_2 & 0x7f) == 0x7c) {
    HVar19 = (HexFloat)0x4;
    if (-1 < (char)*param_2) {
      HVar19 = (HexFloat)0x7b;
    }
    *param_2 = HVar19;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    if (*(long *)(lVar12 + 0x28) == local_68) {
      return param_1;
    }
    goto LAB_00d0fcf0;
  }
LAB_00d0fdc4:
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d0fcf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d0fda8:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  goto LAB_00d0fdc4;
}



// === castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>> @ 00d10234 ===

/* void spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >
   >(spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >&,
   spvtools::utils::round_direction) */

void __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,byte *param_1,int param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte local_4c [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  uVar1 = *(uint *)this;
  if ((uVar1 & 0x7fffffff) == 0) {
    if ((int)uVar1 < 0) {
      *param_1 = 0x80;
    }
  }
  else {
    local_4c[0] = 0;
    uVar5 = getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
                      (SUB84(this,0),param_3,local_4c);
    fVar2 = *(float *)this;
    uVar9 = (uint)fVar2 >> 0x17 & 0xff;
    if (uVar9 == 0) {
      if ((uVar1 >> 0x16 & 1) == 0) {
        if ((uVar1 >> 0x15 & 1) == 0) {
          if ((uVar1 >> 0x14 & 1) == 0) {
            if ((uVar1 >> 0x13 & 1) == 0) {
              if ((uVar1 >> 0x12 & 1) == 0) {
                if ((uVar1 >> 0x11 & 1) == 0) {
                  if ((uVar1 >> 0x10 & 1) == 0) {
                    if ((uVar1 >> 0xf & 1) == 0) {
                      if ((uVar1 >> 0xe & 1) == 0) {
                        if ((uVar1 >> 0xd & 1) == 0) {
                          if ((uVar1 >> 0xc & 1) == 0) {
                            if ((uVar1 >> 0xb & 1) == 0) {
                              if ((uVar1 >> 10 & 1) == 0) {
                                if ((uVar1 >> 9 & 1) == 0) {
                                  if ((uVar1 >> 8 & 1) == 0) {
                                    if ((uVar1 >> 7 & 1) == 0) {
                                      if ((uVar1 >> 6 & 1) == 0) {
                                        if ((uVar1 >> 5 & 1) == 0) {
                                          if ((uVar1 >> 4 & 1) == 0) {
                                            if ((uVar1 >> 3 & 1) == 0) {
                                              if ((uVar1 >> 2 & 1) == 0) {
                                                uVar9 = 0xffffff6b;
                                                if ((uVar1 & 2) != 0) {
                                                  uVar9 = 0xffffff6c;
                                                }
                                              }
                                              else {
                                                uVar9 = 0xffffff6d;
                                              }
                                            }
                                            else {
                                              uVar9 = 0xffffff6e;
                                            }
                                          }
                                          else {
                                            uVar9 = 0xffffff6f;
                                          }
                                        }
                                        else {
                                          uVar9 = 0xffffff70;
                                        }
                                      }
                                      else {
                                        uVar9 = 0xffffff71;
                                      }
                                    }
                                    else {
                                      uVar9 = 0xffffff72;
                                    }
                                  }
                                  else {
                                    uVar9 = 0xffffff73;
                                  }
                                }
                                else {
                                  uVar9 = 0xffffff74;
                                }
                              }
                              else {
                                uVar9 = 0xffffff75;
                              }
                            }
                            else {
                              uVar9 = 0xffffff76;
                            }
                          }
                          else {
                            uVar9 = 0xffffff77;
                          }
                        }
                        else {
                          uVar9 = 0xffffff78;
                        }
                      }
                      else {
                        uVar9 = 0xffffff79;
                      }
                    }
                    else {
                      uVar9 = 0xffffff7a;
                    }
                  }
                  else {
                    uVar9 = 0xffffff7b;
                  }
                }
                else {
                  uVar9 = 0xffffff7c;
                }
              }
              else {
                uVar9 = 0xffffff7d;
              }
            }
            else {
              uVar9 = 0xffffff7e;
            }
          }
          else {
            uVar9 = 0xffffff7f;
          }
        }
        else {
          uVar9 = 0xffffff80;
        }
      }
      else {
        uVar9 = 0xffffff81;
      }
    }
    else {
      uVar9 = uVar9 - 0x7f;
    }
    if (NAN(fVar2)) {
      bVar8 = (byte)(uVar1 >> 0x15) & 3;
      bVar11 = 0xfc;
      if (-1 < (int)uVar1) {
        bVar11 = 0x7c;
      }
      if ((uVar1 >> 0x15 & 2) == 0) {
        bVar8 = 1;
      }
      bVar8 = bVar8 | bVar11;
    }
    else if ((ABS(fVar2) == INFINITY) || (0xf < (int)(uVar9 + local_4c[0]))) {
      bVar8 = 0xfc;
      if (-1 < (int)uVar1) {
        bVar8 = 0x7c;
      }
    }
    else {
      uVar3 = (uint)(char)uVar9;
      iVar6 = 2;
      if ((int)fVar2 < 0) {
        iVar6 = 3;
      }
      uVar7 = uVar5;
      if (uVar3 == 0xfffffff1 || (int)(uVar3 + 0xf) < 0 != SCARRY4(uVar3,0xf)) {
        uVar7 = (uVar5 & 0xfe) >> 1 | 2;
      }
      uVar10 = uVar3;
      if (uVar3 == 0xfffffff0 || (int)(uVar3 + 0x10) < 0 != SCARRY4(uVar3,0x10)) {
        do {
          uVar10 = uVar9 & 0xff;
          uVar7 = uVar7 >> 1 & 0x7f;
          uVar9 = uVar9 + 1;
        } while (uVar10 < 0xf0);
        uVar10 = 0xf1;
      }
      bVar8 = (byte)uVar7;
      if (param_3 == iVar6) {
        bVar8 = 1;
      }
      bVar11 = (byte)uVar7;
      if ((((uVar3 == 0xfffffff1 || (int)(uVar3 + 0xf) < 0 != SCARRY4(uVar3,0xf)) ||
           (uVar5 & 0xff) != 0) && (uVar7 & 0xff) == 0) && (uVar10 & 0xff) == 0xf1) {
        bVar11 = bVar8;
      }
      bVar8 = (byte)(uVar1 >> 0x18) & 0x80 | (char)uVar10 * '\x04' + 0x3cU & 0x7f | bVar11 & 3;
    }
    *param_1 = bVar8;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>> @ 00d104d8 ===

/* spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> >
   >::uint_type spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2> > >
   >(spvtools::utils::round_direction, bool*) */

uint __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float8_E5M2>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,int param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*PTR_last_significant_bit_00d6ce60 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_last_significant_bit_00d6ce60), iVar3 != 0)) {
    *(undefined4 *)PTR_last_significant_bit_00d6ce78 = 0x200000;
    __cxa_guard_release(PTR_last_significant_bit_00d6ce60);
  }
  if (((*PTR_first_rounded_bit_00d6ce68 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_first_rounded_bit_00d6ce68), iVar3 != 0)) {
    *(undefined4 *)PTR_first_rounded_bit_00d6ce70 = 0x100000;
    __cxa_guard_release(PTR_first_rounded_bit_00d6ce68);
  }
  uVar1 = *(uint *)this;
  *param_3 = 0;
  uVar4 = uVar1;
  if (((uVar1 & 0x7fffffff) != 0) && ((uVar1 & 0x7f800000) == 0)) {
    iVar3 = -0x76 - (int)LZCOUNT(uVar1 & 0x3fffff);
    if ((uVar1 & 0x400000) != 0) {
      iVar3 = -0x7f;
    }
    iVar3 = iVar3 + 0x7e;
    do {
      uVar4 = uVar4 << 1;
      bVar2 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  uVar5 = uVar4 & 0x7fffff;
  if ((uVar4 & 0x1fffff) != 0) {
    if (param_2 == 1) {
      if (((*(uint *)PTR_first_rounded_bit_00d6ce70 & uVar5) == 0) ||
         (((uVar4 & 0x1fffff & (*(uint *)PTR_first_rounded_bit_00d6ce70 ^ 0xffffffff)) == 0 &&
          ((*(uint *)PTR_last_significant_bit_00d6ce78 & uVar5) == 0)))) goto LAB_00d1057c;
    }
    else if (param_2 == 3) {
      if (-1 < (int)uVar1) goto LAB_00d1057c;
    }
    else if ((param_2 != 2) || ((int)uVar1 < 0)) goto LAB_00d1057c;
    uVar5 = *(int *)PTR_last_significant_bit_00d6ce78 + uVar5;
    if ((uVar5 >> 0x17 & 1) != 0) {
      *param_3 = 1;
      return (uVar5 >> 1 & 0xffbfffff) >> 0x15;
    }
  }
LAB_00d1057c:
  return uVar5 >> 0x15;
}



// === operator>> @ 00d106b0 ===

/* WARNING: Removing unreachable block (ram,0x00d10a28) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >&) */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float local_6c;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  *(undefined2 *)param_2 = 0;
  if (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar15 - 9U < 5 || (iVar15 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  if ((iVar15 == 0x2d) || (iVar15 == 0x30)) {
    iVar16 = iVar15;
    if (iVar15 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar16 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar16 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar17 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar17 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar25 = 0;
        uVar24 = 0;
        uVar23 = 0;
        uVar26 = 0x7f;
        bVar1 = false;
        do {
          if (uVar17 == 0x2e) {
            bVar13 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar17 == 0x70) {
              bVar13 = false;
              bVar14 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            if ((uVar17 - 0x3a < 0xfffffff6) && ((uVar17 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d10bec;
            pvVar18 = memchr("0123456789",uVar17,0xb);
            uVar21 = 0xffff;
            if (pvVar18 == (void *)0x0) {
              iVar16 = 0x1e4106;
              pvVar18 = memchr("abcdef",uVar17,7);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1b524b;
                pvVar18 = memchr("ABCDEF",uVar17,7);
                if (pvVar18 != (void *)0x0) goto LAB_00d108e4;
                uVar17 = 0;
                uVar19 = 0;
              }
              else {
LAB_00d108e4:
                uVar17 = ((int)pvVar18 - iVar16) + 10;
                uVar19 = uVar17 >> 3 & 1;
              }
              if (uVar24 == 0) goto LAB_00d1087c;
LAB_00d108f4:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d10bec;
              uVar5 = uVar23 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar22 = 0xffff;
              if (uVar5 + 1 < 0xffff) {
                uVar22 = uVar5 + 1;
              }
              uVar23 = uVar19 << (ulong)(0xf - uVar23 & 0x1f);
              if ((uVar5 < 0x10 & uVar19) == 0) {
                uVar23 = 0;
              }
              uVar25 = uVar23 | uVar25;
              uVar19 = uVar19 | uVar24;
              uVar24 = uVar17 >> 2 & 1;
              if (uVar19 == 0) goto LAB_00d1088c;
LAB_00d1093c:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d10bec;
              uVar23 = uVar22 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar5 = 0xf - uVar22;
              uVar22 = uVar21;
              if (uVar23 + 1 < 0xffff) {
                uVar22 = uVar23 + 1;
              }
              uVar5 = uVar24 << (ulong)(uVar5 & 0x1f);
              if ((uVar23 < 0x10 & uVar24) == 0) {
                uVar5 = 0;
              }
              uVar25 = uVar5 | uVar25;
              uVar19 = uVar19 | uVar24;
              uVar24 = uVar17 >> 1 & 1;
              if (uVar19 == 0) goto LAB_00d10898;
LAB_00d10980:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d10bec;
              uVar5 = uVar22 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar23 = uVar21;
              if (uVar5 + 1 < 0xffff) {
                uVar23 = uVar5 + 1;
              }
              uVar22 = uVar24 << (ulong)(0xf - uVar22 & 0x1f);
              if ((uVar5 < 0x10 & uVar24) == 0) {
                uVar22 = 0;
              }
              uVar25 = uVar22 | uVar25;
              uVar19 = uVar19 | uVar24;
            }
            else {
              uVar17 = (int)pvVar18 - 0x14d070;
              uVar19 = uVar17 >> 3 & 1;
              if (uVar24 != 0) goto LAB_00d108f4;
LAB_00d1087c:
              uVar19 = uVar19 | uVar24;
              uVar24 = uVar17 >> 2 & 1;
              uVar22 = uVar23;
              if (uVar19 != 0) goto LAB_00d1093c;
LAB_00d1088c:
              uVar19 = uVar19 | uVar24;
              uVar24 = uVar17 >> 1 & 1;
              if (uVar19 != 0) goto LAB_00d10980;
LAB_00d10898:
              uVar19 = uVar19 | uVar24;
              uVar23 = uVar22;
            }
            uVar24 = uVar17 & 1;
            if (uVar19 != 0) {
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d10bec;
              uVar17 = uVar23 & 0xffff;
              uVar26 = uVar26 + 1;
              if (uVar17 + 1 < 0xffff) {
                uVar21 = uVar17 + 1;
              }
              uVar23 = uVar24 << (ulong)(0xf - uVar23 & 0x1f);
              if ((uVar17 < 0x10 & uVar24) == 0) {
                uVar23 = 0;
              }
              uVar25 = uVar23 | uVar25;
              uVar23 = uVar21;
            }
            bVar13 = false;
            uVar24 = uVar19 | uVar24;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar14 = false;
        } while (!bVar13);
        if (!bVar14 && bVar13) {
          uVar24 = 0;
          uVar21 = uVar17;
          do {
            if (uVar21 != 0x70) {
              if ((uVar21 - 0x3a < 0xfffffff6) && ((uVar21 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d10bec;
              pvVar18 = memchr("0123456789",uVar21,0xb);
              uVar17 = 0xffff;
              if (pvVar18 == (void *)0x0) {
                pvVar18 = memchr("abcdef",uVar21,7);
                if (pvVar18 == (void *)0x0) {
                  pvVar18 = memchr("ABCDEF",uVar21,7);
                  if (pvVar18 == (void *)0x0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = (int)pvVar18 - 0x1b5241;
                  }
                }
                else {
                  uVar19 = (int)pvVar18 - 0x1e40fc;
                }
              }
              else {
                uVar19 = (int)pvVar18 - 0x14d070;
              }
              uVar24 = uVar24 | uVar19 >> 3 & 1;
              uVar22 = uVar19 >> 3 & 1;
              if (bVar1) {
                uVar17 = uVar23 & 0xffff;
                uVar10 = uVar19 >> 1 & 1;
                uVar5 = uVar22 << (ulong)(0xf - uVar23 & 0x1f);
                uVar11 = uVar19 >> 2 & 1;
                if ((uVar17 < 0x10 & uVar22) == 0) {
                  uVar5 = 0;
                }
                uVar23 = 0xffff;
                uVar19 = uVar19 & 1;
                if (uVar17 + 1 < 0xffff) {
                  uVar23 = uVar17 + 1;
                }
                uVar7 = uVar11 << (ulong)(0xf - uVar23 & 0x1f);
                uVar22 = uVar17 + 2;
                if ((uVar11 & uVar23 < 0x10) == 0) {
                  uVar7 = 0;
                }
                if (0xfffe < uVar22) {
                  uVar22 = 0xffff;
                }
                uVar8 = uVar10 << (ulong)(0xf - uVar22 & 0x1f);
                uVar3 = uVar17 + 3;
                uVar23 = uVar17 + 4;
                if ((uVar10 & uVar22 < 0x10) == 0) {
                  uVar8 = 0;
                }
                if (0xfffe < uVar3) {
                  uVar3 = 0xffff;
                }
                uVar17 = uVar19 << (ulong)(0xf - uVar3 & 0x1f);
                if ((uVar19 & uVar3 < 0x10) == 0) {
                  uVar17 = 0;
                }
                uVar24 = uVar24 | uVar11 | uVar10 | uVar19;
                if (0xfffe < uVar23) {
                  uVar23 = 0xffff;
                }
                uVar25 = uVar5 | uVar7 | uVar8 | uVar17 | uVar25;
              }
              else {
                if (uVar24 == 0) {
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d10bec;
                  uVar26 = uVar26 - 1;
                  uVar22 = uVar19 >> 2 & 1;
                  uVar24 = uVar22;
                  if (uVar22 != 0) goto LAB_00d10e4c;
LAB_00d10f0c:
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d10bec;
                  uVar26 = uVar26 - 1;
                  uVar22 = uVar19 >> 1 & 1;
                  uVar24 = uVar24 | uVar22;
                  if (uVar24 != 0) goto LAB_00d10e84;
LAB_00d10f28:
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d10bec;
                  uVar26 = uVar26 - 1;
                  if (uVar24 == 0 && (uVar19 & 1) == 0) goto LAB_00d10f44;
                }
                else {
                  uVar5 = uVar23 & 0xffff;
                  uVar23 = uVar22 << (ulong)(0xf - uVar23 & 0x1f);
                  if ((uVar5 < 0x10 & uVar22) == 0) {
                    uVar23 = 0;
                  }
                  uVar25 = uVar23 | uVar25;
                  uVar23 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar23 = uVar5 + 1;
                  }
                  uVar22 = uVar19 >> 2 & 1;
                  uVar24 = uVar24 | uVar22;
                  if (uVar24 == 0) goto LAB_00d10f0c;
LAB_00d10e4c:
                  uVar5 = uVar23 & 0xffff;
                  uVar23 = uVar22 << (ulong)(0xf - uVar23 & 0x1f);
                  if ((uVar5 < 0x10 & uVar22) == 0) {
                    uVar23 = 0;
                  }
                  uVar25 = uVar23 | uVar25;
                  uVar23 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar23 = uVar5 + 1;
                  }
                  uVar22 = uVar19 >> 1 & 1;
                  uVar24 = uVar24 | uVar22;
                  if (uVar24 == 0) goto LAB_00d10f28;
LAB_00d10e84:
                  uVar5 = uVar23 & 0xffff;
                  uVar23 = uVar22 << (ulong)(0xf - uVar23 & 0x1f);
                  if ((uVar5 < 0x10 & uVar22) == 0) {
                    uVar23 = 0;
                  }
                  uVar25 = uVar23 | uVar25;
                  uVar23 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar23 = uVar5 + 1;
                  }
                  if (uVar24 == 0 && (uVar19 & 1) == 0) {
LAB_00d10f44:
                    if ((uVar26 & 0xffff) != 0x8000) {
                      uVar24 = 0;
                      uVar26 = uVar26 - 1;
                      goto LAB_00d10d18;
                    }
                    goto LAB_00d10bec;
                  }
                }
                uVar22 = uVar23 & 0xffff;
                uVar24 = 1;
                uVar23 = (uVar19 & 1) << (ulong)(0xf - uVar23 & 0x1f);
                if (((uint)(uVar22 < 0x10) & uVar19 & 1) == 0) {
                  uVar23 = 0;
                }
                uVar25 = uVar23 | uVar25;
                uVar23 = uVar17;
                if (uVar22 + 1 < 0xffff) {
                  uVar23 = uVar22 + 1;
                }
              }
            }
LAB_00d10d18:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar13 = uVar21 != 0x70;
            uVar21 = uVar17;
          } while (bVar13);
        }
        bVar14 = false;
        bVar13 = false;
        iVar16 = 0;
        cVar20 = '\x01';
        do {
          if (bVar13) {
            if (uVar17 - 0x3a < 0xfffffff6) {
              iVar9 = (int)(short)(iVar16 * cVar20);
              if ((((uint)(iVar16 * cVar20) >> 0xf & 1) == 0) && ((uVar26 >> 0xf & 1) == 0)) {
                uVar17 = iVar9 + uVar26;
                if (0x7ffe - (short)uVar26 <= iVar9) {
                  uVar17 = 0x7ffe;
                }
              }
              else if ((iVar9 < 0) && ((uVar26 >> 0xf & 1) != 0)) {
                iVar16 = (short)uVar26 + 0x7ffe;
                uVar17 = iVar9 + uVar26;
                if (iVar16 == -iVar9 || iVar16 + iVar9 < 0 != SBORROW4(iVar16,-iVar9)) {
                  uVar17 = 0xffff8002;
                }
              }
              else {
                uVar17 = iVar9 + uVar26;
              }
              bVar14 = (uVar25 & 0xffff) == 0;
              bVar13 = (bool)(bVar14 & (bVar1 ^ 1U));
              uVar26 = 0;
              if (!bVar13) {
                uVar26 = uVar17;
              }
              if (bVar1 == false && !bVar14) {
                uVar26 = uVar17 - 1;
              }
              uVar17 = (uint)(short)uVar26;
              uVar25 = uVar25 << (ulong)(byte)~(bVar1 | bVar14);
              if ((int)uVar17 < 1 && !bVar13) {
                uVar25 = uVar25 >> 1 | 0x8000;
              }
              uVar23 = uVar25 >> 9 & 0x7f;
              uVar25 = uVar17;
              if (((uVar26 >> 0xf & 1) != 0) && (uVar26 = uVar23, !bVar13)) {
                do {
                  uVar23 = uVar26 >> 1;
                  uVar24 = 0;
                  if ((uVar26 & 0xfffe) != 0) {
                    uVar24 = uVar17 + 1;
                  }
                  uVar25 = (int)(short)uVar24;
                } while (((uVar24 >> 0xf & 1) != 0) &&
                        (uVar17 = uVar17 + 1, bVar1 = 1 < uVar26, uVar26 = uVar23, bVar1));
              }
              uVar17 = uVar25;
              if (0xfe < (int)uVar25) {
                uVar17 = 0xff;
              }
              uVar6 = 0;
              if ((int)uVar25 < 0x100) {
                uVar6 = (ushort)uVar23;
              }
              *(ushort *)param_2 =
                   uVar6 | (ushort)(iVar15 == 0x2d) << 0xf | (ushort)((uVar17 & 0xff) << 7);
              if (*(long *)(lVar12 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d10b34;
            }
LAB_00d10b7c:
            bVar13 = true;
            sVar2 = (short)iVar16;
            iVar16 = uVar17 + iVar16 * 10 + -0x30;
            if ((int)((-uVar17 - 0x7fd2 & 0xffff) / 10) <= (int)sVar2) {
              iVar16 = 0x7ffe;
            }
          }
          else {
            if ((uVar17 != 0x2d) && (uVar17 != 0x2b)) {
              if (0xfffffff5 < uVar17 - 0x3a) goto LAB_00d10b7c;
              goto LAB_00d10bec;
            }
            if (bVar14) goto LAB_00d10bec;
            bVar13 = false;
            cVar20 = '\x01';
            if (uVar17 == 0x2d) {
              cVar20 = -1;
            }
            bVar14 = true;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
    }
    local_6c = 0.0;
    ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              (param_1,iVar15 == 0x2d,(HexFloat *)&local_6c);
  }
  else {
    local_6c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_6c);
    fVar4 = ABS(local_6c);
    if (((*(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) & 5) != 0) &&
       (fVar4 == 0.0)) {
      local_6c = 0.0;
    }
    if (fVar4 == INFINITY) {
      local_6c = (float)((uint)local_6c & 0x80000000 | 0x7f7fffff);
      std::__ndk1::ios_base::clear((uint)(param_1 + *(long *)(*(long *)param_1 + -0x18)));
    }
  }
  HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
  ::
  castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
            ((HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              *)&local_6c,param_2,0);
  if ((*(ushort *)param_2 & 0x7fff) == 0x7f80) {
    *(ushort *)param_2 = *(ushort *)param_2 & 0x8000 | 0x7f7f;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    if (*(long *)(lVar12 + 0x28) == local_68) {
      return param_1;
    }
    goto LAB_00d10b34;
  }
LAB_00d10c08:
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d10b34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d10bec:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  goto LAB_00d10c08;
}



// === castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>> @ 00d1109c ===

/* void spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >
   >(spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >&,
   spvtools::utils::round_direction) */

void __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,ushort *param_1,int param_3)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  byte local_4c [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar7 = *(uint *)this;
  *param_1 = 0;
  if ((uVar7 & 0x7fffffff) == 0) {
    if ((int)uVar7 < 0) {
      *param_1 = 0x8000;
    }
  }
  else {
    local_4c[0] = 0;
    uVar5 = getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
                      (SUB84(this,0),param_3,local_4c);
    fVar2 = *(float *)this;
    uVar9 = (uint)fVar2 >> 0x17 & 0xff;
    if (uVar9 == 0) {
      if ((uVar7 >> 0x16 & 1) == 0) {
        if ((uVar7 >> 0x15 & 1) == 0) {
          if ((uVar7 >> 0x14 & 1) == 0) {
            if ((uVar7 >> 0x13 & 1) == 0) {
              if ((uVar7 >> 0x12 & 1) == 0) {
                if ((uVar7 >> 0x11 & 1) == 0) {
                  if ((uVar7 >> 0x10 & 1) == 0) {
                    if ((uVar7 >> 0xf & 1) == 0) {
                      if ((uVar7 >> 0xe & 1) == 0) {
                        if ((uVar7 >> 0xd & 1) == 0) {
                          if ((uVar7 >> 0xc & 1) == 0) {
                            if ((uVar7 >> 0xb & 1) == 0) {
                              if ((uVar7 >> 10 & 1) == 0) {
                                if ((uVar7 >> 9 & 1) == 0) {
                                  if ((uVar7 >> 8 & 1) == 0) {
                                    if ((uVar7 >> 7 & 1) == 0) {
                                      if ((uVar7 >> 6 & 1) == 0) {
                                        if ((uVar7 >> 5 & 1) == 0) {
                                          if ((uVar7 >> 4 & 1) == 0) {
                                            if ((uVar7 >> 3 & 1) == 0) {
                                              if ((uVar7 >> 2 & 1) == 0) {
                                                uVar9 = 0xffffff6b;
                                                if ((uVar7 & 2) != 0) {
                                                  uVar9 = 0xffffff6c;
                                                }
                                              }
                                              else {
                                                uVar9 = 0xffffff6d;
                                              }
                                            }
                                            else {
                                              uVar9 = 0xffffff6e;
                                            }
                                          }
                                          else {
                                            uVar9 = 0xffffff6f;
                                          }
                                        }
                                        else {
                                          uVar9 = 0xffffff70;
                                        }
                                      }
                                      else {
                                        uVar9 = 0xffffff71;
                                      }
                                    }
                                    else {
                                      uVar9 = 0xffffff72;
                                    }
                                  }
                                  else {
                                    uVar9 = 0xffffff73;
                                  }
                                }
                                else {
                                  uVar9 = 0xffffff74;
                                }
                              }
                              else {
                                uVar9 = 0xffffff75;
                              }
                            }
                            else {
                              uVar9 = 0xffffff76;
                            }
                          }
                          else {
                            uVar9 = 0xffffff77;
                          }
                        }
                        else {
                          uVar9 = 0xffffff78;
                        }
                      }
                      else {
                        uVar9 = 0xffffff79;
                      }
                    }
                    else {
                      uVar9 = 0xffffff7a;
                    }
                  }
                  else {
                    uVar9 = 0xffffff7b;
                  }
                }
                else {
                  uVar9 = 0xffffff7c;
                }
              }
              else {
                uVar9 = 0xffffff7d;
              }
            }
            else {
              uVar9 = 0xffffff7e;
            }
          }
          else {
            uVar9 = 0xffffff7f;
          }
        }
        else {
          uVar9 = 0xffffff80;
        }
      }
      else {
        uVar9 = 0xffffff81;
      }
    }
    else {
      uVar9 = uVar9 - 0x7f;
    }
    uVar8 = (ushort)(uVar7 >> 0x10);
    if (NAN(fVar2)) {
      uVar8 = uVar8 & 0x7f;
      uVar10 = 0xff80;
      if (-1 < (int)uVar7) {
        uVar10 = 0x7f80;
      }
      if ((uVar7 >> 0x10 & 0x7e) == 0) {
        uVar8 = 1;
      }
      uVar8 = uVar8 | uVar10;
    }
    else if ((ABS(fVar2) == INFINITY) || (0x7f < (int)(uVar9 + local_4c[0]))) {
      uVar8 = 0xff80;
      if (-1 < (int)uVar7) {
        uVar8 = 0x7f80;
      }
    }
    else {
      iVar6 = 2;
      if ((int)fVar2 < 0) {
        iVar6 = 3;
      }
      uVar7 = uVar5;
      if (uVar9 == 0xffffff81 || (int)(uVar9 + 0x7f) < 0 != SCARRY4(uVar9,0x7f)) {
        uVar7 = (uVar5 & 0xfffe) >> 1 | 0x40;
      }
      uVar11 = uVar9;
      if (uVar9 == 0xffffff80 || (int)(uVar9 + 0x80) < 0 != SCARRY4(uVar9,0x80)) {
        do {
          uVar3 = uVar11 >> 7;
          uVar7 = uVar7 >> 1 & 0x7fff;
          uVar11 = uVar11 + 1;
        } while ((uVar3 & 0x1ff) < 0x1ff);
        uVar11 = 0xff81;
      }
      uVar10 = (ushort)uVar7;
      if (param_3 == iVar6) {
        uVar10 = 1;
      }
      uVar1 = (ushort)uVar7;
      if ((((uVar9 == 0xffffff81 || (int)(uVar9 + 0x7f) < 0 != SCARRY4(uVar9,0x7f)) ||
           (uVar5 & 0xffff) != 0) && (uVar7 & 0xffff) == 0) && (uVar11 & 0xffff) == 0xff81) {
        uVar1 = uVar10;
      }
      uVar8 = uVar8 & 0x8000 | (short)uVar11 * 0x80 + 0x3f80U & 0x7fff | uVar1 & 0x7f;
    }
    *param_1 = uVar8;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>> @ 00d11338 ===

/* spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> >
   >::uint_type spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16> > >
   >(spvtools::utils::round_direction, bool*) */

uint __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::BFloat16>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,int param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*PTR_last_significant_bit_00d6ce80 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_last_significant_bit_00d6ce80), iVar3 != 0)) {
    *(undefined4 *)PTR_last_significant_bit_00d6ce98 = 0x10000;
    __cxa_guard_release(PTR_last_significant_bit_00d6ce80);
  }
  if (((*PTR_first_rounded_bit_00d6ce88 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_first_rounded_bit_00d6ce88), iVar3 != 0)) {
    *(undefined4 *)PTR_first_rounded_bit_00d6ce90 = 0x8000;
    __cxa_guard_release(PTR_first_rounded_bit_00d6ce88);
  }
  uVar1 = *(uint *)this;
  *param_3 = 0;
  uVar4 = uVar1;
  if (((uVar1 & 0x7fffffff) != 0) && ((uVar1 & 0x7f800000) == 0)) {
    iVar3 = -0x76 - (int)LZCOUNT(uVar1 & 0x3fffff);
    if ((uVar1 & 0x400000) != 0) {
      iVar3 = -0x7f;
    }
    iVar3 = iVar3 + 0x7e;
    do {
      uVar4 = uVar4 << 1;
      bVar2 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  uVar5 = uVar4 & 0x7fffff;
  if ((uVar4 & 0xffff) != 0) {
    if (param_2 == 1) {
      if (((*(uint *)PTR_first_rounded_bit_00d6ce90 & uVar5) == 0) ||
         (((uVar4 & 0xffff & (*(uint *)PTR_first_rounded_bit_00d6ce90 ^ 0xffffffff)) == 0 &&
          ((*(uint *)PTR_last_significant_bit_00d6ce98 & uVar5) == 0)))) goto LAB_00d113dc;
    }
    else if (param_2 == 3) {
      if (-1 < (int)uVar1) goto LAB_00d113dc;
    }
    else if ((param_2 != 2) || ((int)uVar1 < 0)) goto LAB_00d113dc;
    uVar5 = *(int *)PTR_last_significant_bit_00d6ce98 + uVar5;
    if ((uVar5 >> 0x17 & 1) != 0) {
      *param_3 = 1;
      return (uVar5 >> 1 & 0xffbfffff) >> 0x10;
    }
  }
LAB_00d113dc:
  return uVar5 >> 0x10;
}



// === operator>> @ 00d11510 ===

/* WARNING: Removing unreachable block (ram,0x00d11888) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > >&) */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float local_6c;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  *(undefined2 *)param_2 = 0;
  if (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar15 - 9U < 5 || (iVar15 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar15 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  if ((iVar15 == 0x2d) || (iVar15 == 0x30)) {
    iVar16 = iVar15;
    if (iVar15 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar16 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar16 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar17 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar17 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar25 = 0;
        uVar22 = 0;
        uVar21 = 0;
        uVar26 = 0xf;
        bVar1 = false;
        do {
          if (uVar17 == 0x2e) {
            bVar13 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar17 == 0x70) {
              bVar13 = false;
              bVar14 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            if ((uVar17 - 0x3a < 0xfffffff6) && ((uVar17 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d11a54;
            pvVar18 = memchr("0123456789",uVar17,0xb);
            uVar23 = 0xffff;
            if (pvVar18 == (void *)0x0) {
              iVar16 = 0x1e4106;
              pvVar18 = memchr("abcdef",uVar17,7);
              if (pvVar18 == (void *)0x0) {
                iVar16 = 0x1b524b;
                pvVar18 = memchr("ABCDEF",uVar17,7);
                if (pvVar18 != (void *)0x0) goto LAB_00d11740;
                uVar17 = 0;
                uVar19 = 0;
              }
              else {
LAB_00d11740:
                uVar17 = ((int)pvVar18 - iVar16) + 10;
                uVar19 = uVar17 >> 3 & 1;
              }
              if (uVar22 == 0) goto LAB_00d116dc;
LAB_00d11754:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d11a54;
              uVar5 = uVar21 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar24 = 0xffff;
              if (uVar5 + 1 < 0xffff) {
                uVar24 = uVar5 + 1;
              }
              uVar21 = uVar19 << (ulong)(0xf - uVar21 & 0x1f);
              if ((uVar5 < 0x10 & uVar19) == 0) {
                uVar21 = 0;
              }
              uVar25 = uVar21 | uVar25;
              uVar19 = uVar19 | uVar22;
              uVar22 = uVar17 >> 2 & 1;
              if (uVar19 == 0) goto LAB_00d116ec;
LAB_00d1179c:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d11a54;
              uVar21 = uVar24 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar5 = 0xf - uVar24;
              uVar24 = uVar23;
              if (uVar21 + 1 < 0xffff) {
                uVar24 = uVar21 + 1;
              }
              uVar5 = uVar22 << (ulong)(uVar5 & 0x1f);
              if ((uVar21 < 0x10 & uVar22) == 0) {
                uVar5 = 0;
              }
              uVar25 = uVar5 | uVar25;
              uVar19 = uVar19 | uVar22;
              uVar22 = uVar17 >> 1 & 1;
              if (uVar19 == 0) goto LAB_00d116f8;
LAB_00d117e0:
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d11a54;
              uVar5 = uVar24 & 0xffff;
              uVar26 = uVar26 + 1;
              uVar21 = uVar23;
              if (uVar5 + 1 < 0xffff) {
                uVar21 = uVar5 + 1;
              }
              uVar24 = uVar22 << (ulong)(0xf - uVar24 & 0x1f);
              if ((uVar5 < 0x10 & uVar22) == 0) {
                uVar24 = 0;
              }
              uVar25 = uVar24 | uVar25;
              uVar19 = uVar19 | uVar22;
            }
            else {
              uVar17 = (int)pvVar18 - 0x14d070;
              uVar19 = uVar17 >> 3 & 1;
              if (uVar22 != 0) goto LAB_00d11754;
LAB_00d116dc:
              uVar19 = uVar19 | uVar22;
              uVar22 = uVar17 >> 2 & 1;
              uVar24 = uVar21;
              if (uVar19 != 0) goto LAB_00d1179c;
LAB_00d116ec:
              uVar19 = uVar19 | uVar22;
              uVar22 = uVar17 >> 1 & 1;
              if (uVar19 != 0) goto LAB_00d117e0;
LAB_00d116f8:
              uVar19 = uVar19 | uVar22;
              uVar21 = uVar24;
            }
            uVar22 = uVar17 & 1;
            if (uVar19 != 0) {
              if ((uVar26 & 0xffff) == 0x7fff) goto LAB_00d11a54;
              uVar17 = uVar21 & 0xffff;
              uVar26 = uVar26 + 1;
              if (uVar17 + 1 < 0xffff) {
                uVar23 = uVar17 + 1;
              }
              uVar21 = uVar22 << (ulong)(0xf - uVar21 & 0x1f);
              if ((uVar17 < 0x10 & uVar22) == 0) {
                uVar21 = 0;
              }
              uVar25 = uVar21 | uVar25;
              uVar21 = uVar23;
            }
            bVar13 = false;
            uVar22 = uVar19 | uVar22;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar14 = false;
        } while (!bVar13);
        if (!bVar14 && bVar13) {
          uVar22 = 0;
          uVar23 = uVar17;
          do {
            if (uVar23 != 0x70) {
              if ((uVar23 - 0x3a < 0xfffffff6) && ((uVar23 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d11a54;
              pvVar18 = memchr("0123456789",uVar23,0xb);
              uVar17 = 0xffff;
              if (pvVar18 == (void *)0x0) {
                pvVar18 = memchr("abcdef",uVar23,7);
                if (pvVar18 == (void *)0x0) {
                  pvVar18 = memchr("ABCDEF",uVar23,7);
                  if (pvVar18 == (void *)0x0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = (int)pvVar18 - 0x1b5241;
                  }
                }
                else {
                  uVar19 = (int)pvVar18 - 0x1e40fc;
                }
              }
              else {
                uVar19 = (int)pvVar18 - 0x14d070;
              }
              uVar22 = uVar22 | uVar19 >> 3 & 1;
              uVar24 = uVar19 >> 3 & 1;
              if (bVar1) {
                uVar17 = uVar21 & 0xffff;
                uVar10 = uVar19 >> 1 & 1;
                uVar5 = uVar24 << (ulong)(0xf - uVar21 & 0x1f);
                uVar11 = uVar19 >> 2 & 1;
                if ((uVar17 < 0x10 & uVar24) == 0) {
                  uVar5 = 0;
                }
                uVar21 = 0xffff;
                uVar19 = uVar19 & 1;
                if (uVar17 + 1 < 0xffff) {
                  uVar21 = uVar17 + 1;
                }
                uVar7 = uVar11 << (ulong)(0xf - uVar21 & 0x1f);
                uVar24 = uVar17 + 2;
                if ((uVar11 & uVar21 < 0x10) == 0) {
                  uVar7 = 0;
                }
                if (0xfffe < uVar24) {
                  uVar24 = 0xffff;
                }
                uVar8 = uVar10 << (ulong)(0xf - uVar24 & 0x1f);
                uVar3 = uVar17 + 3;
                uVar21 = uVar17 + 4;
                if ((uVar10 & uVar24 < 0x10) == 0) {
                  uVar8 = 0;
                }
                if (0xfffe < uVar3) {
                  uVar3 = 0xffff;
                }
                uVar17 = uVar19 << (ulong)(0xf - uVar3 & 0x1f);
                if ((uVar19 & uVar3 < 0x10) == 0) {
                  uVar17 = 0;
                }
                uVar22 = uVar22 | uVar11 | uVar10 | uVar19;
                if (0xfffe < uVar21) {
                  uVar21 = 0xffff;
                }
                uVar25 = uVar5 | uVar7 | uVar8 | uVar17 | uVar25;
              }
              else {
                if (uVar22 == 0) {
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d11a54;
                  uVar26 = uVar26 - 1;
                  uVar24 = uVar19 >> 2 & 1;
                  uVar22 = uVar24;
                  if (uVar24 != 0) goto LAB_00d11cb4;
LAB_00d11d74:
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d11a54;
                  uVar26 = uVar26 - 1;
                  uVar24 = uVar19 >> 1 & 1;
                  uVar22 = uVar22 | uVar24;
                  if (uVar22 != 0) goto LAB_00d11cec;
LAB_00d11d90:
                  if ((uVar26 & 0xffff) == 0x8000) goto LAB_00d11a54;
                  uVar26 = uVar26 - 1;
                  if (uVar22 == 0 && (uVar19 & 1) == 0) goto LAB_00d11dac;
                }
                else {
                  uVar5 = uVar21 & 0xffff;
                  uVar21 = uVar24 << (ulong)(0xf - uVar21 & 0x1f);
                  if ((uVar5 < 0x10 & uVar24) == 0) {
                    uVar21 = 0;
                  }
                  uVar25 = uVar21 | uVar25;
                  uVar21 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar21 = uVar5 + 1;
                  }
                  uVar24 = uVar19 >> 2 & 1;
                  uVar22 = uVar22 | uVar24;
                  if (uVar22 == 0) goto LAB_00d11d74;
LAB_00d11cb4:
                  uVar5 = uVar21 & 0xffff;
                  uVar21 = uVar24 << (ulong)(0xf - uVar21 & 0x1f);
                  if ((uVar5 < 0x10 & uVar24) == 0) {
                    uVar21 = 0;
                  }
                  uVar25 = uVar21 | uVar25;
                  uVar21 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar21 = uVar5 + 1;
                  }
                  uVar24 = uVar19 >> 1 & 1;
                  uVar22 = uVar22 | uVar24;
                  if (uVar22 == 0) goto LAB_00d11d90;
LAB_00d11cec:
                  uVar5 = uVar21 & 0xffff;
                  uVar21 = uVar24 << (ulong)(0xf - uVar21 & 0x1f);
                  if ((uVar5 < 0x10 & uVar24) == 0) {
                    uVar21 = 0;
                  }
                  uVar25 = uVar21 | uVar25;
                  uVar21 = uVar17;
                  if (uVar5 + 1 < 0xffff) {
                    uVar21 = uVar5 + 1;
                  }
                  if (uVar22 == 0 && (uVar19 & 1) == 0) {
LAB_00d11dac:
                    if ((uVar26 & 0xffff) != 0x8000) {
                      uVar22 = 0;
                      uVar26 = uVar26 - 1;
                      goto LAB_00d11b80;
                    }
                    goto LAB_00d11a54;
                  }
                }
                uVar24 = uVar21 & 0xffff;
                uVar22 = 1;
                uVar21 = (uVar19 & 1) << (ulong)(0xf - uVar21 & 0x1f);
                if (((uint)(uVar24 < 0x10) & uVar19 & 1) == 0) {
                  uVar21 = 0;
                }
                uVar25 = uVar21 | uVar25;
                uVar21 = uVar17;
                if (uVar24 + 1 < 0xffff) {
                  uVar21 = uVar24 + 1;
                }
              }
            }
LAB_00d11b80:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar13 = uVar23 != 0x70;
            uVar23 = uVar17;
          } while (bVar13);
        }
        bVar14 = false;
        bVar13 = false;
        iVar16 = 0;
        cVar20 = '\x01';
        do {
          if (bVar13) {
            if (uVar17 - 0x3a < 0xfffffff6) {
              iVar9 = (int)(short)(iVar16 * cVar20);
              if ((((uint)(iVar16 * cVar20) >> 0xf & 1) == 0) && ((uVar26 >> 0xf & 1) == 0)) {
                uVar17 = iVar9 + uVar26;
                if (0x7ffe - (short)uVar26 <= iVar9) {
                  uVar17 = 0x7ffe;
                }
              }
              else if ((iVar9 < 0) && ((uVar26 >> 0xf & 1) != 0)) {
                iVar16 = (short)uVar26 + 0x7ffe;
                uVar17 = iVar9 + uVar26;
                if (iVar16 == -iVar9 || iVar16 + iVar9 < 0 != SBORROW4(iVar16,-iVar9)) {
                  uVar17 = 0xffff8002;
                }
              }
              else {
                uVar17 = iVar9 + uVar26;
              }
              bVar14 = (uVar25 & 0xffff) == 0;
              bVar13 = (bool)(bVar14 & (bVar1 ^ 1U));
              uVar26 = 0;
              if (!bVar13) {
                uVar26 = uVar17;
              }
              if (bVar1 == false && !bVar14) {
                uVar26 = uVar17 - 1;
              }
              uVar17 = (uint)(short)uVar26;
              uVar25 = uVar25 << (ulong)(byte)~(bVar1 | bVar14);
              if ((int)uVar17 < 1 && !bVar13) {
                uVar25 = uVar25 >> 1 | 0x8000;
              }
              uVar21 = uVar25 >> 6 & 0x3ff;
              uVar25 = uVar17;
              if (((uVar26 >> 0xf & 1) != 0) && (uVar26 = uVar21, !bVar13)) {
                do {
                  uVar21 = uVar26 >> 1;
                  uVar22 = 0;
                  if ((uVar26 & 0xfffe) != 0) {
                    uVar22 = uVar17 + 1;
                  }
                  uVar25 = (int)(short)uVar22;
                } while (((uVar22 >> 0xf & 1) != 0) &&
                        (uVar17 = uVar17 + 1, bVar1 = 1 < uVar26, uVar26 = uVar21, bVar1));
              }
              uVar17 = uVar25;
              if (0x1e < (int)uVar25) {
                uVar17 = 0x1f;
              }
              uVar6 = 0;
              if ((int)uVar25 < 0x20) {
                uVar6 = (ushort)uVar21;
              }
              *(ushort *)param_2 =
                   uVar6 | (ushort)(iVar15 == 0x2d) << 0xf | (ushort)((uVar17 & 0x1f) << 10);
              if (*(long *)(lVar12 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d1199c;
            }
LAB_00d119e4:
            bVar13 = true;
            sVar2 = (short)iVar16;
            iVar16 = uVar17 + iVar16 * 10 + -0x30;
            if ((int)((-uVar17 - 0x7fd2 & 0xffff) / 10) <= (int)sVar2) {
              iVar16 = 0x7ffe;
            }
          }
          else {
            if ((uVar17 != 0x2d) && (uVar17 != 0x2b)) {
              if (0xfffffff5 < uVar17 - 0x3a) goto LAB_00d119e4;
              goto LAB_00d11a54;
            }
            if (bVar14) goto LAB_00d11a54;
            bVar13 = false;
            cVar20 = '\x01';
            if (uVar17 == 0x2d) {
              cVar20 = -1;
            }
            bVar14 = true;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar17 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
    }
    local_6c = 0.0;
    ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              (param_1,iVar15 == 0x2d,(HexFloat *)&local_6c);
  }
  else {
    local_6c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_6c);
    fVar4 = ABS(local_6c);
    if (((*(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) & 5) != 0) &&
       (fVar4 == 0.0)) {
      local_6c = 0.0;
    }
    if (fVar4 == INFINITY) {
      local_6c = (float)((uint)local_6c & 0x80000000 | 0x7f7fffff);
      std::__ndk1::ios_base::clear((uint)(param_1 + *(long *)(*(long *)param_1 + -0x18)));
    }
  }
  HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
  ::
  castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
            ((HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
              *)&local_6c,param_2,0);
  if ((*(ushort *)param_2 & 0x7fff) == 0x7c00) {
    *(ushort *)param_2 = *(ushort *)param_2 & 0x8000 | 0x7bff;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    if (*(long *)(lVar12 + 0x28) == local_68) {
      return param_1;
    }
    goto LAB_00d1199c;
  }
LAB_00d11a70:
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d1199c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d11a54:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  goto LAB_00d11a70;
}



// === castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>> @ 00d11f04 ===

/* void spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > >
   >(spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > >&,
   spvtools::utils::round_direction) */

void __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
castTo<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,ushort *param_1,int param_3)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  byte local_4c [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)this;
  *param_1 = 0;
  if ((uVar1 & 0x7fffffff) == 0) {
    if ((int)uVar1 < 0) {
      *param_1 = 0x8000;
    }
  }
  else {
    local_4c[0] = 0;
    uVar5 = getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
                      (SUB84(this,0),param_3,local_4c);
    fVar2 = *(float *)this;
    uVar9 = (uint)fVar2 >> 0x17 & 0xff;
    if (uVar9 == 0) {
      if ((uVar1 >> 0x16 & 1) == 0) {
        if ((uVar1 >> 0x15 & 1) == 0) {
          if ((uVar1 >> 0x14 & 1) == 0) {
            if ((uVar1 >> 0x13 & 1) == 0) {
              if ((uVar1 >> 0x12 & 1) == 0) {
                if ((uVar1 >> 0x11 & 1) == 0) {
                  if ((uVar1 >> 0x10 & 1) == 0) {
                    if ((uVar1 >> 0xf & 1) == 0) {
                      if ((uVar1 >> 0xe & 1) == 0) {
                        if ((uVar1 >> 0xd & 1) == 0) {
                          if ((uVar1 >> 0xc & 1) == 0) {
                            if ((uVar1 >> 0xb & 1) == 0) {
                              if ((uVar1 >> 10 & 1) == 0) {
                                if ((uVar1 >> 9 & 1) == 0) {
                                  if ((uVar1 >> 8 & 1) == 0) {
                                    if ((uVar1 >> 7 & 1) == 0) {
                                      if ((uVar1 >> 6 & 1) == 0) {
                                        if ((uVar1 >> 5 & 1) == 0) {
                                          if ((uVar1 >> 4 & 1) == 0) {
                                            if ((uVar1 >> 3 & 1) == 0) {
                                              if ((uVar1 >> 2 & 1) == 0) {
                                                uVar9 = 0xffffff6b;
                                                if ((uVar1 & 2) != 0) {
                                                  uVar9 = 0xffffff6c;
                                                }
                                              }
                                              else {
                                                uVar9 = 0xffffff6d;
                                              }
                                            }
                                            else {
                                              uVar9 = 0xffffff6e;
                                            }
                                          }
                                          else {
                                            uVar9 = 0xffffff6f;
                                          }
                                        }
                                        else {
                                          uVar9 = 0xffffff70;
                                        }
                                      }
                                      else {
                                        uVar9 = 0xffffff71;
                                      }
                                    }
                                    else {
                                      uVar9 = 0xffffff72;
                                    }
                                  }
                                  else {
                                    uVar9 = 0xffffff73;
                                  }
                                }
                                else {
                                  uVar9 = 0xffffff74;
                                }
                              }
                              else {
                                uVar9 = 0xffffff75;
                              }
                            }
                            else {
                              uVar9 = 0xffffff76;
                            }
                          }
                          else {
                            uVar9 = 0xffffff77;
                          }
                        }
                        else {
                          uVar9 = 0xffffff78;
                        }
                      }
                      else {
                        uVar9 = 0xffffff79;
                      }
                    }
                    else {
                      uVar9 = 0xffffff7a;
                    }
                  }
                  else {
                    uVar9 = 0xffffff7b;
                  }
                }
                else {
                  uVar9 = 0xffffff7c;
                }
              }
              else {
                uVar9 = 0xffffff7d;
              }
            }
            else {
              uVar9 = 0xffffff7e;
            }
          }
          else {
            uVar9 = 0xffffff7f;
          }
        }
        else {
          uVar9 = 0xffffff80;
        }
      }
      else {
        uVar9 = 0xffffff81;
      }
    }
    else {
      uVar9 = uVar9 - 0x7f;
    }
    if (NAN(fVar2)) {
      uVar8 = (ushort)(uVar1 >> 0xd) & 0x3ff;
      uVar10 = 0xfc00;
      if (-1 < (int)uVar1) {
        uVar10 = 0x7c00;
      }
      if ((uVar1 >> 0xd & 0x3fe) == 0) {
        uVar8 = 1;
      }
      uVar8 = uVar8 | uVar10;
    }
    else if ((ABS(fVar2) == INFINITY) || (0xf < (int)(uVar9 + local_4c[0]))) {
      uVar8 = 0xfc00;
      if (-1 < (int)uVar1) {
        uVar8 = 0x7c00;
      }
    }
    else {
      iVar6 = 2;
      if ((int)fVar2 < 0) {
        iVar6 = 3;
      }
      uVar7 = uVar5;
      if (uVar9 == 0xfffffff1 || (int)(uVar9 + 0xf) < 0 != SCARRY4(uVar9,0xf)) {
        uVar7 = (uVar5 & 0xfffe) >> 1 | 0x200;
      }
      uVar11 = uVar9;
      if (uVar9 == 0xfffffff0 || (int)(uVar9 + 0x10) < 0 != SCARRY4(uVar9,0x10)) {
        do {
          uVar3 = uVar11 >> 4;
          uVar7 = uVar7 >> 1 & 0x7fff;
          uVar11 = uVar11 + 1;
        } while ((uVar3 & 0xfff) < 0xfff);
        uVar11 = 0xfff1;
      }
      uVar8 = (ushort)uVar7;
      if (param_3 == iVar6) {
        uVar8 = 1;
      }
      uVar10 = (ushort)uVar7;
      if ((((uVar9 == 0xfffffff1 || (int)(uVar9 + 0xf) < 0 != SCARRY4(uVar9,0xf)) ||
           (uVar5 & 0xffff) != 0) && (uVar7 & 0xffff) == 0) && (uVar11 & 0xffff) == 0xfff1) {
        uVar10 = uVar8;
      }
      uVar8 = (ushort)(uVar1 >> 0x10) & 0x8000 | (short)uVar11 * 0x400 + 0x3c00U & 0x7fff |
              uVar10 & 0x3ff;
    }
    *param_1 = uVar8;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// === getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>> @ 00d121a0 ===

/* spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> >
   >::uint_type spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> >
   >::getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16> > >
   >(spvtools::utils::round_direction, bool*) */

uint __thiscall
spvtools::utils::
HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
::
getRoundedNormalizedSignificand<spvtools::utils::HexFloat<spvtools::utils::FloatProxy<spvtools::utils::Float16>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<spvtools::utils::Float16>>>>
          (HexFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
           *this,int param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*PTR_last_significant_bit_00d6ce20 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_last_significant_bit_00d6ce20), iVar3 != 0)) {
    *(undefined4 *)PTR_last_significant_bit_00d6ce38 = 0x2000;
    __cxa_guard_release(PTR_last_significant_bit_00d6ce20);
  }
  if (((*PTR_first_rounded_bit_00d6ce28 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_first_rounded_bit_00d6ce28), iVar3 != 0)) {
    *(undefined4 *)PTR_first_rounded_bit_00d6ce30 = 0x1000;
    __cxa_guard_release(PTR_first_rounded_bit_00d6ce28);
  }
  uVar1 = *(uint *)this;
  *param_3 = 0;
  uVar4 = uVar1;
  if (((uVar1 & 0x7fffffff) != 0) && ((uVar1 & 0x7f800000) == 0)) {
    iVar3 = -0x76 - (int)LZCOUNT(uVar1 & 0x3fffff);
    if ((uVar1 & 0x400000) != 0) {
      iVar3 = -0x7f;
    }
    iVar3 = iVar3 + 0x7e;
    do {
      uVar4 = uVar4 << 1;
      bVar2 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  uVar5 = uVar4 & 0x7fffff;
  if ((uVar4 & 0x1fff) != 0) {
    if (param_2 == 1) {
      if (((*(uint *)PTR_first_rounded_bit_00d6ce30 & uVar5) == 0) ||
         (((uVar4 & 0x1fff & (*(uint *)PTR_first_rounded_bit_00d6ce30 ^ 0xffffffff)) == 0 &&
          ((*(uint *)PTR_last_significant_bit_00d6ce38 & uVar5) == 0)))) goto LAB_00d12244;
    }
    else if (param_2 == 3) {
      if (-1 < (int)uVar1) goto LAB_00d12244;
    }
    else if ((param_2 != 2) || ((int)uVar1 < 0)) goto LAB_00d12244;
    uVar5 = *(int *)PTR_last_significant_bit_00d6ce38 + uVar5;
    if ((uVar5 >> 0x17 & 1) != 0) {
      *param_3 = 1;
      return (uVar5 >> 1 & 0xffbfffff) >> 0xd;
    }
  }
LAB_00d12244:
  return uVar5 >> 0xd;
}



// === operator>> @ 00d12378 ===

/* WARNING: Removing unreachable block (ram,0x00d12700) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<float>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float> > >&) */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  basic_istream *pbVar15;
  void *pvVar16;
  uint uVar17;
  float fVar18;
  long lVar19;
  uint uVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float local_6c;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  lVar19 = *(long *)param_1;
  *(undefined4 *)param_2 = 0;
  if (((byte)param_1[*(long *)(lVar19 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar12 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar12 - 9U < 5 || (iVar12 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar12 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  if ((iVar12 == 0x2d) || (iVar12 == 0x30)) {
    iVar13 = iVar12;
    if (iVar12 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar13 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar13 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar14 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar14 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar20 = 0;
        uVar26 = 0;
        uVar23 = 0;
        iVar13 = 0x7f;
        bVar1 = false;
        do {
          if (uVar14 == 0x2e) {
            bVar10 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar14 == 0x70) {
              bVar10 = false;
              bVar11 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            if ((uVar14 - 0x3a < 0xfffffff6) && ((uVar14 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d128b8;
            pvVar16 = memchr("0123456789",uVar14,0xb);
            if (pvVar16 == (void *)0x0) {
              iVar22 = 0x1e4106;
              pvVar16 = memchr("abcdef",uVar14,7);
              if (pvVar16 == (void *)0x0) {
                iVar22 = 0x1b524b;
                pvVar16 = memchr("ABCDEF",uVar14,7);
                if (pvVar16 != (void *)0x0) goto LAB_00d125f0;
                uVar14 = 0;
                uVar24 = 0;
              }
              else {
LAB_00d125f0:
                uVar14 = ((int)pvVar16 - iVar22) + 10;
                uVar24 = uVar14 & 8;
              }
              if (uVar26 != 0) goto LAB_00d12540;
LAB_00d12600:
              uVar17 = uVar14 & 0xff;
              uVar26 = uVar24 >> 3 | uVar26;
              uVar14 = (uVar14 & 4) << 1;
              if (uVar26 == 0) goto LAB_00d1258c;
LAB_00d1261c:
              if (iVar13 == 0x7fffffff) goto LAB_00d128b8;
              uVar24 = uVar23 + 1;
              if (uVar23 == 0xffffffff) {
                uVar24 = 0xffffffff;
              }
              iVar13 = iVar13 + 1;
              uVar25 = (uVar14 >> 3) << (ulong)(~uVar23 & 0x1f);
              if (uVar14 == 0 || 0x1f < uVar23) {
                uVar25 = 0;
              }
              uVar20 = uVar25 | uVar20;
              uVar26 = uVar14 >> 3 | uVar26;
              uVar14 = (uVar17 & 2) << 2;
              if (uVar26 == 0) goto LAB_00d125a0;
LAB_00d12660:
              if (iVar13 == 0x7fffffff) goto LAB_00d128b8;
              uVar25 = uVar24 + 1;
              if (uVar24 == 0xffffffff) {
                uVar25 = 0xffffffff;
              }
              iVar13 = iVar13 + 1;
              uVar23 = (uVar14 >> 3) << (ulong)(~uVar24 & 0x1f);
              if (uVar14 == 0 || 0x1f < uVar24) {
                uVar23 = 0;
              }
              uVar20 = uVar23 | uVar20;
              uVar26 = uVar14 >> 3 | uVar26;
              uVar14 = (uVar17 & 1) << 3;
              if (uVar26 == 0) goto LAB_00d125b0;
LAB_00d126a0:
              if (iVar13 == 0x7fffffff) goto LAB_00d128b8;
              uVar24 = uVar14 >> 3;
              uVar23 = uVar25 + 1;
              if (uVar25 == 0xffffffff) {
                uVar23 = 0xffffffff;
              }
              iVar13 = iVar13 + 1;
              uVar17 = uVar24 << (ulong)(~uVar25 & 0x1f);
              if (uVar14 == 0 || 0x1f < uVar25) {
                uVar17 = 0;
              }
              uVar20 = uVar17 | uVar20;
            }
            else {
              uVar14 = (int)pvVar16 - 0x14d070;
              uVar24 = uVar14 & 8;
              if (uVar26 == 0) goto LAB_00d12600;
LAB_00d12540:
              if (iVar13 == 0x7fffffff) goto LAB_00d128b8;
              uVar25 = uVar23 + 1;
              if (uVar23 == 0xffffffff) {
                uVar25 = 0xffffffff;
              }
              iVar13 = iVar13 + 1;
              uVar17 = (uVar24 >> 3) << (ulong)(~uVar23 & 0x1f);
              if (uVar24 == 0 || 0x1f < uVar23) {
                uVar17 = 0;
              }
              uVar20 = uVar17 | uVar20;
              uVar17 = uVar14 & 0xff;
              uVar26 = uVar24 >> 3 | uVar26;
              uVar14 = (uVar14 & 4) << 1;
              uVar23 = uVar25;
              if (uVar26 != 0) goto LAB_00d1261c;
LAB_00d1258c:
              uVar26 = uVar14 >> 3 | uVar26;
              uVar14 = (uVar17 & 2) << 2;
              uVar24 = uVar23;
              if (uVar26 != 0) goto LAB_00d12660;
LAB_00d125a0:
              uVar26 = uVar14 >> 3 | uVar26;
              uVar14 = (uVar17 & 1) << 3;
              uVar25 = uVar24;
              if (uVar26 != 0) goto LAB_00d126a0;
LAB_00d125b0:
              uVar24 = uVar14 >> 3;
              uVar23 = uVar25;
            }
            bVar10 = false;
            uVar26 = uVar24 | uVar26;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar11 = false;
        } while (!bVar10);
        if (!bVar11 && bVar10) {
          uVar26 = 0;
          uVar24 = uVar14;
          do {
            if (uVar24 != 0x70) {
              if ((uVar24 - 0x3a < 0xfffffff6) && ((uVar24 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d128b8;
              pvVar16 = memchr("0123456789",uVar24,0xb);
              if (pvVar16 == (void *)0x0) {
                pvVar16 = memchr("abcdef",uVar24,7);
                if (pvVar16 == (void *)0x0) {
                  pvVar16 = memchr("ABCDEF",uVar24,7);
                  if (pvVar16 == (void *)0x0) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = (int)pvVar16 - 0x1b5241;
                  }
                }
                else {
                  uVar14 = (int)pvVar16 - 0x1e40fc;
                }
              }
              else {
                uVar14 = (int)pvVar16 - 0x14d070;
              }
              uVar25 = uVar14 & 0xff;
              uVar26 = uVar26 | uVar25 >> 3 & 1;
              uVar17 = uVar25 >> 3 & 1;
              if (bVar1) {
                uVar8 = uVar25 >> 1 & 1;
                uVar7 = uVar17 << (ulong)(~uVar23 & 0x1f);
                uVar25 = uVar25 >> 2 & 1;
                uVar14 = uVar14 & 1;
                if ((uVar23 < 0x20 & uVar17) == 0) {
                  uVar7 = 0;
                }
                uVar17 = uVar23 + 1;
                if (uVar23 == 0xffffffff) {
                  uVar17 = 0xffffffff;
                }
                uVar4 = uVar25 << (ulong)(~uVar17 & 0x1f);
                if ((uVar25 & uVar17 < 0x20) == 0) {
                  uVar4 = 0;
                }
                uVar17 = uVar23 + 2;
                if (0xfffffffd < uVar23) {
                  uVar17 = 0xffffffff;
                }
                uVar5 = uVar8 << (ulong)(~uVar17 & 0x1f);
                if ((uVar8 & uVar17 < 0x20) == 0) {
                  uVar5 = 0;
                }
                uVar17 = uVar23 + 3;
                if (0xfffffffc < uVar23) {
                  uVar17 = 0xffffffff;
                }
                uVar6 = uVar14 << (ulong)(~uVar17 & 0x1f);
                if ((uVar14 & uVar17 < 0x20) == 0) {
                  uVar6 = 0;
                }
                uVar26 = uVar14 | uVar8 | uVar25 | uVar26;
                bVar10 = 0xfffffffb < uVar23;
                uVar23 = uVar23 + 4;
                uVar20 = uVar7 | uVar4 | uVar5 | uVar6 | uVar20;
                if (bVar10) {
                  uVar23 = 0xffffffff;
                }
              }
              else {
                if (uVar26 == 0) {
                  if (iVar13 == -0x80000000) goto LAB_00d128b8;
                  iVar13 = iVar13 + -1;
                  uVar17 = uVar25 >> 2 & 1;
                  uVar26 = uVar17;
                  if (uVar17 != 0) goto LAB_00d12af4;
LAB_00d12b98:
                  if (iVar13 == -0x80000000) goto LAB_00d128b8;
                  iVar13 = iVar13 + -1;
                  uVar25 = uVar25 >> 1 & 1;
                  uVar26 = uVar25 | uVar26;
                  if (uVar26 != 0) goto LAB_00d12b24;
LAB_00d12bb0:
                  if (iVar13 == -0x80000000) goto LAB_00d128b8;
                  iVar13 = iVar13 + -1;
                  if ((uVar14 & 1) == 0 && uVar26 == 0) goto LAB_00d12bc8;
                }
                else {
                  uVar7 = uVar17 << (ulong)(~uVar23 & 0x1f);
                  if ((uVar23 < 0x20 & uVar17) == 0) {
                    uVar7 = 0;
                  }
                  bVar10 = uVar23 == 0xffffffff;
                  uVar23 = uVar23 + 1;
                  uVar20 = uVar7 | uVar20;
                  if (bVar10) {
                    uVar23 = 0xffffffff;
                  }
                  uVar17 = uVar25 >> 2 & 1;
                  uVar26 = uVar17 | uVar26;
                  if (uVar26 == 0) goto LAB_00d12b98;
LAB_00d12af4:
                  uVar7 = uVar17 << (ulong)(~uVar23 & 0x1f);
                  if ((uVar23 < 0x20 & uVar17) == 0) {
                    uVar7 = 0;
                  }
                  bVar10 = uVar23 == 0xffffffff;
                  uVar23 = uVar23 + 1;
                  uVar20 = uVar7 | uVar20;
                  if (bVar10) {
                    uVar23 = 0xffffffff;
                  }
                  uVar25 = uVar25 >> 1 & 1;
                  uVar26 = uVar25 | uVar26;
                  if (uVar26 == 0) goto LAB_00d12bb0;
LAB_00d12b24:
                  uVar17 = uVar25 << (ulong)(~uVar23 & 0x1f);
                  if ((uVar23 < 0x20 & uVar25) == 0) {
                    uVar17 = 0;
                  }
                  bVar10 = uVar23 == 0xffffffff;
                  uVar23 = uVar23 + 1;
                  uVar20 = uVar17 | uVar20;
                  if (bVar10) {
                    uVar23 = 0xffffffff;
                  }
                  if ((uVar14 & 1) == 0 && uVar26 == 0) {
LAB_00d12bc8:
                    if (iVar13 != -0x80000000) {
                      uVar26 = 0;
                      iVar13 = iVar13 + -1;
                      goto LAB_00d129d0;
                    }
                    goto LAB_00d128b8;
                  }
                }
                uVar26 = 1;
                uVar25 = (uVar14 & 1) << (ulong)(~uVar23 & 0x1f);
                if (((uint)(uVar23 < 0x20) & uVar14 & 1) == 0) {
                  uVar25 = 0;
                }
                bVar10 = uVar23 == 0xffffffff;
                uVar23 = uVar23 + 1;
                uVar20 = uVar25 | uVar20;
                if (bVar10) {
                  uVar23 = 0xffffffff;
                }
              }
            }
LAB_00d129d0:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar10 = uVar24 != 0x70;
            uVar24 = uVar14;
          } while (bVar10);
        }
        bVar11 = false;
        bVar10 = false;
        iVar22 = 0;
        cVar21 = '\x01';
        do {
          if (bVar10) {
            if (9 < uVar14 - 0x30) {
              iVar22 = iVar22 * cVar21;
              if ((iVar22 < 0) || (iVar13 < 0)) {
                if ((iVar22 < 0) && (iVar13 < 0)) {
                  iVar3 = iVar13 + 0x7ffffffe;
                  uVar14 = iVar22 + iVar13;
                  if (iVar3 == -iVar22 || iVar3 + iVar22 < 0 != SBORROW4(iVar3,-iVar22)) {
                    uVar14 = 0x80000002;
                  }
                }
                else {
                  uVar14 = iVar22 + iVar13;
                }
              }
              else {
                uVar14 = iVar22 + iVar13;
                if (0x7ffffffe - iVar13 <= iVar22) {
                  uVar14 = 0x7ffffffe;
                }
              }
              bVar11 = uVar20 == 0;
              bVar10 = (bool)(bVar11 & (bVar1 ^ 1U));
              uVar23 = 0;
              if (!bVar10) {
                uVar23 = uVar14;
              }
              if (bVar1 == false && !bVar11) {
                uVar23 = uVar14 - 1;
              }
              uVar20 = uVar20 << (ulong)(byte)~(bVar1 | bVar11);
              if ((int)uVar23 < 1 && !bVar10) {
                uVar20 = uVar20 >> 1 | 0x80000000;
              }
              uVar20 = uVar20 >> 9;
              uVar14 = uVar20;
              if (((int)uVar23 < 0) && (uVar26 = uVar23, !bVar10)) {
                do {
                  uVar14 = uVar20 >> 1;
                  uVar23 = 0;
                  if (1 < uVar20) {
                    uVar23 = uVar26 + 1;
                  }
                } while (((int)uVar23 < 0) &&
                        (bVar1 = 1 < uVar20, uVar20 = uVar14, uVar26 = uVar26 + 1, bVar1));
              }
              uVar20 = uVar23;
              if (0xfe < (int)uVar23) {
                uVar20 = 0xff;
              }
              uVar26 = 0;
              if ((int)uVar23 < 0x100) {
                uVar26 = uVar14;
              }
              *(uint *)param_2 = uVar26 | (uint)(iVar12 == 0x2d) << 0x1f | (uVar20 & 0xff) << 0x17;
              if (*(long *)(lVar9 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d12d08;
            }
LAB_00d12844:
            bVar10 = true;
            bVar2 = (int)((0x8000002e - uVar14) / 10) <= iVar22;
            iVar22 = (uVar14 - 0x30) + iVar22 * 10;
            if (bVar2) {
              iVar22 = 0x7ffffffe;
            }
          }
          else {
            if ((uVar14 != 0x2d) && (uVar14 != 0x2b)) {
              if (uVar14 - 0x30 < 10) goto LAB_00d12844;
              goto LAB_00d128b8;
            }
            if (bVar11) goto LAB_00d128b8;
            bVar10 = false;
            cVar21 = '\x01';
            if (uVar14 == 0x2d) {
              cVar21 = -1;
            }
            bVar11 = true;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar14 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
      if (*(long *)(lVar9 + 0x28) == local_68) {
LAB_00d127e0:
        pbVar15 = ParseNormalFloat<spvtools::utils::FloatProxy<float>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<float>>>
                            (param_1,iVar12 == 0x2d,param_2);
        return pbVar15;
      }
    }
    else if (*(long *)(lVar9 + 0x28) == local_68) goto LAB_00d127e0;
  }
  else {
    local_6c = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_6c);
    lVar19 = *(long *)param_1;
    *(float *)param_2 = local_6c;
    fVar18 = local_6c;
    if ((((byte)param_1[*(long *)(lVar19 + -0x18) + 0x20] & 5) != 0) && (ABS(local_6c) == 0.0)) {
      fVar18 = 0.0;
      *(undefined4 *)param_2 = 0;
    }
    if (ABS(local_6c) == INFINITY) {
      *(uint *)param_2 = (uint)fVar18 & 0x80000000 | 0x7f7fffff;
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar19 + -0x18));
    }
    if (*(long *)(lVar9 + 0x28) == local_68) {
      return param_1;
    }
  }
  goto LAB_00d12d08;
LAB_00d128b8:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d12d08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === operator>> @ 00d12d0c ===

/* WARNING: Removing unreachable block (ram,0x00d13094) */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> > >&) */

basic_istream * spvtools::utils::operator>>(basic_istream *param_1,HexFloat *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  basic_istream *pbVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  double dVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  double local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)param_1;
  *(undefined8 *)param_2 = 0;
  if (((byte)param_1[*(long *)(lVar13 + -0x18) + 9] >> 4 & 1) != 0) {
    while ((iVar7 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek(),
           iVar7 - 9U < 5 || (iVar7 == 0x20))) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
    }
  }
  iVar7 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
  if ((iVar7 == 0x2d) || (iVar7 == 0x30)) {
    iVar8 = iVar7;
    if (iVar7 == 0x2d) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      iVar8 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    }
    if (iVar8 == 0x30) {
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
      uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
      if ((uVar9 & 0xffffffdf) == 0x58) {
        std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
        uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        while (uVar9 == 0x30) {
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
        }
        uVar26 = 0;
        uVar25 = 0;
        uVar24 = 0;
        lVar13 = 0x3ff;
        bVar1 = false;
        do {
          if (uVar9 == 0x2e) {
            bVar5 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          else {
            if (uVar9 == 0x70) {
              bVar5 = false;
              bVar6 = true;
              std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
              uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
              break;
            }
            if ((uVar9 - 0x3a < 0xfffffff6) && ((uVar9 | 0x20) - 0x67 < 0xfffffffa))
            goto LAB_00d13250;
            pvVar11 = memchr("0123456789",uVar9,0xb);
            if (pvVar11 == (void *)0x0) {
              iVar8 = 0x1e4106;
              pvVar11 = memchr("abcdef",uVar9,7);
              if (pvVar11 == (void *)0x0) {
                iVar8 = 0x1b524b;
                pvVar11 = memchr("ABCDEF",uVar9,7);
                if (pvVar11 != (void *)0x0) goto LAB_00d12f84;
                uVar9 = 0;
                uVar17 = 0;
              }
              else {
LAB_00d12f84:
                uVar9 = ((int)pvVar11 - iVar8) + 10;
                uVar17 = uVar9 & 8;
              }
              if (uVar25 != 0) goto LAB_00d12ed4;
LAB_00d12f94:
              uVar12 = uVar9 & 0xff;
              uVar25 = uVar17 >> 3 | uVar25;
              uVar9 = (uVar9 & 4) << 1;
              uVar20 = uVar24;
              if (uVar25 == 0) goto LAB_00d12f20;
LAB_00d12fb0:
              if (lVar13 == 0x7fffffffffffffff) goto LAB_00d13250;
              uVar20 = uVar24 + 1;
              if (uVar24 == 0xffffffffffffffff) {
                uVar20 = 0xffffffffffffffff;
              }
              lVar13 = lVar13 + 1;
              uVar18 = (ulong)(uVar9 >> 3) << (~uVar24 & 0x3f);
              if (uVar9 == 0 || 0x3f < uVar24) {
                uVar18 = 0;
              }
              uVar26 = uVar18 | uVar26;
              uVar25 = uVar9 >> 3 | uVar25;
              uVar9 = (uVar12 & 2) << 2;
              uVar18 = uVar20;
              if (uVar25 == 0) goto LAB_00d12f34;
LAB_00d12ff4:
              if (lVar13 == 0x7fffffffffffffff) goto LAB_00d13250;
              uVar18 = uVar20 + 1;
              if (uVar20 == 0xffffffffffffffff) {
                uVar18 = 0xffffffffffffffff;
              }
              lVar13 = lVar13 + 1;
              uVar24 = (ulong)(uVar9 >> 3) << (~uVar20 & 0x3f);
              if (uVar9 == 0 || 0x3f < uVar20) {
                uVar24 = 0;
              }
              uVar26 = uVar24 | uVar26;
              uVar25 = uVar9 >> 3 | uVar25;
              uVar9 = (uVar12 & 1) << 3;
              uVar24 = uVar18;
              if (uVar25 == 0) goto LAB_00d12f44;
LAB_00d13034:
              if (lVar13 == 0x7fffffffffffffff) goto LAB_00d13250;
              uVar17 = uVar9 >> 3;
              uVar24 = uVar18 + 1;
              if (uVar18 == 0xffffffffffffffff) {
                uVar24 = 0xffffffffffffffff;
              }
              lVar13 = lVar13 + 1;
              uVar20 = (ulong)uVar17 << (~uVar18 & 0x3f);
              if (uVar9 == 0 || 0x3f < uVar18) {
                uVar20 = 0;
              }
              uVar26 = uVar20 | uVar26;
            }
            else {
              uVar9 = (int)pvVar11 - 0x14d070;
              uVar17 = uVar9 & 8;
              if (uVar25 == 0) goto LAB_00d12f94;
LAB_00d12ed4:
              if (lVar13 == 0x7fffffffffffffff) goto LAB_00d13250;
              uVar20 = uVar24 + 1;
              if (uVar24 == 0xffffffffffffffff) {
                uVar20 = 0xffffffffffffffff;
              }
              lVar13 = lVar13 + 1;
              uVar18 = (ulong)(uVar17 >> 3) << (~uVar24 & 0x3f);
              if (uVar17 == 0 || 0x3f < uVar24) {
                uVar18 = 0;
              }
              uVar26 = uVar18 | uVar26;
              uVar12 = uVar9 & 0xff;
              uVar25 = uVar17 >> 3 | uVar25;
              uVar9 = (uVar9 & 4) << 1;
              uVar24 = uVar20;
              if (uVar25 != 0) goto LAB_00d12fb0;
LAB_00d12f20:
              uVar25 = uVar9 >> 3 | uVar25;
              uVar9 = (uVar12 & 2) << 2;
              uVar18 = uVar20;
              if (uVar25 != 0) goto LAB_00d12ff4;
LAB_00d12f34:
              uVar25 = uVar9 >> 3 | uVar25;
              uVar9 = (uVar12 & 1) << 3;
              uVar24 = uVar18;
              if (uVar25 != 0) goto LAB_00d13034;
LAB_00d12f44:
              uVar17 = uVar9 >> 3;
            }
            bVar5 = false;
            uVar25 = uVar17 | uVar25;
            bVar1 = true;
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          }
          bVar6 = false;
        } while (!bVar5);
        if (!bVar6 && bVar5) {
          uVar25 = 0;
          uVar17 = uVar9;
          do {
            if (uVar17 != 0x70) {
              if ((uVar17 - 0x3a < 0xfffffff6) && ((uVar17 | 0x20) - 0x67 < 0xfffffffa))
              goto LAB_00d13250;
              pvVar11 = memchr("0123456789",uVar17,0xb);
              if (pvVar11 == (void *)0x0) {
                pvVar11 = memchr("abcdef",uVar17,7);
                if (pvVar11 == (void *)0x0) {
                  pvVar11 = memchr("ABCDEF",uVar17,7);
                  if (pvVar11 == (void *)0x0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (int)pvVar11 - 0x1b5241;
                  }
                }
                else {
                  uVar9 = (int)pvVar11 - 0x1e40fc;
                }
              }
              else {
                uVar9 = (int)pvVar11 - 0x14d070;
              }
              uVar3 = uVar9 & 0xff;
              uVar12 = uVar3 >> 3 & 1;
              uVar25 = uVar25 | uVar3 >> 3 & 1;
              if (bVar1) {
                uVar2 = uVar3 >> 1 & 1;
                uVar20 = (ulong)uVar12 << (~uVar24 & 0x3f);
                uVar3 = uVar3 >> 2 & 1;
                uVar9 = uVar9 & 1;
                if ((uVar24 < 0x40 & uVar12) == 0) {
                  uVar20 = 0;
                }
                uVar18 = uVar24 + 1;
                if (uVar24 == 0xffffffffffffffff) {
                  uVar18 = 0xffffffffffffffff;
                }
                uVar19 = (ulong)uVar3 << (~uVar18 & 0x3f);
                if ((uVar3 & uVar18 < 0x40) == 0) {
                  uVar19 = 0;
                }
                uVar18 = uVar24 + 2;
                if (0xfffffffffffffffd < uVar24) {
                  uVar18 = 0xffffffffffffffff;
                }
                uVar21 = (ulong)uVar2 << (~uVar18 & 0x3f);
                if ((uVar2 & uVar18 < 0x40) == 0) {
                  uVar21 = 0;
                }
                uVar18 = uVar24 + 3;
                if (0xfffffffffffffffc < uVar24) {
                  uVar18 = 0xffffffffffffffff;
                }
                uVar22 = (ulong)uVar9 << (~uVar18 & 0x3f);
                if ((uVar9 & uVar18 < 0x40) == 0) {
                  uVar22 = 0;
                }
                uVar25 = uVar9 | uVar2 | uVar3 | uVar25;
                bVar5 = 0xfffffffffffffffb < uVar24;
                uVar24 = uVar24 + 4;
                uVar26 = uVar20 | uVar19 | uVar21 | uVar22 | uVar26;
                if (bVar5) {
                  uVar24 = 0xffffffffffffffff;
                }
              }
              else {
                if (uVar25 == 0) {
                  if (lVar13 == -0x8000000000000000) goto LAB_00d13250;
                  lVar13 = lVar13 + -1;
                  uVar25 = uVar3 >> 2 & 1;
                  uVar12 = uVar25;
                  if (uVar25 != 0) goto LAB_00d1348c;
LAB_00d13530:
                  if (lVar13 == -0x8000000000000000) goto LAB_00d13250;
                  lVar13 = lVar13 + -1;
                  uVar12 = uVar3 >> 1 & 1;
                  uVar25 = uVar12 | uVar25;
                  if (uVar25 != 0) goto LAB_00d134bc;
LAB_00d13548:
                  if (lVar13 == -0x8000000000000000) goto LAB_00d13250;
                  lVar13 = lVar13 + -1;
                  if ((uVar9 & 1) == 0 && uVar25 == 0) goto LAB_00d13560;
                }
                else {
                  uVar20 = (ulong)uVar12 << (~uVar24 & 0x3f);
                  if ((uVar24 < 0x40 & uVar12) == 0) {
                    uVar20 = 0;
                  }
                  bVar5 = uVar24 == 0xffffffffffffffff;
                  uVar24 = uVar24 + 1;
                  uVar26 = uVar20 | uVar26;
                  if (bVar5) {
                    uVar24 = 0xffffffffffffffff;
                  }
                  uVar12 = uVar3 >> 2 & 1;
                  uVar25 = uVar12 | uVar25;
                  if (uVar25 == 0) goto LAB_00d13530;
LAB_00d1348c:
                  uVar20 = (ulong)uVar12 << (~uVar24 & 0x3f);
                  if ((uVar24 < 0x40 & uVar12) == 0) {
                    uVar20 = 0;
                  }
                  bVar5 = uVar24 == 0xffffffffffffffff;
                  uVar24 = uVar24 + 1;
                  uVar26 = uVar20 | uVar26;
                  if (bVar5) {
                    uVar24 = 0xffffffffffffffff;
                  }
                  uVar12 = uVar3 >> 1 & 1;
                  uVar25 = uVar12 | uVar25;
                  if (uVar25 == 0) goto LAB_00d13548;
LAB_00d134bc:
                  uVar20 = (ulong)uVar12 << (~uVar24 & 0x3f);
                  if ((uVar24 < 0x40 & uVar12) == 0) {
                    uVar20 = 0;
                  }
                  bVar5 = uVar24 == 0xffffffffffffffff;
                  uVar24 = uVar24 + 1;
                  uVar26 = uVar20 | uVar26;
                  if (bVar5) {
                    uVar24 = 0xffffffffffffffff;
                  }
                  if ((uVar9 & 1) == 0 && uVar25 == 0) {
LAB_00d13560:
                    if (lVar13 != -0x8000000000000000) {
                      uVar25 = 0;
                      lVar13 = lVar13 + -1;
                      goto LAB_00d13368;
                    }
                    goto LAB_00d13250;
                  }
                }
                uVar25 = 1;
                uVar20 = (ulong)(uVar9 & 1) << (~uVar24 & 0x3f);
                if (((uint)(uVar24 < 0x40) & uVar9 & 1) == 0) {
                  uVar20 = 0;
                }
                bVar5 = uVar24 == 0xffffffffffffffff;
                uVar24 = uVar24 + 1;
                uVar26 = uVar20 | uVar26;
                if (bVar5) {
                  uVar24 = 0xffffffffffffffff;
                }
              }
            }
LAB_00d13368:
            std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
            uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
            bVar5 = uVar17 != 0x70;
            uVar17 = uVar9;
          } while (bVar5);
        }
        bVar6 = false;
        bVar5 = false;
        cVar23 = '\x01';
        lVar15 = 0;
        do {
          if (bVar5) {
            if (uVar9 - 0x3a < 0xfffffff6) {
              lVar15 = lVar15 * cVar23;
              if ((lVar15 < 0) || (lVar13 < 0)) {
                if ((lVar15 < 0) && (lVar13 < 0)) {
                  uVar24 = lVar15 + lVar13;
                  lVar13 = lVar13 + 0x7ffffffffffffffe;
                  if (lVar13 == -lVar15 || lVar13 + lVar15 < 0 != SBORROW8(lVar13,-lVar15)) {
                    uVar24 = 0x8000000000000002;
                  }
                }
                else {
                  uVar24 = lVar15 + lVar13;
                }
              }
              else {
                uVar24 = lVar15 + lVar13;
                if (0x7ffffffffffffffe - lVar13 <= lVar15) {
                  uVar24 = 0x7ffffffffffffffe;
                }
              }
              bVar6 = uVar26 == 0;
              bVar5 = (bool)(bVar6 & (bVar1 ^ 1U));
              uVar20 = 0;
              if (!bVar5) {
                uVar20 = uVar24;
              }
              if (bVar1 == false && !bVar6) {
                uVar20 = uVar24 - 1;
              }
              uVar26 = uVar26 << (uint)(byte)~(bVar1 | bVar6);
              if ((long)uVar20 < 1 && !bVar5) {
                uVar26 = uVar26 >> 1 | 0x8000000000000000;
              }
              uVar26 = uVar26 >> 0xc;
              uVar24 = uVar26;
              if (((long)uVar20 < 0) && (uVar18 = uVar20, !bVar5)) {
                do {
                  uVar24 = uVar26 >> 1;
                  uVar20 = 0;
                  if (1 < uVar26) {
                    uVar20 = uVar18 + 1;
                  }
                } while (((long)uVar20 < 0) &&
                        (bVar1 = 1 < uVar26, uVar26 = uVar24, uVar18 = uVar18 + 1, bVar1));
              }
              uVar26 = uVar20;
              if (0x7fe < (long)uVar20) {
                uVar26 = 0x7ff;
              }
              uVar18 = 0;
              if ((long)uVar20 < 0x800) {
                uVar18 = uVar24;
              }
              *(ulong *)param_2 = uVar18 | (ulong)(iVar7 == 0x2d) << 0x3f | (uVar26 & 0x7ff) << 0x34
              ;
              if (*(long *)(lVar4 + 0x28) == local_68) {
                return param_1;
              }
              goto LAB_00d136a0;
            }
LAB_00d131d8:
            bVar5 = true;
            lVar16 = (ulong)uVar9 + lVar15 * 10 + -0x30;
            if ((long)((0x800000000000002e - (ulong)uVar9) / 10) <= lVar15) {
              lVar16 = 0x7ffffffffffffffe;
            }
          }
          else {
            if ((uVar9 != 0x2d) && (uVar9 != 0x2b)) {
              if (0xfffffff5 < uVar9 - 0x3a) goto LAB_00d131d8;
              goto LAB_00d13250;
            }
            if (bVar6) goto LAB_00d13250;
            bVar5 = false;
            cVar23 = '\x01';
            if (uVar9 == 0x2d) {
              cVar23 = -1;
            }
            bVar6 = true;
            lVar16 = lVar15;
          }
          std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get();
          uVar9 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
          lVar15 = lVar16;
        } while( true );
      }
      std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget();
      if (*(long *)(lVar4 + 0x28) == local_68) {
LAB_00d13174:
        pbVar10 = ParseNormalFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>>
                            (param_1,iVar7 == 0x2d,param_2);
        return pbVar10;
      }
    }
    else if (*(long *)(lVar4 + 0x28) == local_68) goto LAB_00d13174;
  }
  else {
    local_70 = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_70);
    lVar13 = *(long *)param_1;
    *(double *)param_2 = local_70;
    dVar14 = local_70;
    if ((((byte)param_1[*(long *)(lVar13 + -0x18) + 0x20] & 5) != 0) && (ABS(local_70) == 0.0)) {
      dVar14 = 0.0;
      *(undefined8 *)param_2 = 0;
    }
    if (ABS(local_70) == INFINITY) {
      *(ulong *)param_2 = (ulong)dVar14 & 0x8000000000000000 | 0x7fefffffffffffff;
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar13 + -0x18));
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return param_1;
    }
  }
  goto LAB_00d136a0;
LAB_00d13250:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return param_1;
  }
LAB_00d136a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === ParseNormalFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>> @ 00d136a4 ===

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   spvtools::utils::ParseNormalFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> >
   >(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool,
   spvtools::utils::HexFloat<spvtools::utils::FloatProxy<double>,
   spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double> > >&) */

basic_istream *
spvtools::utils::
ParseNormalFloat<spvtools::utils::FloatProxy<double>,spvtools::utils::HexFloatTraits<spvtools::utils::FloatProxy<double>>>
          (basic_istream *param_1,bool param_2,HexFloat *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2) {
    iVar3 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek();
    if ((iVar3 == 0x2d) || (iVar3 == 0x2b)) {
      lVar4 = *(long *)param_1;
      *(undefined8 *)param_3 = 0;
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar4 + -0x18));
      if ((iVar3 - 0x2bU & 0xfffffffd) == 0) goto LAB_00d137bc;
    }
    local_50 = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_50);
    dVar5 = -local_50;
  }
  else {
    local_50 = 0.0;
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_1,&local_50);
    dVar5 = local_50;
  }
  lVar4 = *(long *)param_1;
  *(double *)param_3 = dVar5;
  dVar6 = ABS(dVar5);
  if ((((byte)param_1[*(long *)(lVar4 + -0x18) + 0x20] & 5) != 0) && (dVar6 == 0.0)) {
    dVar5 = 0.0;
    *(undefined8 *)param_3 = 0;
  }
  if (dVar6 == INFINITY) {
    uVar1 = 0xffefffffffffffff;
    if (!param_2 && -1 < (long)dVar5) {
      uVar1 = 0x7fefffffffffffff;
    }
    *(undefined8 *)param_3 = uVar1;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar4 + -0x18));
  }
LAB_00d137bc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === to_string @ 00d137ec ===

/* spvtools::to_string(unsigned int) */

void __thiscall spvtools::to_string(spvtools *this,uint param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong *in_x8;
  char *pcVar5;
  undefined1 *__dest;
  ulong __n;
  long lVar6;
  undefined1 auStack_52 [9];
  char local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((int)this == 0) {
    local_49 = '0';
    iVar4 = 9;
    lVar6 = 9;
    __n = 1;
  }
  else {
    iVar4 = 10;
    pcVar5 = &local_49;
    do {
      uVar3 = (uint)this;
      iVar4 = iVar4 + -1;
      this = (spvtools *)(((ulong)this & 0xffffffff) / 10);
      *pcVar5 = "0123456789"[uVar3 + (int)this * -10];
      pcVar5 = pcVar5 + -1;
    } while (9 < uVar3);
    lVar6 = (long)iVar4;
    __n = 10 - lVar6;
    if (0xfffffff7 < (uint)__n) {
                    /* WARNING: Subroutine does not return */
      FUN_00cf7a94(this,param_1);
    }
  }
  if ((uint)__n < 0x17) {
    __dest = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((uint)__n << 1);
    if (iVar4 == 10) goto LAB_00d138c8;
  }
  else {
    uVar1 = 0x1a;
    if ((__n | 7) != 0x17) {
      uVar1 = (__n | 7) + 1;
    }
    __dest = (undefined1 *)operator_new(uVar1);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar1 | 1;
  }
  memcpy(__dest,auStack_52 + lVar6,__n);
LAB_00d138c8:
  __dest[__n] = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// === _INIT_0 @ 00d13954 ===

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00da05e8 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00da05e8 = iVar2 != 0;
    return;
  }
  DAT_00da05e8 = 1;
  return;
}



// === _INIT_1 @ 00d13bd8 ===

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00da05f0 != 0) {
    return;
  }
  iVar1 = __system_property_get("ro.arch",local_70);
  if ((iVar1 < 1) || (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00d139ec(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}



