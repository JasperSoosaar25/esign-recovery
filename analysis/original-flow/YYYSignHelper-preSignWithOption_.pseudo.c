/* ORIGINAL-BYTE INITIAL-POINTER ANALYSIS — NOT ORIGINAL SOURCE OR VERIFIED BEHAVIOR.
 * No executable bytes were changed. Jump overrides belong only to this analysis database.
 * Initial table values, ABI preservation and call-return behavior are assumptions.
 * Function body derived from recover_method_flow.py; original source boundaries unknown.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038e4fc */
/* WARNING: Switch with 1 destination removed at 0x00010038e510 */
/* WARNING: Switch with 1 destination removed at 0x00010038e51c */
/* WARNING: Switch with 1 destination removed at 0x00010038e528 */
/* WARNING: Switch with 1 destination removed at 0x00010038e59c */
/* WARNING: Switch with 1 destination removed at 0x000100390240 */
/* WARNING: Switch with 1 destination removed at 0x000100390284 */
/* WARNING: Switch with 1 destination removed at 0x000100390358 */
/* WARNING: Switch with 1 destination removed at 0x000100391b20 */
/* WARNING: Switch with 1 destination removed at 0x000100391b38 */
/* WARNING: Switch with 1 destination removed at 0x000100391b48 */
/* WARNING: Switch with 1 destination removed at 0x000100391b68 */
/* WARNING: Switch with 1 destination removed at 0x000100391c74 */
/* WARNING: Switch with 1 destination removed at 0x000100391cbc */
/* WARNING: Switch with 1 destination removed at 0x000100399a6c */
/* WARNING: Switch with 1 destination removed at 0x000100399b08 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Original_YYYSignHelper_preSignWithOption_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_810 [48];
  undefined1 auStack_7e0 [16];
  undefined1 auStack_7d0 [128];
  undefined1 auStack_750 [64];
  undefined1 auStack_710 [128];
  undefined1 auStack_690 [64];
  undefined1 auStack_650 [128];
  undefined1 auStack_5d0 [64];
  undefined1 auStack_590 [16];
  undefined1 auStack_580 [16];
  undefined1 auStack_570 [128];
  undefined1 auStack_4f0 [64];
  undefined1 auStack_4b0 [128];
  undefined1 auStack_430 [64];
  undefined1 auStack_3f0 [128];
  undefined1 auStack_370 [64];
  undefined1 auStack_330 [128];
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [16];
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_180;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92414 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dd3720 = bRam0000000100dd36f0 ^ 0xe3;
    bRam0000000100dd3721 = bRam0000000100dd36f1 ^ 8;
    cRam0000000100dd3722 = bRam0000000100dd36f2 + (bRam0000000100dd36f2 & 0x70) * -2 + 'p';
    bRam0000000100dd3723 = bRam0000000100dd36f3 ^ 0xf;
    cRam0000000100dd3724 = bRam0000000100dd36f4 + (bRam0000000100dd36f4 & 0x56) * -2 + 'V';
    cRam0000000100dd3725 = bRam0000000100dd36f5 + (bRam0000000100dd36f5 & 0x45) * -2 + 'E';
    bRam0000000100dd3726 = bRam0000000100dd36f6 ^ 0xfa;
    bRam0000000100dd3727 = bRam0000000100dd36f7 ^ 0xef;
    bRam0000000100dd3728 = bRam0000000100dd36f8 ^ 0xfe;
    bRam0000000100dd3729 = bRam0000000100dd36f9 ^ 1;
    bRam0000000100dd372a = bRam0000000100dd36fa ^ 0xd1;
    cRam0000000100dd372b = '\x7f' - cRam0000000100dd36fb;
    cRam0000000100dd372c = bRam0000000100dd36fc + (bRam0000000100dd36fc & 0x21) * -2 + -0x5f;
    bRam0000000100dd372d = bRam0000000100dd36fd ^ 0x28;
    bRam0000000100dd372e = bRam0000000100dd36fe ^ 0xd7;
    bRam0000000100dd372f = bRam0000000100dd36ff ^ 0x60;
    bRam0000000100dd3730 = bRam0000000100dd3700 ^ 0x12;
    bRam0000000100dd3731 = bRam0000000100dd3701 ^ 0x99;
    bRam0000000100dd3732 = bRam0000000100dd3702 ^ 0x57;
    bRam0000000100dd3733 = bRam0000000100dd3703 ^ 0x37;
    cRam0000000100dd3734 = bRam0000000100dd3704 + (bRam0000000100dd3704 & 0x54) * -2 + 'T';
    bRam0000000100dd373d = bRam0000000100dd370d ^ 0xea;
    bRam0000000100dd373e = bRam0000000100dd370e ^ 0x88;
    bRam0000000100dd373f = bRam0000000100dd370f ^ 0xc4;
    bRam0000000100dd3740 = bRam0000000100dd3710 ^ 0xe3;
    cRam0000000100dd3741 = '\x7f' - cRam0000000100dd3711;
    cRam0000000100dd3742 = bRam0000000100dd3712 + (bRam0000000100dd3712 & 0xe3) * -2 + 'c';
    bRam0000000100dd3743 = ~bRam0000000100dd3713;
    bRam0000000100dd3744 = bRam0000000100dd3714 ^ 2;
    bRam0000000100dd3745 = bRam0000000100dd3715 ^ 0x9b;
    bRam0000000100dd3746 = bRam0000000100dd3716 ^ 0xef;
    uRam0000000100dd3747 = uRam0000000100dd3717;
    bRam0000000100dd3770 = bRam0000000100dd3750 ^ 0x9d;
    bRam0000000100dd3771 = bRam0000000100dd3751 ^ 1;
    bRam0000000100dd3772 = bRam0000000100dd3752 ^ 0x69;
    bRam0000000100dd3773 = bRam0000000100dd3753 ^ 0x57;
    bRam0000000100dd3774 = bRam0000000100dd3754 ^ 0xb5;
    bRam0000000100dd3775 = bRam0000000100dd3755 ^ 0x97;
    cRam0000000100dd3776 = bRam0000000100dd3756 + (bRam0000000100dd3756 & 1) * -2 + -0x7f;
    cRam0000000100dd377f = bRam0000000100dd375f + (bRam0000000100dd375f & 0x1e) * -2 + -0x62;
    bRam0000000100dd37b0 = bRam0000000100dd3790 ^ 0xd2;
    bRam0000000100dd37b1 = bRam0000000100dd3791 ^ 0x22;
    bRam0000000100dd37b2 = bRam0000000100dd3792 ^ 0xf6;
    bRam0000000100dd37b3 = bRam0000000100dd3793 ^ 0x5e;
    bRam0000000100dd37b4 = bRam0000000100dd3794 ^ 0x5a;
    bRam0000000100dd37b5 = bRam0000000100dd3795 ^ 0xc0;
    cRam0000000100dd37b6 = bRam0000000100dd3796 + (bRam0000000100dd3796 & 5) * -2 + '\x05';
    bRam0000000100dd37b7 = bRam0000000100dd3797 ^ 0xa9;
    bRam0000000100dd37b8 = bRam0000000100dd3798 ^ 0x3c;
    cRam0000000100dd37b9 = bRam0000000100dd3799 + (bRam0000000100dd3799 & 0xbb) * -2 + ';';
    bRam0000000100dd37ba = bRam0000000100dd379a ^ 0xd6;
    bRam0000000100dd37bb = bRam0000000100dd379b ^ 0xa4;
    bRam0000000100dd37bc = bRam0000000100dd379c ^ 0xb2;
    bRam0000000100dd37bd = bRam0000000100dd379d ^ 0xaa;
    bRam0000000100dd37be = bRam0000000100dd379e ^ 0x73;
    cRam0000000100dd37bf = bRam0000000100dd379f + (bRam0000000100dd379f & 5) * -2 + -0x7b;
    cRam0000000100dd37c0 = bRam0000000100dd37a0 + (bRam0000000100dd37a0 & 0x17) * -2 + '\x17';
    bRam0000000100dd37c1 = bRam0000000100dd37a1 ^ 0xd0;
    bRam0000000100dd37c2 = bRam0000000100dd37a2 ^ 0x33;
    cRam0000000100dd37c3 = bRam0000000100dd37a3 + (bRam0000000100dd37a3 & 0x66) * -2 + -0x1a;
    bRam0000000100dd37c4 = bRam0000000100dd37a4 ^ 0x5b;
    bRam0000000100dd37c5 = bRam0000000100dd37a5 ^ 0x8f;
    bRam0000000100dd37c6 = bRam0000000100dd37a6 ^ 0x29;
    bRam0000000100dd37c7 = bRam0000000100dd37a7 ^ 0x42;
    bRam0000000100dd37c8 = bRam0000000100dd37a8 ^ 0x3b;
    cRam0000000100dd37c9 = bRam0000000100dd37a9 + (bRam0000000100dd37a9 & 0x66) * -2 + 'f';
    bRam0000000100dd37ca = bRam0000000100dd37aa ^ 0x82;
    bRam0000000100dd35ce = bRam0000000100dd35c8 ^ 0xa0;
    cRam0000000100dd35cf = bRam0000000100dd35c9 + (bRam0000000100dd35c9 & 0x56) * -2 + -0x2a;
    bRam0000000100dd35d0 = bRam0000000100dd35ca ^ 0x20;
    bRam0000000100dd35d1 = bRam0000000100dd35cb ^ 0xdd;
    cRam0000000100dd35d2 = bRam0000000100dd35cc + (bRam0000000100dd35cc & 0xf1) * -2 + 'q';
    cRam0000000100dd35d3 = bRam0000000100dd35cd + (bRam0000000100dd35cd & 0xee) * -2 + -0x12;
    bRam0000000100dd35de = bRam0000000100dd35d4 ^ 0x39;
    bRam0000000100dd35df = bRam0000000100dd35d5 ^ 0xb6;
    bRam0000000100dd35e0 = bRam0000000100dd35d6 ^ 0x10;
    bRam0000000100dd35e1 = bRam0000000100dd35d7 ^ 5;
    cRam0000000100dd35e2 = bRam0000000100dd35d8 + (bRam0000000100dd35d8 & 0x39) * -2 + -0x47;
    bRam0000000100dd35e3 = bRam0000000100dd35d9 ^ 0x42;
    bRam0000000100dd35e4 = bRam0000000100dd35da ^ 0xfa;
    bRam0000000100dd35e5 = bRam0000000100dd35db ^ 0x23;
    bRam0000000100dd35e6 = bRam0000000100dd35dc ^ 0xb0;
    bRam0000000100dd35e7 = bRam0000000100dd35dd ^ 0x8d;
    cRam0000000100dd35ee = bRam0000000100dd35e8 + (bRam0000000100dd35e8 & 0xc3) * -2 + 'C';
    bRam0000000100dd35ef = bRam0000000100dd35e9 ^ 0x96;
    bRam0000000100dd35f0 = bRam0000000100dd35ea ^ 0xbf;
    bRam0000000100dd35f1 = bRam0000000100dd35eb ^ 0x1b;
    bRam0000000100dd35f2 = bRam0000000100dd35ec ^ 0x2d;
    cRam0000000100dd35f3 = bRam0000000100dd35ed + (bRam0000000100dd35ed & 0x1e) * -2 + '\x1e';
    cRam0000000100dd3620 = bRam0000000100dd3600 + (bRam0000000100dd3600 & 0x2f) * -2 + '/';
    bRam0000000100dd3621 = bRam0000000100dd3601 ^ 0xd6;
    bRam0000000100dd3622 = bRam0000000100dd3602 ^ 0xc3;
    bRam0000000100dd3623 = bRam0000000100dd3603 ^ 0xcf;
    bRam0000000100dd3624 = bRam0000000100dd3604 ^ 0xbe;
    bRam0000000100dd3625 = bRam0000000100dd3605 ^ 0x11;
    cRam0000000100dd3626 = bRam0000000100dd3606 + (bRam0000000100dd3606 & 0x49) * -2 + 'I';
    bRam0000000100dd3627 = bRam0000000100dd3607 ^ 0x49;
    bRam0000000100dd3628 = bRam0000000100dd3608 ^ 0x5b;
    cRam0000000100dd3629 = bRam0000000100dd3609 + (bRam0000000100dd3609 & 0x7a) * -2 + 'z';
    cRam0000000100dd362a = bRam0000000100dd360a + (bRam0000000100dd360a & 0x65) * -2 + 'e';
    cRam0000000100dd362b = bRam0000000100dd360b + (bRam0000000100dd360b & 6) * -2 + -0x7a;
    cRam0000000100dd362c = bRam0000000100dd360c + (bRam0000000100dd360c & 0xdf) * -2 + '_';
    bRam0000000100dd362d = bRam0000000100dd360d ^ 0x6c;
    bRam0000000100dd362e = bRam0000000100dd360e ^ 0x69;
    bRam0000000100dd362f = bRam0000000100dd360f ^ 0xc;
    bRam0000000100dd3630 = bRam0000000100dd3610 ^ 0x89;
    bRam0000000100dd3631 = bRam0000000100dd3611 ^ 0x6b;
    cRam0000000100dd3632 = bRam0000000100dd3612 + (bRam0000000100dd3612 & 2) * -2 + '\x02';
    bRam0000000100dd3633 = bRam0000000100dd3613 ^ 0xe3;
    cRam0000000100dd3634 = bRam0000000100dd3614 + (bRam0000000100dd3614 & 0x2d) * -2 + '-';
    cRam0000000100dd3635 = bRam0000000100dd3615 + (bRam0000000100dd3615 & 0x62) * -2 + -0x1e;
    cRam0000000100dd3636 = bRam0000000100dd3616 + (bRam0000000100dd3616 & 0x48) * -2 + 'H';
    bRam0000000100dd3637 = bRam0000000100dd3617 ^ 0x8b;
    cRam0000000100dd3638 = bRam0000000100dd3618 + (bRam0000000100dd3618 & 0x3a) * -2 + -0x46;
    uRam0000000100dd35b8 = uRam0000000100dd35a8 ^ 0x93f6;
    uRam0000000100dd35ba = uRam0000000100dd35aa ^ 0x529f;
    uRam0000000100dd35bc = uRam0000000100dd35ac ^ 0xdb0e;
    sRam0000000100dd35be = uRam0000000100dd35ae + (uRam0000000100dd35ae & 0x6eae) * -2 + -0x1152;
    uRam0000000100dd35c0 = uRam0000000100dd35b0 ^ 0xc4c3;
    sRam0000000100dd35c2 = uRam0000000100dd35b2 + (uRam0000000100dd35b2 & 0x52cc) * -2 + 0x52cc;
    uRam0000000100dd35c4 = uRam0000000100dd35b4 ^ 0xf7f4;
    uRam0000000100dd35c6 = uRam0000000100dd35b6 ^ 0x245;
    uRam0000000100dd33b8 = uRam0000000100dd33aa ^ 0x8f11;
    uRam0000000100dd33ba = uRam0000000100dd33ac ^ 0x9bed;
    sRam0000000100dd33bc = uRam0000000100dd33ae + (uRam0000000100dd33ae & 0x7b19) * -2 + 0x7b19;
    uRam0000000100dd33be = uRam0000000100dd33b0 ^ 0xcb86;
    sRam0000000100dd33c0 = uRam0000000100dd33b2 + (uRam0000000100dd33b2 & 0x23a0) * -2 + 0x23a0;
    uRam0000000100dd33c2 = uRam0000000100dd33b4 ^ 0x7603;
    uRam0000000100dd33c4 = uRam0000000100dd33b6 ^ 0xeb8b;
    cRam0000000100dd34f6 = bRam0000000100dd34f2 + (bRam0000000100dd34f2 & 0x12) * -2 + '\x12';
    bRam0000000100dd34f7 = bRam0000000100dd34f3 ^ 0xcb;
    bRam0000000100dd34f8 = bRam0000000100dd34f4 ^ 0xf3;
    bRam0000000100dd34f9 = bRam0000000100dd34f5 ^ 0x6e;
    bRam0000000100dd3304 = bRam0000000100dd32f5 ^ 0x5c;
    bRam0000000100dd3305 = bRam0000000100dd32f6 ^ 0xd9;
    bRam0000000100dd3306 = bRam0000000100dd32f7 ^ 0x79;
    bRam0000000100dd3307 = bRam0000000100dd32f8 ^ 0xbd;
    cRam0000000100dd3308 = bRam0000000100dd32f9 + (bRam0000000100dd32f9 & 0x70) * -2 + -0x10;
    bRam0000000100dd3309 = ~((bRam0000000100dd32fa | 0x69) & (bRam0000000100dd32fa ^ 0xff | 0x96));
    bRam0000000100dd330a = bRam0000000100dd32fb ^ 0xef;
    cRam0000000100dd330b = bRam0000000100dd32fc + (bRam0000000100dd32fc & 0x10) * -2 + '\x10';
    bRam0000000100dd330c = bRam0000000100dd32fd ^ 0x89;
    bRam0000000100dd330d = bRam0000000100dd32fe ^ 0x17;
    bRam0000000100dd330e = bRam0000000100dd32ff ^ 0x45;
    bRam0000000100dd330f = ~((bRam0000000100dd3300 | 0x55) & (~bRam0000000100dd3300 | 0xaa));
    bRam0000000100dd3310 = bRam0000000100dd3301 ^ 0x1a;
    bRam0000000100dd3311 = bRam0000000100dd3302 ^ 200;
    bRam0000000100dd3312 = bRam0000000100dd3303 ^ 0xc3;
    uRam0000000100dd339c = uRam0000000100dd338e ^ 0x28a1;
    uRam0000000100dd339e = uRam0000000100dd3390 ^ 0xab44;
    uRam0000000100dd33a0 = uRam0000000100dd3392 ^ 0xe85b;
    sRam0000000100dd33a2 = uRam0000000100dd3394 + (uRam0000000100dd3394 & 0x2e48) * -2 + 0x2e48;
    uRam0000000100dd33a4 = uRam0000000100dd3396 ^ 0x3444;
    uRam0000000100dd33a6 = uRam0000000100dd3398 ^ 0x578f;
    uRam0000000100dd33a8 = uRam0000000100dd339a ^ 0x9189;
    bRam0000000100dd32e8 = bRam0000000100dd32d8 ^ 0xa7;
    bRam0000000100dd32e9 = bRam0000000100dd32d9 ^ 0x93;
    bRam0000000100dd32ea = bRam0000000100dd32da ^ 0x57;
    bRam0000000100dd32eb = bRam0000000100dd32db ^ 0x6a;
    bRam0000000100dd32ec = bRam0000000100dd32dc ^ 0xac;
    cRam0000000100dd32ed = bRam0000000100dd32dd + (bRam0000000100dd32dd & 0x66) * -2 + -0x1a;
    bRam0000000100dd32ee = bRam0000000100dd32de ^ 0xd9;
    bRam0000000100dd32ef = bRam0000000100dd32df ^ 0x74;
    cRam0000000100dd32f0 = bRam0000000100dd32e0 + (bRam0000000100dd32e0 & 0x68) * -2 + -0x18;
    bRam0000000100dd32f1 = bRam0000000100dd32e1 ^ 0xbd;
    bRam0000000100dd32f2 = bRam0000000100dd32e2 ^ 0x2a;
    cRam0000000100dd32f3 = bRam0000000100dd32e3 + (bRam0000000100dd32e3 & 0x11) * -2 + -0x6f;
    bRam0000000100dd32f4 = bRam0000000100dd32e4 ^ 0x85;
    sRam0000000100dd3380 = uRam0000000100dd3372 + (uRam0000000100dd3372 & 0x6ccc) * -2 + -0x1334;
    uRam0000000100dd338a = uRam0000000100dd337c ^ 0xece;
    uRam0000000100dd338c = uRam0000000100dd337e ^ 0x612f;
    cRam0000000100dd3503 = bRam0000000100dd34fa + (bRam0000000100dd34fa & 0x44) * -2 + 'D';
    bRam0000000100dd3504 = bRam0000000100dd34fb ^ 0xe0;
    bRam0000000100dd3505 = bRam0000000100dd34fc ^ 0x38;
    bRam0000000100dd3506 = bRam0000000100dd34fd ^ 0x72;
    bRam0000000100dd3507 = bRam0000000100dd34fe ^ 0xeb;
    bRam0000000100dd3508 = bRam0000000100dd34ff ^ 0xa4;
    bRam0000000100dd3509 = bRam0000000100dd3500 ^ 0x47;
    bRam0000000100dd350a = bRam0000000100dd3501 ^ 0x78;
    cRam0000000100dd350b = bRam0000000100dd3502 + (bRam0000000100dd3502 & 7) * -2 + -0x79;
    uRam0000000100dd3538 = uRam0000000100dd3518 ^ 0x1d37;
    sRam0000000100dd353a = uRam0000000100dd351a + (uRam0000000100dd351a & 0x638e) * -2 + -0x1c72;
    sRam0000000100dd353c = uRam0000000100dd351c + (uRam0000000100dd351c & 0x768) * -2 + 0x768;
    sRam0000000100dd3570 = uRam0000000100dd3550 + (uRam0000000100dd3550 & 0x6809) * -2 + 0x6809;
    sRam0000000100dd3582 = uRam0000000100dd3562 + (uRam0000000100dd3562 & 0x6cc7) * -2 + 0x6cc7;
    uRam0000000100dd3584 = uRam0000000100dd3564 ^ 0x8133;
    bRam0000000100dd32c0 = bRam0000000100dd32a0 ^ 0xcc;
    bRam0000000100dd32c1 = bRam0000000100dd32a1 ^ 0x5d;
    bRam0000000100dd32c2 = bRam0000000100dd32a2 ^ 0x17;
    bRam0000000100dd32c3 = bRam0000000100dd32a3 ^ 0x12;
    bRam0000000100dd32c4 = bRam0000000100dd32a4 ^ 0x67;
    bRam0000000100dd32c5 = bRam0000000100dd32a5 ^ 0x8c;
    cRam0000000100dd32c6 = bRam0000000100dd32a6 + (bRam0000000100dd32a6 & 1) * -2 + '\x01';
    bRam0000000100dd32c7 = bRam0000000100dd32a7 ^ 0xbd;
    bRam0000000100dd32c8 = ~((bRam0000000100dd32a8 | 0xf5) & (bRam0000000100dd32a8 ^ 0xff | 10));
    bRam0000000100dd32c9 = bRam0000000100dd32a9 ^ 0xbc;
    bRam0000000100dd32ca = bRam0000000100dd32aa ^ 0x47;
    bRam0000000100dd32cb = ~((bRam0000000100dd32ab | 0xb7) & (bRam0000000100dd32ab ^ 0xff | 0x48));
    bRam0000000100dd32cc = bRam0000000100dd32ac ^ 0xa8;
    cRam0000000100dd32cd = bRam0000000100dd32ad + (bRam0000000100dd32ad & 0x4b) * -2 + -0x35;
    bRam0000000100dd32ce = bRam0000000100dd32ae ^ 0xc2;
    cRam0000000100dd32cf = bRam0000000100dd32af + (bRam0000000100dd32af & 0xcc) * -2 + 'L';
    bRam0000000100dd32d0 = bRam0000000100dd32b0 ^ 0x36;
    uRam0000000100dd3735 =
         CONCAT17((byte)((ulong)uRam0000000100dd3705 >> 0x38) ^
                  (byte)((ulong)_UNK_100980418 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3705 >> 0x30) ^
                           (byte)((ulong)_UNK_100980418 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3705 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980418 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3705 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980418 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3705 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980418 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3705 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980418 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3705 >> 8) ^
                                                  (byte)((ulong)_UNK_100980418 >> 8),
                                                  (byte)uRam0000000100dd3705 ^ (byte)_UNK_100980418)
                                                  ))))));
    uRam0000000100dd3777 =
         CONCAT17((byte)((ulong)uRam0000000100dd3757 >> 0x38) ^
                  (byte)((ulong)_UNK_100980420 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3757 >> 0x30) ^
                           (byte)((ulong)_UNK_100980420 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3757 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980420 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3757 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980420 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3757 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980420 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3757 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980420 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3757 >> 8) ^
                                                  (byte)((ulong)_UNK_100980420 >> 8),
                                                  (byte)uRam0000000100dd3757 ^ (byte)_UNK_100980420)
                                                  ))))));
    uRam0000000100dd3780 =
         CONCAT17((byte)((ulong)uRam0000000100dd3760 >> 0x38) ^
                  (byte)((ulong)_UNK_100980428 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3760 >> 0x30) ^
                           (byte)((ulong)_UNK_100980428 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3760 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980428 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3760 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980428 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3760 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980428 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3760 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980428 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3760 >> 8) ^
                                                  (byte)((ulong)_UNK_100980428 >> 8),
                                                  (byte)uRam0000000100dd3760 ^ (byte)_UNK_100980428)
                                                  ))))));
    uRam0000000100dd3382 =
         CONCAT17((byte)((ulong)uRam0000000100dd3374 >> 0x38) ^
                  (byte)((ulong)_UNK_100980430 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3374 >> 0x30) ^
                           (byte)((ulong)_UNK_100980430 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3374 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980430 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3374 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980430 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3374 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980430 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3374 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980430 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3374 >> 8) ^
                                                  (byte)((ulong)_UNK_100980430 >> 8),
                                                  (byte)uRam0000000100dd3374 ^ (byte)_UNK_100980430)
                                                  ))))));
    uRam0000000100dd3530 =
         CONCAT17((byte)((ulong)uRam0000000100dd3510 >> 0x38) ^
                  (byte)((ulong)_UNK_100980438 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3510 >> 0x30) ^
                           (byte)((ulong)_UNK_100980438 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3510 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980438 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3510 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980438 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3510 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980438 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3510 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980438 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3510 >> 8) ^
                                                  (byte)((ulong)_UNK_100980438 >> 8),
                                                  (byte)uRam0000000100dd3510 ^ (byte)_UNK_100980438)
                                                  ))))));
    uRam0000000100dd353e =
         CONCAT17((byte)((ulong)uRam0000000100dd351e >> 0x38) ^
                  (byte)((ulong)_UNK_100980400 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd351e >> 0x30) ^
                           (byte)((ulong)_UNK_100980400 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd351e >> 0x28) ^
                                    (byte)((ulong)_UNK_100980400 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd351e >> 0x20) ^
                                             (byte)((ulong)_UNK_100980400 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd351e >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980400 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd351e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980400 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd351e >> 8) ^
                                                  (byte)((ulong)_UNK_100980400 >> 8),
                                                  (byte)uRam0000000100dd351e ^ (byte)_UNK_100980400)
                                                  ))))));
    uRam0000000100dd3572 =
         CONCAT17((byte)((ulong)uRam0000000100dd3552 >> 0x38) ^
                  (byte)((ulong)_UNK_100980680 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3552 >> 0x30) ^
                           (byte)((ulong)_UNK_100980680 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3552 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980680 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3552 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980680 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3552 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980680 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3552 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980680 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3552 >> 8) ^
                                                  (byte)((ulong)_UNK_100980680 >> 8),
                                                  (byte)uRam0000000100dd3552 ^ (byte)_UNK_100980680)
                                                  ))))));
    uRam0000000100dd357a =
         CONCAT17((byte)((ulong)uRam0000000100dd355a >> 0x38) ^
                  (byte)((ulong)_UNK_100980688 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd355a >> 0x30) ^
                           (byte)((ulong)_UNK_100980688 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd355a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980688 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd355a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980688 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd355a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980688 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd355a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980688 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd355a >> 8) ^
                                                  (byte)((ulong)_UNK_100980688 >> 8),
                                                  (byte)uRam0000000100dd355a ^ (byte)_UNK_100980688)
                                                  ))))));
    bRam0000000100dd32d1 = bRam0000000100dd32b1 ^ 0x7d;
    bRam0000000100dd32d2 = bRam0000000100dd32b2 ^ 0xf9;
    uRam0000000100dd3350 = uRam0000000100dd3320 ^ 0x1a9d;
    uRam0000000100dd3352 = uRam0000000100dd3322 ^ 0x2cbb;
    sRam0000000100dd3354 = uRam0000000100dd3324 + (uRam0000000100dd3324 & 0x969) * -2 + -0x7697;
    uRam0000000100dd3366 =
         ~((uRam0000000100dd3336 | 0xa956) & (uRam0000000100dd3336 ^ 0xffff | 0x56a9));
    sRam0000000100dd3370 = uRam0000000100dd3340 + (uRam0000000100dd3340 & 0x1e63) * -2 + 0x1e63;
    uRam0000000100dd3598 = uRam0000000100dd3588 ^ 0x3c10;
    sRam0000000100dd359a = uRam0000000100dd358a + (uRam0000000100dd358a & 0x27d6) * -2 + 0x27d6;
    uRam0000000100dd359c = uRam0000000100dd358c ^ 0x120f;
    sRam0000000100dd359e = uRam0000000100dd358e + (uRam0000000100dd358e & 0xac5) * -2 + -0x753b;
    uRam0000000100dd35a0 = uRam0000000100dd3590 ^ 0x74c4;
    bRam0000000100dd3658 = bRam0000000100dd3648 ^ 0x2e;
    bRam0000000100dd3659 = bRam0000000100dd3649 ^ 0x51;
    bRam0000000100dd365a = bRam0000000100dd364a ^ 0xd4;
    uRam0000000100dd3400 = uRam0000000100dd33d0 ^ 0x7460;
    sRam0000000100dd3402 = uRam0000000100dd33d2 + (uRam0000000100dd33d2 & 0x6dfd) * -2 + 0x6dfd;
    sRam0000000100dd340c = uRam0000000100dd33dc + (uRam0000000100dd33dc & 0x29e4) * -2 + -0x561c;
    uRam0000000100dd340e = uRam0000000100dd33de ^ 0x6879;
    sRam0000000100dd3410 = uRam0000000100dd33e0 + (uRam0000000100dd33e0 & 0x1136) * -2 + 0x1136;
    uRam0000000100dd3422 = uRam0000000100dd33f2 ^ 0x4eda;
    sRam0000000100dd3424 = uRam0000000100dd33f4 + (uRam0000000100dd33f4 & 0x2553) * -2 + 0x2553;
    sRam0000000100dd3426 = uRam0000000100dd33f6 + (uRam0000000100dd33f6 & 0x2212) * -2 + -0x5dee;
    uRam0000000100dd3428 = uRam0000000100dd33f8 ^ 0x5edc;
    uRam0000000100dd34e0 = uRam0000000100dd34c0 ^ 0x4bac;
    sRam0000000100dd34e2 = uRam0000000100dd34c2 + (uRam0000000100dd34c2 & 0x5197) * -2 + -0x2e69;
    uRam0000000100dd34e4 = uRam0000000100dd34c4 ^ 0xc169;
    uRam0000000100dd34e6 = uRam0000000100dd34c6 ^ 0xfb02;
    sRam0000000100dd34e8 = uRam0000000100dd34c8 + (uRam0000000100dd34c8 & 0x69a) * -2 + -0x7966;
    sRam0000000100dd34ea = uRam0000000100dd34ca + (uRam0000000100dd34ca & 0x5922) * -2 + -0x26de;
    uRam0000000100dd34ec = uRam0000000100dd34cc ^ 0x1e72;
    uRam0000000100dd34ee = uRam0000000100dd34ce ^ 0xcca;
    uRam0000000100dd34f0 = uRam0000000100dd34d0 ^ 0x5320;
    bRam0000000100dd3433 = bRam0000000100dd342a ^ 0x14;
    cRam0000000100dd3434 = bRam0000000100dd342b + (bRam0000000100dd342b & 0x42) * -2 + -0x3e;
    cRam0000000100dd3435 = bRam0000000100dd342c + (bRam0000000100dd342c & 0x36) * -2 + '6';
    bRam0000000100dd3436 = bRam0000000100dd342d ^ 0x98;
    bRam0000000100dd3437 = bRam0000000100dd342e ^ 0x4a;
    bRam0000000100dd3438 = bRam0000000100dd342f ^ 0xc;
    bRam0000000100dd3439 = bRam0000000100dd3430 ^ 0x83;
    bRam0000000100dd343a = bRam0000000100dd3431 ^ 0x44;
    bRam0000000100dd343b = bRam0000000100dd3432 ^ 0x71;
    sRam0000000100dd348a = uRam0000000100dd347c + (uRam0000000100dd347c & 0x57c9) * -2 + 0x57c9;
    sRam0000000100dd348c = uRam0000000100dd347e + (uRam0000000100dd347e & 0x66b8) * -2 + -0x1948;
    uRam0000000100dd3496 = uRam0000000100dd3488 ^ 0xd3db;
    bRam0000000100dd3458 = bRam0000000100dd3448 ^ 0x6a;
    bRam0000000100dd3459 = bRam0000000100dd3449 ^ 0xf9;
    bRam0000000100dd345a = bRam0000000100dd344a ^ 0x76;
    bRam0000000100dd345b = bRam0000000100dd344b ^ 0xcb;
    uRam0000000100dd34a8 = uRam0000000100dd3498 ^ 0x995d;
    sRam0000000100dd34aa = uRam0000000100dd349a + (uRam0000000100dd349a & 0x7689) * -2 + -0x977;
    sRam0000000100dd34ac = uRam0000000100dd349c + (uRam0000000100dd349c & 0x4b1a) * -2 + 0x4b1a;
    uRam0000000100dd34ae =
         ~((uRam0000000100dd349e | 0xd5ab) & (uRam0000000100dd349e ^ 0xffff | 0x2a54));
    bRam0000000100dd3470 = bRam0000000100dd3460 ^ 0x86;
    bRam0000000100dd3471 = bRam0000000100dd3461 ^ 0x42;
    bRam0000000100dd3472 = bRam0000000100dd3462 ^ 0xbc;
    bRam0000000100dd3473 = bRam0000000100dd3463 ^ 0xa5;
    bRam0000000100dd3474 = bRam0000000100dd3464 ^ 0xfe;
    bRam0000000100dd3475 = bRam0000000100dd3465 ^ 0xe8;
    cRam0000000100dd3476 = bRam0000000100dd3466 + (bRam0000000100dd3466 & 9) * -2 + -0x77;
    bRam0000000100dd3477 = bRam0000000100dd3467 ^ 0xe;
    bRam0000000100dd3478 = bRam0000000100dd3468 ^ 0x90;
    bRam0000000100dd3479 = bRam0000000100dd3469 ^ 0x5e;
    cRam0000000100dd347a = bRam0000000100dd346a + (bRam0000000100dd346a & 0x30) * -2 + -0x50;
    bRam0000000100dd347b = bRam0000000100dd346b ^ 0x40;
    bRam0000000100dd36c0 = bRam0000000100dd3690 ^ 0xc1;
    bRam0000000100dd36c1 = bRam0000000100dd3691 ^ 0xd0;
    bRam0000000100dd36c2 = bRam0000000100dd3692 ^ 6;
    cRam0000000100dd36c3 = bRam0000000100dd3693 + (bRam0000000100dd3693 & 2) * -2 + -0x7e;
    bRam0000000100dd36c4 = bRam0000000100dd3694 ^ 0x10;
    bRam0000000100dd36c5 = bRam0000000100dd3695 ^ 0x75;
    bRam0000000100dd36c6 = bRam0000000100dd3696 ^ 0x74;
    bRam0000000100dd36c7 = bRam0000000100dd3697 ^ 0xed;
    cRam0000000100dd36c8 = bRam0000000100dd3698 + (bRam0000000100dd3698 & 6) * -2 + '\x06';
    bRam0000000100dd36c9 = bRam0000000100dd3699 ^ 0x56;
    bRam0000000100dd36ca = bRam0000000100dd369a ^ 0xa2;
    bRam0000000100dd36cb = bRam0000000100dd369b ^ 0xed;
    bRam0000000100dd36cc = bRam0000000100dd369c ^ 0x68;
    cRam0000000100dd36cd = bRam0000000100dd369d + (bRam0000000100dd369d & 0x1c) * -2 + -100;
    bRam0000000100dd36ce = bRam0000000100dd369e ^ 0x6c;
    bRam0000000100dd36cf = bRam0000000100dd369f ^ 0xef;
    bRam0000000100dd36d0 = bRam0000000100dd36a0 ^ 10;
    cRam0000000100dd36d1 = bRam0000000100dd36a1 + (bRam0000000100dd36a1 & 0x4a) * -2 + 'J';
    cRam0000000100dd36d2 = bRam0000000100dd36a2 + (bRam0000000100dd36a2 & 0x25) * -2 + '%';
    bRam0000000100dd36e3 = bRam0000000100dd36b3 ^ 0xad;
    bRam0000000100dd36e4 = bRam0000000100dd36b4 ^ 6;
    bRam0000000100dd36e5 = bRam0000000100dd36b5 ^ 0xe1;
    cRam0000000100dd36e6 = bRam0000000100dd36b6 + (bRam0000000100dd36b6 & 0xc1) * -2 + 'A';
    bRam0000000100dd36e7 = ~bRam0000000100dd36b7;
    cRam0000000100dd36e8 = bRam0000000100dd36b8 + (bRam0000000100dd36b8 & 100) * -2 + -0x1c;
    bRam0000000100dd36e9 = bRam0000000100dd36b9 ^ 0xee;
    bRam0000000100dd36ea = bRam0000000100dd36ba ^ 0x2f;
    cRam0000000100dd36eb = bRam0000000100dd36bb + (bRam0000000100dd36bb & 0xd) * -2 + '\r';
    bRam0000000100dd36ec = bRam0000000100dd36bc ^ 0x15;
    bRam0000000100dd367e = bRam0000000100dd3671 ^ 0x19;
    bRam0000000100dd367f = bRam0000000100dd3672 ^ 0xe4;
    bRam0000000100dd3680 = bRam0000000100dd3673 ^ 0x5f;
    bRam0000000100dd3681 = bRam0000000100dd3674 ^ 0x3a;
    bRam0000000100dd3682 = bRam0000000100dd3675 ^ 0xd5;
    bRam0000000100dd3683 = bRam0000000100dd3676 ^ 0x3e;
    cRam0000000100dd3684 = bRam0000000100dd3677 + (bRam0000000100dd3677 & 7) * -2 + '\a';
    cRam0000000100dd3685 = bRam0000000100dd3678 + (bRam0000000100dd3678 & 0x28) * -2 + '(';
    bRam0000000100dd3686 = bRam0000000100dd3679 ^ 0xf7;
    bRam0000000100dd3687 = bRam0000000100dd367a ^ 0x8e;
    bRam0000000100dd3688 = bRam0000000100dd367b ^ 0x7f;
    bRam0000000100dd3689 = bRam0000000100dd367c ^ 0xbf;
    bRam0000000100dd368a = bRam0000000100dd367d ^ 0x5a;
    uRam0000000100dd3240 = uRam0000000100dd3200 ^ 0x6333;
    uRam0000000100dd3242 =
         ~((uRam0000000100dd3202 | 0x8574) & (uRam0000000100dd3202 ^ 0xffff | 0x7a8b));
    uRam0000000100dd3244 = uRam0000000100dd3204 ^ 0xd227;
    sRam0000000100dd3246 = uRam0000000100dd3206 + (uRam0000000100dd3206 & 0x286a) * -2 + 0x286a;
    uRam0000000100dd3248 =
         ~((uRam0000000100dd3208 | 0x8d9c) & (uRam0000000100dd3208 ^ 0xffff | 0x7263));
    uRam0000000100dd3252 = uRam0000000100dd3212 ^ 0xf1fc;
    uRam0000000100dd3254 = uRam0000000100dd3214 ^ 0x3820;
    sRam0000000100dd3256 = uRam0000000100dd3216 + (uRam0000000100dd3216 & 0x3dee) * -2 + 0x3dee;
    sRam0000000100dd3258 = uRam0000000100dd3218 + (uRam0000000100dd3218 & 0x4d4f) * -2 + -0x32b1;
    uRam0000000100dd3262 = uRam0000000100dd3222 ^ 0x90ad;
    sRam0000000100dd3264 = uRam0000000100dd3224 + (uRam0000000100dd3224 & 0x2987) * -2 + 0x2987;
    uRam0000000100dd3266 = uRam0000000100dd3226 ^ 0x60b2;
    uRam0000000100dd3268 = uRam0000000100dd3228 ^ 0x42ea;
    sRam0000000100dd326a = uRam0000000100dd322a + (uRam0000000100dd322a & 0x6a07) * -2 + -0x15f9;
    uRam0000000100dd326c = uRam0000000100dd322c ^ 0xc668;
    sRam0000000100dd326e = uRam0000000100dd322e + (uRam0000000100dd322e & 0x57c9) * -2 + 0x57c9;
    bRam0000000100dd31e0 = bRam0000000100dd31c0 ^ 0x26;
    bRam0000000100dd31e1 = bRam0000000100dd31c1 ^ 0x50;
    bRam0000000100dd31e2 = bRam0000000100dd31c2 ^ 0xfc;
    bRam0000000100dd31e3 = bRam0000000100dd31c3 ^ 0xdd;
    bRam0000000100dd31e4 = bRam0000000100dd31c4 ^ 0xa1;
    bRam0000000100dd31e5 = bRam0000000100dd31c5 ^ 0x46;
    bRam0000000100dd31e6 = bRam0000000100dd31c6 ^ 0x24;
    cRam0000000100dd31e7 = bRam0000000100dd31c7 + (bRam0000000100dd31c7 & 0x5c) * -2 + '\\';
    bRam0000000100dd31e8 = bRam0000000100dd31c8 ^ 0xc3;
    bRam0000000100dd31e9 = bRam0000000100dd31c9 ^ 0xdc;
    cRam0000000100dd31ea = bRam0000000100dd31ca + (bRam0000000100dd31ca & 0x2f) * -2 + '/';
    bRam0000000100dd31eb = bRam0000000100dd31cb ^ 0xca;
    bRam0000000100dd31ec = bRam0000000100dd31cc ^ 0xf9;
    bRam0000000100dd31ed = bRam0000000100dd31cd ^ 0xf3;
    bRam0000000100dd31ee = bRam0000000100dd31ce ^ 0x45;
    cRam0000000100dd31ef = bRam0000000100dd31cf + (bRam0000000100dd31cf & 0x14) * -2 + -0x6c;
    bRam0000000100dd31f0 = bRam0000000100dd31d0 ^ 0x97;
    bRam0000000100dd318d = bRam0000000100dd318a ^ 0x34;
    bRam0000000100dd318e = bRam0000000100dd318b ^ 0x89;
    bRam0000000100dd318f = bRam0000000100dd318c ^ 0xe0;
    uRam0000000100dd31a8 = uRam0000000100dd3198 ^ 0xd786;
    uRam0000000100dd31aa = uRam0000000100dd319a ^ 0x8c87;
    uRam0000000100dd3140 = uRam0000000100dd3120 ^ 0x99e2;
    uRam0000000100dd3142 = uRam0000000100dd3122 ^ 0xcccb;
    sRam0000000100dd3144 = uRam0000000100dd3124 + (uRam0000000100dd3124 & 0x670d) * -2 + 0x670d;
    uRam0000000100dd3146 = uRam0000000100dd3126 ^ 0x74ba;
    sRam0000000100dd3148 = uRam0000000100dd3128 + (uRam0000000100dd3128 & 0x2003) * -2 + -0x5ffd;
    uRam0000000100dd3286 = uRam0000000100dd3278 ^ 0xf2ae;
    uRam0000000100dd3288 = uRam0000000100dd327a ^ 0xdbc6;
    uRam0000000100dd328a = uRam0000000100dd327c ^ 0x4b5a;
    sRam0000000100dd328c = uRam0000000100dd327e + (uRam0000000100dd327e & 0x2823) * -2 + -0x57dd;
    uRam0000000100dd328e = uRam0000000100dd3280 ^ 0x7eac;
    uRam0000000100dd3290 = uRam0000000100dd3282 ^ 0x1427;
    uRam0000000100dd3292 = uRam0000000100dd3284 ^ 0x6fe3;
    uRam0000000100dd315e = uRam0000000100dd3152 ^ 0x8b8d;
    sRam0000000100dd3160 = uRam0000000100dd3154 + (uRam0000000100dd3154 & 0x7a3c) * -2 + -0x5c4;
    uRam0000000100dd3040 =
         ~((uRam0000000100dd3020 | 0x6b15) & (uRam0000000100dd3020 ^ 0xffff | 0x94ea));
    uRam0000000100dd3042 =
         ~((uRam0000000100dd3022 | 0x968d) & (uRam0000000100dd3022 ^ 0xffff | 0x6972));
    uRam0000000100dd2ff0 =
         CONCAT17((byte)((ulong)uRam0000000100dd2fe0 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2fe0 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2fe0 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2fe0 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2fe0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2fe0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2fe0 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806d0 >> 8),
                                                  (byte)uRam0000000100dd2fe0 ^ (byte)_UNK_1009806d0)
                                                  ))))));
    uRam0000000100dd2ff8 =
         CONCAT17((byte)((ulong)uRam0000000100dd2fe8 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2fe8 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2fe8 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2fe8 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2fe8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2fe8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2fe8 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806d8 >> 8),
                                                  (byte)uRam0000000100dd2fe8 ^ (byte)_UNK_1009806d8)
                                                  ))))));
    uRam0000000100dd3010 = uRam0000000100dd3000 ^ 0x7ea4;
    uRam0000000100dd3012 = uRam0000000100dd3002 ^ 0xbcbd;
    uRam0000000100dd3014 = uRam0000000100dd3004 ^ 0xf795;
    sRam0000000100dd3016 = uRam0000000100dd3006 + (uRam0000000100dd3006 & 0x5cbd) * -2 + -0x2343;
    sRam0000000100dd3188 = uRam0000000100dd3178 + (uRam0000000100dd3178 & 0x3242) * -2 + 0x3242;
    sRam0000000100dd3090 = uRam0000000100dd3060 + (uRam0000000100dd3060 & 0x1a1) * -2 + 0x1a1;
    uRam0000000100dd30ba = uRam0000000100dd308a ^ 0xb03;
    uRam0000000100dd30bc = uRam0000000100dd308c ^ 0x6a5e;
    uRam0000000100dd30be = uRam0000000100dd308e ^ 0x5e8c;
    uRam0000000100dd30f8 = uRam0000000100dd30c8 ^ 0x5595;
    uRam0000000100dd30fa = uRam0000000100dd30ca ^ 0x1018;
    uRam0000000100dd30fc = uRam0000000100dd30cc ^ 0xeb10;
    sRam0000000100dd30fe = uRam0000000100dd30ce + (uRam0000000100dd30ce & 0x3520) * -2 + 0x3520;
    uRam0000000100dd3100 = uRam0000000100dd30d0 ^ 0xc88a;
    sRam0000000100dd3102 = uRam0000000100dd30d2 + (uRam0000000100dd30d2 & 0x2307) * -2 + 0x2307;
    uRam0000000100dd3104 = uRam0000000100dd30d4 ^ 0xa6d;
    sRam0000000100dd3106 = uRam0000000100dd30d6 + (uRam0000000100dd30d6 & 0x67e) * -2 + 0x67e;
    uRam0000000100dd3108 = uRam0000000100dd30d8 ^ 0x3845;
    uRam0000000100dd310a = uRam0000000100dd30da ^ 0x332;
    sRam0000000100dd310c = uRam0000000100dd30dc + (uRam0000000100dd30dc & 0x33e9) * -2 + 0x33e9;
    uRam0000000100dd3116 = uRam0000000100dd30e6 ^ 0x3383;
    uRam0000000100dd3118 = uRam0000000100dd30e8 ^ 0x7f03;
    uRam0000000100dd311a = uRam0000000100dd30ea ^ 0x2cd2;
    bRam0000000100dd31b3 = bRam0000000100dd31ac ^ 0xd7;
    bRam0000000100dd31b4 = bRam0000000100dd31ad ^ 0x73;
    bRam0000000100dd31b5 = bRam0000000100dd31ae ^ 0xd5;
    bRam0000000100dd31b6 = bRam0000000100dd31af ^ 0x1a;
    cRam0000000100dd31b7 = bRam0000000100dd31b0 + (bRam0000000100dd31b0 & 0x16) * -2 + -0x6a;
    bRam0000000100dd31b8 = bRam0000000100dd31b1 ^ 0x5b;
    bRam0000000100dd31b9 = bRam0000000100dd31b2 ^ 0x80;
    bRam0000000100dd3666 = ~((bRam0000000100dd365b | 0x98) & (bRam0000000100dd365b ^ 0xff | 0x67));
    bRam0000000100dd3667 = bRam0000000100dd365c ^ 0xd3;
    bRam0000000100dd3668 = bRam0000000100dd365d ^ 0xa8;
    bRam0000000100dd3669 = bRam0000000100dd365e ^ 0x3d;
    bRam0000000100dd366a = bRam0000000100dd365f ^ 0x60;
    bRam0000000100dd366b = bRam0000000100dd3660 ^ 0x12;
    bRam0000000100dd366c = bRam0000000100dd3661 ^ 0xd6;
    cRam0000000100dd366d = bRam0000000100dd3662 + (bRam0000000100dd3662 & 0x78) * -2 + -8;
    bRam0000000100dd366e = bRam0000000100dd3663 ^ 0x59;
    bRam0000000100dd366f = bRam0000000100dd3664 ^ 0x58;
    bRam0000000100dd3670 = bRam0000000100dd3665 ^ 0xb4;
    bRam0000000100dd2fbf = bRam0000000100dd2fba ^ 0x75;
    uRam0000000100dd3356 =
         CONCAT17(bRam0000000100dd332d ^ (byte)((ulong)_UNK_100980690 >> 0x38),
                  CONCAT16(bRam0000000100dd332c ^ (byte)((ulong)_UNK_100980690 >> 0x30),
                           CONCAT15(bRam0000000100dd332b ^ (byte)((ulong)_UNK_100980690 >> 0x28),
                                    CONCAT14(bRam0000000100dd332a ^
                                             (byte)((ulong)_UNK_100980690 >> 0x20),
                                             CONCAT13(bRam0000000100dd3329 ^
                                                      (byte)((ulong)_UNK_100980690 >> 0x18),
                                                      CONCAT12(bRam0000000100dd3328 ^
                                                               (byte)((ulong)_UNK_100980690 >> 0x10)
                                                               ,CONCAT11(bRam0000000100dd3327 ^
                                                                         (byte)((ulong)
                                                  _UNK_100980690 >> 8),
                                                  bRam0000000100dd3326 ^ (byte)_UNK_100980690)))))))
    ;
    uRam0000000100dd335e =
         CONCAT17(bRam0000000100dd3335 ^ (byte)((ulong)_UNK_100980698 >> 0x38),
                  CONCAT16(bRam0000000100dd3334 ^ (byte)((ulong)_UNK_100980698 >> 0x30),
                           CONCAT15(bRam0000000100dd3333 ^ (byte)((ulong)_UNK_100980698 >> 0x28),
                                    CONCAT14(bRam0000000100dd3332 ^
                                             (byte)((ulong)_UNK_100980698 >> 0x20),
                                             CONCAT13(bRam0000000100dd3331 ^
                                                      (byte)((ulong)_UNK_100980698 >> 0x18),
                                                      CONCAT12(bRam0000000100dd3330 ^
                                                               (byte)((ulong)_UNK_100980698 >> 0x10)
                                                               ,CONCAT11(bRam0000000100dd332f ^
                                                                         (byte)((ulong)
                                                  _UNK_100980698 >> 8),
                                                  bRam0000000100dd332e ^ (byte)_UNK_100980698)))))))
    ;
    uRam0000000100dd3368 =
         CONCAT17((byte)((ulong)uRam0000000100dd3338 >> 0x38) ^
                  (byte)((ulong)_UNK_100980440 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3338 >> 0x30) ^
                           (byte)((ulong)_UNK_100980440 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3338 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980440 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3338 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980440 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3338 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980440 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3338 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980440 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3338 >> 8) ^
                                                  (byte)((ulong)_UNK_100980440 >> 8),
                                                  (byte)uRam0000000100dd3338 ^ (byte)_UNK_100980440)
                                                  ))))));
    uRam0000000100dd3650 =
         CONCAT17((byte)((ulong)uRam0000000100dd3640 >> 0x38) ^
                  (byte)((ulong)_UNK_100980448 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3640 >> 0x30) ^
                           (byte)((ulong)_UNK_100980448 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3640 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980448 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3640 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980448 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3640 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980448 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3640 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980448 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3640 >> 8) ^
                                                  (byte)((ulong)_UNK_100980448 >> 8),
                                                  (byte)uRam0000000100dd3640 ^ (byte)_UNK_100980448)
                                                  ))))));
    uRam0000000100dd3404 =
         CONCAT17((byte)((ulong)uRam0000000100dd33d4 >> 0x38) ^
                  (byte)((ulong)_UNK_100980450 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd33d4 >> 0x30) ^
                           (byte)((ulong)_UNK_100980450 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd33d4 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980450 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd33d4 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980450 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd33d4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980450 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd33d4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980450 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd33d4 >> 8) ^
                                                  (byte)((ulong)_UNK_100980450 >> 8),
                                                  (byte)uRam0000000100dd33d4 ^ (byte)_UNK_100980450)
                                                  ))))));
    uRam0000000100dd3412 =
         CONCAT17((byte)((ulong)uRam0000000100dd33e2 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd33e2 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd33e2 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd33e2 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd33e2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd33e2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd33e2 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806a0 >> 8),
                                                  (byte)uRam0000000100dd33e2 ^ (byte)_UNK_1009806a0)
                                                  ))))));
    uRam0000000100dd341a =
         CONCAT17((byte)((ulong)uRam0000000100dd33ea >> 0x38) ^
                  (byte)((ulong)_UNK_1009806a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd33ea >> 0x30) ^
                           (byte)((ulong)_UNK_1009806a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd33ea >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd33ea >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd33ea >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd33ea >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd33ea >> 8) ^
                                                  (byte)((ulong)_UNK_1009806a8 >> 8),
                                                  (byte)uRam0000000100dd33ea ^ (byte)_UNK_1009806a8)
                                                  ))))));
    uRam0000000100dd348e =
         CONCAT17((byte)((ulong)uRam0000000100dd3480 >> 0x38) ^
                  (byte)((ulong)_UNK_100980458 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3480 >> 0x30) ^
                           (byte)((ulong)_UNK_100980458 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3480 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980458 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3480 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980458 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3480 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980458 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3480 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980458 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3480 >> 8) ^
                                                  (byte)((ulong)_UNK_100980458 >> 8),
                                                  (byte)uRam0000000100dd3480 ^ (byte)_UNK_100980458)
                                                  ))))));
    uRam0000000100dd3450 =
         CONCAT17((byte)((ulong)uRam0000000100dd3440 >> 0x38) ^
                  (byte)((ulong)_UNK_100980460 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3440 >> 0x30) ^
                           (byte)((ulong)_UNK_100980460 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3440 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980460 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3440 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980460 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3440 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980460 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3440 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980460 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3440 >> 8) ^
                                                  (byte)((ulong)_UNK_100980460 >> 8),
                                                  (byte)uRam0000000100dd3440 ^ (byte)_UNK_100980460)
                                                  ))))));
    sVar3 = (short)((ulong)uRam0000000100dd34a0 >> 0x10);
    sVar4 = (short)((ulong)uRam0000000100dd34a0 >> 0x20);
    sVar5 = (short)((ulong)uRam0000000100dd34a0 >> 0x30);
    uVar6 = CONCAT26(sVar5 << 1,
                     CONCAT24(sVar4 << 1,CONCAT22(sVar3 << 1,(short)uRam0000000100dd34a0 << 1))) &
            _UNK_100980468;
    uRam0000000100dd34b0 =
         CONCAT26((sVar5 - (short)(uVar6 >> 0x30)) + (short)((ulong)_UNK_100980470 >> 0x30),
                  CONCAT24((sVar4 - (short)(uVar6 >> 0x20)) + (short)((ulong)_UNK_100980470 >> 0x20)
                           ,CONCAT22((sVar3 - (short)(uVar6 >> 0x10)) +
                                     (short)((ulong)_UNK_100980470 >> 0x10),
                                     ((short)uRam0000000100dd34a0 - (short)uVar6) +
                                     (short)_UNK_100980470)));
    uRam0000000100dd36d3 =
         CONCAT17((byte)((ulong)uRam0000000100dd36a3 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd36a3 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd36a3 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd36a3 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd36a3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd36a3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd36a3 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806b0 >> 8),
                                                  (byte)uRam0000000100dd36a3 ^ (byte)_UNK_1009806b0)
                                                  ))))));
    uRam0000000100dd36db =
         CONCAT17((byte)((ulong)uRam0000000100dd36ab >> 0x38) ^
                  (byte)((ulong)_UNK_1009806b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd36ab >> 0x30) ^
                           (byte)((ulong)_UNK_1009806b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd36ab >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd36ab >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd36ab >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd36ab >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd36ab >> 8) ^
                                                  (byte)((ulong)_UNK_1009806b8 >> 8),
                                                  (byte)uRam0000000100dd36ab ^ (byte)_UNK_1009806b8)
                                                  ))))));
    uRam0000000100dd324a =
         CONCAT17((byte)((ulong)uRam0000000100dd320a >> 0x38) ^
                  (byte)((ulong)_UNK_100980478 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd320a >> 0x30) ^
                           (byte)((ulong)_UNK_100980478 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd320a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980478 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd320a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980478 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd320a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980478 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd320a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980478 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd320a >> 8) ^
                                                  (byte)((ulong)_UNK_100980478 >> 8),
                                                  (byte)uRam0000000100dd320a ^ (byte)_UNK_100980478)
                                                  ))))));
    uRam0000000100dd325a =
         CONCAT17((byte)((ulong)uRam0000000100dd321a >> 0x38) ^
                  (byte)((ulong)_UNK_100980480 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd321a >> 0x30) ^
                           (byte)((ulong)_UNK_100980480 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd321a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980480 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd321a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980480 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd321a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980480 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd321a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980480 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd321a >> 8) ^
                                                  (byte)((ulong)_UNK_100980480 >> 8),
                                                  (byte)uRam0000000100dd321a ^ (byte)_UNK_100980480)
                                                  ))))));
    uRam0000000100dd3270 =
         CONCAT17((byte)((ulong)uRam0000000100dd3230 >> 0x38) ^
                  (byte)((ulong)_UNK_100980488 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3230 >> 0x30) ^
                           (byte)((ulong)_UNK_100980488 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3230 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980488 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3230 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980488 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3230 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980488 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3230 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980488 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3230 >> 8) ^
                                                  (byte)((ulong)_UNK_100980488 >> 8),
                                                  (byte)uRam0000000100dd3230 ^ (byte)_UNK_100980488)
                                                  ))))));
    uRam0000000100dd31a0 =
         CONCAT17((byte)((ulong)uRam0000000100dd3190 >> 0x38) ^
                  (byte)((ulong)_UNK_100980490 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3190 >> 0x30) ^
                           (byte)((ulong)_UNK_100980490 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3190 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980490 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3190 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980490 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3190 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980490 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3190 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980490 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3190 >> 8) ^
                                                  (byte)((ulong)_UNK_100980490 >> 8),
                                                  (byte)uRam0000000100dd3190 ^ (byte)_UNK_100980490)
                                                  ))))));
    uRam0000000100dd314a =
         CONCAT17((byte)((ulong)uRam0000000100dd312a >> 0x38) ^
                  (byte)((ulong)_UNK_100980498 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd312a >> 0x30) ^
                           (byte)((ulong)_UNK_100980498 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd312a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980498 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd312a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980498 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd312a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980498 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd312a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980498 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd312a >> 8) ^
                                                  (byte)((ulong)_UNK_100980498 >> 8),
                                                  (byte)uRam0000000100dd312a ^ (byte)_UNK_100980498)
                                                  ))))));
    uRam0000000100dd3162 =
         CONCAT17((byte)((ulong)uRam0000000100dd3156 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3156 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3156 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3156 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3156 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3156 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3156 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804a0 >> 8),
                                                  (byte)uRam0000000100dd3156 ^ (byte)_UNK_1009804a0)
                                                  ))))));
    uRam0000000100dd3044 =
         CONCAT17((byte)((ulong)uRam0000000100dd3024 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3024 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3024 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3024 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3024 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3024 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3024 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806c0 >> 8),
                                                  (byte)uRam0000000100dd3024 ^ (byte)_UNK_1009806c0)
                                                  ))))));
    uRam0000000100dd304c =
         CONCAT17((byte)((ulong)uRam0000000100dd302c >> 0x38) ^
                  (byte)((ulong)_UNK_1009806c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd302c >> 0x30) ^
                           (byte)((ulong)_UNK_1009806c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd302c >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd302c >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd302c >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd302c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd302c >> 8) ^
                                                  (byte)((ulong)_UNK_1009806c8 >> 8),
                                                  (byte)uRam0000000100dd302c ^ (byte)_UNK_1009806c8)
                                                  ))))));
    uRam0000000100dd3018 =
         CONCAT17((byte)((ulong)uRam0000000100dd3008 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3008 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3008 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3008 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3008 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3008 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3008 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804a8 >> 8),
                                                  (byte)uRam0000000100dd3008 ^ (byte)_UNK_1009804a8)
                                                  ))))));
    uRam0000000100dd3180 =
         CONCAT17((byte)((ulong)uRam0000000100dd3170 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3170 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3170 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3170 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3170 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3170 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3170 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804b0 >> 8),
                                                  (byte)uRam0000000100dd3170 ^ (byte)_UNK_1009804b0)
                                                  ))))));
    uRam0000000100dd3092 =
         CONCAT17((byte)((ulong)uRam0000000100dd3062 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3062 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3062 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3062 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3062 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3062 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3062 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806e0 >> 8),
                                                  (byte)uRam0000000100dd3062 ^ (byte)_UNK_1009806e0)
                                                  ))))));
    uRam0000000100dd309a =
         CONCAT17((byte)((ulong)uRam0000000100dd306a >> 0x38) ^
                  (byte)((ulong)_UNK_1009806e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd306a >> 0x30) ^
                           (byte)((ulong)_UNK_1009806e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd306a >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd306a >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd306a >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd306a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd306a >> 8) ^
                                                  (byte)((ulong)_UNK_1009806e8 >> 8),
                                                  (byte)uRam0000000100dd306a ^ (byte)_UNK_1009806e8)
                                                  ))))));
    uRam0000000100dd30a2 =
         CONCAT17((byte)((ulong)uRam0000000100dd3072 >> 0x38) ^
                  (byte)((ulong)_UNK_1009806f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3072 >> 0x30) ^
                           (byte)((ulong)_UNK_1009806f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3072 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3072 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3072 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3072 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3072 >> 8) ^
                                                  (byte)((ulong)_UNK_1009806f0 >> 8),
                                                  (byte)uRam0000000100dd3072 ^ (byte)_UNK_1009806f0)
                                                  ))))));
    uRam0000000100dd30aa =
         CONCAT17((byte)((ulong)uRam0000000100dd307a >> 0x38) ^
                  (byte)((ulong)_UNK_1009806f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd307a >> 0x30) ^
                           (byte)((ulong)_UNK_1009806f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd307a >> 0x28) ^
                                    (byte)((ulong)_UNK_1009806f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd307a >> 0x20) ^
                                             (byte)((ulong)_UNK_1009806f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd307a >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009806f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd307a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009806f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd307a >> 8) ^
                                                  (byte)((ulong)_UNK_1009806f8 >> 8),
                                                  (byte)uRam0000000100dd307a ^ (byte)_UNK_1009806f8)
                                                  ))))));
    uRam0000000100dd30b2 =
         CONCAT17((byte)((ulong)uRam0000000100dd3082 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd3082 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd3082 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd3082 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd3082 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd3082 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd3082 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804b8 >> 8),
                                                  (byte)uRam0000000100dd3082 ^ (byte)_UNK_1009804b8)
                                                  ))))));
    uRam0000000100dd30f0 =
         CONCAT17((byte)((ulong)uRam0000000100dd30c0 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd30c0 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd30c0 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd30c0 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd30c0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd30c0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd30c0 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804c0 >> 8),
                                                  (byte)uRam0000000100dd30c0 ^ (byte)_UNK_1009804c0)
                                                  ))))));
    uRam0000000100dd310e =
         CONCAT17((byte)((ulong)uRam0000000100dd30de >> 0x38) ^
                  (byte)((ulong)_UNK_1009804c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd30de >> 0x30) ^
                           (byte)((ulong)_UNK_1009804c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd30de >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd30de >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd30de >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd30de >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd30de >> 8) ^
                                                  (byte)((ulong)_UNK_1009804c8 >> 8),
                                                  (byte)uRam0000000100dd30de ^ (byte)_UNK_1009804c8)
                                                  ))))));
    bRam0000000100dd2fc0 = bRam0000000100dd2fbb ^ 0x87;
    bRam0000000100dd2fc1 = bRam0000000100dd2fbc ^ 0x97;
    bRam0000000100dd2fc2 = bRam0000000100dd2fbd ^ 0x9c;
    cRam0000000100dd2fc3 = bRam0000000100dd2fbe + (bRam0000000100dd2fbe & 0x5e) * -2 + -0x22;
    uRam0000000100dd2de0 = uRam0000000100dd2db0 ^ 0x416c;
    sRam0000000100dd2de2 = uRam0000000100dd2db2 + (uRam0000000100dd2db2 & 0x575e) * -2 + 0x575e;
    uRam0000000100dd2de4 =
         CONCAT17((byte)((ulong)uRam0000000100dd2db4 >> 0x38) ^
                  (byte)((ulong)_UNK_1009804d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2db4 >> 0x30) ^
                           (byte)((ulong)_UNK_1009804d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2db4 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2db4 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2db4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2db4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2db4 >> 8) ^
                                                  (byte)((ulong)_UNK_1009804d0 >> 8),
                                                  (byte)uRam0000000100dd2db4 ^ (byte)_UNK_1009804d0)
                                                  ))))));
    uRam0000000100dd2dec = uRam0000000100dd2dbc ^ 0xc4da;
    uRam0000000100dd2dee = uRam0000000100dd2dbe ^ 0x256d;
    uRam0000000100dd2df0 = uRam0000000100dd2dc0 ^ 0xd9;
    sRam0000000100dd2df2 = uRam0000000100dd2dc2 + (uRam0000000100dd2dc2 & 0x553) * -2 + -0x7aad;
    sRam0000000100dd2df4 = uRam0000000100dd2dc4 + (uRam0000000100dd2dc4 & 0x5d8f) * -2 + -0x2271;
    uRam0000000100dd2df6 = uRam0000000100dd2dc6 ^ 0x1ae5;
    sRam0000000100dd2df8 = uRam0000000100dd2dc8 + (uRam0000000100dd2dc8 & 0x60e7) * -2 + 0x60e7;
    uRam0000000100dd2dfa =
         CONCAT17((byte)((ulong)uRam0000000100dd2dca >> 0x38) ^
                  (byte)((ulong)_UNK_1009804d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2dca >> 0x30) ^
                           (byte)((ulong)_UNK_1009804d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2dca >> 0x28) ^
                                    (byte)((ulong)_UNK_1009804d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2dca >> 0x20) ^
                                             (byte)((ulong)_UNK_1009804d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2dca >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009804d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2dca >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009804d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2dca >> 8) ^
                                                  (byte)((ulong)_UNK_1009804d8 >> 8),
                                                  (byte)uRam0000000100dd2dca ^ (byte)_UNK_1009804d8)
                                                  ))))));
    uRam0000000100dd2e02 = uRam0000000100dd2dd2 ^ 0xbcbf;
    uRam0000000100dd2e04 = uRam0000000100dd2dd4 ^ 0x5010;
    uRam0000000100dd2e06 = uRam0000000100dd2dd6 ^ 0xb211;
    sRam0000000100dd2e08 = uRam0000000100dd2dd8 + (uRam0000000100dd2dd8 & 0x24a2) * -2 + 0x24a2;
    sRam0000000100dd2e0a = uRam0000000100dd2dda + (uRam0000000100dd2dda & 0x4fbf) * -2 + -0x3041;
    sRam0000000100dd2d90 = uRam0000000100dd2d70 + (uRam0000000100dd2d70 & 0x4564) * -2 + -0x3a9c;
    uRam0000000100dd2d92 =
         CONCAT17((byte)((ulong)uRam0000000100dd2d72 >> 0x38) ^
                  (byte)((ulong)_UNK_100980700 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2d72 >> 0x30) ^
                           (byte)((ulong)_UNK_100980700 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2d72 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980700 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2d72 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980700 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2d72 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980700 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2d72 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980700 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2d72 >> 8) ^
                                                  (byte)((ulong)_UNK_100980700 >> 8),
                                                  (byte)uRam0000000100dd2d72 ^ (byte)_UNK_100980700)
                                                  ))))));
    uRam0000000100dd2d9a =
         CONCAT17((byte)((ulong)uRam0000000100dd2d7a >> 0x38) ^
                  (byte)((ulong)_UNK_100980708 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2d7a >> 0x30) ^
                           (byte)((ulong)_UNK_100980708 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2d7a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980708 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2d7a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980708 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2d7a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980708 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2d7a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980708 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2d7a >> 8) ^
                                                  (byte)((ulong)_UNK_100980708 >> 8),
                                                  (byte)uRam0000000100dd2d7a ^ (byte)_UNK_100980708)
                                                  ))))));
    uRam0000000100dd2da2 = uRam0000000100dd2d82 ^ 0xfb05;
    uRam0000000100dd2da4 = uRam0000000100dd2d84 ^ 0x9a5e;
    uRam0000000100dd2e30 = uRam0000000100dd2e10 ^ 0x3088;
    uRam0000000100dd2e32 = uRam0000000100dd2e12 ^ 0x977b;
    uRam0000000100dd2e34 = uRam0000000100dd2e14 ^ 0x1549;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd2e36 = uRam0000000100dd2e16 ^ 0x5d8f;
                    /* WARNING: Switch is manually overridden */
    sRam0000000100dd2e38 = uRam0000000100dd2e18 + (uRam0000000100dd2e18 & 0x13d) * -2 + 0x13d;
    uRam0000000100dd2e3a = uRam0000000100dd2e1a ^ 0x8f37;
    uRam0000000100dd2e3c = uRam0000000100dd2e1c ^ 0x8760;
    uRam0000000100dd2e3e = uRam0000000100dd2e1e ^ 0x8410;
    sRam0000000100dd2e40 = uRam0000000100dd2e20 + (uRam0000000100dd2e20 & 0x28c3) * -2 + 0x28c3;
    uRam0000000100dd2e42 = uRam0000000100dd2e22 ^ 0xc2ef;
    uRam0000000100dd2e44 = uRam0000000100dd2e24 ^ 0x5094;
    uRam0000000100dd2e46 =
         ~((uRam0000000100dd2e26 | 0xc520) & (uRam0000000100dd2e26 ^ 0xffff | 0x3adf));
    uRam0000000100dd2e70 = uRam0000000100dd2e50 ^ 0x8d29;
    uRam0000000100dd2e72 = uRam0000000100dd2e52 ^ 0x5bb3;
    sRam0000000100dd2e74 = uRam0000000100dd2e54 + (uRam0000000100dd2e54 & 0x19a9) * -2 + -0x6657;
    sRam0000000100dd2e76 = uRam0000000100dd2e56 + (uRam0000000100dd2e56 & 0x3588) * -2 + -0x4a78;
    uRam0000000100dd2e78 = uRam0000000100dd2e58 ^ 0x725c;
    uRam0000000100dd2e7a = uRam0000000100dd2e5a ^ 0xdb5f;
    sRam0000000100dd2e7c = uRam0000000100dd2e5c + (uRam0000000100dd2e5c & 0x5629) * -2 + -0x29d7;
    uRam0000000100dd2e7e = uRam0000000100dd2e5e ^ 0x6be4;
    uRam0000000100dd2e80 = uRam0000000100dd2e60 ^ 0xe8bc;
    sRam0000000100dd2e82 = uRam0000000100dd2e62 + (uRam0000000100dd2e62 & 0xc73) * -2 + -0x738d;
    cRam0000000100dd2c60 = bRam0000000100dd2c50 + (bRam0000000100dd2c50 & 0x11) * -2 + -0x6f;
    bRam0000000100dd2c61 = bRam0000000100dd2c51 ^ 0x14;
    cRam0000000100dd2c62 = bRam0000000100dd2c52 + (bRam0000000100dd2c52 & 0x34) * -2 + '4';
    bRam0000000100dd2c63 = bRam0000000100dd2c53 ^ 0x62;
    bRam0000000100dd2c64 = bRam0000000100dd2c54 ^ 6;
    bRam0000000100dd2c65 = bRam0000000100dd2c55 ^ 0xe8;
    cRam0000000100dd2c66 = bRam0000000100dd2c56 + (bRam0000000100dd2c56 & 0x16) * -2 + -0x6a;
    cRam0000000100dd2c67 = bRam0000000100dd2c57 + (bRam0000000100dd2c57 & 0x42) * -2 + -0x3e;
    bRam0000000100dd2c68 = bRam0000000100dd2c58 ^ 0xe4;
    bRam0000000100dd2c69 = bRam0000000100dd2c59 ^ 0xa7;
    cRam0000000100dd2c6a = bRam0000000100dd2c5a + (bRam0000000100dd2c5a & 0x68) * -2 + 'h';
    bRam0000000100dd2c6b = bRam0000000100dd2c5b ^ 0xe6;
    cRam0000000100dd2c6c = bRam0000000100dd2c5c + (bRam0000000100dd2c5c & 0x26) * -2 + -0x5a;
    bRam0000000100dd2c6d = bRam0000000100dd2c5d ^ 0x98;
    uRam0000000100dd2d50 = uRam0000000100dd2d30 ^ 0x39bd;
    uRam0000000100dd2d52 = uRam0000000100dd2d32 ^ 0x7036;
    uRam0000000100dd2d54 = uRam0000000100dd2d34 ^ 0x1497;
    sRam0000000100dd2d56 = uRam0000000100dd2d36 + (uRam0000000100dd2d36 & 0x1109) * -2 + 0x1109;
    uRam0000000100dd2d60 = uRam0000000100dd2d40 ^ 0x9df4;
    sRam0000000100dd2d62 = uRam0000000100dd2d42 + (uRam0000000100dd2d42 & 0x3bb8) * -2 + -0x4448;
    uRam0000000100dd2d64 = uRam0000000100dd2d44 ^ 0x5e10;
    uRam0000000100dd2d66 = uRam0000000100dd2d46 ^ 0xb37d;
    uRam0000000100dd2d68 =
         ~((uRam0000000100dd2d48 | 0x468e) & (uRam0000000100dd2d48 ^ 0xffff | 0xb971));
    bRam0000000100dd2c48 = bRam0000000100dd2c40 ^ 0xfd;
    bRam0000000100dd2c49 = bRam0000000100dd2c41 ^ 0x7d;
    bRam0000000100dd2c4a = bRam0000000100dd2c42 ^ 0xfd;
    cRam0000000100dd2c4b = bRam0000000100dd2c43 + (bRam0000000100dd2c43 & 0x4d) * -2 + 'M';
    bRam0000000100dd2c4c = bRam0000000100dd2c44 ^ 0x42;
    bRam0000000100dd2c4d = bRam0000000100dd2c45 ^ 0xd0;
    bRam0000000100dd2c4e = bRam0000000100dd2c46 ^ 0x61;
    bRam0000000100dd2c4f = bRam0000000100dd2c47 ^ 0xf6;
    uRam0000000100dd2cd0 = uRam0000000100dd2c70 ^ 0xca74;
    sRam0000000100dd2cd2 = uRam0000000100dd2c72 + (uRam0000000100dd2c72 & 0x2431) * -2 + -0x5bcf;
    sRam0000000100dd2cdc = uRam0000000100dd2c7c + (uRam0000000100dd2c7c & 0x1398) * -2 + 0x1398;
    uRam0000000100dd2ce6 = uRam0000000100dd2c86 ^ 0x9693;
    uRam0000000100dd2ce8 = uRam0000000100dd2c88 ^ 0x7d64;
    sRam0000000100dd2cea = uRam0000000100dd2c8a + (uRam0000000100dd2c8a & 0x62b9) * -2 + -0x1d47;
    sRam0000000100dd2cec = uRam0000000100dd2c8c + (uRam0000000100dd2c8c & 0x30a9) * -2 + 0x30a9;
    uRam0000000100dd2cee = uRam0000000100dd2c8e ^ 0x82e7;
    uRam0000000100dd2cf0 = uRam0000000100dd2c90 ^ 0x7b42;
    uRam0000000100dd2cf2 = uRam0000000100dd2c92 ^ 0x1bfb;
    sRam0000000100dd2cf4 = uRam0000000100dd2c94 + (uRam0000000100dd2c94 & 0x1e61) * -2 + 0x1e61;
    sRam0000000100dd2cfe = uRam0000000100dd2c9e + (uRam0000000100dd2c9e & 0x3419) * -2 + 0x3419;
    uRam0000000100dd2d08 = uRam0000000100dd2ca8 ^ 0x3acd;
    uRam0000000100dd2d0a = uRam0000000100dd2caa ^ 0x4b16;
    uRam0000000100dd2d0c = uRam0000000100dd2cac ^ 0x979a;
    uRam0000000100dd2d0e =
         ~((uRam0000000100dd2cae | 0x683b) & (uRam0000000100dd2cae ^ 0xffff | 0x97c4));
    uRam0000000100dd2d10 = uRam0000000100dd2cb0 ^ 0xec09;
    sRam0000000100dd2d12 = uRam0000000100dd2cb2 + (uRam0000000100dd2cb2 & 0x54f3) * -2 + 0x54f3;
    uRam0000000100dd2d1c = uRam0000000100dd2cbc ^ 0x6fb1;
    sRam0000000100dd2d1e = uRam0000000100dd2cbe + (uRam0000000100dd2cbe & 0x77cc) * -2 + -0x834;
    uRam0000000100dd2d28 = uRam0000000100dd2cc8 ^ 0x1c3f;
    uRam0000000100dd2d2a = uRam0000000100dd2cca ^ 0x3913;
    sRam0000000100dd2d2c = uRam0000000100dd2ccc + (uRam0000000100dd2ccc & 0x696a) * -2 + 0x696a;
    uRam0000000100dd2d2e = uRam0000000100dd2cce ^ 0x38cc;
    sRam0000000100dd2c20 = uRam0000000100dd2c00 + (uRam0000000100dd2c00 & 0x72f) * -2 + 0x72f;
    sRam0000000100dd2c2a = uRam0000000100dd2c0a + (uRam0000000100dd2c0a & 0x3621) * -2 + 0x3621;
    uRam0000000100dd2c2c = uRam0000000100dd2c0c ^ 0xc10b;
    uRam0000000100dd2c2e = uRam0000000100dd2c0e ^ 0xcd0f;
    sRam0000000100dd2c30 = uRam0000000100dd2c10 + (uRam0000000100dd2c10 & 0x7052) * -2 + 0x7052;
    sRam0000000100dd2c32 = uRam0000000100dd2c12 + (uRam0000000100dd2c12 & 0x2d95) * -2 + 0x2d95;
    sRam0000000100dd2c34 = uRam0000000100dd2c14 + (uRam0000000100dd2c14 & 0x22b4) * -2 + 0x22b4;
    uRam0000000100dd2c36 = uRam0000000100dd2c16 ^ 0xaaf1;
    uRam0000000100dd2c38 = uRam0000000100dd2c18 ^ 0x8644;
    uRam0000000100dd2c3a = uRam0000000100dd2c1a ^ 0xa710;
    sRam0000000100dd2c3c = uRam0000000100dd2c1c + (uRam0000000100dd2c1c & 0x3fb3) * -2 + -0x404d;
    uRam0000000100dd2c3e = uRam0000000100dd2c1e ^ 0xec46;
    uRam0000000100dd2be0 = uRam0000000100dd2bc0 ^ 0x374f;
    uRam0000000100dd2be2 = uRam0000000100dd2bc2 ^ 0xdae5;
    uRam0000000100dd2be4 = uRam0000000100dd2bc4 ^ 0x159f;
    sRam0000000100dd2be6 = uRam0000000100dd2bc6 + (uRam0000000100dd2bc6 & 0x5909) * -2 + -0x26f7;
    uRam0000000100dd2be8 = uRam0000000100dd2bc8 ^ 0xfd87;
    uRam0000000100dd2bea = uRam0000000100dd2bca ^ 0x65d8;
    uRam0000000100dd2bec = uRam0000000100dd2bcc ^ 0xe229;
    sRam0000000100dd2bee = uRam0000000100dd2bce + (uRam0000000100dd2bce & 0x3bca) * -2 + 0x3bca;
    uRam0000000100dd2bf0 = uRam0000000100dd2bd0 ^ 0x7973;
    uRam0000000100dd2bf2 = uRam0000000100dd2bd2 ^ 0x3e34;
    bRam0000000100dd2fcc = bRam0000000100dd2fc4 ^ 0xad;
    bRam0000000100dd2fcd = ~((bRam0000000100dd2fc5 | 0x34) & (bRam0000000100dd2fc5 ^ 0xff | 0xcb));
    bRam0000000100dd2fce = bRam0000000100dd2fc6 ^ 0x13;
    bRam0000000100dd2fcf = bRam0000000100dd2fc7 ^ 0x90;
    bRam0000000100dd2fd0 = bRam0000000100dd2fc8 ^ 0x7b;
    cRam0000000100dd2fd1 = bRam0000000100dd2fc9 + (bRam0000000100dd2fc9 & 0x78) * -2 + -8;
    bRam0000000100dd2fd2 = bRam0000000100dd2fca ^ 0xe9;
    bRam0000000100dd2fd3 = bRam0000000100dd2fcb ^ 0x7e;
    uRam0000000100dd2f88 = uRam0000000100dd2f48 ^ 0xc057;
    uRam0000000100dd2f8a = uRam0000000100dd2f4a ^ 0xb65a;
    uRam0000000100dd2f8c = uRam0000000100dd2f4c ^ 0x58bb;
    uRam0000000100dd2f8e =
         ~((uRam0000000100dd2f4e | 0xc592) & (uRam0000000100dd2f4e ^ 0xffff | 0x3a6d));
    sRam0000000100dd2f90 = uRam0000000100dd2f50 + (uRam0000000100dd2f50 & 0x2150) * -2 + -0x5eb0;
    uRam0000000100dd2f92 = uRam0000000100dd2f52 ^ 0xdfe8;
    sRam0000000100dd2f94 = uRam0000000100dd2f54 + (uRam0000000100dd2f54 & 0x1a93) * -2 + 0x1a93;
    uRam0000000100dd2fa6 = uRam0000000100dd2f66 ^ 0xc177;
    sRam0000000100dd2fa8 = uRam0000000100dd2f68 + (uRam0000000100dd2f68 & 0xdc7) * -2 + -0x7239;
    uRam0000000100dd2f20 = uRam0000000100dd2ef0 ^ 0xee68;
    uRam0000000100dd2f22 = uRam0000000100dd2ef2 ^ 0xba36;
    sRam0000000100dd2f24 = uRam0000000100dd2ef4 + (uRam0000000100dd2ef4 & 0x5d88) * -2 + -0x2278;
    uRam0000000100dd2f26 = uRam0000000100dd2ef6 ^ 0x962f;
    sRam0000000100dd2f28 = uRam0000000100dd2ef8 + (uRam0000000100dd2ef8 & 0xc58) * -2 + 0xc58;
    uRam0000000100dd2f2a = uRam0000000100dd2efa ^ 0x2879;
    uRam0000000100dd2f2c = uRam0000000100dd2efc ^ 0xca4b;
    sRam0000000100dd2f2e = uRam0000000100dd2efe + (uRam0000000100dd2efe & 0x5342) * -2 + -0x2cbe;
    cRam0000000100dd2eb0 = bRam0000000100dd2e90 + (bRam0000000100dd2e90 & 0x66) * -2 + -0x1a;
    bRam0000000100dd2eb1 = ~((bRam0000000100dd2e91 | 0x3f) & (~bRam0000000100dd2e91 | 0xc0));
    bRam0000000100dd2eb2 = bRam0000000100dd2e92 ^ 0xa5;
    cRam0000000100dd2eb3 = bRam0000000100dd2e93 + (bRam0000000100dd2e93 & 0x1a) * -2 + '\x1a';
    bRam0000000100dd2eb4 = bRam0000000100dd2e94 ^ 0x62;
    cRam0000000100dd2eb5 = bRam0000000100dd2e95 + (bRam0000000100dd2e95 & 0x60) * -2 + -0x20;
    bRam0000000100dd2eb6 = bRam0000000100dd2e96 ^ 0xbc;
    bRam0000000100dd2eb7 = bRam0000000100dd2e97 ^ 0x76;
    bRam0000000100dd2eb8 = bRam0000000100dd2e98 ^ 0x28;
    bRam0000000100dd2eb9 = bRam0000000100dd2e99 ^ 0xcf;
    cRam0000000100dd2eba = bRam0000000100dd2e9a + (bRam0000000100dd2e9a & 0x1a) * -2 + '\x1a';
    bRam0000000100dd2ebb = bRam0000000100dd2e9b ^ 0xb0;
    bRam0000000100dd2ebc = bRam0000000100dd2e9c ^ 0xd;
    cRam0000000100dd2ebd = bRam0000000100dd2e9d + (bRam0000000100dd2e9d & 0x16) * -2 + '\x16';
    cRam0000000100dd2ebe = bRam0000000100dd2e9e + (bRam0000000100dd2e9e & 0x25) * -2 + -0x5b;
    bRam0000000100dd2ebf = bRam0000000100dd2e9f ^ 0x89;
    cRam0000000100dd2ec0 = bRam0000000100dd2ea0 + (bRam0000000100dd2ea0 & 0x75) * -2 + 'u';
    cRam0000000100dd2ec1 = bRam0000000100dd2ea1 + (bRam0000000100dd2ea1 & 0x48) * -2 + 'H';
    bRam0000000100dd2ec2 = bRam0000000100dd2ea2 ^ 0x32;
    bRam0000000100dd2ec3 = bRam0000000100dd2ea3 ^ 0x26;
    bRam0000000100dd2ec4 = bRam0000000100dd2ea4 ^ 0x27;
    bRam0000000100dd2ec5 = bRam0000000100dd2ea5 ^ 0x44;
    bRam0000000100dd2ec6 = bRam0000000100dd2ea6 ^ 0x44;
    bRam0000000100dd2ec7 = bRam0000000100dd2ea7 ^ 0x3c;
    bRam0000000100dd2ec8 = bRam0000000100dd2ea8 ^ 0xe;
    uRam0000000100dd2ed0 = uRam0000000100dd2eca ^ 0x8912;
    uRam0000000100dd2ed2 = uRam0000000100dd2ecc ^ 0x9a6;
    uRam0000000100dd2ed4 = uRam0000000100dd2ece ^ 0x629b;
    uRam0000000100dd2d58 =
         CONCAT17((byte)((ulong)uRam0000000100dd2d38 >> 0x38) ^
                  (byte)((ulong)_UNK_100980558 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2d38 >> 0x30) ^
                           (byte)((ulong)_UNK_100980558 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2d38 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980558 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2d38 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980558 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2d38 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980558 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2d38 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980558 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2d38 >> 8) ^
                                                  (byte)((ulong)_UNK_100980558 >> 8),
                                                  (byte)uRam0000000100dd2d38 ^ (byte)_UNK_100980558)
                                                  ))))));
    uRam0000000100dd2cd4 =
         CONCAT17((byte)((ulong)uRam0000000100dd2c74 >> 0x38) ^
                  (byte)((ulong)_UNK_100980560 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2c74 >> 0x30) ^
                           (byte)((ulong)_UNK_100980560 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2c74 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980560 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2c74 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980560 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2c74 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980560 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2c74 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980560 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2c74 >> 8) ^
                                                  (byte)((ulong)_UNK_100980560 >> 8),
                                                  (byte)uRam0000000100dd2c74 ^ (byte)_UNK_100980560)
                                                  ))))));
    uRam0000000100dd2cde =
         CONCAT17((byte)((ulong)uRam0000000100dd2c7e >> 0x38) ^
                  (byte)((ulong)_UNK_100980568 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2c7e >> 0x30) ^
                           (byte)((ulong)_UNK_100980568 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2c7e >> 0x28) ^
                                    (byte)((ulong)_UNK_100980568 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2c7e >> 0x20) ^
                                             (byte)((ulong)_UNK_100980568 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2c7e >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980568 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2c7e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980568 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2c7e >> 8) ^
                                                  (byte)((ulong)_UNK_100980568 >> 8),
                                                  (byte)uRam0000000100dd2c7e ^ (byte)_UNK_100980568)
                                                  ))))));
    uRam0000000100dd2cf6 =
         CONCAT17((byte)((ulong)uRam0000000100dd2c96 >> 0x38) ^
                  (byte)((ulong)_UNK_100980570 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2c96 >> 0x30) ^
                           (byte)((ulong)_UNK_100980570 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2c96 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980570 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2c96 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980570 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2c96 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980570 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2c96 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980570 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2c96 >> 8) ^
                                                  (byte)((ulong)_UNK_100980570 >> 8),
                                                  (byte)uRam0000000100dd2c96 ^ (byte)_UNK_100980570)
                                                  ))))));
    uRam0000000100dd2d00 =
         CONCAT17((byte)((ulong)uRam0000000100dd2ca0 >> 0x38) ^
                  (byte)((ulong)_UNK_100980578 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2ca0 >> 0x30) ^
                           (byte)((ulong)_UNK_100980578 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2ca0 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980578 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2ca0 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980578 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2ca0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980578 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2ca0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980578 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2ca0 >> 8) ^
                                                  (byte)((ulong)_UNK_100980578 >> 8),
                                                  (byte)uRam0000000100dd2ca0 ^ (byte)_UNK_100980578)
                                                  ))))));
    uRam0000000100dd2d14 =
         CONCAT17((byte)((ulong)uRam0000000100dd2cb4 >> 0x38) ^
                  (byte)((ulong)_UNK_100980580 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2cb4 >> 0x30) ^
                           (byte)((ulong)_UNK_100980580 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2cb4 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980580 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2cb4 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980580 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2cb4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980580 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2cb4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980580 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2cb4 >> 8) ^
                                                  (byte)((ulong)_UNK_100980580 >> 8),
                                                  (byte)uRam0000000100dd2cb4 ^ (byte)_UNK_100980580)
                                                  ))))));
    uRam0000000100dd2d20 =
         CONCAT17((byte)((ulong)uRam0000000100dd2cc0 >> 0x38) ^
                  (byte)((ulong)_UNK_100980588 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2cc0 >> 0x30) ^
                           (byte)((ulong)_UNK_100980588 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2cc0 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980588 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2cc0 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980588 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2cc0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980588 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2cc0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980588 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2cc0 >> 8) ^
                                                  (byte)((ulong)_UNK_100980588 >> 8),
                                                  (byte)uRam0000000100dd2cc0 ^ (byte)_UNK_100980588)
                                                  ))))));
    uRam0000000100dd2c22 =
         CONCAT17((byte)((ulong)uRam0000000100dd2c02 >> 0x38) ^
                  (byte)((ulong)_UNK_100980590 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2c02 >> 0x30) ^
                           (byte)((ulong)_UNK_100980590 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2c02 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980590 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2c02 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980590 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2c02 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980590 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2c02 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980590 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2c02 >> 8) ^
                                                  (byte)((ulong)_UNK_100980590 >> 8),
                                                  (byte)uRam0000000100dd2c02 ^ (byte)_UNK_100980590)
                                                  ))))));
    uRam0000000100dd2ba0 =
         CONCAT17((byte)((ulong)uRam0000000100dd2b80 >> 0x38) ^
                  (byte)((ulong)_UNK_100980750 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2b80 >> 0x30) ^
                           (byte)((ulong)_UNK_100980750 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2b80 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980750 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2b80 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980750 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2b80 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980750 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2b80 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980750 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2b80 >> 8) ^
                                                  (byte)((ulong)_UNK_100980750 >> 8),
                                                  (byte)uRam0000000100dd2b80 ^ (byte)_UNK_100980750)
                                                  ))))));
    uRam0000000100dd2ba8 =
         CONCAT17((byte)((ulong)uRam0000000100dd2b88 >> 0x38) ^
                  (byte)((ulong)_UNK_100980758 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2b88 >> 0x30) ^
                           (byte)((ulong)_UNK_100980758 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2b88 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980758 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2b88 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980758 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2b88 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980758 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2b88 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980758 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2b88 >> 8) ^
                                                  (byte)((ulong)_UNK_100980758 >> 8),
                                                  (byte)uRam0000000100dd2b88 ^ (byte)_UNK_100980758)
                                                  ))))));
    uRam0000000100dd2bb0 =
         CONCAT17((byte)((ulong)uRam0000000100dd2b90 >> 0x38) ^
                  (byte)((ulong)_UNK_100980598 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2b90 >> 0x30) ^
                           (byte)((ulong)_UNK_100980598 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2b90 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980598 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2b90 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980598 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2b90 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980598 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2b90 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980598 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2b90 >> 8) ^
                                                  (byte)((ulong)_UNK_100980598 >> 8),
                                                  (byte)uRam0000000100dd2b90 ^ (byte)_UNK_100980598)
                                                  ))))));
    uRam0000000100dd2f80 =
         CONCAT17((byte)((ulong)uRam0000000100dd2f40 >> 0x38) ^
                  (byte)((ulong)_UNK_1009805a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f40 >> 0x30) ^
                           (byte)((ulong)_UNK_1009805a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f40 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009805a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f40 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009805a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f40 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009805a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f40 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009805a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f40 >> 8) ^
                                                  (byte)((ulong)_UNK_1009805a0 >> 8),
                                                  (byte)uRam0000000100dd2f40 ^ (byte)_UNK_1009805a0)
                                                  ))))));
    uRam0000000100dd2f96 =
         CONCAT17((byte)((ulong)uRam0000000100dd2f56 >> 0x38) ^
                  (byte)((ulong)_UNK_100980760 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f56 >> 0x30) ^
                           (byte)((ulong)_UNK_100980760 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f56 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980760 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f56 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980760 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f56 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980760 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f56 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980760 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f56 >> 8) ^
                                                  (byte)((ulong)_UNK_100980760 >> 8),
                                                  (byte)uRam0000000100dd2f56 ^ (byte)_UNK_100980760)
                                                  ))))));
    uRam0000000100dd2f9e =
         CONCAT17((byte)((ulong)uRam0000000100dd2f5e >> 0x38) ^
                  (byte)((ulong)_UNK_100980768 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f5e >> 0x30) ^
                           (byte)((ulong)_UNK_100980768 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f5e >> 0x28) ^
                                    (byte)((ulong)_UNK_100980768 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f5e >> 0x20) ^
                                             (byte)((ulong)_UNK_100980768 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f5e >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980768 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f5e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980768 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f5e >> 8) ^
                                                  (byte)((ulong)_UNK_100980768 >> 8),
                                                  (byte)uRam0000000100dd2f5e ^ (byte)_UNK_100980768)
                                                  ))))));
    uRam0000000100dd2faa =
         CONCAT17((byte)((ulong)uRam0000000100dd2f6a >> 0x38) ^
                  (byte)((ulong)_UNK_100980770 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f6a >> 0x30) ^
                           (byte)((ulong)_UNK_100980770 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f6a >> 0x28) ^
                                    (byte)((ulong)_UNK_100980770 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f6a >> 0x20) ^
                                             (byte)((ulong)_UNK_100980770 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f6a >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980770 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f6a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980770 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f6a >> 8) ^
                                                  (byte)((ulong)_UNK_100980770 >> 8),
                                                  (byte)uRam0000000100dd2f6a ^ (byte)_UNK_100980770)
                                                  ))))));
    uRam0000000100dd2fb2 =
         CONCAT17((byte)((ulong)uRam0000000100dd2f72 >> 0x38) ^
                  (byte)((ulong)_UNK_100980778 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f72 >> 0x30) ^
                           (byte)((ulong)_UNK_100980778 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f72 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980778 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f72 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980778 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f72 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980778 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f72 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980778 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f72 >> 8) ^
                                                  (byte)((ulong)_UNK_100980778 >> 8),
                                                  (byte)uRam0000000100dd2f72 ^ (byte)_UNK_100980778)
                                                  ))))));
    uRam0000000100dd2f10 =
         CONCAT17((byte)((ulong)uRam0000000100dd2ee0 >> 0x38) ^
                  (byte)((ulong)_UNK_100980780 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2ee0 >> 0x30) ^
                           (byte)((ulong)_UNK_100980780 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2ee0 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980780 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2ee0 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980780 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2ee0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980780 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2ee0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980780 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2ee0 >> 8) ^
                                                  (byte)((ulong)_UNK_100980780 >> 8),
                                                  (byte)uRam0000000100dd2ee0 ^ (byte)_UNK_100980780)
                                                  ))))));
    uRam0000000100dd2f18 =
         CONCAT17((byte)((ulong)uRam0000000100dd2ee8 >> 0x38) ^
                  (byte)((ulong)_UNK_100980788 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2ee8 >> 0x30) ^
                           (byte)((ulong)_UNK_100980788 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2ee8 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980788 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2ee8 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980788 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2ee8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980788 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2ee8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980788 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2ee8 >> 8) ^
                                                  (byte)((ulong)_UNK_100980788 >> 8),
                                                  (byte)uRam0000000100dd2ee8 ^ (byte)_UNK_100980788)
                                                  ))))));
    uRam0000000100dd2f30 =
         CONCAT17((byte)((ulong)uRam0000000100dd2f00 >> 0x38) ^
                  (byte)((ulong)_UNK_1009805a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd2f00 >> 0x30) ^
                           (byte)((ulong)_UNK_1009805a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd2f00 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009805a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd2f00 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009805a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd2f00 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009805a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd2f00 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009805a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd2f00 >> 8) ^
                                                  (byte)((ulong)_UNK_1009805a8 >> 8),
                                                  (byte)uRam0000000100dd2f00 ^ (byte)_UNK_1009805a8)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92414 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_150 = auStack_1b0;
  puStack_130 = auStack_1f0;
  puStack_148 = auStack_270;
  puStack_d0 = auStack_2b0;
  puStack_c8 = auStack_330;
  puStack_d8 = auStack_370;
  puStack_e0 = auStack_3f0;
  puStack_c0 = auStack_430;
  puStack_120 = auStack_4b0;
  puStack_f8 = auStack_4f0;
  puStack_140 = auStack_570;
  puStack_118 = auStack_580;
  uStack_e8 = param_3;
  uStack_b8 = param_1;
  auVar7 = _objc_retain(param_3);
  uVar1 = uStack_b8;
  uVar2 = auVar7._0_8_;
  puStack_1a0 = auStack_810;
  puStack_198 = auStack_650;
  puStack_180 = auStack_590;
  puStack_160 = auStack_5d0;
  puStack_158 = auStack_7d0;
  puStack_110 = auStack_7e0;
  puStack_108 = auStack_690;
  puStack_100 = auStack_750;
  puStack_f0 = auStack_710;
  func_0x00010094e560(uStack_b8,auVar7._8_8_,0x100dd3930);
  func_0x00010039f938(uVar2);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094e560(uVar1,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  func_0x00010094e660(uVar1);
  uVar6 = func_0x00010039f93c(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_128 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100391cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar6 & 0xffffffff) * 8 + 0x100dd50e0))();
  return;
                    /* WARNING: Switch is manually overridden */
}

