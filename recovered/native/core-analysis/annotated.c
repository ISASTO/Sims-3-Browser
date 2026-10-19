/* Annotated decompiler diagnostics. Not the compiled native core or a full game. */

// Address: 4a000860

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserve full
   SUBS/BPL decision and low-byte ARM shift counts; ordinary C shifts by >=32 are invalid. */

ulonglong s3c_arm_lsl64(uint low,uint high,uint count)

{
  if ((int)(count - 0x20) < 0) {
    return CONCAT44(high << (count & 0xff) | low >> (0x20 - count & 0xff),low << (count & 0xff));
  }
  return (ulonglong)(low << (count - 0x20 & 0xff)) << 0x20;
}



// Address: 4a000888

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserve full
   SUBS/BPL decision and low-byte ARM shift counts; ordinary C shifts by >=32 are invalid. */

ulonglong s3c_arm_lsr64(uint low,uint high,uint count)

{
  if ((int)(count - 0x20) < 0) {
    return CONCAT44(high >> (count & 0xff),low >> (count & 0xff) | high << (0x20 - count & 0xff));
  }
  return (ulonglong)(high >> (count - 0x20 & 0xff));
}



// Address: 4a0008b0

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserve full
   SUBS/BPL decision and low-byte ARM shift counts; ordinary C shifts by >=32 are invalid. */

ulonglong s3c_arm_asr64(uint low,uint high,uint count)

{
  if ((int)(count - 0x20) < 0) {
    return CONCAT44((int)high >> (count & 0xff),
                    low >> (count & 0xff) | high << (0x20 - count & 0xff));
  }
  return CONCAT44((int)high >> 0x1f,(int)high >> (count - 0x20 & 0xff));
}



// Address: 4a0008dc

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Unsigned
   multiplication modulo 2^64; two input register pairs. */

ulonglong s3c_multiply64(uint numeratorLow,uint numeratorHigh,uint denominatorLow,
                        uint denominatorHigh)

{
  return CONCAT44(denominatorHigh * numeratorLow +
                  denominatorLow * numeratorHigh +
                  (int)((ulonglong)numeratorLow * (ulonglong)denominatorLow >> 0x20),
                  (int)((ulonglong)numeratorLow * (ulonglong)denominatorLow));
}



// Address: 4a0008f8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Quotient in r0:r1,
   remainder in r2:r3. Denominator must be nonzero; original exception path is not ported. */

CoreDiv64 s3c_divide_unsigned64
                    (uint numeratorLow,uint numeratorHigh,uint denominatorLow,uint denominatorHigh)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  CoreDiv64 CVar15;
  CoreDiv64 CVar16;
  CoreDiv64 CVar17;

  uVar9 = 0;
  if (denominatorHigh != 0 || (int)denominatorLow < 0) {
    if ((denominatorHigh & 0x80000000) != 0) {
      bVar11 = numeratorHigh - denominatorHigh < (uint)(denominatorLow <= numeratorLow);
      uVar10 = numeratorHigh - (denominatorHigh + (denominatorLow > numeratorLow));
      uVar9 = numeratorLow - denominatorLow;
      if (denominatorHigh >= numeratorHigh && !bVar11) {
        uVar10 = numeratorHigh;
        uVar9 = numeratorLow;
      }
      CVar17.remainder._4_4_ = uVar10;
      CVar17.remainder._0_4_ = uVar9;
      CVar17.quotient = (ulonglong)(denominatorHigh < numeratorHigh || bVar11);
      return CVar17;
    }
    if (denominatorHigh >> 0xf == 0) {
      uVar9 = 0x10;
    }
    uVar10 = denominatorHigh << uVar9;
    if (uVar10 >> 0x17 == 0) {
      uVar10 = uVar10 << 8;
      uVar9 = uVar9 + 8;
    }
    if (uVar10 >> 0x1b == 0) {
      uVar10 = uVar10 << 4;
      uVar9 = uVar9 + 4;
    }
    if (uVar10 >> 0x1d == 0) {
      uVar10 = uVar10 << 2;
      uVar9 = uVar9 + 2;
    }
    bVar11 = uVar10 >> 0x1e == 0;
    if (bVar11) {
      uVar9 = uVar9 + 1;
    }
    if (bVar11) {
      uVar10 = uVar10 << 1;
    }
    uVar10 = uVar10 | denominatorLow >> (0x20 - uVar9 & 0xff);
    uVar8 = denominatorLow << uVar9;
    bVar11 = numeratorHigh - uVar10 < (uint)(uVar8 <= numeratorLow);
    uVar1 = numeratorHigh;
    if (uVar10 < numeratorHigh || bVar11) {
      uVar1 = numeratorHigh - (uVar10 + (uVar8 > numeratorLow));
      numeratorLow = numeratorLow - uVar8;
    }
    bVar12 = uVar1 - uVar10 < (uint)(uVar8 <= numeratorLow);
    uVar3 = uVar1;
    if (uVar10 < uVar1 || bVar12) {
      uVar3 = uVar1 - (uVar10 + (uVar8 > numeratorLow));
      numeratorLow = numeratorLow - uVar8;
    }
    bVar14 = uVar3 - uVar10 < (uint)(uVar8 <= numeratorLow);
    uVar7 = uVar3;
    if (uVar10 < uVar3 || bVar14) {
      uVar7 = uVar3 - (uVar10 + (uVar8 > numeratorLow));
      numeratorLow = numeratorLow - uVar8;
    }
    uVar3 = (uint)(uVar10 < numeratorHigh || bVar11) + (uint)(uVar10 < uVar1 || bVar12) +
            (uint)(uVar10 < uVar3 || bVar14);
    iVar6 = 0;
    uVar1 = -uVar8;
    uVar10 = -(uVar10 + (uVar8 != 0));
    if ((0xf < uVar9) && (uVar7 >> 0xe == 0)) {
      uVar7 = uVar7 << 0x10;
      iVar6 = 0x10;
    }
    if ((7 < uVar9 - iVar6) && (uVar7 >> 0x16 == 0)) {
      uVar7 = uVar7 << 8;
      iVar6 = iVar6 + 8;
    }
    uVar7 = uVar7 | numeratorLow >> (0x20U - iVar6 & 0xff);
    uVar8 = numeratorLow << iVar6;
    bVar11 = false;
    if (uVar9 - iVar6 != 0) {
      uVar5 = (uVar9 - iVar6) - 1;
      uVar4 = 3 - (uVar5 & 3);
      bVar11 = CARRY4(uVar4,uVar4 * 2);
      switch(uVar5 & 3) {
      case 1:
        goto switchD_4a000b80_caseD_1;
      case 2:
        goto switchD_4a000b80_caseD_2;
      case 3:
        goto switchD_4a000b80_caseD_3;
      }
      while( true ) {
        uVar5 = uVar5 - 4;
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar12);
        uVar7 = uVar7 * 2 + (uint)bVar12;
        bVar13 = CARRY4(uVar1,uVar8) || CARRY4(uVar1 + uVar8,(uint)bVar14);
        bVar12 = CARRY4(uVar10 + uVar7,(uint)bVar13);
        bVar11 = CARRY4(uVar10,uVar7) || bVar12;
        if (CARRY4(uVar10,uVar7) || bVar12) {
          uVar7 = uVar10 + uVar7 + (uint)bVar13;
          uVar8 = uVar1 + uVar8 + (uint)bVar14;
        }
        if ((int)uVar5 < 0) break;
switchD_4a000b80_caseD_3:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar12);
        uVar7 = uVar7 * 2 + (uint)bVar12;
        bVar13 = CARRY4(uVar1,uVar8) || CARRY4(uVar1 + uVar8,(uint)bVar14);
        bVar12 = CARRY4(uVar10 + uVar7,(uint)bVar13);
        bVar11 = CARRY4(uVar10,uVar7) || bVar12;
        if (CARRY4(uVar10,uVar7) || bVar12) {
          uVar7 = uVar10 + uVar7 + (uint)bVar13;
          uVar8 = uVar1 + uVar8 + (uint)bVar14;
        }
switchD_4a000b80_caseD_2:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar12);
        uVar7 = uVar7 * 2 + (uint)bVar12;
        bVar13 = CARRY4(uVar1,uVar8) || CARRY4(uVar1 + uVar8,(uint)bVar14);
        bVar12 = CARRY4(uVar10 + uVar7,(uint)bVar13);
        bVar11 = CARRY4(uVar10,uVar7) || bVar12;
        if (CARRY4(uVar10,uVar7) || bVar12) {
          uVar7 = uVar10 + uVar7 + (uint)bVar13;
          uVar8 = uVar1 + uVar8 + (uint)bVar14;
        }
switchD_4a000b80_caseD_1:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar12);
        uVar7 = uVar7 * 2 + (uint)bVar12;
        bVar13 = CARRY4(uVar1,uVar8) || CARRY4(uVar1 + uVar8,(uint)bVar14);
        bVar12 = CARRY4(uVar10 + uVar7,(uint)bVar13);
        bVar11 = CARRY4(uVar10,uVar7) || bVar12;
        if (CARRY4(uVar10,uVar7) || bVar12) {
          uVar7 = uVar10 + uVar7 + (uint)bVar13;
          uVar8 = uVar1 + uVar8 + (uint)bVar14;
        }
      }
    }
    uVar10 = uVar8 & ~((uVar8 >> uVar9) << uVar9);
    bVar12 = CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar11);
    uVar1 = uVar10 * 2 + (uint)bVar11;
    uVar10 = uVar3 << uVar9;
    uVar4 = uVar7 & ~((uVar7 >> uVar9) << uVar9);
    CVar16.remainder._0_4_ = uVar8 >> uVar9 | uVar4 >> uVar9 | uVar4 << 0x20 - uVar9;
    CVar16.quotient._0_4_ = uVar1 + uVar10;
    CVar16.quotient._4_4_ =
         (uint)bVar12 +
         (uint)(uVar9 == 0 && bVar12 || uVar9 != 0 && (bool)((byte)(uVar3 >> 0x20 - uVar9) & 1)) +
         (uint)CARRY4(uVar1,uVar10);
    CVar16.remainder._4_4_ = uVar7 >> uVar9;
    return CVar16;
  }
  if (denominatorLow == 0) {
    FUN_4a0063f0(2);
    return (CoreDiv64)(ZEXT416(denominatorHigh) << 0x60);
  }
  if (denominatorLow >> 0xf == 0) {
    uVar9 = 0x10;
  }
  uVar10 = denominatorLow << uVar9;
  if (uVar10 >> 0x17 == 0) {
    uVar10 = uVar10 << 8;
    uVar9 = uVar9 + 8;
  }
  if (uVar10 >> 0x1b == 0) {
    uVar10 = uVar10 << 4;
    uVar9 = uVar9 + 4;
  }
  if (uVar10 >> 0x1d == 0) {
    uVar10 = uVar10 << 2;
    uVar9 = uVar9 + 2;
  }
  if (uVar10 >> 0x1e == 0) {
    uVar10 = uVar10 << 1;
    uVar9 = uVar9 + 1;
  }
  iVar6 = 0;
  if (uVar10 << 1 <= numeratorHigh) {
    numeratorHigh = numeratorHigh + uVar10 * -2;
    iVar6 = 2;
  }
  bVar11 = uVar10 <= numeratorHigh;
  if (bVar11) {
    numeratorHigh = numeratorHigh - uVar10;
  }
  uVar3 = uVar9 + 0x20;
  uVar1 = -uVar10;
  uVar8 = numeratorLow;
  if ((0x1f < uVar3) && (numeratorHigh == 0 && numeratorLow >> 0x1e == 0)) {
    uVar8 = 0;
    uVar3 = uVar9;
    numeratorHigh = numeratorLow;
  }
  iVar2 = 0;
  if ((0xf < uVar3) && (numeratorHigh >> 0xe == 0)) {
    numeratorHigh = numeratorHigh << 0x10;
    iVar2 = 0x10;
  }
  if ((7 < uVar3 - iVar2) && (numeratorHigh >> 0x16 == 0)) {
    numeratorHigh = numeratorHigh << 8;
    iVar2 = iVar2 + 8;
  }
  uVar7 = numeratorHigh | uVar8 >> (0x20U - iVar2 & 0xff);
  uVar8 = uVar8 << iVar2;
  bVar12 = false;
  if (uVar3 - iVar2 != 0) {
    uVar4 = (uVar3 - iVar2) - 1;
    uVar3 = uVar4 & 7 ^ 7;
    bVar12 = CARRY4(uVar3,uVar3 * 2);
    switch(uVar4 & 7) {
    case 0:
      while( true ) {
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        uVar4 = uVar4 - 8;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
        if ((int)uVar4 < 0) break;
switchD_4a000a4c_caseD_7:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_6:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_5:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_4:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_3:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_2:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
switchD_4a000a4c_caseD_1:
        bVar13 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12);
        uVar8 = uVar8 * 2 + (uint)bVar12;
        uVar3 = uVar7 * 2;
        bVar14 = CARRY4(uVar1 + uVar3,(uint)bVar13);
        bVar12 = CARRY4(uVar1,uVar3) || bVar14;
        uVar7 = uVar1 + uVar3 + (uint)bVar13;
        if (!CARRY4(uVar1,uVar3) && !bVar14) {
          uVar7 = uVar7 + uVar10;
        }
      }
      break;
    case 1:
      goto switchD_4a000a4c_caseD_1;
    case 2:
      goto switchD_4a000a4c_caseD_2;
    case 3:
      goto switchD_4a000a4c_caseD_3;
    case 4:
      goto switchD_4a000a4c_caseD_4;
    case 5:
      goto switchD_4a000a4c_caseD_5;
    case 6:
      goto switchD_4a000a4c_caseD_6;
    case 7:
      goto switchD_4a000a4c_caseD_7;
    }
  }
  CVar15.quotient._0_4_ = uVar8 * 2 + (uint)bVar12;
  CVar15.quotient._4_4_ =
       (uVar7 & ~((uVar7 >> uVar9) << uVar9)) * 2 +
       (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar12)) +
       (iVar6 + (uint)bVar11 << uVar9);
  CVar15.remainder._0_4_ = uVar7 >> uVar9;
  CVar15.remainder._4_4_ = 0;
  return CVar15;
}



// Address: 4a00080c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Signed magnitudes
   use the recovered unsigned helper. Preserve wrapped MIN/-1 result. Nonzero denominator required.
    */

CoreDiv64 s3c_divide_signed64(uint numeratorLow,uint numeratorHigh,uint denominatorLow,
                             uint denominatorHigh)

{
  int iVar1;
  uint uVar5;
  bool bVar6;
  CoreDiv64 CVar7;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar5 = (int)numeratorHigh >> 1 ^ denominatorHigh >> 1;
  if ((int)numeratorHigh >> 1 < 0) {
    bVar6 = numeratorLow != 0;
    numeratorLow = -numeratorLow;
    numeratorHigh = -(numeratorHigh + bVar6);
  }
  if ((int)denominatorHigh < 0) {
    bVar6 = denominatorLow != 0;
    denominatorLow = -denominatorLow;
    denominatorHigh = -(denominatorHigh + bVar6);
  }
  CVar7 = s3c_divide_unsigned64(numeratorLow,numeratorHigh,denominatorLow,denominatorHigh);
  iVar4 = CVar7.remainder._4_4_;
  iVar3 = (int)CVar7.remainder;
  iVar2 = CVar7.quotient._4_4_;
  iVar1 = (int)CVar7.quotient;
  if ((uVar5 & 0x40000000) != 0) {
    bVar6 = iVar1 != 0;
    iVar1 = -iVar1;
    iVar2 = -(iVar2 + (uint)bVar6);
  }
  if ((uVar5 & 0x80000000) != 0) {
    bVar6 = iVar3 != 0;
    iVar3 = -iVar3;
    iVar4 = -(iVar4 + (uint)bVar6);
  }
  CVar7.quotient._4_4_ = iVar2;
  CVar7.quotient._0_4_ = iVar1;
  CVar7.remainder._4_4_ = iVar4;
  CVar7.remainder._0_4_ = iVar3;
  return CVar7;
}



// Address: 4a0015f0

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Signed quotient
   r0, remainder r1. Avoid C signed overflow. Nonzero denominator required. */

ulonglong s3c_divide_signed32(uint dividend,uint divisor)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;

  if ((int)(dividend | divisor) < 0) {
    uVar4 = divisor & 0x80000000;
    if ((int)uVar4 < 0) {
      divisor = -divisor;
    }
    uVar3 = uVar4 ^ (int)dividend >> 0x20;
    if (SUB41(dividend >> 0x1f,0)) {
      dividend = -dividend;
    }
    uVar1 = divisor;
    if (dividend >> 4 < divisor) goto LAB_4a0017bc;
    if (dividend >> 8 < divisor) goto LAB_4a00178c;
    uVar1 = divisor << 6;
    uVar4 = 0xfc000000;
    if (dividend >> 8 < uVar1) goto LAB_4a00178c;
    uVar1 = divisor << 0xc;
    uVar4 = 0xfff00000;
    if (dividend >> 8 < uVar1) goto LAB_4a00178c;
    uVar1 = divisor << 0x12;
    uVar4 = 0xffffc000;
    if (uVar1 <= dividend >> 8) {
      uVar1 = divisor << 0x18;
      uVar4 = 0xffffff00;
    }
    bVar6 = uVar1 == 0;
    if (!bVar6) {
      do {
        if (bVar6) {
          uVar1 = uVar1 >> 6;
        }
LAB_4a00178c:
        bVar6 = uVar1 <= dividend >> 7;
        if (bVar6) {
          dividend = dividend + uVar1 * -0x80;
        }
        bVar7 = uVar1 <= dividend >> 6;
        if (bVar7) {
          dividend = dividend + uVar1 * -0x40;
        }
        bVar8 = uVar1 <= dividend >> 5;
        if (bVar8) {
          dividend = dividend + uVar1 * -0x20;
        }
        bVar9 = uVar1 <= dividend >> 4;
        if (bVar9) {
          dividend = dividend + uVar1 * -0x10;
        }
        uVar4 = (((uVar4 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
LAB_4a0017bc:
        bVar6 = uVar1 <= dividend >> 3;
        if (bVar6) {
          dividend = dividend + uVar1 * -8;
        }
        uVar5 = uVar4 * 2 + (uint)bVar6;
        bVar7 = uVar1 <= dividend >> 2;
        if (bVar7) {
          dividend = dividend + uVar1 * -4;
        }
        uVar4 = uVar5 * 2 + (uint)bVar7;
        bVar6 = true;
      } while (CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,(uint)bVar7));
      bVar6 = uVar1 <= dividend >> 1;
      if (bVar6) {
        dividend = dividend + uVar1 * -2;
      }
      uVar5 = dividend - uVar1;
      if (uVar1 > dividend) {
        uVar5 = dividend;
      }
      iVar2 = (uVar4 * 2 + (uint)bVar6) * 2 + (uint)(uVar1 <= dividend);
      if ((int)uVar3 >> 0x1f < 0) {
        iVar2 = -iVar2;
      }
      if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
        uVar5 = -uVar5;
      }
      return CONCAT44(uVar5,iVar2);
    }
LAB_4a004788:
    FUN_4a0063f0(2);
    return 0;
  }
  if (dividend >> 1 < divisor) {
    if (dividend < divisor) {
      return (ulonglong)dividend << 0x20;
    }
    return CONCAT44(dividend - divisor,1);
  }
  iVar2 = 0;
  uVar4 = divisor;
  if (divisor <= dividend >> 4) {
    if (divisor <= dividend >> 8) {
      if (dividend >> 0xc < divisor) goto LAB_4a00167c;
      if (dividend >> 0x10 < divisor) goto LAB_4a00164c;
      uVar4 = divisor << 8;
      iVar2 = -0x1000000;
      if (uVar4 <= dividend >> 0x10) {
        iVar2 = -0x10000;
        uVar4 = divisor << 0x10;
      }
      if (dividend >> 0xc < uVar4) goto LAB_4a00167c;
      bVar6 = false;
      if (uVar4 == 0) goto LAB_4a004788;
      do {
        if (bVar6) {
          uVar4 = uVar4 >> 8;
        }
LAB_4a00164c:
        bVar6 = uVar4 <= dividend >> 0xf;
        if (bVar6) {
          dividend = dividend + uVar4 * -0x8000;
        }
        bVar7 = uVar4 <= dividend >> 0xe;
        if (bVar7) {
          dividend = dividend + uVar4 * -0x4000;
        }
        bVar8 = uVar4 <= dividend >> 0xd;
        if (bVar8) {
          dividend = dividend + uVar4 * -0x2000;
        }
        bVar9 = uVar4 <= dividend >> 0xc;
        if (bVar9) {
          dividend = dividend + uVar4 * -0x1000;
        }
        iVar2 = (((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
LAB_4a00167c:
        bVar6 = uVar4 <= dividend >> 0xb;
        if (bVar6) {
          dividend = dividend + uVar4 * -0x800;
        }
        bVar7 = uVar4 <= dividend >> 10;
        if (bVar7) {
          dividend = dividend + uVar4 * -0x400;
        }
        bVar8 = uVar4 <= dividend >> 9;
        if (bVar8) {
          dividend = dividend + uVar4 * -0x200;
        }
        uVar3 = ((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8;
        bVar7 = uVar4 <= dividend >> 8;
        if (bVar7) {
          dividend = dividend + uVar4 * -0x100;
        }
        iVar2 = uVar3 * 2 + (uint)bVar7;
        bVar6 = true;
      } while (CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar7));
    }
    bVar6 = uVar4 <= dividend >> 7;
    if (bVar6) {
      dividend = dividend + uVar4 * -0x80;
    }
    bVar7 = uVar4 <= dividend >> 6;
    if (bVar7) {
      dividend = dividend + uVar4 * -0x40;
    }
    bVar8 = uVar4 <= dividend >> 5;
    if (bVar8) {
      dividend = dividend + uVar4 * -0x20;
    }
    bVar9 = uVar4 <= dividend >> 4;
    if (bVar9) {
      dividend = dividend + uVar4 * -0x10;
    }
    iVar2 = (((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
  }
  bVar6 = uVar4 <= dividend >> 3;
  if (bVar6) {
    dividend = dividend + uVar4 * -8;
  }
  bVar7 = uVar4 <= dividend >> 2;
  if (bVar7) {
    dividend = dividend + uVar4 * -4;
  }
  bVar8 = uVar4 <= dividend >> 1;
  if (bVar8) {
    dividend = dividend + uVar4 * -2;
  }
  uVar3 = dividend - uVar4;
  if (uVar4 > dividend) {
    uVar3 = dividend;
  }
  return CONCAT44(uVar3,(((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 +
                        (uint)(uVar4 <= dividend));
}



// Address: 4a000f84

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Forward copy
   requires non-overlap. Move permits overlap, including identical pointers. Return endpoint pairs
   follow the original direction-dependent path. */

ulonglong s3c_copy_forward_endpoints(uint *destination,uint *source,uint count)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  uint in_r3;
  uint uVar7;
  byte bVar8;
  uint in_r12;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;

  if (3 < count) {
    uVar9 = (uint)destination & 3;
    in_r12 = uVar9;
    if (uVar9 != 0) {
      bVar5 = (byte)*source;
      puVar1 = (uint *)((int)source + 1);
      if (uVar9 < 3) {
        puVar1 = (uint *)((int)source + 2);
        in_r12 = (uint)*(byte *)((int)source + 1);
      }
      *(byte *)destination = bVar5;
      source = puVar1;
      if (uVar9 < 2) {
        source = (uint *)((int)puVar1 + 1);
        bVar5 = (byte)*puVar1;
      }
      puVar1 = (uint *)((int)destination + 1);
      if (uVar9 < 3) {
        puVar1 = (uint *)((int)destination + 2);
        *(byte *)((int)destination + 1) = (byte)in_r12;
      }
      count = (count + uVar9) - 4;
      destination = puVar1;
      if (uVar9 < 2) {
        destination = (uint *)((int)puVar1 + 1);
        *(byte *)puVar1 = bVar5;
      }
    }
    in_r3 = (uint)source & 3;
    if (in_r3 == 0) {
      bVar13 = 0x1f < count;
      uVar9 = count - 0x20;
      uVar7 = 0;
      if (bVar13) {
        do {
          if (bVar13) {
            uVar7 = source[1];
            uVar10 = source[2];
            uVar11 = source[3];
            *destination = *source;
            destination[1] = uVar7;
            destination[2] = uVar10;
            destination[3] = uVar11;
            uVar7 = source[4];
            uVar10 = source[5];
            uVar11 = source[6];
            uVar12 = source[7];
            source = source + 8;
            destination[4] = uVar7;
            destination[5] = uVar10;
            destination[6] = uVar11;
            destination[7] = uVar12;
            destination = destination + 8;
            bVar13 = 0x1f < uVar9;
            uVar9 = uVar9 - 0x20;
          }
        } while (bVar13);
      }
      if ((bool)((byte)(uVar9 >> 4) & 1)) {
        uVar7 = *source;
        uVar10 = source[1];
        uVar11 = source[2];
        uVar12 = source[3];
        source = source + 4;
        *destination = uVar7;
        destination[1] = uVar10;
        destination[2] = uVar11;
        destination[3] = uVar12;
        destination = destination + 4;
      }
      if ((int)(uVar9 << 0x1c) < 0) {
        uVar7 = *source;
        uVar10 = source[1];
        source = source + 2;
        *destination = uVar7;
        destination[1] = uVar10;
        destination = destination + 2;
      }
      puVar2 = destination;
      puVar1 = source;
      if ((bool)((byte)(uVar9 >> 2) & 1)) {
        puVar1 = source + 1;
        uVar7 = *source;
        puVar2 = destination + 1;
        *destination = uVar7;
      }
      uVar6 = (undefined2)uVar7;
      if ((uVar9 & 3) != 0) {
        bVar14 = (bool)((byte)(uVar9 >> 1) & 1);
        uVar9 = uVar9 << 0x1f;
        bVar13 = (int)uVar9 < 0;
        puVar4 = puVar1;
        if (bVar14) {
          puVar4 = (uint *)((int)puVar1 + 2);
          uVar6 = (undefined2)*puVar1;
        }
        puVar1 = puVar4;
        if (bVar13) {
          puVar1 = (uint *)((int)puVar4 + 1);
          uVar9 = (uint)(byte)*puVar4;
        }
        puVar4 = puVar2;
        if (bVar14) {
          puVar4 = (uint *)((int)puVar2 + 2);
          *(undefined2 *)puVar2 = uVar6;
        }
        puVar2 = puVar4;
        if (bVar13) {
          puVar2 = (uint *)((int)puVar4 + 1);
          *(byte *)puVar4 = (byte)uVar9;
        }
        return CONCAT44(puVar1,puVar2);
      }
      return CONCAT44(puVar1,puVar2);
    }
    bVar13 = 3 < count;
    count = count - 4;
    if (bVar13) {
      puVar2 = (uint *)((int)source - in_r3);
      in_r12 = *puVar2;
      puVar1 = destination;
      if (in_r3 == 2) {
        do {
          puVar4 = puVar2;
          uVar9 = in_r12 >> 0x10;
          puVar2 = puVar4 + 1;
          in_r12 = *puVar2;
          bVar13 = 3 < count;
          count = count - 4;
          in_r3 = uVar9 | in_r12 << 0x10;
          destination = puVar1 + 1;
          *puVar1 = in_r3;
          puVar1 = destination;
        } while (bVar13);
        source = (uint *)((int)puVar4 + 6);
      }
      else if (in_r3 < 3) {
        do {
          puVar4 = puVar2;
          uVar9 = in_r12 >> 8;
          puVar2 = puVar4 + 1;
          in_r12 = *puVar2;
          bVar13 = 3 < count;
          count = count - 4;
          in_r3 = uVar9 | in_r12 << 0x18;
          destination = puVar1 + 1;
          *puVar1 = in_r3;
          puVar1 = destination;
        } while (bVar13);
        source = (uint *)((int)puVar4 + 5);
      }
      else {
        do {
          puVar4 = puVar2;
          uVar9 = in_r12 >> 0x18;
          puVar2 = puVar4 + 1;
          in_r12 = *puVar2;
          bVar13 = 3 < count;
          count = count - 4;
          in_r3 = uVar9 | in_r12 << 8;
          destination = puVar1 + 1;
          *puVar1 = in_r3;
          puVar1 = destination;
        } while (bVar13);
        source = (uint *)((int)puVar4 + 7);
      }
    }
  }
  bVar8 = (byte)in_r12;
  bVar5 = (byte)in_r3;
  bVar14 = (bool)((byte)(count >> 1) & 1);
  uVar9 = count << 0x1f;
  bVar13 = (int)uVar9 < 0;
  if (bVar14) {
    pbVar3 = (byte *)((int)source + 1);
    bVar5 = (byte)*source;
    source = (uint *)((int)source + 2);
    bVar8 = *pbVar3;
  }
  puVar1 = source;
  if (bVar13) {
    puVar1 = (uint *)((int)source + 1);
    uVar9 = (uint)(byte)*source;
  }
  if (bVar14) {
    pbVar3 = (byte *)((int)destination + 1);
    *(byte *)destination = bVar5;
    destination = (uint *)((int)destination + 2);
    *pbVar3 = bVar8;
  }
  puVar2 = destination;
  if (bVar13) {
    puVar2 = (uint *)((int)destination + 1);
    *(byte *)destination = (byte)uVar9;
  }
  return CONCAT44(puVar1,puVar2);
}



// Address: 4a00105c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Move permits
   overlap, including identical pointers. Forward path returns end pointers. Backward path returns
   each original pointer plus (count&1) for count<=3 or (destination&1) otherwise: its final byte
   has no writeback. */

ulonglong s3c_move_endpoints(uint *destination,uint *source,uint count)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined1 uVar12;
  uint in_r12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;

  uVar8 = (int)destination - (int)source;
  bVar15 = uVar8 == 0;
  if (destination >= source) {
    bVar15 = count == uVar8;
  }
  if ((destination < source || count < uVar8) || bVar15) {
    if (3 < count) {
      uVar8 = (uint)destination & 3;
      in_r12 = uVar8;
      if (uVar8 != 0) {
        bVar5 = (byte)*source;
        puVar3 = (uint *)((int)source + 1);
        if (uVar8 < 3) {
          puVar3 = (uint *)((int)source + 2);
          in_r12 = (uint)*(byte *)((int)source + 1);
        }
        *(byte *)destination = bVar5;
        source = puVar3;
        if (uVar8 < 2) {
          source = (uint *)((int)puVar3 + 1);
          bVar5 = (byte)*puVar3;
        }
        puVar3 = (uint *)((int)destination + 1);
        if (uVar8 < 3) {
          puVar3 = (uint *)((int)destination + 2);
          *(byte *)((int)destination + 1) = (byte)in_r12;
        }
        count = (count + uVar8) - 4;
        destination = puVar3;
        if (uVar8 < 2) {
          destination = (uint *)((int)puVar3 + 1);
          *(byte *)puVar3 = bVar5;
        }
      }
      uVar8 = (uint)source & 3;
      if (uVar8 == 0) {
        bVar15 = 0x1f < count;
        uVar8 = count - 0x20;
        uVar9 = 0;
        if (bVar15) {
          do {
            if (bVar15) {
              uVar9 = source[1];
              uVar10 = source[2];
              uVar13 = source[3];
              *destination = *source;
              destination[1] = uVar9;
              destination[2] = uVar10;
              destination[3] = uVar13;
              uVar9 = source[4];
              uVar10 = source[5];
              uVar13 = source[6];
              uVar14 = source[7];
              source = source + 8;
              destination[4] = uVar9;
              destination[5] = uVar10;
              destination[6] = uVar13;
              destination[7] = uVar14;
              destination = destination + 8;
              bVar15 = 0x1f < uVar8;
              uVar8 = uVar8 - 0x20;
            }
          } while (bVar15);
        }
        if ((bool)((byte)(uVar8 >> 4) & 1)) {
          uVar9 = *source;
          uVar10 = source[1];
          uVar13 = source[2];
          uVar14 = source[3];
          source = source + 4;
          *destination = uVar9;
          destination[1] = uVar10;
          destination[2] = uVar13;
          destination[3] = uVar14;
          destination = destination + 4;
        }
        if ((int)(uVar8 << 0x1c) < 0) {
          uVar9 = *source;
          uVar10 = source[1];
          source = source + 2;
          *destination = uVar9;
          destination[1] = uVar10;
          destination = destination + 2;
        }
        puVar1 = destination;
        puVar3 = source;
        if ((bool)((byte)(uVar8 >> 2) & 1)) {
          puVar3 = source + 1;
          uVar9 = *source;
          puVar1 = destination + 1;
          *destination = uVar9;
        }
        uVar7 = (undefined2)uVar9;
        if ((uVar8 & 3) == 0) {
          return CONCAT44(puVar3,puVar1);
        }
        bVar16 = (bool)((byte)(uVar8 >> 1) & 1);
        uVar8 = uVar8 << 0x1f;
        bVar15 = (int)uVar8 < 0;
        puVar4 = puVar3;
        if (bVar16) {
          puVar4 = (uint *)((int)puVar3 + 2);
          uVar7 = (undefined2)*puVar3;
        }
        puVar3 = puVar4;
        if (bVar15) {
          puVar3 = (uint *)((int)puVar4 + 1);
          uVar8 = (uint)(byte)*puVar4;
        }
        puVar4 = puVar1;
        if (bVar16) {
          puVar4 = (uint *)((int)puVar1 + 2);
          *(undefined2 *)puVar1 = uVar7;
        }
        puVar1 = puVar4;
        if (bVar15) {
          puVar1 = (uint *)((int)puVar4 + 1);
          *(byte *)puVar4 = (byte)uVar8;
        }
        return CONCAT44(puVar3,puVar1);
      }
      bVar15 = 3 < count;
      count = count - 4;
      if (bVar15) {
        puVar1 = (uint *)((int)source - uVar8);
        in_r12 = *puVar1;
        puVar3 = destination;
        if (uVar8 == 2) {
          do {
            puVar4 = puVar1;
            uVar8 = in_r12 >> 0x10;
            puVar1 = puVar4 + 1;
            in_r12 = *puVar1;
            bVar15 = 3 < count;
            count = count - 4;
            uVar8 = uVar8 | in_r12 << 0x10;
            destination = puVar3 + 1;
            *puVar3 = uVar8;
            puVar3 = destination;
          } while (bVar15);
          source = (uint *)((int)puVar4 + 6);
        }
        else if (uVar8 < 3) {
          do {
            puVar4 = puVar1;
            uVar8 = in_r12 >> 8;
            puVar1 = puVar4 + 1;
            in_r12 = *puVar1;
            bVar15 = 3 < count;
            count = count - 4;
            uVar8 = uVar8 | in_r12 << 0x18;
            destination = puVar3 + 1;
            *puVar3 = uVar8;
            puVar3 = destination;
          } while (bVar15);
          source = (uint *)((int)puVar4 + 5);
        }
        else {
          do {
            puVar4 = puVar1;
            uVar8 = in_r12 >> 0x18;
            puVar1 = puVar4 + 1;
            in_r12 = *puVar1;
            bVar15 = 3 < count;
            count = count - 4;
            uVar8 = uVar8 | in_r12 << 8;
            destination = puVar3 + 1;
            *puVar3 = uVar8;
            puVar3 = destination;
          } while (bVar15);
          source = (uint *)((int)puVar4 + 7);
        }
      }
    }
    bVar11 = (byte)in_r12;
    bVar5 = (byte)uVar8;
    bVar16 = (bool)((byte)(count >> 1) & 1);
    uVar8 = count << 0x1f;
    bVar15 = (int)uVar8 < 0;
    if (bVar16) {
      pbVar2 = (byte *)((int)source + 1);
      bVar5 = (byte)*source;
      source = (uint *)((int)source + 2);
      bVar11 = *pbVar2;
    }
    puVar3 = source;
    if (bVar15) {
      puVar3 = (uint *)((int)source + 1);
      uVar8 = (uint)(byte)*source;
    }
    if (bVar16) {
      pbVar2 = (byte *)((int)destination + 1);
      *(byte *)destination = bVar5;
      destination = (uint *)((int)destination + 2);
      *pbVar2 = bVar11;
    }
    puVar1 = destination;
    if (bVar15) {
      puVar1 = (uint *)((int)destination + 1);
      *(byte *)destination = (byte)uVar8;
    }
    return CONCAT44(puVar3,puVar1);
  }
  puVar1 = (uint *)((int)destination + count);
  puVar3 = (uint *)((int)source + count);
  if (3 < count) {
    bVar15 = ((uint)puVar1 & 3) == 0;
    do {
      if (!bVar15) {
        puVar3 = (uint *)((int)puVar3 + -1);
        count = count - 1;
        puVar1 = (uint *)((int)puVar1 + -1);
        *(undefined1 *)puVar1 = *(undefined1 *)puVar3;
      }
      bVar15 = ((uint)puVar1 & 3) == 0;
    } while (!bVar15);
    uVar8 = (uint)puVar3 & 3;
    if (uVar8 == 0) {
      while (uVar8 = count - 0x10, 0xf < count) {
        puVar4 = puVar3 + -1;
        uVar13 = puVar3[-2];
        uVar10 = puVar3[-3];
        puVar3 = puVar3 + -4;
        uVar9 = *puVar3;
        puVar1[-1] = *puVar4;
        puVar1[-2] = uVar13;
        puVar1[-3] = uVar10;
        puVar1 = puVar1 + -4;
        *puVar1 = uVar9;
        count = uVar8;
      }
      uVar9 = count << 0x1d;
      bVar15 = (int)uVar9 < 0;
      if ((bool)((byte)(uVar8 >> 3) & 1)) {
        puVar4 = puVar3 + -1;
        puVar3 = puVar3 + -2;
        uVar9 = *puVar3;
        puVar1[-1] = *puVar4;
        puVar1 = puVar1 + -2;
        *puVar1 = uVar9;
      }
      if (bVar15) {
        puVar3 = puVar3 + -1;
        uVar9 = *puVar3;
        puVar1 = puVar1 + -1;
        *puVar1 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar8 & 3) == 0) {
        return CONCAT44(puVar3,puVar1);
      }
      bVar16 = (bool)((byte)(uVar8 >> 1) & 1);
      uVar8 = count << 0x1f;
      bVar15 = (int)uVar8 < 0;
      if (bVar16) {
        puVar3 = (uint *)((int)puVar3 + -2);
        uVar7 = *(undefined2 *)puVar3;
      }
      if (bVar15) {
        uVar8 = (uint)*(byte *)((int)puVar3 + -1);
      }
      if (bVar16) {
        puVar1 = (uint *)((int)puVar1 + -2);
        *(undefined2 *)puVar1 = uVar7;
      }
      if (bVar15) {
        *(char *)((int)puVar1 + -1) = (char)uVar8;
      }
      return CONCAT44(puVar3,puVar1);
    }
    bVar15 = 3 < count;
    count = count - 4;
    if (bVar15) {
      puVar3 = (uint *)((int)puVar3 - uVar8);
      in_r12 = *puVar3;
      if (uVar8 < 2) {
        do {
          puVar4 = puVar3;
          uVar8 = in_r12 << 0x18;
          puVar3 = puVar4 + -1;
          in_r12 = *puVar3;
          bVar15 = 3 < count;
          count = count - 4;
          uVar8 = uVar8 | in_r12 >> 8;
          puVar1 = puVar1 + -1;
          *puVar1 = uVar8;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar4 + -3);
      }
      else if (uVar8 < 3) {
        do {
          puVar4 = puVar3;
          uVar8 = in_r12 << 0x10;
          puVar3 = puVar4 + -1;
          in_r12 = *puVar3;
          bVar15 = 3 < count;
          count = count - 4;
          uVar8 = uVar8 | in_r12 >> 0x10;
          puVar1 = puVar1 + -1;
          *puVar1 = uVar8;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar4 + -2);
      }
      else {
        do {
          puVar4 = puVar3;
          uVar8 = in_r12 << 8;
          puVar3 = puVar4 + -1;
          in_r12 = *puVar3;
          bVar15 = 3 < count;
          count = count - 4;
          uVar8 = uVar8 | in_r12 >> 0x18;
          puVar1 = puVar1 + -1;
          *puVar1 = uVar8;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar4 + -1);
      }
    }
  }
  uVar12 = (undefined1)in_r12;
  uVar6 = (undefined1)uVar8;
  bVar16 = (bool)((byte)(count >> 1) & 1);
  uVar8 = count << 0x1f;
  bVar15 = (int)uVar8 < 0;
  if (bVar16) {
    uVar6 = *(undefined1 *)((int)puVar3 + -1);
    puVar3 = (uint *)((int)puVar3 + -2);
    uVar12 = *(undefined1 *)puVar3;
  }
  if (bVar15) {
    uVar8 = (uint)*(byte *)((int)puVar3 + -1);
  }
  if (bVar16) {
    *(undefined1 *)((int)puVar1 + -1) = uVar6;
    puVar1 = (uint *)((int)puVar1 + -2);
    *(undefined1 *)puVar1 = uVar12;
  }
  if (bVar15) {
    *(char *)((int)puVar1 + -1) = (char)uVar8;
  }
  return CONCAT44(puVar3,puVar1);
}



// Address: 4a000eb8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserves original
   destination in r0; delegates to the recovered copy/move helper. */

uint * s3c_copy_preserving_destination(uint *destination,uint *source,uint count)

{
  s3c_copy_forward_endpoints(destination,source,count);
  return destination;
}



// Address: 4a000ec8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserves original
   destination in r0; delegates to the recovered copy/move helper. */

uint * s3c_move_preserving_destination(uint *destination,uint *source,uint count)

{
  s3c_move_endpoints(destination,source,count);
  return destination;
}



// Address: 4a000f70

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Argument order is
   destination, count, fill byte. Returns destination + count, not the original destination. */

uint * s3c_fill_end(uint *destination,uint count,uchar value)

{
  uint uVar1;
  undefined2 uVar2;
  uint *puVar3;
  uint *puVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;

  uVar2 = CONCAT11(value,value);
  uVar7 = CONCAT22(uVar2,uVar2);
  if (count < 4) {
    if ((bool)((byte)(count >> 1) & 1)) {
      puVar5 = (uchar *)((int)destination + 1);
      *(uchar *)destination = value;
      destination = (uint *)((int)destination + 2);
      *puVar5 = value;
    }
    puVar4 = destination;
    if ((int)(count << 0x1f) < 0) {
      puVar4 = (uint *)((int)destination + 1);
      *(uchar *)destination = value;
    }
    return puVar4;
  }
  if (((uint)destination & 3) != 0) {
    iVar8 = 4 - ((uint)destination & 3);
    puVar4 = destination;
    if (iVar8 != 2) {
      puVar4 = (uint *)((int)destination + 1);
      *(uchar *)destination = value;
    }
    count = count - iVar8;
    destination = puVar4;
    if (1 < iVar8) {
      destination = (uint *)((int)puVar4 + 2);
      *(undefined2 *)puVar4 = uVar2;
    }
  }
  bVar9 = 0x1f < count;
  uVar6 = count - 0x20;
  do {
    if (bVar9) {
      *destination = uVar7;
      destination[1] = uVar7;
      destination[2] = uVar7;
      destination[3] = uVar7;
      destination[4] = uVar7;
      destination[5] = uVar7;
      destination[6] = uVar7;
      destination[7] = uVar7;
      destination = destination + 8;
      bVar9 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
    }
  } while (bVar9);
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    *destination = uVar7;
    destination[1] = uVar7;
    destination[2] = uVar7;
    destination[3] = uVar7;
    destination = destination + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    *destination = uVar7;
    destination[1] = uVar7;
    destination = destination + 2;
  }
  uVar1 = uVar6 << 0x1e;
  puVar4 = destination;
  if ((bool)((byte)((uVar6 << 0x1c) >> 0x1e) & 1)) {
    puVar4 = destination + 1;
    *destination = uVar7;
  }
  if (uVar1 == 0) {
    return puVar4;
  }
  puVar3 = puVar4;
  if ((int)uVar1 < 0) {
    puVar3 = (uint *)((int)puVar4 + 2);
    *(undefined2 *)puVar4 = uVar2;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (uint *)((int)puVar3 + 1);
    *(uchar *)puVar3 = value;
  }
  return puVar4;
}



// Address: 4a00121c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Shared fill tail,
   zero value. Destination must be four-byte aligned. */

uint * s3c_zero_aligned_end(uint *destination,uint count)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  bVar5 = 0x1f < count;
  uVar4 = count - 0x20;
  do {
    if (bVar5) {
      *destination = 0;
      destination[1] = 0;
      destination[2] = 0;
      destination[3] = 0;
      destination[4] = 0;
      destination[5] = 0;
      destination[6] = 0;
      destination[7] = 0;
      destination = destination + 8;
      bVar5 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
    }
  } while (bVar5);
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    *destination = 0;
    destination[1] = 0;
    destination[2] = 0;
    destination[3] = 0;
    destination = destination + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    *destination = 0;
    destination[1] = 0;
    destination = destination + 2;
  }
  uVar1 = uVar4 << 0x1e;
  puVar3 = destination;
  if ((bool)((byte)((uVar4 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = destination + 1;
    *destination = 0;
  }
  if (uVar1 != 0) {
    puVar2 = puVar3;
    if ((int)uVar1 < 0) {
      puVar2 = (uint *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
    puVar3 = puVar2;
    if ((uVar1 & 0x40000000) != 0) {
      puVar3 = (uint *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = 0;
    }
    return puVar3;
  }
  return puVar3;
}



// Address: 4a001274

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Shared fill tail,
   zero value. Accepts byte-aligned destinations. */

uint * s3c_zero_end(uint *destination,uint count)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;

  if (count < 4) {
    if ((bool)((byte)(count >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)destination + 1);
      *(undefined1 *)destination = 0;
      destination = (uint *)((int)destination + 2);
      *puVar4 = 0;
    }
    puVar3 = destination;
    if ((int)(count << 0x1f) < 0) {
      puVar3 = (uint *)((int)destination + 1);
      *(undefined1 *)destination = 0;
    }
    return puVar3;
  }
  if (((uint)destination & 3) != 0) {
    iVar6 = 4 - ((uint)destination & 3);
    puVar3 = destination;
    if (iVar6 != 2) {
      puVar3 = (uint *)((int)destination + 1);
      *(undefined1 *)destination = 0;
    }
    count = count - iVar6;
    destination = puVar3;
    if (1 < iVar6) {
      destination = (uint *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
  }
  bVar7 = 0x1f < count;
  uVar5 = count - 0x20;
  do {
    if (bVar7) {
      *destination = 0;
      destination[1] = 0;
      destination[2] = 0;
      destination[3] = 0;
      destination[4] = 0;
      destination[5] = 0;
      destination[6] = 0;
      destination[7] = 0;
      destination = destination + 8;
      bVar7 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
    }
  } while (bVar7);
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    *destination = 0;
    destination[1] = 0;
    destination[2] = 0;
    destination[3] = 0;
    destination = destination + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    *destination = 0;
    destination[1] = 0;
    destination = destination + 2;
  }
  uVar1 = uVar5 << 0x1e;
  puVar3 = destination;
  if ((bool)((byte)((uVar5 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = destination + 1;
    *destination = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)uVar1 < 0) {
    puVar2 = (uint *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = 0;
  }
  puVar3 = puVar2;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
  }
  return puVar3;
}



// Address: 4a000ed8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. ARM entry switches
   to Thumb internally. Copy includes the zero terminator; return original destination. */

short * s3c_utf16_copy(short *destination,short *source)

{
  short sVar1;
  short *psVar2;

  psVar2 = destination;
  do {
    sVar1 = *source;
    source = source + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return destination;
}



// Address: 4a000ef4

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

int s3c_utf16_compare(ushort *first,ushort *second)

{
  for (; (*first != 0 && (*first == *second)); first = first + 1) {
    second = second + 1;
  }
  return (uint)*first - (uint)*second;
}



// Address: 4a000f18

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Pointer values
   appear as 32-bit integers in the recovered declaration. */

int s3c_utf16_find(int haystack,int needle)

{
  short sVar1;
  short sVar2;
  int iVar3;

  do {
    iVar3 = 0;
    while( true ) {
      sVar2 = *(short *)(needle + iVar3 * 2);
      if (sVar2 == 0) {
        return haystack;
      }
      sVar1 = *(short *)(haystack + iVar3 * 2);
      if (sVar1 == 0) {
        return 0;
      }
      if (sVar1 != sVar2) break;
      iVar3 = iVar3 + 1;
    }
    if (*(short *)(needle + iVar3 * 2) == 0) {
      return haystack;
    }
    haystack = haystack + 2;
  } while( true );
}



// Address: 4a000f50

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

int s3c_utf16_length(short *text)

{
  int iVar1;

  iVar1 = 0;
  for (; *text != 0; text = text + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Address: 4a0012bc

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Assembly preserves
   r0. Correct void inference by retaining and returning original destination. */

uint * s3c_string_copy(uint *destination,uint *source)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;

  iVar2 = DAT_4a001308;
  puVar3 = destination;
  if ((((uint)destination | (uint)source) & 3) == 0) {
    uVar6 = DAT_4a001308 << 7;
    while( true ) {
      uVar4 = *source;
      source = source + 1;
      if ((uVar4 - iVar2 & ~uVar4 & uVar6) != 0) break;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    }
    while( true ) {
      *(char *)puVar3 = (char)uVar4;
      puVar3 = (uint *)((int)puVar3 + 1);
      if ((uVar4 & 0xff) == 0) break;
      uVar4 = uVar4 >> 8;
    }
  }
  else {
    do {
      uVar6 = *source;
      pcVar5 = (char *)((int)puVar3 + 1);
      *(char *)puVar3 = (char)uVar6;
      if ((char)uVar6 == '\0') {
        return destination;
      }
      cVar1 = *(char *)((int)source + 1);
      source = (uint *)((int)source + 2);
      puVar3 = (uint *)((int)puVar3 + 2);
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
  }
  return destination;
}



// Address: 4a001314

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Zero-byte
   detection mask is loaded from the original literal pool. */

int s3c_string_compare_count(uint *first,uint *second,uint count)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if ((((uint)first | (uint)second) & 3) == 0) {
    while (((3 < count && (uVar2 = *first, uVar2 == *second)) &&
           ((uVar2 - DAT_4a001360 & ~uVar2 & DAT_4a001360 << 7) == 0))) {
      first = first + 1;
      second = second + 1;
      count = count - 4;
    }
  }
  if (count == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar3 = (uint)(byte)*first;
      uVar2 = *second;
      first = (uint *)((int)first + 1);
      second = (uint *)((int)second + 1);
      if ((uVar3 == 0) || (uVar3 != (byte)uVar2)) break;
      count = count - 1;
    } while (count != 0);
    iVar1 = uVar3 - (byte)uVar2;
  }
  return iVar1;
}



// Address: 4a001368

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Calls the
   recovered zero-fill helper for padding. Negative counts return without copying. */

uint * s3c_string_copy_pad(uint *destination,uint *source,int count)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *destination_00;
  uint uVar4;

  iVar2 = DAT_4a0013d4;
  puVar3 = destination;
  if (((uint)destination & 3) == 0 && ((uint)source & 3) == 0) {
    while (3 < count) {
      uVar4 = *source;
      if ((uVar4 - iVar2 & ~uVar4 & iVar2 << 7) != 0) break;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
      source = source + 1;
      count = count - 4;
    }
  }
  do {
    uVar4 = count - 1;
    if (count < 1) {
      return destination;
    }
    uVar1 = *source;
    destination_00 = (uint *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)uVar1;
    puVar3 = destination_00;
    source = (uint *)((int)source + 1);
    count = uVar4;
  } while ((char)uVar1 != '\0');
  s3c_zero_end(destination_00,uVar4);
  return destination;
}



// Address: 4a0013e0

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

int s3c_string_length(uint *text)

{
  uint uVar1;
  int iVar2;

  iVar2 = (int)text + 1;
  while (((uint)text & 3) != 0) {
    uVar1 = *text;
    text = (uint *)((int)text + 1);
    if ((char)uVar1 == '\0') {
      return (int)text - iVar2;
    }
  }
  do {
    uVar1 = *text;
    text = text + 1;
  } while ((uVar1 - DAT_4a001424 & ~uVar1 & DAT_4a001424 << 7) == 0);
  iVar2 = (int)text - iVar2;
  if ((uVar1 & 0xff) == 0) {
    return iVar2 + -3;
  }
  if ((uVar1 & 0xffff) >> 8 == 0) {
    return iVar2 + -2;
  }
  if ((uVar1 & 0xffffff) >> 0x10 != 0) {
    return iVar2;
  }
  return iVar2 + -1;
}



// Address: 4a00142c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Preserve exact
   machine return bits, including aligned RRX/carry path, rather than substituting a generic strcmp.
    */

uint s3c_string_compare(uint *first,uint *second)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;

  if (((uint)first & 3) != 0 || ((uint)second & 3) != 0) {
    do {
      pbVar3 = (byte *)((int)first + 1);
      uVar6 = (uint)(byte)*first;
      pbVar5 = (byte *)((int)second + 1);
      uVar7 = (uint)(byte)*second;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
      if (!bVar11) break;
      first = (uint *)((int)first + 2);
      uVar6 = (uint)*pbVar3;
      second = (uint *)((int)second + 2);
      uVar7 = (uint)*pbVar5;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
    } while (bVar11);
    return uVar6 - uVar7;
  }
  do {
    puVar1 = first + 1;
    uVar6 = *first;
    puVar4 = second + 1;
    uVar7 = *second;
    uVar8 = uVar6 - DAT_4a0014e4 & ~uVar6 & DAT_4a0014e4 << 7;
    if (uVar8 != 0 || uVar6 != uVar7) break;
    first = first + 2;
    uVar6 = *puVar1;
    second = second + 2;
    uVar7 = *puVar4;
    uVar8 = uVar6 - DAT_4a0014e4 & ~uVar6 & DAT_4a0014e4 << 7;
  } while (uVar8 == 0 && uVar6 == uVar7);
  uVar2 = uVar7 * 0x1000000 + uVar6 * -0x1000000;
  bVar9 = uVar2 == 0;
  bVar12 = !bVar9 && uVar6 * 0x1000000 <= uVar7 * 0x1000000;
  bVar10 = (uVar8 & 0xff0) == 0;
  bVar11 = bVar9 && bVar10;
  if (bVar9 && bVar10) {
    uVar2 = uVar7 * 0x10000 + uVar6 * -0x10000;
    bVar9 = uVar2 == 0;
    bVar12 = !bVar9 && uVar6 * 0x10000 <= uVar7 * 0x10000;
    bVar10 = (uVar8 & 0xff00) == 0;
    bVar11 = bVar9 && bVar10;
    if (bVar9 && bVar10) {
      uVar2 = uVar7 * 0x100 + uVar6 * -0x100;
      bVar9 = uVar2 == 0;
      bVar12 = !bVar9 && uVar6 * 0x100 <= uVar7 * 0x100;
      bVar10 = (uVar8 & 0xff0000) == 0;
      bVar11 = bVar9 && bVar10;
      if (bVar9 && bVar10) {
        bVar12 = uVar6 <= uVar7;
        uVar2 = uVar7 - uVar6;
        bVar11 = uVar2 == 0;
      }
    }
  }
  if (!bVar11) {
    uVar2 = (uint)bVar12 << 0x1f | uVar2 >> 1;
  }
  return uVar2;
}



// Address: 4a00150c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Test contract uses
   nonnegative counts within the mapped buffer. */

uchar * s3c_memory_find(uchar *buffer,uchar value,int count)

{
  uchar *puVar1;
  uchar *puVar2;

  if (count != 0) {
    puVar1 = buffer;
    do {
      puVar2 = puVar1;
      if (puVar2 + 1 == buffer + count) break;
      puVar1 = puVar2 + 1;
    } while (value != *puVar2);
    if (value == *puVar2) {
      return puVar2;
    }
  }
  return (uchar *)0x0;
}



// Address: 4a001538

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Assembly preserves
   r0. Retain original destination across the inferred pointer increments. */

uchar * s3c_string_append(uchar *destination,uchar *source)

{
  uchar uVar1;
  uchar *puVar2;

  for (puVar2 = destination; *puVar2 != '\0'; puVar2 = puVar2 + 1) {
  }
  do {
    uVar1 = *source;
    source = source + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (uVar1 != '\0');
  return destination;
}



// Address: 4a001552

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

uchar * s3c_string_find_byte(int text,uchar value)

{
  uchar uVar1;
  uchar *puVar2;

  puVar2 = (uchar *)(text + -1);
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    if (value == uVar1) break;
  } while (uVar1 != '\0');
  if (value != uVar1) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}



// Address: 4a00156c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Assembly preserves
   r0. Test contract uses nonnegative counts. */

uchar * s3c_string_append_count(uchar *destination,uchar *source,int count)

{
  uchar uVar1;
  uchar *puVar2;

  for (puVar2 = destination; *puVar2 != '\0'; puVar2 = puVar2 + 1) {
  }
  while( true ) {
    if (count == 0) {
      *puVar2 = '\0';
      return destination;
    }
    uVar1 = *source;
    source = source + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    if (uVar1 == '\0') break;
    count = count + -1;
  }
  return destination;
}



// Address: 4a0015a0

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

uchar * s3c_string_find_last_byte(uchar *text,uchar value)

{
  uchar uVar1;
  uchar *puVar2;

  puVar2 = (uchar *)0x0;
  do {
    uVar1 = *text;
    if (uVar1 == value) {
      puVar2 = text;
    }
    text = text + 1;
  } while (uVar1 != '\0');
  return puVar2;
}



// Address: 4a0015c0

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation.  */

uchar * s3c_string_find(uchar *haystack,uchar *needle)

{
  uchar uVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;

  puVar3 = needle;
  puVar4 = haystack;
LAB_4a0015c8:
  uVar1 = *haystack;
  uVar2 = *puVar3;
  haystack = haystack + 1;
  if (uVar1 != '\0') goto code_r0x4a0015d4;
  goto LAB_4a0015d8;
code_r0x4a0015d4:
  puVar3 = puVar3 + 1;
  if (uVar1 != uVar2) {
LAB_4a0015d8:
    puVar3 = puVar4;
    if ((uVar2 == '\0') || (puVar3 = (uchar *)0x0, uVar1 == '\0')) {
      return puVar3;
    }
    haystack = puVar4 + 1;
    puVar3 = needle;
    puVar4 = haystack;
  }
  goto LAB_4a0015c8;
}



// Address: 4a000e60

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Compare exact
   unsigned-byte difference, including aligned word fast path. */

int s3c_memory_compare(uchar *first,uchar *second,uint count)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;

  if ((3 < count) && ((((uint)first | (uint)second) & 3) == 0)) {
    do {
      pbVar3 = second;
      pbVar1 = first;
      first = pbVar1 + 4;
      second = pbVar3 + 4;
      if (*(int *)pbVar1 != *(int *)pbVar3) break;
      count = count - 4;
    } while (3 < count);
    if (*(int *)pbVar1 != *(int *)pbVar3) {
      first = pbVar1;
      second = pbVar3;
    }
  }
  if (count == 0) {
    iVar2 = 0;
  }
  else {
    if ((count & 1) == 0) goto LAB_4a000e96;
    count = count + 1;
    do {
      uVar4 = (uint)*first;
      uVar5 = (uint)*second;
      first = first + 1;
      second = second + 1;
      if ((uVar4 != uVar5) || (count = count - 2, count == 0)) break;
LAB_4a000e96:
      uVar4 = (uint)*first;
      uVar5 = (uint)*second;
      first = first + 1;
      second = second + 1;
    } while (uVar4 == uVar5);
    iVar2 = uVar4 - uVar5;
  }
  return iVar2;
}



// Address: 4a000c5c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Default C locale
   table; character domain -1..255. Preserve the 0x98 bitmask, not a boolean. */

uint s3c_ctype_alnum(int character)

{
  int *piVar1;

  piVar1 = (int *)thunk_FUN_4a003120();
  return *(byte *)(*piVar1 + character) & 0x98;
}



// Address: 4a000c72

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Default C locale
   table; character domain -1..255. Return bit zero. */

uint s3c_ctype_space(int character)

{
  int *piVar1;

  piVar1 = (int *)thunk_FUN_4a003120();
  return *(byte *)(*piVar1 + character) & 1;
}



// Address: 4a000c88

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Default C locale
   table; character domain -1..255. Preserve byte values outside uppercase entries. */

int s3c_ctype_lower(int character)

{
  int *piVar1;

  piVar1 = (int *)thunk_FUN_4a003120();
  if ((int)((uint)*(byte *)(*piVar1 + character) << 0x1b) < 0) {
    character = character + 0x20;
  }
  return character;
}



// Address: 4a000ca8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Default C locale
   table; character domain -1..255. Preserve the explicit 0xdf exception. */

int s3c_ctype_upper(int character)

{
  int *piVar1;

  piVar1 = (int *)thunk_FUN_4a003120();
  if (((int)((uint)*(byte *)(*piVar1 + character) << 0x1c) < 0) && (character != 0xdf)) {
    character = character + -0x20;
  }
  return character;
}



// Address: 4a16303e

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Return full source
   length; copy at most capacity-1 bytes and terminate when capacity is nonzero. Disjoint regions.
    */

uint s3c_bounded_string_copy(uchar *destination,uchar *source,uint capacity)

{
  uint uVar1;
  uint count;

  uVar1 = s3c_string_length((uint *)source);
  if (capacity != 0) {
    count = uVar1;
    if (capacity - 1 <= uVar1) {
      count = capacity - 1;
    }
    if (count != 0) {
      s3c_copy_forward_endpoints((uint *)destination,(uint *)source,count);
    }
    destination[count] = '\0';
  }
  return uVar1;
}



// Address: 4a163010

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Return initial
   destination length plus full source length. Capacity must be positive; preserve no-write behavior
   when already full. Disjoint source/destination. */

uint s3c_bounded_string_append(uchar *destination,uchar *source,uint capacity)

{
  uint uVar1;
  uint uVar2;

  uVar1 = s3c_string_length((uint *)destination);
  if (uVar1 < capacity - 1) {
    uVar2 = s3c_bounded_string_copy(destination + uVar1,source,capacity - uVar1);
  }
  else {
    uVar2 = s3c_string_length((uint *)source);
  }
  return uVar2 + uVar1;
}



// Address: 4a00b998

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Original
   slash/backslash scanning and repeated-separator behavior. Source and destination may be
   identical; otherwise disjoint. */

uchar * s3c_path_parent(uchar *source,uchar *destination)

{
  int iVar1;
  uchar *puVar2;

  iVar1 = s3c_string_length((uint *)source);
  puVar2 = source + iVar1;
  do {
    if (puVar2 <= source) goto LAB_4a00b9d0;
    puVar2 = puVar2 + -1;
  } while ((*puVar2 != '/') && (*puVar2 != '\\'));
  for (; (source + 1 < puVar2 && ((puVar2[-1] == '/' || (puVar2[-1] == '\\'))));
      puVar2 = puVar2 + -1) {
  }
LAB_4a00b9d0:
  if (source != destination) {
    s3c_string_copy((uint *)destination,(uint *)source);
  }
  destination[(int)puVar2 - (int)source] = '\0';
  return destination;
}



// Address: 4a00b9ea

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Nonempty source
   and disjoint destination; preserve the original scan and the final-dot special case. One readable
   byte before source is required by the original scan. */

uchar * s3c_path_extension(uchar *source,uchar *destination)

{
  int iVar1;
  uint *puVar2;
  uint *source_00;

  iVar1 = s3c_string_length((uint *)source);
  source_00 = (uint *)(source + iVar1 + -1);
  if ((uchar)*(uint *)(source + iVar1 + -1) != '.') {
    do {
      puVar2 = (uint *)((int)source_00 + -1);
      if (*(uchar *)puVar2 == '.') {
        s3c_string_copy((uint *)destination,source_00);
        return destination;
      }
      source_00 = puVar2;
    } while (source < puVar2);
  }
  *destination = '\0';
  return destination;
}



// Address: 4a00ba22

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Filename component
   must be at most 126 bytes so the original 127-byte temporary copy is terminated. Destination
   holds 128 bytes. Source and destination may be identical. Stripping uses the leftmost dot in the
   filename, as in the original. */

uchar * s3c_path_filename(uchar *source,uchar *destination,int keepExtension)

{
  uchar uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint auStack_a0 [32];
  uchar *puStack_20;
  uchar *local_1c;
  int iStack_18;
  uint *source_00;

  puStack_20 = source;
  local_1c = destination;
  iStack_18 = keepExtension;
  iVar2 = s3c_string_length((uint *)source);
  source_00 = (uint *)(source + iVar2);
  puVar4 = (uint *)0x0;
  while (((puVar3 = (uint *)((int)source_00 + -1), source <= puVar3 &&
          (uVar1 = *(uchar *)puVar3, uVar1 != '/')) && (uVar1 != '\\'))) {
    source_00 = puVar3;
    if (uVar1 == '.') {
      puVar4 = puVar3;
    }
  }
  s3c_string_copy_pad(auStack_a0,source_00,0x7f);
  s3c_bounded_string_copy(local_1c,(uchar *)auStack_a0,0x80);
  if ((keepExtension == 0) && (puVar4 != (uint *)0x0)) {
    local_1c[(int)((int)puVar4 + (-1 - (int)puVar3))] = '\0';
  }
  return local_1c;
}



// Address: 4a00ba7c

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Recognizes ://
   anywhere, matching the original substring search rather than a standard URL parser. */

uint s3c_path_has_scheme(uchar *source)

{
  uchar *puVar1;

  puVar1 = s3c_string_find(source,&DAT_4a00ba90);
  return (uint)(puVar1 != (uchar *)0x0);
}



// Address: 4a00ba94

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Capacity must be
   positive; disjoint source/destination. Preserve separator selection and forced termination when
   destination is already too long. */

uchar * s3c_path_join(uchar *destination,uchar *source,int capacity)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;

  iVar1 = s3c_string_length((uint *)destination);
  iVar2 = s3c_string_length((uint *)source);
  if (iVar1 + 1 < capacity) {
    if ((iVar1 != 0) && (iVar2 != 0)) {
      puVar3 = destination + iVar1;
      if ((puVar3[-1] == '/') || (puVar3[-1] == '\\')) {
        if ((*source == '/') || (*source == '\\')) {
          source = source + 1;
        }
      }
      else if ((*source != '/') && (*source != '\\')) {
        *puVar3 = '/';
        puVar3[1] = '\0';
      }
    }
    s3c_bounded_string_append(destination,source,capacity);
  }
  else {
    destination[capacity + -1] = '\0';
  }
  return destination;
}



// Address: 4a00bb00

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Default C locale;
   writable terminated input with accessible lookahead and sufficient original buffer space.
   Preserve URI prefix handling, drive/leading parent rules, trailing whitespace and slash removal,
   case option, and the original body-relative 127-byte truncation. */

uchar * s3c_path_normalize(uchar *path,int preserveCase)

{
  char *pcVar1;
  uchar uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uchar *puVar10;
  uint *destination;
  uint uVar11;
  uint uVar12;
  uint *destination_00;
  int iVar13;
  uint count;
  uint uVar14;
  uint uVar15;
  uint uVar16;

  iVar8 = s3c_string_length((uint *)path);
  if (iVar8 == 0) {
    return path;
  }
  for (iVar13 = 0; iVar13 < iVar8; iVar13 = iVar13 + 1) {
    if (path[iVar13] == '\\') {
      path[iVar13] = '/';
    }
    if (preserveCase == 0) {
      iVar9 = s3c_ctype_lower((uint)path[iVar13]);
      path[iVar13] = (uchar)iVar9;
    }
  }
  uVar2 = *path;
  puVar10 = s3c_string_find(path,&DAT_4a00bce4);
  destination_00 = (uint *)path;
  if (puVar10 != (uchar *)0x0) {
    destination_00 = (uint *)(puVar10 + 3);
  }
  iVar13 = (int)destination_00 - (int)path;
  count = iVar8 - iVar13;
  while ((char)*destination_00 == '/') {
    s3c_move_endpoints(destination_00,(uint *)((int)destination_00 + 1),count);
    count = count - 1;
  }
  for (iVar8 = 0; iVar8 < (int)(count - 1); iVar8 = iVar8 + 1) {
    if (((*(char *)((int)destination_00 + iVar8) == '/') &&
        (destination = (uint *)((int)destination_00 + iVar8), *(char *)((int)destination + 1) == '.'
        )) && ((iVar8 == count - 2 || (*(char *)((int)destination + 2) == '/')))) {
      s3c_move_endpoints(destination,(uint *)((int)destination + 2),(count - iVar8) - 1);
      count = count - 2;
      iVar8 = iVar8 + -1;
    }
  }
  if (((char)*destination_00 == '.') && (1 < (int)count)) {
    if (*(char *)((int)destination_00 + 1) == '/') {
      s3c_move_endpoints(destination_00,(uint *)((int)destination_00 + 2),count - 1);
      count = count - 2;
      goto LAB_4a00bbc6;
    }
  }
  else {
LAB_4a00bbc6:
    if ((count == 0) || ((char)*destination_00 != '.')) goto LAB_4a00bbda;
  }
  if (*(char *)((int)destination_00 + 1) == '\0') {
    count = count - 1;
    *(undefined1 *)destination_00 = 0;
  }
LAB_4a00bbda:
  bVar6 = false;
  if ((0 < (int)count) && (*(char *)((int)destination_00 + 1) == ':')) {
    bVar6 = true;
  }
  bVar4 = false;
  for (iVar8 = 0; iVar8 < (int)count; iVar8 = iVar8 + 1) {
    if (*(char *)((int)destination_00 + iVar8) == '/') {
      if (bVar4) {
        s3c_move_endpoints((uint *)((int)destination_00 + iVar8),
                           (uint *)((int)destination_00 + iVar8 + 1),count - iVar8);
        count = count - 1;
        iVar8 = iVar8 + -1;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
  }
  do {
    uVar12 = 0;
    uVar15 = 0;
    do {
      do {
        uVar16 = uVar15;
        uVar11 = uVar12;
        if ((int)(count - 3) < (int)uVar16) {
          for (; (0 < (int)count &&
                 (((uVar12 = s3c_ctype_space((uint)*(byte *)((int)destination_00 + (count - 1))),
                   uVar12 != 0 ||
                   (cVar3 = *(char *)((int)destination_00 + (count - 1)), cVar3 == '/')) ||
                  (cVar3 == '\r')))); count = count - 1) {
            *(undefined1 *)((int)destination_00 + (count - 1)) = 0;
          }
          if (iVar13 == 0 && count == 0) {
            if (uVar2 == '/') {
              uVar7 = 0x2f;
            }
            else {
              uVar7 = 0x2e;
            }
            *(undefined1 *)destination_00 = uVar7;
            count = count + 1;
            *(undefined1 *)((int)destination_00 + 1) = 0;
          }
          if (0x7f < (int)(count + iVar13)) {
            *(undefined1 *)((int)destination_00 + 0x7f) = 0;
          }
          return path;
        }
        uVar14 = uVar16 + 1;
        uVar12 = uVar11;
        uVar15 = uVar14;
      } while (((*(char *)((int)destination_00 + uVar16) != '/') ||
               (uVar12 = uVar14, uVar15 = uVar16 + 2, *(char *)((int)destination_00 + uVar14) != '.'
               )) || ((uVar15 = uVar16 + 3, *(char *)((int)destination_00 + uVar16 + 2) != '.' ||
                      ((uVar15 != count &&
                       (pcVar1 = (char *)((int)destination_00 + uVar15), uVar15 = uVar16 + 4,
                       *pcVar1 != '/'))))));
      bVar4 = false;
      if ((bVar6) &&
         (((int)(uVar11 + 1) < (int)count && (*(char *)((int)destination_00 + uVar11 + 1) == ':'))))
      {
        bVar4 = true;
      }
      bVar5 = false;
      if (((*(char *)((int)destination_00 + uVar11) == '.') &&
          (*(char *)((int)destination_00 + uVar11 + 1) == '.')) &&
         (*(char *)((int)destination_00 + uVar11 + 2) == '/')) {
        bVar5 = true;
      }
    } while (bVar4 || bVar5);
    s3c_move_endpoints((uint *)((int)destination_00 + uVar11),(uint *)((int)destination_00 + uVar15)
                       ,(count - uVar15) + 1);
    count = count - (uVar15 - uVar11);
  } while( true );
}



// Address: 4a00d6a8

/* Analyst-recovered ABI. See native/core/contracts.json and ARM/Wasm validation. Uses relocated
   128-byte global directory prefix initially /. Disjoint input/output; output capacity 128; prefix
   must terminate within 128 bytes. Absolute or scheme-bearing paths are copied directly; relative
   joined paths are normalized. */

uchar * s3c_path_resolve(uchar *source,uchar *destination)

{
  uint uVar1;
  int iVar2;

  if ((((*source == '/') || (*source == '\\')) || (uVar1 = s3c_path_has_scheme(source), uVar1 != 0))
     || ((iVar2 = s3c_string_length((uint *)PTR_DAT_4a00d704), iVar2 == 0 ||
         (iVar2 = s3c_string_length((uint *)source), iVar2 == 0)))) {
    s3c_bounded_string_copy(destination,source,0x80);
  }
  else {
    s3c_string_copy((uint *)destination,(uint *)PTR_DAT_4a00d704);
    s3c_path_join(destination,source,0x80);
    s3c_path_normalize(destination,0);
  }
  return destination;
}



// Address: 4a170028

uint * FUN_4a170028(uint *param_1,uint *param_2)

{
  s3c_string_copy(param_1,param_2);
  return param_1;
}



// Address: 4a15cca0

int FUN_4a15cca0(int param_1,uint param_2)

{
  uint dividend;
  ulonglong uVar1;

  dividend = (param_1 + param_2) - 1;
  uVar1 = s3c_divide_signed32(dividend,param_2);
  return dividend - (int)(uVar1 >> 0x20);
}



// Address: 4a1655b0

undefined4 FUN_4a1655b0(int *param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*param_1 == 2) &&
     (iVar1 = s3c_memory_compare((uchar *)(param_1 + 1),param_2,0xc), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1655d0

undefined4 FUN_4a1655d0(int *param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*param_1 == 1) &&
     (iVar1 = s3c_memory_compare((uchar *)(param_1 + 1),param_2,0xc), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1656a4

undefined4 FUN_4a1656a4(int *param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*param_1 == 2) &&
     (iVar1 = s3c_memory_compare((uchar *)(param_1 + 1),param_2,0x10), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1656c4

undefined4 FUN_4a1656c4(int *param_1,uchar *param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*param_1 == 1) &&
     (iVar1 = s3c_memory_compare((uchar *)(param_1 + 1),param_2,0x10), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a097d0c

undefined8 FUN_4a097d0c(int param_1,int param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint *destination;
  int iStack_20;
  int iStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;

  iStack_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&iStack_20);
  param_1 = param_2 * 4 + param_1;
  FUN_4a161530(*(undefined4 *)(param_1 + 8));
  iVar1 = s3c_string_length(param_3);
  destination = (uint *)FUN_4a161570(iVar1 + 1);
  *(uint **)(param_1 + 8) = destination;
  s3c_string_copy(destination,param_3);
  FUN_4a0978e0(&iStack_20);
  return CONCAT44(iStack_1c,iStack_20);
}



// Address: 4a149218

void FUN_4a149218(int param_1,int param_2)

{
  char *source;
  uint auStack_8c [32];

  FUN_4a000d18(auStack_8c,s___rt_raise__CRT_exception__calle_4a149250,param_1,param_2);
  if (param_1 == 2) {
    if (param_2 == 2) {
      source = s_Divide_by_zero_4a149288;
    }
    else {
      source = s_SIGFPE_Exception_4a149298;
    }
    s3c_string_copy(auStack_8c,(uint *)source);
  }
  host_s3eDebugErrorShow_thumb(0,auStack_8c);
  return;
}



// Address: 4a06a03c

undefined4 *
FUN_4a06a03c(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;

  *param_1 = PTR_PTR_4a06a078;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = param_5;
  param_1[1] = param_2;
  s3c_string_copy(param_1 + 3,param_3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_4a06a07c;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  iVar2 = *(int *)puVar1;
  param_1[0xd] = *(undefined4 *)(iVar2 + 0x34);
  param_1[0xe] = *(undefined4 *)(iVar2 + 0x28);
  return param_1;
}



// Address: 4a08cf54

ulonglong FUN_4a08cf54(uint *param_1,int param_2,uchar *param_3)

{
  ulonglong uVar1;
  undefined1 local_ac [160];

  local_ac[0] = '\0';
  if (*(char *)(param_2 + 0x124) != '\0') {
    s3c_string_append(local_ac,(uchar *)s_debug_patches__4a08cf90);
  }
  s3c_string_append(local_ac,param_3);
  uVar1 = s3c_copy_forward_endpoints(param_1,(uint *)local_ac,0xa0);
  return uVar1;
}



// Address: 4a060714

int FUN_4a060714(int param_1,int param_2)

{
  uint *destination;

  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_4a161530();
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    destination = (uint *)FUN_4a161570(0xa0);
    *(undefined1 *)destination = 0;
    *(undefined4 *)(param_1 + 8) = destination;
    s3c_string_copy(destination,*(uint **)(param_2 + 8));
  }
  return param_1;
}



// Address: 4a158590

ulonglong FUN_4a158590(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;

  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar2 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    do {
      uVar3 = s3c_copy_forward_endpoints((uint *)*puVar2,(uint *)*puVar1,param_6);
      param_5 = param_5 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (0 < param_5);
    return uVar3;
  }
  return CONCAT44(param_2,param_1);
}



// Address: 4a03c064

void FUN_4a03c064(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;

  local_10 = param_4;
  if (*PTR_DAT_4a03c0ac == '\x01') {
    iVar1 = 1;
    do {
      FUN_4a03669c(&local_10,1,7,1);
      *(char *)param_1 = (char)local_10;
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)local_10 == '\0') {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  else {
    iVar1 = s3c_string_length(param_1);
    FUN_4a03669c(param_1,iVar1 + 1,7,1);
  }
  return;
}



// Address: 4a08d02c

void FUN_4a08d02c(undefined4 param_1,uchar *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint auStack_114 [64];

  s3c_path_extension(param_2,(uchar *)auStack_114);
  s3c_string_copy(param_5,auStack_114);
  s3c_path_filename(param_2,(uchar *)auStack_114,0);
  s3c_string_copy(param_4,auStack_114);
  s3c_path_parent(param_2,(uchar *)auStack_114);
  s3c_string_copy(param_3,auStack_114);
  return;
}



// Address: 4a0be5a8

void FUN_4a0be5a8(int param_1,uint *param_2,uint param_3)

{
  uint *destination;
  undefined4 uVar1;
  int unaff_r4;
  bool bVar2;
  ulonglong uVar3;

  bVar2 = *(char *)(param_1 + 0x10) != '\0';
  destination = (uint *)0x0;
  if (bVar2) {
    destination = *(uint **)(param_1 + 0x1c);
  }
  if ((!bVar2 || destination == (uint *)0x0) || param_2 == (uint *)0x0) {
    param_1 = unaff_r4;
  }
  if ((bVar2 && destination != (uint *)0x0) && param_2 != (uint *)0x0) {
    uVar3 = s3c_copy_forward_endpoints(destination,param_2,param_3);
    uVar1 = FUN_4a13daf8(param_1,(int)(uVar3 >> 0x20));
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = FUN_4a13db00(param_1);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    return;
  }
  return;
}



// Address: 4a091730

void FUN_4a091730(uint *param_1)

{
  uint auStack_40c [256];

  if (*(uint **)(*(int *)PTR_DAT_4a09177c + 0x80) == (uint *)0x0) {
    s3c_string_copy(auStack_40c,param_1);
  }
  else {
    s3c_string_copy(auStack_40c,*(uint **)(*(int *)PTR_DAT_4a09177c + 0x80));
    s3c_string_append((uchar *)auStack_40c,&DAT_4a091780);
    s3c_string_append((uchar *)auStack_40c,(uchar *)param_1);
  }
  host_s3eFileOpen_thumb(auStack_40c,&DAT_4a091784);
  return;
}



// Address: 4a098414

void FUN_4a098414(int param_1)

{
  undefined4 uVar1;
  uint auStack_108 [64];

  s3c_zero_aligned_end(auStack_108,0x100);
  s3c_string_append((uchar *)auStack_108,PTR_s_bin_anim2d_bin_4a098464 + param_1 * 0x3b);
  uVar1 = thunk_FUN_4a161570(0x14);
  FUN_4a0c707c(uVar1,auStack_108);
  FUN_4a0c49e0();
  return;
}



// Address: 4a040850

void FUN_4a040850(int param_1,undefined4 param_2,int param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  uint auStack_3c [5];
  undefined1 local_28;
  int iStack_24;
  undefined4 local_20;
  int iStack_1c;
  uint *puStack_18;

  iStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  uVar1 = s3c_string_length(param_4);
  if (0x16 < uVar1) {
    s3c_string_copy_pad(auStack_3c,param_4,0x14);
    local_28 = 0;
    s3c_string_append((uchar *)auStack_3c,&DAT_4a0408a4);
    uVar1 = 0x16;
    param_4 = auStack_3c;
  }
  FUN_4a1652ce(param_4,(param_1 + param_3) - uVar1 * *(int *)(*(int *)PTR_DAT_4a0408a8 + 0x24),
               local_20,param_5);
  return;
}



// Address: 4a14f15c

undefined4 FUN_4a14f15c(uint *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = PTR_DAT_4a14f1b0;
  if ((param_2 == *(int *)(PTR_DAT_4a14f1b0 + 0xc)) ||
     (param_2 == *(int *)(PTR_DAT_4a14f1b0 + 0x10))) {
    iVar2 = s3c_string_length(param_1);
    FUN_4a00d870(param_2 == *(int *)(puVar1 + 0x10),param_1,iVar2);
    uVar3 = 1;
  }
  else {
    iVar2 = s3c_string_length(param_1);
    iVar2 = host_s3eFileWrite_thumb(param_1,iVar2,1,*(undefined4 *)(param_2 + 8));
    uVar3 = 1;
    if (iVar2 != 1) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



// Address: 4a163078

void FUN_4a163078(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uchar *source;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  CoreDiv64 CVar6;

  uVar5 = host_s3eTimerGetLocaltimeOffset_thumb(0);
  CVar6 = s3c_divide_signed64((uint)uVar5,(uint)((ulonglong)uVar5 >> 0x20),1000,0);
  puVar1 = PTR_DAT_4a1630cc;
  *(int *)(PTR_DAT_4a1630cc + 8) = -(int)CVar6.quotient;
  source = (uchar *)host_s3eDeviceGetString_thumb
                              (0x1f,puVar1,(int)CVar6.remainder,CVar6.remainder._4_4_);
  s3c_bounded_string_copy(PTR_DAT_4a1630d0,source,0x20);
  pbVar4 = PTR_DAT_4a1630d0;
  do {
    if (*pbVar4 == 0) {
LAB_4a1630ba:
      puVar2 = PTR_DAT_4a1630d0;
      puVar1 = PTR_DAT_4a1630cc;
      *(undefined **)(PTR_DAT_4a1630cc + 0x10) = PTR_DAT_4a1630d0;
      *(undefined **)(puVar1 + 0x14) = puVar2;
      return;
    }
    uVar3 = s3c_ctype_alnum((uint)*pbVar4);
    if (uVar3 == 0) {
      *pbVar4 = 0;
      goto LAB_4a1630ba;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



// Address: 4a0c0f28

uint FUN_4a0c0f28(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;

  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c);
  if ((int)uVar1 < (int)param_3) {
    param_3 = uVar1;
  }
  s3c_copy_forward_endpoints
            (param_2,(uint *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) +
                             *(int *)(param_1 + 8)),param_3);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
  return param_3;
}



// Address: 4a164fc0

undefined4 FUN_4a164fc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint auStack_210 [126];
  uint uStack_15;
  char local_11;

  s3c_zero_aligned_end(auStack_210,0x200);
  FUN_4a000db4(auStack_210,0x200,param_1,param_2);
  if (local_11 != '\0') {
    s3c_string_copy(&uStack_15,(uint *)&DAT_4a165014);
  }
  iVar1 = s3c_string_length(auStack_210);
  FUN_4a14f4bc(auStack_210,iVar1,1,*(undefined4 *)(PTR_DAT_4a165018 + 0xc));
  return 0;
}



// Address: 4a00dcf8

void FUN_4a00dcf8(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;

  iVar2 = host_s3eDebugGetInt_thumb(6);
  iVar3 = host_s3eDebugGetInt_thumb(5);
  puVar1 = PTR_DAT_4a00dd54;
  puVar6 = (undefined *)0x4a00dd50;
  if (((uint)(byte)PTR_DAT_4a00dd54[3] & ~param_2) != 0) {
    puVar6 = &DAT_4a00dd58;
  }
  iVar4 = *(int *)(PTR_DAT_4a00dd54 + 0x1c);
  iVar5 = s3c_string_length(*(uint **)(PTR_DAT_4a00dd54 + 0x18));
  if (param_2 != 0) {
    iVar5 = iVar5 + -1;
  }
  host_s3eDebugPrint_thumb(iVar3 * iVar5,iVar2 * iVar4,puVar6,0);
  if (param_1 != 0) {
    puVar1[3] = puVar1[3] ^ 1;
  }
  return;
}



// Address: 4a056fe0

undefined4 * FUN_4a056fe0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c [32];
  undefined1 auStack_1c [4];
  uint *local_18;

  local_18 = local_9c;
  local_a4 = 0;
  local_a0 = 0;
  s3c_string_copy(local_18,param_1);
  for (uVar4 = 0; uVar1 = s3c_string_length(local_18), uVar4 < uVar1; uVar4 = uVar4 + 1) {
    if (*(char *)((int)local_9c + uVar4) == '/') {
      *(undefined1 *)((int)local_9c + uVar4) = 0x5c;
    }
  }
  iVar2 = FUN_4a01d384(&local_a4,auStack_1c,1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)thunk_FUN_4a15e080(0x88);
    *puVar3 = 0;
    puVar3[1] = 0;
    s3c_string_copy(puVar3 + 2,local_18);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



// Address: 4a00d9a0

undefined4 FUN_4a00d9a0(uchar *param_1,uint param_2,char *param_3)

{
  uchar *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char acStack_9c [8];
  uchar auStack_94 [128];

  puVar1 = s3c_path_resolve(param_1,auStack_94);
  uVar4 = 0xffffffff;
  if (param_3 == (char *)0x0) {
    iVar2 = FUN_4a05a1b0(puVar1,acStack_9c,param_2);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    param_3 = acStack_9c;
    goto LAB_4a00d9e8;
  }
  if (*param_3 == 'a') {
    param_2 = param_2 | 0x400;
LAB_4a00d9ca:
    param_2 = param_2 | 1;
  }
  else if (*param_3 == 'w') goto LAB_4a00d9ca;
  if (param_3[1] == '+') {
    param_2 = param_2 | 2;
  }
LAB_4a00d9e8:
  puVar3 = (undefined4 *)FUN_4a05bf7c(puVar1,param_3);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = param_2;
    uVar4 = *puVar3;
  }
  return uVar4;
}



// Address: 4a035a1c

undefined4 FUN_4a035a1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 8);
  }
  if ((iVar1 != iVar2) &&
     ((((param_1 == 0 || (*(ushort **)(param_1 + 8) == (ushort *)0x0 || param_2 == 0)) ||
       (*(ushort **)(param_2 + 8) == (ushort *)0x0)) ||
      (iVar1 = s3c_utf16_compare(*(ushort **)(param_1 + 8),*(ushort **)(param_2 + 8)), iVar1 != 0)))
     ) {
    return 0xffffffff;
  }
  return 0;
}



// Address: 4a008004

void FUN_4a008004(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;

  puVar1 = PTR_DAT_4a00806c;
  PTR_DAT_4a00806c[4] = 0;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if ((*(int *)puVar1 != 0) && (iVar2 = FUN_4a1652c6(s_Error_4a008078), iVar2 != 3)) {
      return;
    }
    pcVar3 = s_Error_4a008078;
  }
  else {
    iVar2 = s3c_string_length((uint *)(puVar1 + 4));
    PTR_DAT_4a008070[3] = 0;
    pcVar3 = puVar1 + iVar2 + 4;
    FUN_4a000db4(pcVar3,DAT_4a008074 - iVar2,param_1,&uStack_c);
    if ((*(int *)puVar1 != 0) && (iVar2 = FUN_4a1652c6(pcVar3), iVar2 != 3)) {
      return;
    }
  }
  host_s3eDebugErrorShow_thumb(0,pcVar3);
  return;
}



// Address: 4a036084

void FUN_4a036084(undefined4 param_1,undefined4 param_2,uint *param_3,undefined1 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = s3c_string_length(param_3);
  puVar1 = PTR_DAT_4a0360ec;
  iVar3 = *(int *)(PTR_DAT_4a0360ec + 0xc);
  if ((iVar3 + iVar2 + 1U <= *(uint *)(PTR_DAT_4a0360ec + 8)) &&
     (*(uint *)(PTR_DAT_4a0360ec + 0x20) < *(uint *)(PTR_DAT_4a0360ec + 0x1c))) {
    *(undefined1 *)(*(int *)PTR_DAT_4a0360f0 + 0x680) = 1;
    s3c_string_copy((uint *)(*(int *)(puVar1 + 4) + iVar3),param_3);
    iVar5 = *(int *)(puVar1 + 0x20);
    iVar4 = *(int *)(puVar1 + 0x18);
    iVar3 = iVar5 * 0x10;
    *(undefined4 *)(iVar4 + iVar3) = param_1;
    iVar3 = iVar3 + iVar4;
    *(undefined4 *)(iVar3 + 4) = param_2;
    iVar4 = *(int *)(puVar1 + 0xc);
    *(int *)(iVar3 + 8) = *(int *)(puVar1 + 4) + iVar4;
    *(undefined1 *)(iVar3 + 0xc) = param_4;
    *(int *)(puVar1 + 0x20) = iVar5 + 1;
    *(int *)(puVar1 + 0xc) = iVar4 + iVar2 + 1;
  }
  return;
}



// Address: 4a0d4830

int FUN_4a0d4830(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  CoreDiv64 CVar4;

  if (param_3 < param_1) {
    return 0;
  }
  if (param_3 < param_2) {
    uVar3 = param_3 - param_1;
    CVar4 = s3c_divide_signed64(uVar3 * 0x10000,((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10,
                                param_2 - param_1,param_2 - param_1 >> 0x1f);
    iVar2 = (int)CVar4.quotient;
    uVar3 = (uint)((longlong)iVar2 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar3 * (longlong)iVar2;
    return uVar3 * 3 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) * -2;
  }
  return 0x10000;
}



// Address: 4a0faf18

undefined4 FUN_4a0faf18(int param_1,int param_2)

{
  uint dividend;
  uint uVar1;
  ulonglong uVar2;

  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 2) != 0) {
    dividend = *(int *)(param_1 + 4) + param_2;
    *(uint *)(param_1 + 4) = dividend;
    if ((int)*(uint *)(param_1 + 8) < (int)dividend) {
      if ((uVar1 & 4) != 0) {
        uVar2 = s3c_divide_signed32(dividend,*(uint *)(param_1 + 8));
        *(int *)(param_1 + 4) = (int)(uVar2 >> 0x20);
        return 0;
      }
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffd;
      return 1;
    }
  }
  return 0;
}



// Address: 4a1438c0

int FUN_4a1438c0(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *first;

  puVar1 = PTR_PTR_4a14392c;
  iVar4 = *(int *)(param_1 + 0x154);
  first = *(uint **)(PTR_PTR_4a143928 + param_2 * 4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      uVar2 = s3c_string_compare(first,*(uint **)(puVar1 + iVar3 * 4));
      if (uVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar2 = s3c_string_compare(first,(uint *)&DAT_4a143930);
  if (uVar2 == 0) {
    iVar3 = 0x22;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



// Address: 4a069f1c

void FUN_4a069f1c(int param_1,int param_2,undefined4 param_3)

{
  uint *text;
  int iVar1;
  undefined4 uVar2;
  uint local_40 [8];
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;

  uVar2 = 6;
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  text = (uint *)(param_1 + 0xc);
  iStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = s3c_string_length(text);
  if (*(int *)(param_1 + 0x34) < iVar1 * 8 + local_1c) {
    local_40[0]._0_1_ = 0;
    s3c_string_copy(local_40,text);
    iVar1 = ((int)(((uint)(*(int *)(param_1 + 0x34) >> 0x1f) >> 0x1d) + *(int *)(param_1 + 0x34)) >>
            3) + -2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(undefined1 *)((int)local_40 + iVar1) = 0;
    s3c_string_append((uchar *)local_40,&DAT_4a069f88);
    text = local_40;
  }
  FUN_4a1652cc(text,local_1c,uStack_18,uVar2);
  return;
}



// Address: 4a03349c

undefined4 FUN_4a03349c(uint *param_1)

{
  uchar *puVar1;
  uint *text;
  int iVar2;
  longlong lVar3;
  uint auStack_90 [32];

  text = auStack_90;
  lVar3 = host_s3eFileGetFileInt_thumb(param_1,1);
  if (lVar3 == 0) {
    s3c_string_copy(auStack_90,param_1);
    s3c_path_normalize((uchar *)auStack_90,0);
    puVar1 = s3c_string_find((uchar *)auStack_90,&DAT_4a03350c);
    if (puVar1 != (uchar *)0x0) {
      text = (uint *)(puVar1 + 3);
    }
    do {
      puVar1 = s3c_string_find_byte((int)text,'/');
      if (puVar1 != (uchar *)0x0) {
        *puVar1 = '\0';
      }
      lVar3 = host_s3eFileGetFileInt_thumb(auStack_90,1);
      if ((lVar3 == 0) && (iVar2 = host_s3eFileMakeDirectory_thumb(auStack_90), iVar2 == 1)) {
        return 1;
      }
      if (puVar1 == (uchar *)0x0) {
        return 0;
      }
      text = (uint *)(puVar1 + 1);
      *puVar1 = '/';
    } while (text != (uint *)0x0);
  }
  return 0;
}



// Address: 4a035fc4

void FUN_4a035fc4(void)

{
  undefined *puVar1;
  uint divisor;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;

  puVar1 = PTR_DAT_4a036034;
  puVar3 = *(undefined4 **)PTR_DAT_4a036034;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)thunk_FUN_4a161570(0x20000);
  }
  divisor = 0;
  puVar2 = puVar3;
  do {
    *puVar2 = 0;
    while( true ) {
      divisor = divisor + 1;
      puVar2 = puVar2 + 1;
      if (0x7fff < (int)divisor) {
        *(undefined4 **)(puVar1 + 4) = puVar3;
        *(undefined4 **)puVar1 = puVar3;
        return;
      }
      if (divisor == 0) break;
      uVar4 = s3c_divide_signed32(0x40000000,divisor);
      *puVar2 = (int)uVar4;
    }
  } while( true );
}



// Address: 4a03ecb0

int FUN_4a03ecb0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *destination;
  int local_10;

  if ((param_2 != 0) && (*(short **)(param_2 + 8) != (short *)0x0)) {
    local_10 = param_4;
    iVar1 = s3c_utf16_length(*(short **)(param_2 + 8));
    local_10 = 0;
    uVar2 = thunk_FUN_4a161570();
    FUN_4a1020c0(&local_10,uVar2);
    destination = (uint *)0x0;
    if (local_10 != 0) {
      destination = *(uint **)(local_10 + 8);
    }
    s3c_copy_forward_endpoints(destination,*(uint **)(param_2 + 8),(iVar1 + 1) * 2);
    return local_10;
  }
  return 0;
}



// Address: 4a0a6de4

undefined4 *
FUN_4a0a6de4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            uint *param_9)

{
  undefined4 *puVar1;
  uint *destination;

  puVar1 = (undefined4 *)FUN_4a0a41c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *puVar1 = PTR_PTR_4a0a6e58;
  puVar1[8] = 0;
  puVar1[7] = param_8;
  destination = (uint *)thunk_FUN_4a161570(param_8);
  puVar1[8] = destination;
  s3c_copy_forward_endpoints(destination,param_9,puVar1[7]);
  return puVar1;
}



// Address: 4a0fd124

void FUN_4a0fd124(int param_1,uint param_2)

{
  ulonglong uVar1;

  if ((int)param_2 < 0x40) {
    uVar1 = s3c_arm_lsl64(1,0,param_2);
    *(uint *)(param_1 + 0x4f8) = (uint)uVar1 | *(uint *)(param_1 + 0x4f8);
    *(uint *)(param_1 + 0x4fc) = (uint)(uVar1 >> 0x20) | *(uint *)(param_1 + 0x4fc);
    return;
  }
  uVar1 = s3c_arm_lsl64(1,0,param_2 - 0x40);
  *(uint *)(param_1 + 0x500) = (uint)uVar1 | *(uint *)(param_1 + 0x500);
  *(uint *)(param_1 + 0x504) = (uint)(uVar1 >> 0x20) | *(uint *)(param_1 + 0x504);
  return;
}



// Address: 4a0fd4f0

void FUN_4a0fd4f0(int param_1,uint param_2)

{
  ulonglong uVar1;

  if ((int)param_2 < 0x40) {
    uVar1 = s3c_arm_lsl64(1,0,param_2);
    *(uint *)(param_1 + 0x4e8) = (uint)uVar1 | *(uint *)(param_1 + 0x4e8);
    *(uint *)(param_1 + 0x4ec) = (uint)(uVar1 >> 0x20) | *(uint *)(param_1 + 0x4ec);
    return;
  }
  uVar1 = s3c_arm_lsl64(1,0,param_2 - 0x40);
  *(uint *)(param_1 + 0x4f0) = (uint)uVar1 | *(uint *)(param_1 + 0x4f0);
  *(uint *)(param_1 + 0x4f4) = (uint)(uVar1 >> 0x20) | *(uint *)(param_1 + 0x4f4);
  return;
}



// Address: 4a035344

void FUN_4a035344(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uchar *second;
  int iVar4;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  uVar2 = thunk_FUN_4a172098(*param_3);
  uVar1 = DAT_4a0353bc;
  local_28 = thunk_FUN_4a17211c(uVar2,DAT_4a0353bc);
  uVar2 = thunk_FUN_4a172098(param_3[1]);
  local_24 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar2 = thunk_FUN_4a172098(param_3[2]);
  local_20 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar2 = thunk_FUN_4a172098(param_3[3]);
  local_1c = thunk_FUN_4a17211c(uVar2,uVar1);
  iVar4 = param_2 * 4 + param_1;
  second = *(uchar **)(iVar4 + 0xa8);
  if (second != (uchar *)0x0) {
    iVar3 = s3c_memory_compare((uchar *)&local_28,second,0x10);
    if (iVar3 == 0) {
      return;
    }
    s3c_copy_forward_endpoints(*(uint **)(iVar4 + 0xa8),&local_28,0x10);
  }
  FUN_4a150ce8(*(undefined4 *)(param_1 + param_2 * 4),1,&local_28);
  return;
}



// Address: 4a060cc0

undefined4 * FUN_4a060cc0(undefined4 *param_1,int param_2)

{
  uint *destination;

  *param_1 = PTR_PTR_4a060d38;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    param_1[2] = 0;
  }
  else {
    destination = (uint *)FUN_4a161570(0xa0);
    *(undefined1 *)destination = 0;
    param_1[2] = destination;
    s3c_string_copy(destination,*(uint **)(param_2 + 8));
  }
  *param_1 = PTR_PTR_4a060d3c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = (*(byte *)(param_1 + 6) >> 1 & 0x7e) << 1;
  FUN_4a16f83c(param_1 + 3,param_2 + 0xc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = (*(byte *)(param_1 + 10) >> 1 & 0x7e) << 1;
  FUN_4a16ee0a(param_1 + 7,param_2 + 0x1c);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  return param_1;
}



// Address: 4a06a454

int FUN_4a06a454(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar2 = (undefined4 *)FUN_4a0606b4();
  puVar2[4] = 0;
  puVar1 = PTR_PTR_4a06a4d4;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = puVar1;
  *(byte *)(puVar2 + 7) = *(byte *)(puVar2 + 7) & 0xfc;
  FUN_4a16e03a(puVar2 + 4,0);
  FUN_4a16e03a(puVar2 + 4,0);
  iVar3 = thunk_FUN_4a092258(puVar2 + 8);
  *(undefined1 *)(iVar3 + 0x18) = 0;
  iVar3 = FUN_4a16ee5c(iVar3 + 0xcc,0);
  if (param_2 != 0) {
    FUN_4a0605f6(iVar3 + -0xec,param_2);
  }
  *(undefined4 *)(iVar3 + -0xbc) = 0;
  *(undefined4 *)(iVar3 + -0xe0) = 0;
  puVar1 = PTR_DAT_4a06a4d8;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  s3c_string_copy((uint *)(iVar3 + -0xb4),(uint *)(*(int *)puVar1 + 0x6c));
  *(undefined4 *)(iVar3 + -0xb8) = 0;
  *(undefined4 *)(iVar3 + -0xc) = 0;
  return iVar3 + -0xec;
}



// Address: 4a05bf7c

int * FUN_4a05bf7c(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uchar *destination;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;

  piVar3 = (int *)0x0;
  iVar1 = 3;
  do {
    if (*(int *)(PTR_DAT_4a05c008 + iVar1 * 0x14 + 0x10) == 0) {
      piVar3 = (int *)(PTR_DAT_4a05c008 + iVar1 * 0x14);
      *piVar3 = iVar1;
      iVar1 = s3c_string_length(param_1);
      destination = (uchar *)FUN_4a00d394(iVar1 + 1U);
      piVar3[3] = (int)destination;
      s3c_bounded_string_copy(destination,(uchar *)param_1,iVar1 + 1U);
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  if (piVar3 == (int *)0x0) {
    puVar2 = (undefined4 *)thunk_FUN_4a0007f8();
    *puVar2 = 0xc;
  }
  else {
    iVar1 = host_s3eFileOpen_thumb(param_1,param_2);
    piVar3[4] = iVar1;
    if (iVar1 != 0) {
      return piVar3;
    }
    lVar4 = host_s3eFileGetFileInt_thumb(param_1,1);
    if (lVar4 != 0) {
      piVar3[2] = 1;
      return piVar3;
    }
    host_s3eFreeBase_thumb(piVar3[3]);
    FUN_4a048980(s_s3eFileOpen_4a05c00c,0);
  }
  return (int *)0x0;
}



// Address: 4a00b7e8

undefined4 FUN_4a00b7e8(void)

{
  int iVar1;
  uint *destination;
  undefined4 uVar2;
  int iVar3;
  uint auStack_1a4 [64];
  undefined1 auStack_a4 [16];
  undefined *local_94 [32];

  s3c_string_copy((uint *)PTR_DAT_4a00b87c,(uint *)&DAT_4a00b878);
  host_s3eConfigGetString_thumb(&DAT_4a00b890,s_SysAppCaption_4a00b880,PTR_DAT_4a00b87c);
  iVar3 = 1;
  local_94[0] = PTR_DAT_4a00b87c;
  do {
    FUN_4a000d78(auStack_a4,0x10,s_argv__d__4a00b894,iVar3);
    iVar1 = host_s3eConfigGetString_thumb(s_commandline_4a00b8a0,auStack_a4,auStack_1a4);
    if (iVar1 == 1) {
      destination = (uint *)0x0;
    }
    else {
      iVar1 = s3c_string_length(auStack_1a4);
      destination = (uint *)FUN_4a00d994(iVar1 + 1);
      s3c_string_copy(destination,auStack_1a4);
    }
    local_94[iVar3] = (undefined *)destination;
  } while ((destination != (uint *)0x0) && (iVar3 = iVar3 + 1, iVar3 < 0x1f));
  local_94[iVar3] = (undefined *)0x0;
  uVar2 = thunk_FUN_4a0007cc(iVar3,local_94);
  for (iVar1 = 1; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    FUN_4a00d4ac(local_94[iVar1]);
  }
  return uVar2;
}



// Address: 4a0366f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a0366f8(uint *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_114 [256];

  puVar1 = PTR_DAT_4a036788;
  if (param_2 == 1) {
    puVar3 = &DAT_4a03678c;
  }
  else {
    puVar3 = &DAT_4a036790;
  }
  iVar2 = FUN_4a03f4f8(param_1,puVar3);
  *(int *)(puVar1 + 8) = iVar2;
  if (iVar2 == 0) {
    iVar2 = host_s3eConfigGetString_thumb(&DAT_4a0367a4,s_SysAppCaption_4a036794,auStack_114);
    pcVar5 = s_Did_you_include_this_file_in_you_4a0367a8;
    if (iVar2 != 0) {
      pcVar5 = &DAT_4a0367e0;
    }
    pcVar4 = &DAT_4a0367e4;
    if (param_2 != 1) {
      pcVar4 = s_write_4a0367ec;
    }
    FUN_4a008004(s_Cannot_open_file__s_for_serialis_4a0367f4,param_1,pcVar4,pcVar5);
    iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar2 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  *puVar1 = param_2 == 1;
  puVar1 = PTR_DAT_4a036788;
  *(undefined4 *)(PTR_DAT_4a036788 + 0xbc) = 0;
  *(undefined4 *)(puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0xb8) = 0;
  s3c_string_copy((uint *)(puVar1 + 0xc),param_1);
  *(int *)PTR_DAT_4a036824 = *(int *)PTR_DAT_4a036824 + 1;
  return;
}



// Address: 4a06c378

int FUN_4a06c378(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint divisor;
  int iVar6;
  ulonglong uVar7;

  iVar6 = *(int *)(param_1 + 0x5c);
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      FUN_4a0bec10(iVar6,0x2d);
      param_2 = -param_2;
    }
    iVar2 = DAT_4a06c40c;
    bVar1 = false;
    divisor = DAT_4a06c408;
    do {
      uVar7 = s3c_divide_signed32(param_2,divisor);
      iVar3 = (int)uVar7;
      if (iVar3 != 0 || bVar1) {
        bVar1 = true;
        FUN_4a0bec80(iVar6,iVar3 + 0x30U & 0xffff);
      }
      iVar4 = (int)((ulonglong)((longlong)iVar2 * (longlong)(int)divisor) >> 0x20);
      param_2 = param_2 - iVar3 * divisor;
      divisor = (iVar4 >> 2) - (iVar4 >> 0x1f);
    } while (0 < (int)divisor);
    return iVar4;
  }
  uVar5 = FUN_4a056efc(&DAT_4a0bec44);
  FUN_4a041b9c(iVar6 + 8,0,uVar5,0x30);
  return iVar6;
}



// Address: 4a0c71e8

undefined4 * FUN_4a0c71e8(undefined4 param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c7278;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (0 < *(int *)(param_2 + 8)) {
    if (param_3 != (uint *)0x0) {
      s3c_string_compare(param_3,(uint *)s_UTF_8_4a0c727c);
    }
    uVar2 = FUN_4a0489dc(0);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



// Address: 4a070474

undefined4 FUN_4a070474(int param_1,int param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint auStack_220 [64];
  uint auStack_120 [64];
  int iStack_20;
  int iStack_1c;
  uint *local_18;

  puVar1 = PTR_PTR_4a070508;
  uVar5 = 0;
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  do {
    uVar2 = s3c_string_compare(*(uint **)(puVar1 + uVar5 * 4),local_18);
    if (uVar2 == 0) {
      FUN_4a09c2ec(param_2,auStack_120,0x100,1);
      iVar3 = FUN_4a03bb10(auStack_120);
      if (iVar3 == 0) {
        s3c_string_copy(auStack_220,
                        *(uint **)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) * 0xe8 +
                                  -0xe4));
        s3c_path_parent((uchar *)auStack_220,(uchar *)auStack_220);
        s3c_string_append((uchar *)auStack_220,&DAT_4a07050c);
        s3c_string_append((uchar *)auStack_220,(uchar *)auStack_120);
        s3c_string_copy(auStack_120,auStack_220);
      }
      thunk_FUN_4a0e5978(uVar5 * 0x24 + param_1 + 0x10,auStack_120);
      return 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 6);
  uVar4 = FUN_4a060598(param_1,param_2,local_18);
  return uVar4;
}



// Address: 4a162f7c

int FUN_4a162f7c(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;

  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
  }
  else {
    do {
      pbVar6 = param_2;
      pbVar5 = param_1;
      param_1 = pbVar5 + 1;
      iVar1 = s3c_ctype_upper((uint)*pbVar5);
      param_2 = pbVar6 + 1;
      iVar2 = s3c_ctype_upper((uint)*pbVar6);
      if (iVar1 != iVar2) {
        if (*param_1 != 0) goto LAB_4a162fe4;
        break;
      }
    } while (*param_1 != 0);
    if (*param_2 == 0) {
LAB_4a162fe4:
      param_1 = pbVar5;
      param_2 = pbVar6;
    }
  }
  uVar3 = s3c_ctype_upper((uint)*param_1);
  uVar4 = s3c_ctype_upper((uint)*param_2);
  return (uVar3 & 0xff) - (uVar4 & 0xff);
}



// Address: 4a16defa

uint FUN_4a16defa(int *param_1,uint param_2,int param_3)

{
  uint *destination;
  int iVar1;
  int iVar2;
  uint uVar3;

  param_3 = param_3 - param_2;
  for (uVar3 = param_2; uVar3 < (uint)(param_1[1] - param_3); uVar3 = uVar3 + 1) {
    iVar2 = *param_1 + uVar3 * 0x30;
    iVar1 = *param_1 + (uVar3 + param_3) * 0x30;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_4a161530();
    }
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    else {
      destination = (uint *)FUN_4a161570(0xa0);
      *(undefined1 *)destination = 0;
      *(undefined4 *)(iVar2 + 8) = destination;
      s3c_string_copy(destination,*(uint **)(iVar1 + 8));
    }
    FUN_4a16f83c(iVar2 + 0xc,iVar1 + 0xc);
    FUN_4a16ee0a(iVar2 + 0x1c,iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
  }
  FUN_4a16e03a(param_1,param_1[1] - param_3);
  return param_2;
}



// Address: 4a00da48

undefined4 FUN_4a00da48(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  CoreDiv64 CVar7;

  iVar1 = s3c_string_length(param_1);
  uVar4 = 0xffffffff;
  if (iVar1 != 0) {
    s3c_zero_end(param_2,0x3c);
    lVar5 = host_s3eFileGetFileInt_thumb(param_1,1);
    if (lVar5 == 1) {
      param_2[1] = param_2[1] | 0x4000;
    }
    else {
      param_2[1] = param_2[1] | 0x8000;
      iVar1 = host_s3eFileCheckExists_thumb(param_1);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)thunk_FUN_4a0007f8();
        *puVar2 = 2;
        return 0xffffffff;
      }
    }
    uVar3 = 0;
    if (((int)(param_2[1] << 0x11) < 0) ||
       (uVar3 = host_s3eFileGetFileInt_thumb(param_1,4), uVar3 != 0xffffffff)) {
      param_2[0xb] = 0x1000;
      param_2[4] = uVar3;
      uVar6 = host_s3eFileGetFileInt_thumb(param_1,5);
      CVar7 = s3c_divide_signed64((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),1000,0);
      param_2[7] = (uint)CVar7.quotient;
      uVar4 = 0;
    }
    else {
      FUN_4a048980(&DAT_4a00dae0);
    }
  }
  return uVar4;
}



// Address: 4a03b7bc

void FUN_4a03b7bc(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  uint *puVar2;
  uchar *puVar3;
  int iVar4;
  uint local_44 [8];
  undefined4 local_24;
  uint *local_20;
  uint *puStack_1c;
  uint *puStack_18;

  local_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  puStack_18 = param_4;
  s3c_zero_aligned_end(local_44,0x20);
  host_s3eConfigGetString_thumb(&DAT_4a03b854,local_24,local_44);
  if ((char)local_44[0] == '\0') {
    s3c_string_copy(local_44,local_20);
  }
  puVar2 = local_44;
  while( true ) {
    bVar1 = (byte)*puVar2;
    if (bVar1 == 0) break;
    if (bVar1 - 0x61 < 0x1a) {
      *(byte *)puVar2 = bVar1 - 0x20;
    }
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  puVar3 = s3c_string_find((uchar *)local_44,&DAT_4a03b858);
  if ((puVar3 != (uchar *)0x0) &&
     (puVar3 = s3c_string_find((uchar *)local_44,&DAT_4a03b85c), puVar3 == (uchar *)0x0)) {
    *param_3 = *param_3 | param_5;
  }
  puVar3 = s3c_string_find((uchar *)local_44,&DAT_4a03b860);
  if (puVar3 != (uchar *)0x0) {
    *param_3 = *param_3 | param_6;
  }
  iVar4 = s3c_string_compare_count(local_44,(uint *)&DAT_4a03b860,2);
  if (iVar4 == 0) {
    param_5 = param_6;
  }
  *param_4 = *param_4 | param_5;
  return;
}



// Address: 4a1619dc

undefined8 FUN_4a1619dc(uint *param_1,uint *param_2,int param_3)

{
  undefined *puVar1;
  uchar *puVar2;
  undefined4 *puVar3;
  uint count;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;

  puVar2 = s3c_string_find_byte((int)param_1,'=');
  puVar1 = PTR_PTR_4a161a74;
  uVar8 = 0xffffffff;
  if (puVar2 == (uchar *)0x0) {
    piVar7 = *(int **)(PTR_PTR_4a161a74 + 4);
    do {
      if (*piVar7 == 0) {
LAB_4a161a3c:
        iVar4 = s3c_string_length(param_1);
        iVar5 = s3c_string_length(param_2);
        iVar4 = FUN_4a00d394(iVar4 + iVar5 + 2);
        FUN_4a000d18(iVar4,s__s__s_4a161a78,param_1,param_2);
        if ((*piVar7 != 0) && (*piVar7 != *(int *)puVar1)) {
          FUN_4a00d388();
        }
        *piVar7 = iVar4;
LAB_4a161a18:
        uVar8 = 0;
        goto LAB_4a161a1a;
      }
      count = s3c_string_length(param_1);
      iVar4 = s3c_string_compare_count(param_1,(uint *)*piVar7,count);
      if (iVar4 == 0) {
        if (param_3 != 0) goto LAB_4a161a3c;
        goto LAB_4a161a18;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)(*(int *)(puVar1 + 4) + 0x40));
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    uVar6 = 0xc;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    uVar6 = 0x16;
  }
  *puVar3 = uVar6;
LAB_4a161a1a:
  return CONCAT44(param_1,uVar8);
}



// Address: 4a0eba04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_4a0eba04(int param_1,uint param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  undefined2 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint unaff_r10;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  uint in_r12;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;

  uVar2 = (uint)*(ushort *)(param_1 + 0x14);
  iVar10 = 0;
  if (uVar2 <= param_2) {
    unaff_r10 = uVar2;
  }
  if (param_2 < uVar2) {
    unaff_r10 = param_2;
  }
  iVar11 = 0;
  iVar12 = 0;
  uVar2 = 0;
  uVar14 = param_2;
  if (*(short *)(param_1 + 0x12) != 0) {
    do {
      uVar20 = s3c_copy_forward_endpoints
                         ((uint *)(*(int *)(param_1 + 0x18) + iVar11),(uint *)(param_3 + iVar10),
                          unaff_r10);
      uVar14 = (uint)(uVar20 >> 0x20);
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + param_2;
      iVar11 = iVar11 + (uint)*(ushort *)(param_1 + 0x14);
      uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    } while (iVar12 < (int)uVar2);
  }
  if (param_4 == (byte *)0x0) {
    return CONCAT44(uVar14,uVar2);
  }
  uVar2 = FUN_4a142870(param_1,uVar14);
  pbVar8 = *(byte **)(param_1 + 0x1c);
  pbVar3 = pbVar8;
  if (3 < uVar2) {
    uVar14 = (uint)pbVar8 & 3;
    in_r12 = uVar14;
    if (uVar14 != 0) {
      bVar6 = *param_4;
      pbVar3 = param_4 + 1;
      if (uVar14 < 3) {
        pbVar3 = param_4 + 2;
        in_r12 = (uint)param_4[1];
      }
      *pbVar8 = bVar6;
      param_4 = pbVar3;
      if (uVar14 < 2) {
        param_4 = pbVar3 + 1;
        bVar6 = *pbVar3;
      }
      pbVar3 = pbVar8 + 1;
      if (uVar14 < 3) {
        pbVar3 = pbVar8 + 2;
        pbVar8[1] = (byte)in_r12;
      }
      uVar2 = (uVar2 + uVar14) - 4;
      pbVar8 = pbVar3;
      if (uVar14 < 2) {
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar6;
      }
    }
    pbVar3 = (byte *)((uint)param_4 & 3);
    if (pbVar3 == (byte *)0x0) {
      bVar18 = 0x1f < uVar2;
      uVar2 = uVar2 - 0x20;
      uVar9 = 0;
      if (bVar18) {
        do {
          if (bVar18) {
            uVar9 = *(undefined4 *)(param_4 + 4);
            uVar15 = *(undefined4 *)(param_4 + 8);
            uVar16 = *(undefined4 *)(param_4 + 0xc);
            *(undefined4 *)pbVar8 = *(undefined4 *)param_4;
            *(undefined4 *)(pbVar8 + 4) = uVar9;
            *(undefined4 *)(pbVar8 + 8) = uVar15;
            *(undefined4 *)(pbVar8 + 0xc) = uVar16;
            uVar9 = *(undefined4 *)(param_4 + 0x10);
            uVar15 = *(undefined4 *)(param_4 + 0x14);
            uVar16 = *(undefined4 *)(param_4 + 0x18);
            uVar17 = *(undefined4 *)(param_4 + 0x1c);
            param_4 = param_4 + 0x20;
            *(undefined4 *)(pbVar8 + 0x10) = uVar9;
            *(undefined4 *)(pbVar8 + 0x14) = uVar15;
            *(undefined4 *)(pbVar8 + 0x18) = uVar16;
            *(undefined4 *)(pbVar8 + 0x1c) = uVar17;
            pbVar8 = pbVar8 + 0x20;
            bVar18 = 0x1f < uVar2;
            uVar2 = uVar2 - 0x20;
          }
        } while (bVar18);
      }
      if ((bool)((byte)(uVar2 >> 4) & 1)) {
        uVar9 = *(undefined4 *)param_4;
        uVar15 = *(undefined4 *)(param_4 + 4);
        uVar16 = *(undefined4 *)(param_4 + 8);
        uVar17 = *(undefined4 *)(param_4 + 0xc);
        param_4 = param_4 + 0x10;
        *(undefined4 *)pbVar8 = uVar9;
        *(undefined4 *)(pbVar8 + 4) = uVar15;
        *(undefined4 *)(pbVar8 + 8) = uVar16;
        *(undefined4 *)(pbVar8 + 0xc) = uVar17;
        pbVar8 = pbVar8 + 0x10;
      }
      if ((int)(uVar2 << 0x1c) < 0) {
        uVar9 = *(undefined4 *)param_4;
        uVar15 = *(undefined4 *)(param_4 + 4);
        param_4 = param_4 + 8;
        *(undefined4 *)pbVar8 = uVar9;
        *(undefined4 *)(pbVar8 + 4) = uVar15;
        pbVar8 = pbVar8 + 8;
      }
      pbVar1 = pbVar8;
      pbVar3 = param_4;
      if ((bool)((byte)(uVar2 >> 2) & 1)) {
        pbVar3 = param_4 + 4;
        uVar9 = *(undefined4 *)param_4;
        pbVar1 = pbVar8 + 4;
        *(undefined4 *)pbVar8 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar2 & 3) != 0) {
        bVar19 = (bool)((byte)(uVar2 >> 1) & 1);
        uVar2 = uVar2 << 0x1f;
        bVar18 = (int)uVar2 < 0;
        pbVar8 = pbVar3;
        if (bVar19) {
          pbVar8 = pbVar3 + 2;
          uVar7 = *(undefined2 *)pbVar3;
        }
        pbVar3 = pbVar8;
        if (bVar18) {
          pbVar3 = pbVar8 + 1;
          uVar2 = (uint)*pbVar8;
        }
        pbVar8 = pbVar1;
        if (bVar19) {
          pbVar8 = pbVar1 + 2;
          *(undefined2 *)pbVar1 = uVar7;
        }
        pbVar1 = pbVar8;
        if (bVar18) {
          pbVar1 = pbVar8 + 1;
          *pbVar8 = (byte)uVar2;
        }
        return CONCAT44(pbVar3,pbVar1);
      }
      return CONCAT44(pbVar3,pbVar1);
    }
    bVar18 = 3 < uVar2;
    uVar2 = uVar2 - 4;
    if (bVar18) {
      puVar4 = (uint *)(param_4 + -(int)pbVar3);
      in_r12 = *puVar4;
      pbVar1 = pbVar8;
      if (pbVar3 == (byte *)0x2) {
        do {
          puVar5 = puVar4;
          uVar14 = in_r12 >> 0x10;
          puVar4 = puVar5 + 1;
          in_r12 = *puVar4;
          bVar18 = 3 < uVar2;
          uVar2 = uVar2 - 4;
          pbVar3 = (byte *)(uVar14 | in_r12 << 0x10);
          pbVar8 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar3;
          pbVar1 = pbVar8;
        } while (bVar18);
        param_4 = (byte *)((int)puVar5 + 6);
      }
      else if (pbVar3 < (byte *)0x3) {
        do {
          puVar5 = puVar4;
          uVar14 = in_r12 >> 8;
          puVar4 = puVar5 + 1;
          in_r12 = *puVar4;
          bVar18 = 3 < uVar2;
          uVar2 = uVar2 - 4;
          pbVar3 = (byte *)(uVar14 | in_r12 << 0x18);
          pbVar8 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar3;
          pbVar1 = pbVar8;
        } while (bVar18);
        param_4 = (byte *)((int)puVar5 + 5);
      }
      else {
        do {
          puVar5 = puVar4;
          uVar14 = in_r12 >> 0x18;
          puVar4 = puVar5 + 1;
          in_r12 = *puVar4;
          bVar18 = 3 < uVar2;
          uVar2 = uVar2 - 4;
          pbVar3 = (byte *)(uVar14 | in_r12 << 8);
          pbVar8 = pbVar1 + 4;
          *(byte **)pbVar1 = pbVar3;
          pbVar1 = pbVar8;
        } while (bVar18);
        param_4 = (byte *)((int)puVar5 + 7);
      }
    }
  }
  bVar13 = (byte)in_r12;
  bVar6 = (byte)pbVar3;
  bVar19 = (bool)((byte)(uVar2 >> 1) & 1);
  uVar2 = uVar2 << 0x1f;
  bVar18 = (int)uVar2 < 0;
  if (bVar19) {
    pbVar3 = param_4 + 1;
    bVar6 = *param_4;
    param_4 = param_4 + 2;
    bVar13 = *pbVar3;
  }
  pbVar3 = param_4;
  if (bVar18) {
    pbVar3 = param_4 + 1;
    uVar2 = (uint)*param_4;
  }
  if (bVar19) {
    pbVar1 = pbVar8 + 1;
    *pbVar8 = bVar6;
    pbVar8 = pbVar8 + 2;
    *pbVar1 = bVar13;
  }
  pbVar1 = pbVar8;
  if (bVar18) {
    pbVar1 = pbVar8 + 1;
    *pbVar8 = (byte)uVar2;
  }
  return CONCAT44(pbVar3,pbVar1);
}



// Address: 4a15952c

void FUN_4a15952c(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint *destination;
  int iVar3;
  int iVar4;

  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  puVar1 = PTR_FUN_4a1595c8;
  *(undefined4 **)(param_1 + 0x1c0) = puVar2;
  *puVar2 = puVar1;
  iVar4 = *(int *)(param_1 + 0xd8);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x24) < 1) {
    return;
  }
  do {
    destination = (uint *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(uint **)(iVar4 + 0x50) = destination;
    s3c_zero_end(destination,0x100);
    puVar2[iVar3 + 0xb] = 0xffffffff;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x54;
  } while (iVar3 < *(int *)(param_1 + 0x24));
  return;
}



// Address: 4a0eadb8

void FUN_4a0eadb8(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint count;
  undefined4 uVar1;
  undefined4 extraout_r1;
  ulonglong uVar2;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [28];
  undefined1 auStack_38 [36];

  FUN_4a0ecbc4(auStack_38);
  FUN_4a0ecbc4(auStack_5c);
  FUN_4a0ecab0(auStack_38,param_3);
  FUN_4a0ecab0(auStack_5c,param_4);
  if (param_3 == param_4) {
    count = FUN_4a142870();
    uVar2 = s3c_move_endpoints(param_2,param_1,count);
    uVar1 = (undefined4)(uVar2 >> 0x20);
  }
  else {
    uVar1 = FUN_4a0e6898(auStack_54);
    FUN_4a0e7528(auStack_38,param_1,param_2,auStack_5c,1,uVar1);
    uVar1 = extraout_r1;
  }
  FUN_4a0eb918(auStack_5c,uVar1);
  FUN_4a0eb918(auStack_38);
  return;
}



// Address: 4a097ec4

void FUN_4a097ec4(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  uint local_14;
  uint local_10;

  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_4a06067c();
  local_10 = (uint)(*(int *)(param_1 + 0x10) != 0);
  FUN_4a0365d4(&local_10,1,1,1);
  puVar1 = PTR_DAT_4a097f70;
  if ((char)local_10 != '\0') {
    iVar2 = 0;
    if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
      iVar2 = s3c_string_length(*(uint **)(param_1 + 0x10));
      iVar2 = iVar2 + 1;
    }
    local_18 = iVar2;
    FUN_4a039aec(&local_18,1,0x1f,4);
    if (*puVar1 == '\x01') {
      uVar3 = thunk_FUN_4a161570(local_18);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
    }
    FUN_4a036638(uVar3,local_18,7,1);
  }
  local_14 = (uint)(*(int *)(param_1 + 0x14) != 0);
  FUN_4a0365d4(&local_14,1,1,1);
  if ((char)local_14 != '\0') {
    FUN_4a039aec(param_1 + 0x18,1,0x1f,4);
    if (*puVar1 == '\x01') {
      uVar3 = thunk_FUN_4a161570(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x14) = uVar3;
    }
    FUN_4a039b90(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),8,1);
  }
  return;
}



// Address: 4a00d564

undefined4 FUN_4a00d564(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  uchar *puVar5;
  uchar *puVar6;

  pvVar3 = host_eglGetCurrentContext_thumb();
  puVar1 = PTR_DAT_4a00d610;
  if (pvVar3 == (void *)0x0) {
    iVar4 = FUN_4a0406c0();
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    PTR_DAT_4a00d610[3] = 0;
    pvVar3 = host_eglGetCurrentDisplay_thumb();
    *(void **)(puVar1 + 8) = pvVar3;
    pvVar3 = host_eglGetCurrentSurface_thumb(DAT_4a00d614);
    *(void **)(puVar1 + 0xc) = pvVar3;
    pvVar3 = host_eglGetCurrentContext_thumb();
    iVar4 = DAT_4a00d614;
    *(void **)(puVar1 + 0x10) = pvVar3;
    host_eglQueryContext_thumb(*(void **)(puVar1 + 8),pvVar3,iVar4 + -0x31,puVar1 + 4);
  }
  iVar4 = host_s3eGLGetInt_thumb(0);
  *(int *)(puVar1 + 0x1c) = iVar4;
  puVar1[2] = 0x1ff < iVar4;
  host_glGetString_thumb(0x1f00);
  puVar5 = host_glGetString_thumb(DAT_4a00d618);
  host_glGetString_thumb(DAT_4a00d618 + 1);
  host_glGetString_thumb(DAT_4a00d618 + 2);
  puVar6 = s3c_string_find(puVar5,(uchar *)s_PVRVFrame_4a00d61c);
  puVar2 = PTR_DAT_4a00d628;
  if (puVar6 != (uchar *)0x0) {
    *(undefined4 *)PTR_DAT_4a00d628 = 1;
    puVar6 = s3c_string_find(puVar5,(uchar *)s_Intel_4a00d62c);
    if ((puVar6 != (uchar *)0x0) &&
       (puVar5 = s3c_string_find(puVar5,&DAT_4a00d634), puVar5 != (uchar *)0x0)) {
      *(undefined4 *)puVar2 = 2;
    }
  }
  FUN_4a047000();
  puVar1[1] = 1;
  return 1;
}



// Address: 4a091efa

void FUN_4a091efa(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint count;
  int iVar2;
  int iVar3;
  uint *destination;
  undefined1 auStack_3c [16];
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int iStack_18;

  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  FUN_4a0978b4(auStack_3c);
  FUN_4a091ec8(param_1);
  FUN_4a161530(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = local_20 << 2;
  local_28 = iVar3;
  for (iVar2 = 0; iVar2 < local_20; iVar2 = iVar2 + 1) {
    if (param_4 == 0) {
      iVar1 = s3c_string_length(*(uint **)(local_1c + iVar2 * 4));
    }
    else {
      iVar1 = *(int *)(param_4 + iVar2 * 4);
    }
    iVar3 = iVar1 + iVar3 + 1;
  }
  iVar2 = FUN_4a161570(iVar3);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = local_20;
  destination = (uint *)(iVar2 + local_28);
  for (iVar2 = 0; iVar2 < local_20; iVar2 = iVar2 + 1) {
    if (param_4 == 0) {
      count = s3c_string_length(*(uint **)(local_1c + iVar2 * 4));
    }
    else {
      count = *(uint *)(param_4 + iVar2 * 4);
    }
    local_2c = iVar2 * 4;
    *(uint **)(*(int *)(param_1 + 8) + local_2c) = destination;
    s3c_copy_forward_endpoints(destination,*(uint **)(local_1c + local_2c),count);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + local_2c) + count) = 0;
    destination = (uint *)((int)destination + count + 1);
  }
  FUN_4a0978e0(auStack_3c);
  return;
}



// Address: 4a11f758

int FUN_4a11f758(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_2c [8];
  uint local_24;
  int local_20;

  FUN_4a10ca70(auStack_2c,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_24 - 1);
  iVar3 = 0;
  if (0 < (int)local_24) {
    do {
      uVar4 = s3c_divide_signed32(iVar1 + iVar3,local_24);
      if (local_20 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_20 + 8);
      }
      iVar2 = *(int *)(iVar2 + (int)(uVar4 >> 0x20) * 4);
      if (*(int *)(iVar2 + 0x28) == param_2) {
        FUN_4a16a5f4(auStack_2c);
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_24);
  }
  FUN_4a16a5f4(auStack_2c);
  return 0;
}



// Address: 4a154074

void FUN_4a154074(void)

{
  uchar *source;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  CoreDiv64 CVar9;
  CoreDiv64 CVar10;
  uint local_120;
  int local_11c;
  byte local_118 [128];
  undefined1 auStack_98 [132];

  source = (uchar *)host_s3eDeviceGetString_thumb(0x1f);
  s3c_bounded_string_copy(local_118,source,0x80);
  pbVar5 = local_118;
  do {
    if (*pbVar5 == 0) {
LAB_4a1540a4:
      local_120 = 0;
      local_11c = 0;
      uVar7 = host_s3eTimerGetLocaltimeOffset_thumb(&local_120);
      CVar9 = s3c_divide_signed64((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),1000,0);
      bVar6 = CARRY4(local_120,DAT_4a154128);
      local_120 = local_120 + DAT_4a154128;
      local_11c = local_11c + 0xd9 + (uint)bVar6;
      uVar7 = host_s3eTimerGetLocaltimeOffset_thumb(&local_120,local_11c,local_118);
      CVar10 = s3c_divide_signed64((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),1000,0);
      uVar8 = s3c_divide_signed32((uint)CVar9.quotient,0xe10);
      iVar2 = (int)uVar8;
      uVar8 = s3c_divide_signed32((uint)CVar10.quotient,0xe10);
      iVar3 = (int)uVar8;
      uVar4 = 0x2d;
      if (iVar2 < 0) {
        uVar4 = 0x2b;
        iVar2 = -iVar2;
        iVar3 = -iVar3;
      }
      FUN_4a000d78(auStack_98,0x7f,s___3s_c_02d_00_00__3s_c_02d_00_00_4a15412c,source,uVar4,iVar2,
                   source,uVar4,iVar3);
      FUN_4a1619dc(&DAT_4a154150,auStack_98,0);
      FUN_4a163078();
      return;
    }
    uVar1 = s3c_ctype_alnum((uint)*pbVar5);
    if (uVar1 == 0) {
      *pbVar5 = 0;
      goto LAB_4a1540a4;
    }
    pbVar5 = pbVar5 + 1;
  } while( true );
}



// Address: 4a124860

undefined4 FUN_4a124860(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_2c [8];
  uint local_24;
  int local_20;

  FUN_4a10ca70(auStack_2c,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_24 - 1);
  iVar3 = 0;
  if (0 < (int)local_24) {
    do {
      uVar5 = s3c_divide_signed32(iVar1 + iVar3,local_24);
      if (local_20 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_20 + 8);
      }
      uVar4 = *(undefined4 *)(iVar2 + (int)(uVar5 >> 0x20) * 4);
      iVar2 = FUN_4a1460d4(uVar4);
      if (iVar2 == param_2) {
        FUN_4a16a5f4(auStack_2c);
        return uVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_24);
  }
  FUN_4a16a5f4(auStack_2c);
  return 0;
}



// Address: 4a145970

undefined4 FUN_4a145970(int param_1,uint param_2)

{
  ulonglong uVar1;

  if ((int)param_2 < 0x40) {
    uVar1 = s3c_arm_lsl64(1,0,param_2);
    if (((uint)(uVar1 >> 0x20) & (*(uint *)(param_1 + 0x4dc) | *(uint *)(param_1 + 0x4fc))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4d8) | *(uint *)(param_1 + 0x4f8))) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = s3c_arm_lsl64(1,0,param_2 - 0x40);
    if (((uint)(uVar1 >> 0x20) & (*(uint *)(param_1 + 0x4e4) | *(uint *)(param_1 + 0x504))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4e0) | *(uint *)(param_1 + 0x500))) == 0) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a145a74

undefined4 FUN_4a145a74(int param_1,uint param_2)

{
  ulonglong uVar1;

  if ((int)param_2 < 0x40) {
    uVar1 = s3c_arm_lsl64(1,0,param_2);
    if (((uint)(uVar1 >> 0x20) & (*(uint *)(param_1 + 0x4cc) | *(uint *)(param_1 + 0x4ec))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4c8) | *(uint *)(param_1 + 0x4e8))) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = s3c_arm_lsl64(1,0,param_2 - 0x40);
    if (((uint)(uVar1 >> 0x20) & (*(uint *)(param_1 + 0x4d4) | *(uint *)(param_1 + 0x4f4))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4d0) | *(uint *)(param_1 + 0x4f0))) == 0) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a1666dc

int * FUN_4a1666dc(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = s3c_string_length(param_2);
  puVar2 = (uint *)(iVar1 + (int)param_2);
  iVar1 = (int)puVar2 + (1 - (int)param_2);
  if (iVar1 == 0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a166794);
  }
  else {
    iVar3 = FUN_4a15e080(iVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    *param_1 = iVar3;
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar1;
  }
  puVar4 = (uint *)*param_1;
  if (puVar2 != param_2) {
    puVar4 = s3c_move_preserving_destination(puVar4,param_2,(int)puVar2 - (int)param_2);
    puVar4 = (uint *)((int)puVar4 + ((int)puVar2 - (int)param_2));
  }
  param_1[1] = (int)puVar4;
  *(undefined1 *)param_1[1] = 0;
  return param_1;
}



// Address: 4a0363dc

void FUN_4a0363dc(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  CoreDiv64 CVar5;

  thunk_FUN_4a05a68c();
  FUN_4a0396fc();
  FUN_4a040d64();
  puVar1 = PTR_DAT_4a03649c;
  if ((**(uint **)PTR_DAT_4a03649c & 0x1000000) != 0) {
    FUN_4a03f5e4(0);
    FUN_4a037ce4();
  }
  (**(code **)(PTR_DAT_4a0364a0 + 0x2c))();
  iVar2 = *(int *)puVar1;
  uVar3 = *(int *)(iVar2 + 0x578) + 1;
  *(uint *)(iVar2 + 0x578) = uVar3;
  if (uVar3 + (uint)((ulonglong)uVar3 * (ulonglong)DAT_4a0364a4 >> 0x23) * -10 == 0) {
    uVar4 = host_s3eTimerGetMs_arm();
    iVar2 = *(int *)puVar1;
    uVar3 = (uint)uVar4 - *(uint *)(iVar2 + 0x580);
    CVar5 = s3c_divide_unsigned64
                      (uVar3 * 0x1000,
                       ((int)((ulonglong)uVar4 >> 0x20) -
                       (*(int *)(iVar2 + 0x584) + (uint)((uint)uVar4 < *(uint *)(iVar2 + 0x580)))) *
                       0x1000 | uVar3 >> 0x14,10,0);
    *(undefined8 *)(iVar2 + 0x580) = uVar4;
    *(int *)(iVar2 + 0x588) = (int)CVar5.quotient;
    return;
  }
  return;
}



// Address: 4a145b3c

int FUN_4a145b3c(int param_1)

{
  uint count;
  int iVar1;
  int iVar2;
  int iVar3;
  uint low;
  uint high;
  uint low_00;
  uint high_00;
  ulonglong uVar4;
  ulonglong uVar5;

  low_00 = *(uint *)(param_1 + 0x4d8) | *(uint *)(param_1 + 0x4f8);
  high_00 = *(uint *)(param_1 + 0x4dc) | *(uint *)(param_1 + 0x4fc);
  iVar2 = 0;
  high = *(uint *)(param_1 + 0x4e4) | *(uint *)(param_1 + 0x504);
  low = *(uint *)(param_1 + 0x4e0) | *(uint *)(param_1 + 0x500);
  count = 0;
  iVar3 = 0;
  iVar1 = 0x20;
  do {
    uVar4 = s3c_arm_asr64(low_00,high_00,count);
    uVar5 = s3c_arm_asr64(low,high,count);
    iVar2 = iVar2 + ((uint)uVar4 & 1) + ((uint)uVar5 & 1);
    uVar4 = s3c_arm_asr64(low_00,high_00,count + 1);
    uVar5 = s3c_arm_asr64(low,high,count + 1);
    iVar1 = iVar1 + -1;
    iVar3 = iVar3 + ((uint)uVar4 & 1) + ((uint)uVar5 & 1);
    count = count + 2;
  } while (iVar1 != 0);
  return iVar2 + iVar3;
}



// Address: 4a145c7c

int FUN_4a145c7c(int param_1)

{
  uint count;
  int iVar1;
  int iVar2;
  int iVar3;
  uint low;
  uint high;
  uint low_00;
  uint high_00;
  ulonglong uVar4;
  ulonglong uVar5;

  low_00 = *(uint *)(param_1 + 0x4c8) | *(uint *)(param_1 + 0x4e8);
  high_00 = *(uint *)(param_1 + 0x4cc) | *(uint *)(param_1 + 0x4ec);
  iVar2 = 0;
  high = *(uint *)(param_1 + 0x4d4) | *(uint *)(param_1 + 0x4f4);
  low = *(uint *)(param_1 + 0x4d0) | *(uint *)(param_1 + 0x4f0);
  count = 0;
  iVar3 = 0;
  iVar1 = 0x20;
  do {
    uVar4 = s3c_arm_asr64(low_00,high_00,count);
    uVar5 = s3c_arm_asr64(low,high,count);
    iVar2 = iVar2 + ((uint)uVar4 & 1) + ((uint)uVar5 & 1);
    uVar4 = s3c_arm_asr64(low_00,high_00,count + 1);
    uVar5 = s3c_arm_asr64(low,high,count + 1);
    iVar1 = iVar1 + -1;
    iVar3 = iVar3 + ((uint)uVar4 & 1) + ((uint)uVar5 & 1);
    count = count + 2;
  } while (iVar1 != 0);
  return iVar2 + iVar3;
}



// Address: 4a0a3dec

void FUN_4a0a3dec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_18;

  local_18 = 0;
  if ((uint *)*param_1 != (uint *)0x0) {
    local_18 = param_4;
    local_18 = s3c_string_length((uint *)*param_1);
    local_18 = local_18 + 1;
  }
  FUN_4a039aec(&local_18,1,0x1f,4);
  puVar1 = PTR_DAT_4a0a3eb0;
  if (local_18 != 0) {
    if (*PTR_DAT_4a0a3eb0 == '\0') {
      uVar2 = *param_1;
    }
    else {
      uVar2 = thunk_FUN_4a161570();
      *param_1 = uVar2;
    }
    FUN_4a039b90(uVar2,local_18,8,1);
  }
  FUN_4a03c12c(param_1 + 1,1,0x20,4);
  FUN_4a039aec(param_1 + 2,1,0x1f,4);
  FUN_4a03c12c(param_1 + 5,1,0x20,4);
  if (-1 < (int)(param_1[5] << 0x1c)) {
    iVar3 = FUN_4a0a3a82(param_1);
    if (*puVar1 != '\0') {
      uVar2 = FUN_4a161570(param_1[2] * iVar3 * 4);
      param_1[3] = uVar2;
    }
    uVar4 = param_1[1] & DAT_4a0a3eb4;
    if ((uVar4 == 4) || (uVar4 == 0xc)) {
      FUN_4a0399e0(param_1[3],iVar3 * param_1[2],0x20,4);
    }
    else if ((param_1[1] & 0x3ffff) >> 2 == 2) {
      FUN_4a039aec(param_1[3],iVar3 * param_1[2],0x1f,4);
    }
  }
  return;
}



// Address: 4a0c9920

uint FUN_4a0c9920(int param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint low;
  ulonglong uVar4;
  ulonglong uVar5;

  uVar2 = DAT_4a0c99e4;
  if ((param_2 & ~-param_2) == 0) {
    lVar1 = (ulonglong)DAT_4a0c99e4 * (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = (uint)lVar1;
    uVar3 = uVar2 + 0xb;
    uVar2 = *(uint *)(param_1 + 8) * 5 +
            DAT_4a0c99e4 * *(int *)(param_1 + 0xc) + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(0xfffffff4 < uVar2) & 0xffff;
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)(param_1 + 0xc) = uVar2;
    uVar4 = s3c_arm_lsr64(uVar3,uVar2,0x11);
    lVar1 = (longlong)(int)uVar4 * (longlong)(int)param_2;
    return (uint)lVar1 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) << 1;
  }
  do {
    lVar1 = (ulonglong)uVar2 * (ulonglong)*(uint *)(param_1 + 8);
    uVar3 = (uint)lVar1;
    low = uVar3 + 0xb;
    uVar3 = *(uint *)(param_1 + 8) * 5 +
            *(int *)(param_1 + 0xc) * uVar2 + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(0xfffffff4 < uVar3) & 0xffff;
    *(uint *)(param_1 + 8) = low;
    *(uint *)(param_1 + 0xc) = uVar3;
    uVar4 = s3c_arm_lsr64(low,uVar3,0x11);
    uVar5 = s3c_divide_signed32((uint)uVar4,param_2);
    uVar3 = (uint)(uVar5 >> 0x20);
  } while ((int)(((uint)uVar4 - uVar3) + param_2 + -1) < 0);
  return uVar3;
}



// Address: 4a039e20

undefined4 FUN_4a039e20(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;

  puVar2 = PTR_DAT_4a039eec;
  if (PTR_DAT_4a039eec[2] != '\0') {
    return 0;
  }
  if (*param_1 == 0xd) {
    *param_1 = 10;
  }
  uVar3 = s3c_string_length(*(uint **)(puVar2 + 0x18));
  sVar1 = *param_1;
  if (sVar1 == 8) {
    if (*(uint *)(puVar2 + 0x28) < uVar3) {
      uVar3 = uVar3 - 1;
      *(undefined1 *)(*(int *)(puVar2 + 0x18) + uVar3) = 0;
      goto LAB_4a039e72;
    }
  }
  else {
    if (sVar1 == 4) {
      puVar2[2] = 1;
      return 0;
    }
    if (sVar1 == 3) {
      FUN_4a15f988(2);
      return 0;
    }
    iVar4 = *(int *)(puVar2 + 0x18);
    *(char *)(iVar4 + uVar3) = (char)sVar1;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar4 + uVar3) = 0;
LAB_4a039e72:
    if (*param_1 == 10) {
      FUN_4a00dcf8(0,1);
      FUN_4a01c9ec();
      uVar3 = s3c_bounded_string_append
                        (*(uchar **)(puVar2 + 0x20),
                         (uchar *)(*(int *)(puVar2 + 0x18) + *(int *)(puVar2 + 0x28)),0x200);
      *(uint *)(puVar2 + 0x24) = uVar3;
      if (0x1ff < uVar3) {
        *(undefined4 *)(puVar2 + 0x24) = 0x1ff;
      }
      **(undefined1 **)(puVar2 + 0x18) = 0;
      goto LAB_4a039ea4;
    }
  }
  s3c_fill_end((uint *)(*(int *)(puVar2 + 0x18) + uVar3),0x200 - uVar3,' ');
  *(undefined1 *)(*(int *)(puVar2 + 0x18) + 0x1ff) = 0;
  iVar4 = host_s3eDebugGetInt_thumb(6);
  host_s3eDebugPrint_thumb(0,iVar4 * *(int *)(puVar2 + 0x1c),*(int *)(puVar2 + 0x18) + -2,0,param_4)
  ;
  *(undefined1 *)(*(int *)(puVar2 + 0x18) + uVar3) = 0;
  FUN_4a00dcf8(0);
LAB_4a039ea4:
  host_s3eSurfaceShow_thumb();
  return 0;
}



// Address: 4a0c0adc

void FUN_4a0c0adc(undefined4 param_1)

{
  uint count;
  uint *puVar1;
  int iVar2;
  uint *local_20;
  uint *local_1c;
  int local_18;

  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_18 = 0;
  count = s3c_string_length((uint *)s_audio_wav_4a0c0ba8);
  iVar2 = count + 1;
  if (iVar2 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0c0bb4);
  }
  else {
    puVar1 = (uint *)FUN_4a15e080(iVar2);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)FUN_4a1669a8();
    }
    local_18 = (int)puVar1 + iVar2;
    local_20 = puVar1;
    local_1c = puVar1;
  }
  puVar1 = local_20;
  if (count != 0) {
    puVar1 = s3c_move_preserving_destination(local_20,(uint *)s_audio_wav_4a0c0ba8,count);
    puVar1 = (uint *)((int)puVar1 + count);
  }
  *(undefined1 *)puVar1 = 0;
  local_1c = puVar1;
  FUN_4a0c6c00(param_1,&local_20);
  if (local_20 != (uint *)0x0) {
    FUN_4a14f21c();
  }
  return;
}



// Address: 4a0eace8

void FUN_4a0eace8(uint *param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint count;
  undefined4 uVar2;
  undefined4 extraout_r1;
  ulonglong uVar3;
  undefined1 auStack_70 [18];
  undefined2 local_5e;
  undefined1 auStack_4c [36];
  uint *puStack_28;
  uint *puStack_24;
  int local_20;
  int iStack_1c;

  puStack_28 = param_1;
  puStack_24 = param_2;
  local_20 = param_3;
  iStack_1c = param_4;
  FUN_4a0ecbc4(auStack_4c);
  FUN_4a0ecbc4(auStack_70);
  FUN_4a0ecab0(auStack_4c,local_20);
  FUN_4a0ebe9c(auStack_4c,param_5);
  FUN_4a0ecab0(auStack_70,param_4);
  FUN_4a0ebe9c(auStack_70,param_5);
  local_5e = (undefined2)param_6;
  if ((local_20 == param_4) || (iVar1 = FUN_4a0e6898(&local_20), iVar1 != 0)) {
    count = thunk_FUN_4a14283c(auStack_70);
    uVar3 = s3c_move_endpoints(param_2,param_1,count);
    uVar2 = (undefined4)(uVar3 >> 0x20);
  }
  else {
    FUN_4a0e7528(auStack_4c,param_1,param_2,auStack_70,param_6,param_5);
    uVar2 = extraout_r1;
  }
  FUN_4a0eb918(auStack_70,uVar2);
  FUN_4a0eb918(auStack_4c);
  return;
}



// Address: 4a0c9210

undefined4 FUN_4a0c9210(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_15c [256];
  uint auStack_5c [3];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  s3c_zero_aligned_end(auStack_5c,0x50);
  FUN_4a163284(param_1[2],auStack_5c,auStack_15c,0x100,0,0,0,0);
  uVar1 = thunk_FUN_4a161570(0x14);
  uVar1 = FUN_4a0c707c(uVar1,auStack_15c);
  uVar2 = thunk_FUN_4a161570(0x1c);
  uVar1 = FUN_4a0fad7c(uVar2,uVar1);
  FUN_4a0fad5c(uVar1,local_48);
  FUN_4a0fad6c(uVar1,local_40);
  FUN_4a0fad54(uVar1,local_44);
  FUN_4a0fad74(uVar1,local_50);
  param_1[4] = param_1[4] + 1;
  iVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar3 != 0) {
    FUN_4a163354(param_1[2]);
  }
  return uVar1;
}



// Address: 4a09c378

void FUN_4a09c378(int *param_1,int *param_2,char *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  bool bVar8;
  uint local_74 [20];
  int *piStack_24;
  int *piStack_20;
  char *local_1c;
  char *local_18;

  bVar3 = true;
  puVar7 = (uint *)0x0;
  piStack_24 = param_1;
  piStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_4a16ec52(param_2,10);
  do {
    cVar1 = *(char *)*param_1;
    pcVar4 = local_18;
    if (cVar1 == '\0') {
LAB_4a09c3a8:
      *param_1 = *param_1 + 1;
      return;
    }
    while (cVar2 = *pcVar4, pcVar6 = local_1c, cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      if (cVar2 == cVar1) goto LAB_4a09c3a8;
    }
    do {
      cVar2 = *pcVar6;
      if (cVar2 == '\0') {
        bVar3 = false;
        puVar7 = local_74;
        goto LAB_4a09c390;
      }
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != cVar1);
    *param_1 = (int)((char *)*param_1 + 1);
LAB_4a09c390:
  } while (bVar3);
  pcVar6 = (char *)*param_1;
  cVar1 = *pcVar6;
  bVar8 = cVar1 == '\0';
  pcVar4 = local_18;
  do {
    pcVar5 = local_1c;
    if ((bVar8) || (cVar2 = *pcVar4, cVar2 == '\0')) goto LAB_4a09c40e;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != cVar1);
  bVar8 = true;
LAB_4a09c40e:
  do {
    if (bVar8) break;
    cVar2 = *pcVar5;
    if (cVar2 == '\0') {
      *param_1 = (int)(pcVar6 + 1);
      *(char *)puVar7 = *pcVar6;
      puVar7 = (uint *)((int)puVar7 + 1);
      goto LAB_4a09c390;
    }
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != cVar1);
  *(char *)puVar7 = '\0';
  FUN_4a16ec06(param_2,param_2[1] + 1);
  s3c_string_copy((uint *)(*param_2 + param_2[1] * 0x28 + -0x28),local_74);
  bVar3 = true;
  goto LAB_4a09c390;
}



// Address: 4a0c06cc

void FUN_4a0c06cc(undefined4 param_1)

{
  uint count;
  uint *puVar1;
  int iVar2;
  uint *local_20;
  uint *local_1c;
  int local_18;

  host_s3eAudioIsCodecSupported_arm(2);
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_18 = 0;
  count = s3c_string_length((uint *)s_audio_mp3_4a0c07a0);
  iVar2 = count + 1;
  if (iVar2 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0c07ac);
  }
  else {
    puVar1 = (uint *)FUN_4a15e080(iVar2);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)FUN_4a1669a8();
    }
    local_18 = (int)puVar1 + iVar2;
    local_20 = puVar1;
    local_1c = puVar1;
  }
  puVar1 = local_20;
  if (count != 0) {
    puVar1 = s3c_move_preserving_destination(local_20,(uint *)s_audio_mp3_4a0c07a0,count);
    puVar1 = (uint *)((int)puVar1 + count);
  }
  *(undefined1 *)puVar1 = 0;
  local_1c = puVar1;
  FUN_4a0c6c00(param_1,&local_20);
  if (local_20 != (uint *)0x0) {
    FUN_4a14f21c();
  }
  return;
}



// Address: 4a153b14

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a153b14(int param_1,int param_2,int param_3,int *param_4)

{
  uchar value;
  uchar *puVar1;
  int iVar2;
  uint *destination;
  uchar *puVar3;
  uint count;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  iVar2 = *param_4;
  uVar6 = (uint)*(byte *)(*(int *)(param_2 + 4) + *(int *)(param_1 + 0x1c4) + 0x96);
  count = (uint)*(byte *)(*(int *)(param_2 + 4) + *(int *)(param_1 + 0x1c4) + 0x8c);
  iVar5 = 0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x138)) {
    do {
      destination = *(uint **)(iVar2 + iVar5 * 4);
      puVar4 = (uint *)(*(int *)(param_1 + 0x70) + (int)destination);
      puVar1 = *(uchar **)(param_3 + iVar7 * 4);
      while (destination < puVar4) {
        puVar3 = puVar1 + 1;
        value = *puVar1;
        puVar1 = puVar3;
        if (count != 0) {
          s3c_fill_end(destination,count,value);
          destination = (uint *)((int)destination + count);
        }
      }
      if (1 < uVar6) {
        FUN_4a158590(iVar2,iVar5,iVar2,iVar5 + 1);
      }
      iVar5 = iVar5 + uVar6;
      iVar7 = iVar7 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x138));
    return;
  }
  return;
}



// Address: 4a0a3aac

undefined4 FUN_4a0a3aac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint *destination;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_1b4 [64];
  undefined1 local_b4 [160];

  local_b4[0] = 0;
  FUN_4a09c2ec(param_2,local_b4,0xa0,1);
  iVar1 = s3c_string_length((uint *)local_b4);
  destination = (uint *)thunk_FUN_4a161570(iVar1 + 1);
  *param_1 = destination;
  s3c_string_copy(destination,(uint *)local_b4);
  FUN_4a09c2ec(param_2,local_b4,0xa0,1);
  iVar1 = FUN_4a09c588(local_b4,PTR_PTR_4a0a3b84,param_1 + 1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_4a09c5bc(param_2,param_1 + 2);
  iVar1 = FUN_4a0a3a82(param_1);
  uVar2 = FUN_4a161570(iVar1 * 4 * param_1[2]);
  param_1[3] = uVar2;
  FUN_4a09c29a(param_2,auStack_1b4,0xff,0);
  uVar3 = s3c_string_compare(auStack_1b4,(uint *)s_no_default_4a0a3b88);
  if (uVar3 == 0) {
    s3c_zero_end((uint *)param_1[3],param_1[2] * iVar1 * 4);
    FUN_4a09c2ec(param_2,auStack_1b4,0xff,0);
  }
  else {
    uVar3 = (param_1[1] & 0x3ffff) >> 2;
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        FUN_4a09c44c(param_2,param_1[3],iVar1 * param_1[2],4);
        return 1;
      }
      if (uVar3 != 3) {
        return 0;
      }
    }
    FUN_4a09c508(param_2,param_1[3],iVar1 * param_1[2]);
  }
  return 1;
}



// Address: 4a047900

undefined4 FUN_4a047900(uint *param_1,uchar *param_2,uint *param_3)

{
  bool bVar1;
  undefined *puVar2;
  uchar *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uchar auStack_a8 [128];
  int local_28 [2];
  uint *puStack_20;
  uchar *puStack_1c;
  uint *local_18;

  puStack_20 = param_1;
  puStack_1c = param_2;
  local_18 = param_3;
  puVar3 = s3c_string_find(param_2,&DAT_4a0479dc);
  if ((puVar3 == (uchar *)0x0) &&
     (puVar3 = s3c_string_find(param_2,&DAT_4a0479e0), puVar3 == (uchar *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar2 = PTR_DAT_4a0479e4;
  if (bVar1) {
    puVar5 = *(undefined4 **)(PTR_DAT_4a0479e4 + 4);
    if (puVar5 != (undefined4 *)0x0) {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        s3c_string_copy(local_18,(uint *)*puVar5);
        s3c_string_append((uchar *)local_18,&DAT_4a0479e8);
        s3c_path_filename((uchar *)param_1,auStack_a8,1);
        s3c_string_append((uchar *)local_18,auStack_a8);
        iVar4 = host_s3eFileCheckExists_thumb(local_18);
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
    piVar6 = *(int **)puVar2;
  }
  else {
    if (*(int *)(PTR_DAT_4a0479e4 + 8) == 0) goto LAB_4a0479d2;
    local_28[0] = *(int *)(PTR_DAT_4a0479e4 + 8);
    piVar6 = local_28;
    local_28[1] = 0;
  }
  if (piVar6 != (int *)0x0) {
    for (; (uint *)*piVar6 != (uint *)0x0; piVar6 = piVar6 + 1) {
      s3c_string_copy(local_18,(uint *)*piVar6);
      s3c_string_append((uchar *)local_18,&DAT_4a0479e8);
      s3c_string_append((uchar *)local_18,(uchar *)param_1);
      if (!bVar1) {
        s3c_path_parent((uchar *)local_18,auStack_a8);
        FUN_4a03349c(auStack_a8);
        return 1;
      }
      iVar4 = host_s3eFileCheckExists_thumb(local_18);
      if (iVar4 != 0) {
        return 1;
      }
    }
  }
  if ((bVar1) && (iVar4 = host_s3eFileCheckExists_thumb(param_1), iVar4 == 0)) {
    return 0;
  }
LAB_4a0479d2:
  s3c_string_copy(local_18,param_1);
  return 1;
}



// Address: 4a0364a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a0364a8(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint auStack_124 [64];
  int local_24;
  int *piStack_20;
  undefined4 local_1c;
  uint uStack_18;

  piStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (*(int *)(PTR_DAT_4a036588 + 8) != 0) {
    for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      FUN_4a1652d2(iVar3,param_1,local_1c,param_3);
    }
  }
  local_24 = FUN_4a1652ca(param_1,local_1c,param_3,*(undefined4 *)(*param_1 + 0xc));
  if (local_24 == 0) {
    if ((*(int *)PTR_DAT_4a036588 != 2) && (*(int *)(PTR_DAT_4a036588 + 8) != 0)) {
      for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
          iVar3 = *(int *)(iVar3 + 4)) {
        FUN_4a1652d2(iVar3,param_1,local_1c,param_3);
      }
    }
    s3c_string_copy(auStack_124,(uint *)param_1[1]);
    if (*(int *)PTR_DAT_4a036588 == 0) {
      uVar1 = FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x28));
      uVar2 = FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x20));
      FUN_4a008004(PTR_s_Bucket___s__out_of_memory__Alloc_4a03658c,auStack_124,param_3,uVar2,uVar1);
      iVar3 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar3 != 0) {
        _DAT_fffffff4 = 0;
      }
    }
  }
  else if (*(int *)(PTR_DAT_4a036588 + 8) != 0) {
    for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      auStack_124[0] = param_3;
      FUN_4a1652d2(iVar3,param_1,local_1c,param_1,local_24);
    }
  }
  return local_24;
}



// Address: 4a041b9c

void FUN_4a041b9c(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  short *source;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined1 auStack_828 [512];
  undefined1 auStack_628 [512];
  short asStack_428 [256];
  undefined1 auStack_228 [512];
  undefined4 uStack_4;

  source = (short *)0x0;
  if (param_3 != (int *)0x0) {
    source = (short *)param_3[2];
  }
  uStack_4 = param_4;
  s3c_utf16_copy(asStack_428,source);
  local_830 = *(undefined4 *)PTR_DAT_4a041c7c;
  uStack_82c = *(undefined4 *)(PTR_DAT_4a041c7c + 4);
  iVar1 = s3c_utf16_find((int)asStack_428,(int)&local_830);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 2) = 99;
  }
  FUN_4a039d70(asStack_428,0x100,auStack_828,0x200);
  FUN_4a000d44(auStack_628,auStack_828,&uStack_4);
  FUN_4a039bec(auStack_628,0x200,auStack_228,0x100);
  FUN_4a0331f8(param_1,auStack_228);
  if ((param_3 != (int *)0x0) && (iVar1 = param_3[1], param_3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_3 + 4))();
  }
  return;
}



// Address: 4a047744

void FUN_4a047744(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;

  iVar5 = *(int *)PTR_DAT_4a047824;
  iVar1 = FUN_4a0066d8(*(undefined4 *)(param_2 + 8),param_3);
  local_24 = (short)(*(int *)(iVar5 + 0x318) >> 3) - (short)(*(uint *)(iVar5 + 0x34c) >> 1);
  local_22 = (short)(*(int *)(iVar5 + 0x31c) >> 3) - (short)(*(uint *)(iVar5 + 0x350) >> 1);
  local_20 = (short)*(undefined4 *)(iVar5 + 0x34c);
  local_1e = (short)*(undefined4 *)(iVar5 + 0x350);
  FUN_4a0d4128(&local_24,*(undefined4 *)(iVar5 + 0x354),*(undefined4 *)(iVar5 + 0x33c),
               *(undefined4 *)(iVar5 + 0x340));
  uVar7 = s3c_divide_signed32((int)local_22,(int)(short)param_3);
  local_22 = (short)uVar7;
  iVar5 = (int)local_22;
  iVar6 = (int)local_20;
  uVar7 = s3c_divide_signed32((int)local_1e,param_3);
  uVar2 = *(uint *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 8);
  param_1[1] = (int)uVar7;
  param_1[2] = iVar1;
  param_1[3] = uVar2;
  param_1[4] = iVar5 * iVar4 + (int)local_24 * ((uVar2 & 0x70) >> 4) + iVar3;
  *param_1 = iVar6;
  return;
}



// Address: 4a0a7890

undefined2 *
FUN_4a0a7890(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,int param_6,int *param_7)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *destination;

  iVar6 = 0;
  if (param_5 != 0) {
    piVar1 = param_7 + -1;
    if ((param_5 & 1) != 0) {
      iVar6 = *param_7;
      piVar1 = param_7;
    }
    iVar5 = piVar1[1];
    iVar4 = 0;
    for (uVar3 = param_5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar6 = iVar6 + iVar5;
      iVar5 = piVar1[3];
      iVar4 = iVar4 + piVar1[2];
      piVar1 = piVar1 + 2;
    }
    iVar6 = iVar6 + iVar4;
  }
  puVar2 = (undefined2 *)thunk_FUN_4a161570(iVar6 + 0x48);
  puVar2[1] = 2;
  *(int *)(puVar2 + 2) = iVar6 + 0x48;
  *puVar2 = param_1;
  *(uint *)(puVar2 + 6) = param_5;
  *(undefined4 *)(puVar2 + 8) = param_3;
  *(undefined4 *)(puVar2 + 4) = param_2;
  destination = (uint *)(puVar2 + 0x24);
  *(undefined4 *)(puVar2 + 10) = param_4;
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      s3c_copy_forward_endpoints(destination,*(uint **)(param_6 + uVar3 * 4),param_7[uVar3]);
      uVar7 = uVar3 + 1;
      destination = (uint *)((int)destination + param_7[uVar3]);
      *(int *)(puVar2 + uVar3 * 2 + 0xc) = param_7[uVar3];
      uVar3 = uVar7;
    } while (uVar7 < param_5);
  }
  return puVar2;
}



// Address: 4a0c3068

int * FUN_4a0c3068(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *destination;
  uint count;

  iVar1 = FUN_4a13daf8();
  iVar2 = FUN_4a13db00(param_1);
  uVar3 = thunk_FUN_4a161570(0x38);
  piVar4 = (int *)FUN_4a0c5088(uVar3,1);
  *piVar4 = (int)PTR_PTR_4a0c3148;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  *(undefined1 *)(piVar4 + 0xd) = 0;
  FUN_4a0c507c(piVar4,iVar1,iVar2);
  *(undefined1 *)(piVar4 + 0xd) = 1;
  if (piVar4[7] != 0) {
    thunk_FUN_4a161530();
    piVar4[7] = 0;
  }
  count = iVar1 * 4 * iVar2;
  destination = (uint *)thunk_FUN_4a161570(count);
  piVar4[7] = (int)destination;
  s3c_zero_end(destination,count);
  uVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
  (**(code **)(*piVar4 + 0x28))(piVar4,uVar3,count);
  return piVar4;
}



// Address: 4a11b1d8

int FUN_4a11b1d8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 auStack_30 [8];
  uint local_28;
  int local_24;

  uVar5 = *(undefined4 *)(param_1 + 0x28);
  FUN_4a10ca70(auStack_30,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_28 - 1);
  iVar3 = 0;
  if (0 < (int)local_28) {
    do {
      uVar6 = s3c_divide_signed32(iVar1 + iVar3,local_28);
      if (local_24 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_24 + 8);
      }
      iVar4 = *(int *)(iVar2 + (int)(uVar6 >> 0x20) * 4);
      iVar2 = FUN_4a143ac8(uVar5,*(undefined4 *)(iVar4 + 0x28));
      if (((((int)*(short *)(iVar2 + 0x18) & param_2) != 0) &&
          (iVar2 = FUN_4a1465dc(iVar4), iVar2 != 0)) &&
         (iVar2 = FUN_4a1461c0(iVar4,0x300), iVar2 == 0)) {
        FUN_4a16a5f4(auStack_30);
        return iVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_28);
  }
  FUN_4a16a5f4(auStack_30);
  return 0;
}



// Address: 4a070370

void FUN_4a070370(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *source;
  uint *local_144;
  undefined1 auStack_140 [20];
  ushort local_12c;
  uint *local_128;
  uchar auStack_11c [256];
  int *local_1c;
  int *local_18;

  uVar1 = 1;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  thunk_FUN_4a161570(0xc4);
  local_1c = (int *)FUN_4a0633c4();
  s3c_path_filename(*(uchar **)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) * 0xe8 + -0xe4),
                    auStack_11c,0);
  FUN_4a1652c8(local_1c,auStack_11c,*(undefined4 *)(*local_1c + 0x24));
  local_1c[0xd] = local_1c[0xd] | 0x20000000;
  FUN_4a062c6c(local_1c);
  thunk_FUN_4a0ecbc4(auStack_140);
  thunk_FUN_4a0ecab0(auStack_140,param_1[6]);
  thunk_FUN_4a0ebe9c(auStack_140,(short)param_1[8]);
  thunk_FUN_4a0ecb88(auStack_140,(uint)*(ushort *)((int)param_1 + 0x22) * 6);
  thunk_FUN_4a0e4d6c(auStack_140,0,0,0,0);
  local_144 = local_128;
  uVar1 = (uint)local_12c;
  uVar3 = 0;
  do {
    local_18 = param_1 + uVar3 * 9;
    source = (uint *)local_18[10];
    for (uVar2 = 0; uVar2 < *(ushort *)((int)local_18 + 0x22); uVar2 = uVar2 + 1) {
      s3c_copy_forward_endpoints(local_144,source,uVar1);
      local_144 = (uint *)((int)local_144 + uVar1);
      source = (uint *)((int)source + uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  FUN_4a062e34(local_1c,auStack_140);
  FUN_4a08d072(*(undefined4 *)PTR_DAT_4a070464,s_CIwTexture_4a070468,local_1c);
  if (param_1 != (int *)0x0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 4));
  }
  thunk_FUN_4a0ecbf0(auStack_140);
  return;
}



// Address: 4a09c6e0

/* WARNING: Removing unreachable block (ram,0x4a09c730) */
/* WARNING: Removing unreachable block (ram,0x4a09c750) */

undefined4 * FUN_4a09c6e0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;

  *param_1 = PTR_PTR_4a09c7d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  FUN_4a16f44c(param_1 + 2,0,param_1 + 2,param_4,param_4);
  for (uVar2 = 0; uVar2 < (uint)param_1[3]; uVar2 = uVar2 + 1) {
  }
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
  param_1[7] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfc;
  param_1[0xb] = 0;
  param_1[0xb] = 0;
  puVar5 = param_1 + 2;
  if ((uint)param_1[3] < param_2) {
    FUN_4a16f41e(puVar5,param_2);
  }
  FUN_4a16f44c(puVar5,param_2);
  FUN_4a16f41e(puVar5,param_1[3]);
  if ((int)param_1[8] < (int)param_2) {
    FUN_4a16f8b4(param_1 + 6,param_2);
  }
  if ((int)param_1[0xc] < 0x14) {
    FUN_4a16fc1c(param_1 + 10,0x14);
  }
  puVar1 = PTR_DAT_4a09c7dc;
  iVar4 = *(int *)PTR_DAT_4a09c7dc;
  *(int *)(param_1[2] + 4) = iVar4;
  s3c_string_copy((uint *)(param_1[2] + 0x14),*(uint **)(iVar4 + 4));
  *(undefined4 *)param_1[2] = 0;
  *(undefined4 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *(undefined4 *)(param_1[2] + 0x10) = 0;
  FUN_4a16f8e0(param_1 + 6,param_1[2] + 4);
  uVar3 = *(undefined4 *)puVar1;
  param_1[0xf] = 0;
  param_1[0xe] = uVar3;
  return param_1;
}



// Address: 4a091a7c

undefined4 * FUN_4a091a7c(int param_1,uchar *param_2,uint *param_3)

{
  uchar uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uchar *puVar9;
  char *pcVar10;
  ushort *puVar11;
  bool bVar12;
  uchar *local_128;
  uchar local_124 [256];
  int local_24;
  int local_20;
  uchar *puStack_1c;
  uint *puStack_18;

  local_24 = param_1 + 0x60;
  if (*(char *)(param_1 + 0x74) != '\0') {
    puVar9 = param_2;
    if (*param_2 == '\\') {
      puVar9 = param_2 + 1;
    }
    local_20 = param_1;
    puStack_1c = param_2;
    puStack_18 = param_3;
    uVar5 = s3c_string_compare(param_3,(uint *)&DAT_4a091b78);
    if ((uVar5 == 0) || (uVar5 = s3c_string_compare(param_3,(uint *)&DAT_4a091b7c), uVar5 == 0)) {
      puVar6 = local_124;
      while( true ) {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar6 = uVar1;
        if (uVar1 == '\0') break;
        if (uVar1 == '/') {
          *puVar6 = '\\';
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = s3c_string_find_last_byte(local_124,'\\');
      iVar4 = local_20;
      puVar9 = (uchar *)0x0;
      local_128 = local_124;
      if (puVar6 != (uchar *)0x0) {
        local_128 = puVar6 + 1;
        puVar9 = local_124;
        *puVar6 = '\0';
      }
      if (((*(int *)(local_20 + 0x80) == 0) && (puVar9 != (uchar *)0x0)) && (*puVar9 == '\0')) {
        puVar9 = (uchar *)0x0;
      }
      uVar5 = 0;
      pcVar10 = *(char **)(local_20 + 0x78);
      while( true ) {
        iVar7 = thunk_FUN_4a162f7c(pcVar10,local_128);
        if ((iVar7 == 0) && (iVar7 = FUN_4a0917c0(local_20,uVar5,puVar9), iVar7 != 0)) {
          puVar11 = *(ushort **)(iVar4 + 0x8c);
          while (bVar12 = uVar5 != 0, uVar5 = uVar5 - 1, bVar12) {
            do {
              uVar3 = *puVar11;
              puVar11 = puVar11 + 1;
            } while (uVar3 != DAT_4a091b80);
          }
          puVar8 = (undefined4 *)FUN_4a00dbc4(0x24);
          puVar8[8] = local_20;
          puVar8[2] = 0;
          *puVar8 = 0;
          puVar8[3] = puVar11 + 1;
          puVar8[1] = 0;
          *(undefined1 *)(puVar8 + 7) = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          if (*(int *)(iVar4 + 0x98) == 0) {
            *(undefined4 **)(iVar4 + 0x98) = puVar8;
          }
          else {
            *(undefined4 **)(*(int *)(iVar4 + 0x94) + 8) = puVar8;
          }
          *(undefined4 **)(iVar4 + 0x94) = puVar8;
          return puVar8;
        }
        uVar5 = uVar5 + 1;
        if (*(ushort *)(local_24 + 0xc) == uVar5) break;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
      }
    }
  }
  return (undefined4 *)0x0;
}



// Address: 4a06e86c

undefined4 *
FUN_4a06e86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
            uint *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  uint *destination;
  uint count;

  puVar1 = (undefined4 *)FUN_4a0a41c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *puVar1 = PTR_PTR_4a06e96c;
  puVar1[7] = param_8;
  puVar1[8] = param_9;
  puVar1[9] = 0;
  if (param_8 == 0x1907) {
    if (param_9 == 0x1401) {
      iVar2 = 3;
      goto LAB_4a06e934;
    }
    if (param_9 == 0x8363) {
LAB_4a06e914:
      iVar2 = 2;
      goto LAB_4a06e934;
    }
  }
  else if (param_8 == 0x1908) {
    if (param_9 == 0x1401) {
      iVar2 = 4;
      goto LAB_4a06e934;
    }
    if (param_9 == 0x8033) goto LAB_4a06e914;
  }
  else if (param_8 == 0x1906 && param_9 == 0x1401) {
    iVar2 = 1;
    goto LAB_4a06e934;
  }
  iVar2 = 0;
LAB_4a06e934:
  count = iVar2 * puVar1[5] * puVar1[4];
  destination = (uint *)thunk_FUN_4a161570(count);
  puVar1[9] = destination;
  s3c_copy_forward_endpoints(destination,param_10,count);
  return puVar1;
}



// Address: 4a0bf330

int * FUN_4a0bf330(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *source;
  uint *puVar5;

  piVar1 = (int *)FUN_4a0c6ef0(param_1,param_2 + 1);
  iVar4 = *param_2;
  *piVar1 = iVar4;
  *(int *)((int)piVar1 + *(int *)(iVar4 + -0xc)) = param_2[5];
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  puVar2 = (uint *)param_3[1];
  source = (uint *)*param_3;
  iVar4 = (int)puVar2 + (1 - (int)source);
  if (iVar4 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0bf434);
  }
  else {
    iVar3 = FUN_4a15e080(iVar4);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    piVar1[7] = iVar3;
    piVar1[8] = iVar3;
    piVar1[9] = iVar3 + iVar4;
  }
  puVar5 = (uint *)piVar1[7];
  FUN_4a166140();
  if (puVar2 != source) {
    puVar5 = s3c_move_preserving_destination(puVar5,source,(int)puVar2 - (int)source);
    puVar5 = (uint *)((int)puVar5 + ((int)puVar2 - (int)source));
  }
  piVar1[8] = (int)puVar5;
  *(undefined1 *)piVar1[8] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  return piVar1;
}



// Address: 4a1672a4

void FUN_4a1672a4(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *destination;
  uint *puVar2;
  uint *source;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int local_28;
  int local_24 [2];

  puVar4 = (uint *)param_1[1];
  if (puVar4 != (uint *)param_1[2]) {
    *puVar4 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  local_24[0] = 1;
  local_24[1] = 0;
  local_28 = param_1[1] - *param_1 >> 2;
  if (local_28 == 0) {
    piVar1 = local_24;
  }
  else {
    piVar1 = &local_28;
  }
  iVar5 = *piVar1 + local_28;
  if (iVar5 == 0) {
    destination = (uint *)0x0;
  }
  else {
    destination = (uint *)FUN_4a15e080(iVar5 * 4);
    if (destination == (uint *)0x0) {
      destination = (uint *)FUN_4a1669a8();
    }
  }
  source = (uint *)*param_1;
  iVar3 = local_24[0];
  puVar2 = destination;
  if (puVar4 != source) {
    puVar2 = s3c_move_preserving_destination(destination,source,(int)puVar4 - (int)source);
    iVar3 = local_24[0];
    puVar2 = (uint *)(((int)puVar4 - (int)source) + (int)puVar2);
  }
  do {
    iVar3 = iVar3 + -1;
    puVar4 = puVar2 + 1;
    *puVar2 = *param_2;
    puVar2 = puVar4;
  } while (iVar3 != 0);
  if (*param_1 != 0) {
    FUN_4a14f21c();
  }
  param_1[2] = (int)(destination + iVar5);
  param_1[1] = (int)puVar4;
  *param_1 = (int)destination;
  return;
}



// Address: 4a0a583c

undefined4 FUN_4a0a583c(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *text;
  uint *destination;
  int iVar4;
  undefined1 local_40 [32];
  int iStack_20;
  undefined4 local_1c;
  uint *puStack_18;

  iStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  uVar1 = s3c_string_compare(param_3,(uint *)s_param_4a0a5944);
  iVar4 = param_1 + 0x20;
  if (uVar1 == 0) {
    FUN_4a16e434(iVar4);
    uVar2 = FUN_4a16e38e(iVar4);
    iVar3 = FUN_4a0a3aac(uVar2,local_1c);
    if (iVar3 != 0) {
      return 1;
    }
  }
  else {
    uVar1 = s3c_string_compare(param_3,(uint *)s_instanceParam_4a0a594c);
    if (uVar1 != 0) {
      uVar1 = s3c_string_compare(param_3,(uint *)s_shader_4a0a595c);
      if (uVar1 == 0) {
        local_40[0] = 0;
        FUN_4a09c2ec(local_1c,local_40,0x20,1);
        iVar3 = -1;
        iVar4 = FUN_4a17077e(local_40,s_vertex_4a0a5964);
        if (iVar4 == 0) {
          iVar4 = FUN_4a17077e(local_40,s_fragment_4a0a596c);
          if (iVar4 != 0) {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 0;
        }
        text = (uint *)thunk_FUN_4a161570(DAT_4a0a5978);
        FUN_4a09c5e4(local_1c,text,DAT_4a0a5978);
        iVar4 = s3c_string_length(text);
        param_1 = iVar3 * 4 + param_1;
        *(int *)(param_1 + 0x18) = iVar4 + -2;
        destination = (uint *)thunk_FUN_4a161570(iVar4 + -1);
        *(uint **)(param_1 + 0x10) = destination;
        s3c_copy_forward_endpoints(destination,(uint *)((int)text + 1),*(uint *)(param_1 + 0x18));
        *(undefined1 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) = 0;
        thunk_FUN_4a161530(text);
        return 1;
      }
      uVar2 = FUN_4a060598(param_1,local_1c,param_3);
      return uVar2;
    }
    FUN_4a16e434(iVar4);
    uVar2 = FUN_4a16e38e(iVar4);
    iVar3 = FUN_4a0a3aac(uVar2,local_1c);
    if (iVar3 != 0) {
      iVar3 = FUN_4a16e38e(iVar4);
      FUN_4a161530(*(undefined4 *)(iVar3 + 0xc));
      iVar4 = FUN_4a16e38e(iVar4);
      *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 8;
      return 1;
    }
  }
  FUN_4a16e3fe(iVar4);
  return 1;
}



// Address: 4a0331f8

void FUN_4a0331f8(int *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;

  psVar8 = (short *)0x0;
  if (*param_1 != 0) {
    psVar8 = *(short **)(*param_1 + 8);
  }
  iVar7 = 0;
  if (psVar8 != (short *)0x0) {
    iVar7 = s3c_utf16_length(psVar8);
  }
  iVar6 = 0;
  if (param_2 != (short *)0x0) {
    iVar6 = s3c_utf16_length(param_2);
  }
  psVar1 = (short *)thunk_FUN_4a161570((iVar7 + iVar6 + 1) * 2);
  psVar2 = psVar1;
  if (0 < iVar7) {
    psVar2 = psVar8 + -1;
    psVar5 = psVar1 + -1;
    if ((iVar7 - 1U & 1) == 0) {
      *psVar1 = *psVar8;
      psVar2 = psVar8;
      psVar5 = psVar1;
    }
    for (iVar9 = iVar7 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      psVar5[1] = psVar2[1];
      psVar2 = psVar2 + 2;
      psVar5 = psVar5 + 2;
      *psVar5 = *psVar2;
    }
    psVar2 = psVar1 + iVar7;
  }
  if (0 < iVar6) {
    psVar8 = param_2 + -1;
    psVar5 = psVar2 + -1;
    if ((iVar6 - 1U & 1) == 0) {
      *psVar2 = *param_2;
      psVar8 = param_2;
      psVar5 = psVar2;
    }
    for (iVar7 = iVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      psVar5[1] = psVar8[1];
      psVar8 = psVar8 + 2;
      psVar5 = psVar5 + 2;
      *psVar5 = *psVar8;
    }
    psVar2 = psVar2 + iVar6;
  }
  *psVar2 = 0;
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (iVar7 = piVar3[1], piVar3[1] = iVar7 + -1, iVar7 + -1 == 0)) {
    (**(code **)(*piVar3 + 4))();
  }
  puVar4 = (undefined4 *)thunk_FUN_4a161570(0xc);
  *puVar4 = PTR_PTR_4a102118;
  puVar4[1] = 1;
  puVar4[2] = psVar1;
  *param_1 = (int)puVar4;
  return;
}



// Address: 4a04a9e4

undefined4 FUN_4a04a9e4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint count;
  int iVar1;
  uint *destination;
  short *source;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 local_824;
  undefined1 auStack_820 [512];
  undefined1 auStack_620 [512];
  short asStack_420 [256];
  uint auStack_220 [128];
  undefined4 uStack_4;

  source = (short *)0x0;
  if (param_3 != (int *)0x0) {
    source = (short *)param_3[2];
  }
  uStack_4 = param_4;
  s3c_utf16_copy(asStack_420,source);
  uStack_82c = *(undefined4 *)PTR_DAT_4a04aaf0;
  uStack_828 = *(undefined4 *)(PTR_DAT_4a04aaf0 + 4);
  iVar1 = s3c_utf16_find((int)asStack_420,(int)&uStack_82c);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 2) = 99;
  }
  FUN_4a039d70(asStack_420,0x100,auStack_820,0x200);
  FUN_4a000d44(auStack_620,auStack_820,&uStack_4);
  FUN_4a039bec(auStack_620,0x200,auStack_220,0x100);
  iVar1 = s3c_utf16_length((short *)auStack_220);
  count = (iVar1 + 1) * 2;
  destination = (uint *)thunk_FUN_4a161570(count);
  s3c_copy_forward_endpoints(destination,auStack_220,count);
  local_824 = 0;
  FUN_4a1020c0(&local_824,destination);
  if ((param_3 != (int *)0x0) && (iVar1 = param_3[1], param_3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_3 + 4))();
  }
  return local_824;
}



// Address: 4a0ecc0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_4a0ecc0c(int param_1,int param_2)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  undefined2 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  uint in_r12;
  undefined4 uVar16;
  undefined4 uVar17;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  undefined8 uVar21;

  FUN_4a0eb918();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = *(ushort *)(param_2 + 4);
  *(ushort *)(param_1 + 4) = uVar1;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar7 = *(int *)(param_2 + 0x18);
  if (iVar7 == 0) {
    *(ushort *)(param_1 + 4) = uVar1 & 0xfffe;
  }
  else if ((uVar1 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar7;
  }
  else {
    uVar3 = thunk_FUN_4a14283c(param_1);
    uVar3 = FUN_4a0eb85c(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    puVar12 = *(uint **)(param_2 + 0x18);
    uVar4 = thunk_FUN_4a14283c(param_1);
    uVar20 = s3c_copy_forward_endpoints(*(uint **)(param_1 + 0x18),puVar12,uVar4);
    iVar7 = (int)(uVar20 >> 0x20);
  }
  if ((*(ushort *)(param_1 + 4) & 2) != 0) {
    iVar7 = FUN_4a0e6898(param_1 + 8,iVar7);
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0eccd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = (*UNRECOVERED_JUMPTABLE)();
      return uVar21;
    }
    uVar3 = FUN_4a142870(param_1);
    uVar3 = FUN_4a0eb85c(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    pbVar11 = *(byte **)(param_2 + 0x1c);
    uVar4 = FUN_4a142870(param_1);
    pbVar10 = *(byte **)(param_1 + 0x1c);
    pbVar5 = pbVar10;
    if (3 < uVar4) {
      uVar14 = (uint)pbVar10 & 3;
      in_r12 = uVar14;
      if (uVar14 != 0) {
        bVar8 = *pbVar11;
        pbVar5 = pbVar11 + 1;
        if (uVar14 < 3) {
          pbVar5 = pbVar11 + 2;
          in_r12 = (uint)pbVar11[1];
        }
        *pbVar10 = bVar8;
        pbVar11 = pbVar5;
        if (uVar14 < 2) {
          pbVar11 = pbVar5 + 1;
          bVar8 = *pbVar5;
        }
        pbVar5 = pbVar10 + 1;
        if (uVar14 < 3) {
          pbVar5 = pbVar10 + 2;
          pbVar10[1] = (byte)in_r12;
        }
        uVar4 = (uVar4 + uVar14) - 4;
        pbVar10 = pbVar5;
        if (uVar14 < 2) {
          pbVar10 = pbVar5 + 1;
          *pbVar5 = bVar8;
        }
      }
      pbVar5 = (byte *)((uint)pbVar11 & 3);
      if (pbVar5 == (byte *)0x0) {
        bVar18 = 0x1f < uVar4;
        uVar4 = uVar4 - 0x20;
        uVar3 = 0;
        if (bVar18) {
          do {
            if (bVar18) {
              uVar3 = *(undefined4 *)(pbVar11 + 4);
              uVar15 = *(undefined4 *)(pbVar11 + 8);
              uVar16 = *(undefined4 *)(pbVar11 + 0xc);
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar11;
              *(undefined4 *)(pbVar10 + 4) = uVar3;
              *(undefined4 *)(pbVar10 + 8) = uVar15;
              *(undefined4 *)(pbVar10 + 0xc) = uVar16;
              uVar3 = *(undefined4 *)(pbVar11 + 0x10);
              uVar15 = *(undefined4 *)(pbVar11 + 0x14);
              uVar16 = *(undefined4 *)(pbVar11 + 0x18);
              uVar17 = *(undefined4 *)(pbVar11 + 0x1c);
              pbVar11 = pbVar11 + 0x20;
              *(undefined4 *)(pbVar10 + 0x10) = uVar3;
              *(undefined4 *)(pbVar10 + 0x14) = uVar15;
              *(undefined4 *)(pbVar10 + 0x18) = uVar16;
              *(undefined4 *)(pbVar10 + 0x1c) = uVar17;
              pbVar10 = pbVar10 + 0x20;
              bVar18 = 0x1f < uVar4;
              uVar4 = uVar4 - 0x20;
            }
          } while (bVar18);
        }
        if ((bool)((byte)(uVar4 >> 4) & 1)) {
          uVar3 = *(undefined4 *)pbVar11;
          uVar15 = *(undefined4 *)(pbVar11 + 4);
          uVar16 = *(undefined4 *)(pbVar11 + 8);
          uVar17 = *(undefined4 *)(pbVar11 + 0xc);
          pbVar11 = pbVar11 + 0x10;
          *(undefined4 *)pbVar10 = uVar3;
          *(undefined4 *)(pbVar10 + 4) = uVar15;
          *(undefined4 *)(pbVar10 + 8) = uVar16;
          *(undefined4 *)(pbVar10 + 0xc) = uVar17;
          pbVar10 = pbVar10 + 0x10;
        }
        if ((int)(uVar4 << 0x1c) < 0) {
          uVar3 = *(undefined4 *)pbVar11;
          uVar15 = *(undefined4 *)(pbVar11 + 4);
          pbVar11 = pbVar11 + 8;
          *(undefined4 *)pbVar10 = uVar3;
          *(undefined4 *)(pbVar10 + 4) = uVar15;
          pbVar10 = pbVar10 + 8;
        }
        pbVar2 = pbVar10;
        pbVar5 = pbVar11;
        if ((bool)((byte)(uVar4 >> 2) & 1)) {
          pbVar5 = pbVar11 + 4;
          uVar3 = *(undefined4 *)pbVar11;
          pbVar2 = pbVar10 + 4;
          *(undefined4 *)pbVar10 = uVar3;
        }
        uVar9 = (undefined2)uVar3;
        if ((uVar4 & 3) != 0) {
          bVar19 = (bool)((byte)(uVar4 >> 1) & 1);
          uVar4 = uVar4 << 0x1f;
          bVar18 = (int)uVar4 < 0;
          pbVar10 = pbVar5;
          if (bVar19) {
            pbVar10 = pbVar5 + 2;
            uVar9 = *(undefined2 *)pbVar5;
          }
          pbVar11 = pbVar10;
          if (bVar18) {
            pbVar11 = pbVar10 + 1;
            uVar4 = (uint)*pbVar10;
          }
          pbVar10 = pbVar2;
          if (bVar19) {
            pbVar10 = pbVar2 + 2;
            *(undefined2 *)pbVar2 = uVar9;
          }
          pbVar5 = pbVar10;
          if (bVar18) {
            pbVar5 = pbVar10 + 1;
            *pbVar10 = (byte)uVar4;
          }
          return CONCAT44(pbVar11,pbVar5);
        }
        return CONCAT44(pbVar5,pbVar2);
      }
      bVar18 = 3 < uVar4;
      uVar4 = uVar4 - 4;
      if (bVar18) {
        puVar12 = (uint *)(pbVar11 + -(int)pbVar5);
        in_r12 = *puVar12;
        pbVar11 = pbVar10;
        if (pbVar5 == (byte *)0x2) {
          do {
            puVar6 = puVar12;
            uVar14 = in_r12 >> 0x10;
            puVar12 = puVar6 + 1;
            in_r12 = *puVar12;
            bVar18 = 3 < uVar4;
            uVar4 = uVar4 - 4;
            pbVar5 = (byte *)(uVar14 | in_r12 << 0x10);
            pbVar10 = pbVar11 + 4;
            *(byte **)pbVar11 = pbVar5;
            pbVar11 = pbVar10;
          } while (bVar18);
          pbVar11 = (byte *)((int)puVar6 + 6);
        }
        else if (pbVar5 < (byte *)0x3) {
          do {
            puVar6 = puVar12;
            uVar14 = in_r12 >> 8;
            puVar12 = puVar6 + 1;
            in_r12 = *puVar12;
            bVar18 = 3 < uVar4;
            uVar4 = uVar4 - 4;
            pbVar5 = (byte *)(uVar14 | in_r12 << 0x18);
            pbVar10 = pbVar11 + 4;
            *(byte **)pbVar11 = pbVar5;
            pbVar11 = pbVar10;
          } while (bVar18);
          pbVar11 = (byte *)((int)puVar6 + 5);
        }
        else {
          do {
            puVar6 = puVar12;
            uVar14 = in_r12 >> 0x18;
            puVar12 = puVar6 + 1;
            in_r12 = *puVar12;
            bVar18 = 3 < uVar4;
            uVar4 = uVar4 - 4;
            pbVar5 = (byte *)(uVar14 | in_r12 << 8);
            pbVar10 = pbVar11 + 4;
            *(byte **)pbVar11 = pbVar5;
            pbVar11 = pbVar10;
          } while (bVar18);
          pbVar11 = (byte *)((int)puVar6 + 7);
        }
      }
    }
    bVar13 = (byte)in_r12;
    bVar8 = (byte)pbVar5;
    bVar19 = (bool)((byte)(uVar4 >> 1) & 1);
    uVar4 = uVar4 << 0x1f;
    bVar18 = (int)uVar4 < 0;
    if (bVar19) {
      pbVar5 = pbVar11 + 1;
      bVar8 = *pbVar11;
      pbVar11 = pbVar11 + 2;
      bVar13 = *pbVar5;
    }
    pbVar5 = pbVar11;
    if (bVar18) {
      pbVar5 = pbVar11 + 1;
      uVar4 = (uint)*pbVar11;
    }
    if (bVar19) {
      pbVar11 = pbVar10 + 1;
      *pbVar10 = bVar8;
      pbVar10 = pbVar10 + 2;
      *pbVar11 = bVar13;
    }
    pbVar11 = pbVar10;
    if (bVar18) {
      pbVar11 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
    }
    return CONCAT44(pbVar5,pbVar11);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return CONCAT44(iVar7,uVar3);
}



// Address: 4a00d870

void FUN_4a00d870(int param_1,uchar *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;

  puVar1 = PTR_DAT_4a00d980;
  iVar3 = FUN_4a16168c();
  if (iVar3 != 0) {
    FUN_4a15f3b0(puVar1);
  }
  puVar2 = PTR_DAT_4a00d984;
  if (*PTR_DAT_4a00d984 == '\0') {
    FUN_4a01d5a0();
  }
  if (puVar2[1] != '\0') {
    FUN_4a03b65c(param_2,param_3,0);
  }
  uVar6 = DAT_4a00d988;
  if (param_1 == 0) {
    if (*(int *)(puVar2 + 8) == 0) {
      puVar4 = (uint *)FUN_4a00d394(DAT_4a00d988);
      *(uint **)(puVar2 + 8) = puVar4;
      s3c_zero_end(puVar4,uVar6);
    }
    puVar4 = *(uint **)(puVar2 + 8);
    iVar3 = *(int *)(puVar2 + 0xc);
  }
  else {
    if (*(int *)(puVar2 + 4) == 0) {
      puVar4 = (uint *)FUN_4a00d394(DAT_4a00d988);
      *(uint **)(puVar2 + 4) = puVar4;
      s3c_zero_end(puVar4,uVar6);
    }
    puVar4 = *(uint **)(puVar2 + 4);
    iVar3 = *(int *)(puVar2 + 0x10);
  }
  iVar5 = s3c_string_length(puVar4);
  uVar6 = (DAT_4a00d988 - 1) - iVar5;
  if (uVar6 <= param_3) {
    param_3 = uVar6;
  }
  s3c_string_append_count((uchar *)puVar4,param_2,param_3);
  iVar5 = s3c_string_length(puVar4);
  if (iVar5 != 0) {
    while (puVar7 = s3c_string_find_byte((int)puVar4,'\n'), puVar7 != (uchar *)0x0) {
      if (iVar3 != 0) {
        host_s3eFileWrite_thumb(puVar4,(int)puVar7 - (int)puVar4,1,iVar3);
      }
      *puVar7 = '\0';
      host_s3eDebugOutputString_thumb(puVar4);
      iVar5 = s3c_string_length((uint *)(puVar7 + 1));
      s3c_move_endpoints(puVar4,(uint *)(puVar7 + 1),iVar5 + 1);
    }
    uVar6 = s3c_string_length(puVar4);
    if ((uVar6 != 0) && (0x7e < uVar6)) {
      *(undefined1 *)((int)puVar4 + uVar6) = 0;
      host_s3eDebugOutputString_thumb(puVar4);
      if (iVar3 != 0) {
        *(undefined1 *)((int)puVar4 + uVar6) = 10;
        host_s3eFileWrite_thumb(puVar4,uVar6,1,iVar3);
      }
      *(undefined1 *)puVar4 = 0;
    }
  }
  iVar3 = FUN_4a16168c();
  if (iVar3 != 0) {
    FUN_4a15f428(puVar1);
  }
  return;
}



// Address: 4a15a0d0

void FUN_4a15a0d0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;

  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(undefined4 *)(*param_1 + 0x18) = 0x3e;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1d0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(undefined4 *)(*param_1 + 0x18) = 0x1d0;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = *param_1;
  uVar2 = param_1[3];
  s3c_zero_aligned_end(param_1,0x1d0);
  param_1[4] = 1;
  *param_1 = uVar1;
  param_1[3] = uVar2;
  FUN_4a159a5c(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x4c] = 0;
  FUN_4a1595cc(param_1);
  FUN_4a1594b8(param_1);
  param_1[5] = 200;
  return;
}



// Address: 4a0e7fe4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_4a0e7fe4(int param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  byte bVar13;
  uint in_r12;
  uint uVar14;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;

  puVar3 = param_4;
  puVar1 = (uint *)FUN_4a14278c();
  uVar8 = (uint)*(ushort *)(param_1 + 0x12);
  uVar10 = (uint)puVar1 >> 3;
  if (uVar8 == param_3) {
    return puVar1;
  }
  uVar17 = FUN_4a0066d8(param_3,uVar8);
  uVar14 = (uint)(uVar17 >> 0x20);
  uVar2 = param_2 * uVar10;
  puVar1 = (uint *)(uVar8 * uVar2 + (int)param_4);
  uVar12 = 1;
  uVar8 = uVar14;
  if (1 < (uint)uVar17) {
    do {
      uVar9 = 0;
      puVar11 = param_4;
      if (*(short *)(param_1 + 0x12) != 0) {
        do {
          uVar18 = s3c_copy_forward_endpoints(puVar1,puVar11,uVar2);
          uVar8 = (uint)(uVar18 >> 0x20);
          puVar11 = (uint *)(param_2 * uVar10 + (int)puVar11);
          puVar1 = (uint *)(param_2 * uVar10 + (int)puVar1);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(param_1 + 0x12));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)uVar17);
  }
  uVar10 = 0;
  puVar11 = param_4;
  if (uVar14 != 0) {
    do {
      uVar18 = s3c_copy_forward_endpoints(puVar1,puVar11,uVar2);
      uVar8 = (uint)(uVar18 >> 0x20);
      uVar10 = uVar10 + 1;
      puVar1 = (uint *)((int)puVar1 + uVar2);
      puVar11 = (uint *)((int)puVar11 + uVar2);
    } while (uVar10 < uVar14);
  }
  if (0x1ffffffff < uVar17) {
    puVar1 = (uint *)((int)puVar1 - uVar2);
    if (3 < uVar2) {
      uVar10 = (uint)puVar1 & 3;
      in_r12 = uVar10;
      if (uVar10 != 0) {
        bVar6 = (byte)*param_4;
        puVar3 = (uint *)((int)param_4 + 1);
        if (uVar10 < 3) {
          puVar3 = (uint *)((int)param_4 + 2);
          in_r12 = (uint)*(byte *)((int)param_4 + 1);
        }
        *(byte *)puVar1 = bVar6;
        param_4 = puVar3;
        if (uVar10 < 2) {
          param_4 = (uint *)((int)puVar3 + 1);
          bVar6 = (byte)*puVar3;
        }
        puVar3 = (uint *)((int)puVar1 + 1);
        if (uVar10 < 3) {
          puVar3 = (uint *)((int)puVar1 + 2);
          *(byte *)((int)puVar1 + 1) = (byte)in_r12;
        }
        uVar2 = (uVar2 + uVar10) - 4;
        puVar1 = puVar3;
        if (uVar10 < 2) {
          puVar1 = (uint *)((int)puVar3 + 1);
          *(byte *)puVar3 = bVar6;
        }
      }
      puVar3 = (uint *)((uint)param_4 & 3);
      if (puVar3 == (uint *)0x0) {
        bVar15 = 0x1f < uVar2;
        uVar2 = uVar2 - 0x20;
        uVar10 = 0;
        if (bVar15) {
          do {
            if (bVar15) {
              uVar10 = param_4[1];
              uVar8 = param_4[2];
              uVar14 = param_4[3];
              *puVar1 = *param_4;
              puVar1[1] = uVar10;
              puVar1[2] = uVar8;
              puVar1[3] = uVar14;
              uVar10 = param_4[4];
              uVar8 = param_4[5];
              uVar14 = param_4[6];
              uVar12 = param_4[7];
              param_4 = param_4 + 8;
              puVar1[4] = uVar10;
              puVar1[5] = uVar8;
              puVar1[6] = uVar14;
              puVar1[7] = uVar12;
              puVar1 = puVar1 + 8;
              bVar15 = 0x1f < uVar2;
              uVar2 = uVar2 - 0x20;
            }
          } while (bVar15);
        }
        if ((bool)((byte)(uVar2 >> 4) & 1)) {
          uVar10 = *param_4;
          uVar8 = param_4[1];
          uVar14 = param_4[2];
          uVar12 = param_4[3];
          param_4 = param_4 + 4;
          *puVar1 = uVar10;
          puVar1[1] = uVar8;
          puVar1[2] = uVar14;
          puVar1[3] = uVar12;
          puVar1 = puVar1 + 4;
        }
        if ((int)(uVar2 << 0x1c) < 0) {
          uVar10 = *param_4;
          uVar8 = param_4[1];
          param_4 = param_4 + 2;
          *puVar1 = uVar10;
          puVar1[1] = uVar8;
          puVar1 = puVar1 + 2;
        }
        puVar11 = puVar1;
        puVar3 = param_4;
        if ((bool)((byte)(uVar2 >> 2) & 1)) {
          puVar3 = param_4 + 1;
          uVar10 = *param_4;
          puVar11 = puVar1 + 1;
          *puVar1 = uVar10;
        }
        uVar7 = (undefined2)uVar10;
        if ((uVar2 & 3) != 0) {
          bVar16 = (bool)((byte)(uVar2 >> 1) & 1);
          uVar2 = uVar2 << 0x1f;
          bVar15 = (int)uVar2 < 0;
          puVar1 = puVar3;
          if (bVar16) {
            puVar1 = (uint *)((int)puVar3 + 2);
            uVar7 = (undefined2)*puVar3;
          }
          if (bVar15) {
            uVar2 = (uint)(byte)*puVar1;
          }
          puVar3 = puVar11;
          if (bVar16) {
            puVar3 = (uint *)((int)puVar11 + 2);
            *(undefined2 *)puVar11 = uVar7;
          }
          puVar1 = puVar3;
          if (bVar15) {
            puVar1 = (uint *)((int)puVar3 + 1);
            *(byte *)puVar3 = (byte)uVar2;
          }
          return puVar1;
        }
        return puVar11;
      }
      bVar15 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      if (bVar15) {
        param_4 = (uint *)((int)param_4 - (int)puVar3);
        in_r12 = *param_4;
        puVar11 = puVar1;
        if (puVar3 == (uint *)0x2) {
          do {
            puVar4 = param_4;
            uVar10 = in_r12 >> 0x10;
            param_4 = puVar4 + 1;
            in_r12 = *param_4;
            bVar15 = 3 < uVar2;
            uVar2 = uVar2 - 4;
            puVar3 = (uint *)(uVar10 | in_r12 << 0x10);
            puVar1 = puVar11 + 1;
            *puVar11 = (uint)puVar3;
            puVar11 = puVar1;
          } while (bVar15);
          param_4 = (uint *)((int)puVar4 + 6);
        }
        else if (puVar3 < (uint *)0x3) {
          do {
            puVar4 = param_4;
            uVar10 = in_r12 >> 8;
            param_4 = puVar4 + 1;
            in_r12 = *param_4;
            bVar15 = 3 < uVar2;
            uVar2 = uVar2 - 4;
            puVar3 = (uint *)(uVar10 | in_r12 << 0x18);
            puVar1 = puVar11 + 1;
            *puVar11 = (uint)puVar3;
            puVar11 = puVar1;
          } while (bVar15);
          param_4 = (uint *)((int)puVar4 + 5);
        }
        else {
          do {
            puVar4 = param_4;
            uVar10 = in_r12 >> 0x18;
            param_4 = puVar4 + 1;
            in_r12 = *param_4;
            bVar15 = 3 < uVar2;
            uVar2 = uVar2 - 4;
            puVar3 = (uint *)(uVar10 | in_r12 << 8);
            puVar1 = puVar11 + 1;
            *puVar11 = (uint)puVar3;
            puVar11 = puVar1;
          } while (bVar15);
          param_4 = (uint *)((int)puVar4 + 7);
        }
      }
    }
    bVar13 = (byte)in_r12;
    bVar6 = (byte)puVar3;
    bVar16 = (bool)((byte)(uVar2 >> 1) & 1);
    uVar2 = uVar2 << 0x1f;
    bVar15 = (int)uVar2 < 0;
    if (bVar16) {
      pbVar5 = (byte *)((int)param_4 + 1);
      bVar6 = (byte)*param_4;
      param_4 = (uint *)((int)param_4 + 2);
      bVar13 = *pbVar5;
    }
    if (bVar15) {
      uVar2 = (uint)(byte)*param_4;
    }
    if (bVar16) {
      pbVar5 = (byte *)((int)puVar1 + 1);
      *(byte *)puVar1 = bVar6;
      puVar1 = (uint *)((int)puVar1 + 2);
      *pbVar5 = bVar13;
    }
    puVar3 = puVar1;
    if (bVar15) {
      puVar3 = (uint *)((int)puVar1 + 1);
      *(byte *)puVar1 = (byte)uVar2;
    }
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0e80e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (uint *)(*UNRECOVERED_JUMPTABLE)(uVar14,uVar8);
  return puVar3;
}



// Address: 4a0841dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_4a0841dc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;

  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
    if (*(int *)(param_1 + 400) != 0) {
      puVar3 = *(uint **)(param_1 + 0x17c);
      FUN_4a001134((undefined4 *)(param_1 + 0x17c),param_2,0x48);
      *(undefined4 *)(param_1 + 0x17c) = puVar3;
      uVar6 = s3c_copy_forward_endpoints(puVar3,(uint *)*param_2,(param_2[0xd] * 2 + -1) * 2);
      puVar1 = (undefined4 *)(uVar6 >> 0x20);
    }
    iVar5 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      do {
        iVar2 = 0;
        if (*(char *)(param_1 + 0x27) != '\0') {
          do {
            puVar1 = *(undefined4 **)(param_1 + iVar5 * 4 + 0x1c4);
            if (puVar1[iVar2 * 0x12 + 5] != 0) {
              puVar1 = puVar1 + iVar2 * 0x12;
              puVar3 = (uint *)*puVar1;
              puVar4 = (undefined4 *)(param_2[iVar5 + 0x12] + iVar2 * 0x48);
              FUN_4a001134(puVar1,puVar4,0x48);
              *puVar1 = puVar3;
              uVar6 = s3c_copy_forward_endpoints(puVar3,(uint *)*puVar4,(puVar4[0xd] * 2 + -1) * 2);
              puVar1 = (undefined4 *)(uVar6 >> 0x20);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x27));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x28));
    }
    return ZEXT48(puVar1) << 0x20;
  }
  return 3;
}



// Address: 4a0ad4b8

void FUN_4a0ad4b8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint divisor;
  ulonglong uVar3;

  if (((*(char *)(param_1 + 0x38) == '\0') && (*(int *)(param_1 + 0x34) != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x30),
     (((iVar2 == 1 || iVar2 == 2) || iVar2 == 3) || iVar2 == 5) || iVar2 == 4)) {
    thunk_FUN_4a161530();
  }
  *(int *)(param_1 + 0x30) = param_4;
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = param_3;
  if (*(char *)(param_1 + 0x38) != '\0') goto LAB_4a0ad5b8;
  if (param_4 == 1 || param_4 == 2) {
LAB_4a0ad548:
    uVar1 = thunk_FUN_4a161570();
  }
  else if (param_4 == 3) {
LAB_4a0ad55c:
    uVar1 = thunk_FUN_4a161570(param_2 * param_3 * 4);
  }
  else {
    if (param_4 == 5) goto LAB_4a0ad548;
    if (param_4 == 4) goto LAB_4a0ad55c;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = 1;
    break;
  case 2:
  case 5:
    iVar2 = 2;
    break;
  case 3:
  case 4:
    iVar2 = 4;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x2c) * iVar2;
LAB_4a0ad5b8:
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    divisor = 0;
    break;
  case 1:
    divisor = 1;
    break;
  case 2:
  case 5:
    divisor = 2;
    break;
  case 3:
  case 4:
    divisor = 4;
  }
  uVar3 = s3c_divide_signed32(*(uint *)(param_1 + 0x40),divisor);
  *(int *)(param_1 + 0x44) = (int)uVar3;
  return;
}



// Address: 4a03b65c

void FUN_4a03b65c(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint auStack_1c [2];

  iVar2 = DAT_4a03b788;
  iVar9 = DAT_4a03b788 + -0x20;
  auStack_1c[0] = param_2;
  auStack_1c[1] = param_3;
  uVar4 = host_s3eSurfaceGetInt_thumb(0);
  uVar5 = host_s3eDebugGetInt_thumb(5);
  uVar10 = s3c_divide_signed32(uVar4,uVar5);
  *(int *)((int)auStack_1c + DAT_4a03b78c + iVar2 + 4) = (int)uVar10;
  s3c_string_copy_pad((uint *)((int)auStack_1c + iVar2 + 4),param_1,param_2);
  (&stack0xfffffff2)[iVar2] = 0;
  while( true ) {
    puVar7 = s3c_memory_find((uchar *)param_1,'\n',param_2);
    puVar3 = PTR_DAT_4a03b790;
    *(uchar **)(&stack0xffffffec + DAT_4a03b78c + iVar2) = puVar7;
    if (puVar7 == (uchar *)0x0) break;
    uVar4 = *(int *)(&stack0xffffffec + DAT_4a03b78c + iVar2) - (int)param_1;
    param_2 = (param_2 - uVar4) - 1;
    iVar8 = s3c_string_length(*(uint **)(PTR_DAT_4a03b790 + 0x18));
    if ((uint)(DAT_4a03b794 - iVar8) <= uVar4) {
      iVar8 = s3c_string_length(*(uint **)(puVar3 + 0x18));
      uVar4 = DAT_4a03b794 - iVar8;
    }
    puVar3 = PTR_DAT_4a03b790;
    s3c_string_append_count(*(uchar **)(PTR_DAT_4a03b790 + 0x18),(uchar *)param_1,uVar4);
    uVar4 = s3c_string_length(*(uint **)(puVar3 + 0x18));
    iVar8 = *(int *)(puVar3 + 0x18);
    for (; uVar4 != 0; uVar4 = uVar4 - uVar5) {
      iVar1 = DAT_4a03b78c + iVar9;
      uVar5 = uVar4;
      if (*(uint *)((int)auStack_1c + iVar1 + 0x24) <= uVar4) {
        uVar5 = *(uint *)((int)auStack_1c + iVar1 + 0x24);
      }
      uVar6 = FUN_4a01c9ec();
      *(uint *)((int)auStack_1c + iVar2) = (uint)*(byte *)(iVar8 + uVar5);
      *(undefined1 *)(iVar8 + uVar5) = 0;
      host_s3eDebugPrint_thumb(0,uVar6,iVar8,0);
      *(char *)(iVar8 + uVar5) = (char)*(undefined4 *)((int)auStack_1c + iVar2);
      iVar8 = iVar8 + uVar5;
    }
    param_1 = (uint *)(*(int *)(&stack0xffffffec + DAT_4a03b78c + iVar2) + 1);
    **(undefined1 **)(PTR_DAT_4a03b790 + 0x18) = 0;
  }
  if (param_2 != 0) {
    iVar8 = s3c_string_length(*(uint **)(PTR_DAT_4a03b790 + 0x18));
    iVar9 = DAT_4a03b794;
    if ((uint)(DAT_4a03b794 - iVar8) <= param_2) {
      iVar8 = s3c_string_length(*(uint **)(puVar3 + 0x18));
      param_2 = iVar9 - iVar8;
    }
    s3c_string_append_count(*(uchar **)(puVar3 + 0x18),(uchar *)param_1,param_2);
  }
  puVar3 = PTR_DAT_4a03b790;
  iVar8 = s3c_string_length(*(uint **)(PTR_DAT_4a03b790 + 0x18));
  iVar9 = DAT_4a03b78c;
  *(int *)(puVar3 + 0x28) = iVar8;
  if (*(int *)(&stack0xfffffff8 + iVar9 + iVar2) != 0) {
    iVar9 = host_s3eDebugGetInt_thumb(6);
    host_s3eDebugPrint_thumb(0,iVar9 * *(int *)(puVar3 + 0x1c),*(undefined4 *)(puVar3 + 0x18),0);
    host_s3eSurfaceShow_thumb();
  }
  return;
}



// Address: 4a0ec750

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ec750(int param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *destination;
  uint uVar5;
  uint *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar7;

  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  uVar4 = param_2;
  if (((param_2 & 2) != 0) && ((*(ushort *)(param_1 + 4) & 2) == 0)) {
    puVar6 = *(uint **)(param_1 + 0x1c);
    uVar3 = FUN_4a142870(param_1);
    uVar3 = FUN_4a0eb85c(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar4 = FUN_4a142870(param_1);
    uVar7 = s3c_copy_forward_endpoints(*(uint **)(param_1 + 0x1c),puVar6,uVar4);
    uVar4 = (uint)(uVar7 >> 0x20);
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | 2;
  }
  if ((param_2 & 1) != 0) {
    if ((*(ushort *)(param_1 + 4) & 1) == 0) {
      puVar6 = *(uint **)(param_1 + 0x18);
      uVar1 = *(ushort *)(param_1 + 0x14);
      uVar4 = FUN_4a14278c(param_1,uVar4);
      uVar5 = (uint)*(ushort *)(param_1 + 0x10);
      if (uVar4 < 5) {
        uVar5 = uVar5 + 1;
      }
      sVar2 = (short)(uVar5 * uVar4 >> 3);
      *(ushort *)(param_1 + 0x14) = sVar2 + (2U - sVar2 & 1);
      uVar3 = thunk_FUN_4a14283c(param_1);
      destination = (uint *)FUN_4a0eb85c(param_1,uVar3);
      *(uint **)(param_1 + 0x18) = destination;
      uVar4 = 0;
      if (*(short *)(param_1 + 0x12) != 0) {
        do {
          s3c_copy_forward_endpoints(destination,puVar6,(uint)*(ushort *)(param_1 + 0x14));
          uVar4 = uVar4 + 1;
          puVar6 = (uint *)((int)puVar6 + (uint)uVar1);
          destination = (uint *)((int)destination + (uint)*(ushort *)(param_1 + 0x14));
        } while (uVar4 < *(ushort *)(param_1 + 0x12));
      }
      *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | 1;
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0ec7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a164e90

undefined4 FUN_4a164e90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar3 + 0x34) == 0) {
    iVar1 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar3 + 0x24) & 0xff),1);
    *(int *)(iVar3 + 0x34) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    *(int *)(iVar3 + 0x28) = 1 << (*(uint *)(iVar3 + 0x24) & 0xff);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0x28);
  uVar4 = param_2 - *(int *)(param_1 + 0x10);
  if (uVar4 < uVar2) {
    uVar2 = uVar2 - *(int *)(iVar3 + 0x30);
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    s3c_copy_forward_endpoints
              ((uint *)(*(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x34)),
               (uint *)(*(int *)(param_1 + 0xc) - uVar4),uVar2);
    uVar4 = uVar4 - uVar2;
    if (uVar4 == 0) {
      uVar4 = *(int *)(iVar3 + 0x30) + uVar2;
      *(uint *)(iVar3 + 0x30) = uVar4;
      if (uVar4 == *(uint *)(iVar3 + 0x28)) {
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      if (*(uint *)(iVar3 + 0x28) <= *(uint *)(iVar3 + 0x2c)) {
        return 0;
      }
      iVar1 = *(uint *)(iVar3 + 0x2c) + uVar2;
    }
    else {
      s3c_copy_forward_endpoints
                (*(uint **)(iVar3 + 0x34),(uint *)(*(int *)(param_1 + 0xc) - uVar4),uVar4);
      *(uint *)(iVar3 + 0x30) = uVar4;
      iVar1 = *(int *)(iVar3 + 0x28);
    }
    *(int *)(iVar3 + 0x2c) = iVar1;
  }
  else {
    s3c_copy_forward_endpoints
              (*(uint **)(iVar3 + 0x34),(uint *)(*(int *)(param_1 + 0xc) - uVar2),uVar2);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x28);
  }
  return 0;
}



// Address: 4a0c314c

undefined4 * FUN_4a0c314c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *destination;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_34 [24];
  uint *local_1c;

  uVar3 = thunk_FUN_4a161570(0x38);
  puVar1 = (undefined4 *)FUN_4a0c5088(uVar3,0);
  *puVar1 = PTR_PTR_4a0be720;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  thunk_FUN_4a161570(0x24);
  iVar2 = FUN_4a0ecbc4();
  FUN_4a14e568(*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_4a01d2b0();
  FUN_4a0ebaa0(iVar2,uVar3);
  puVar1[0xb] = (uint)*(ushort *)(iVar2 + 0x10);
  puVar1[0xc] = (uint)*(ushort *)(iVar2 + 0x12);
  FUN_4a0c507c(puVar1);
  FUN_4a0ecbc4(auStack_34);
  FUN_4a0ecab0(auStack_34,0xe);
  FUN_4a0ebe9c(auStack_34,puVar1[0xb]);
  FUN_4a0ecb88(auStack_34,puVar1[0xc]);
  FUN_4a0e681c(iVar2,auStack_34,0);
  if (iVar2 != 0) {
    FUN_4a0ecbf0(iVar2);
    thunk_FUN_4a161530();
  }
  destination = (uint *)thunk_FUN_4a161570(puVar1[0xc] * puVar1[0xb] * 4);
  puVar1[7] = destination;
  uVar4 = s3c_copy_forward_endpoints(destination,local_1c,puVar1[0xc] * puVar1[0xb] * 4);
  *(undefined1 *)(puVar1 + 0xd) = 1;
  FUN_4a0ecbf0(auStack_34,(int)(uVar4 >> 0x20));
  return puVar1;
}



// Address: 4a114098

int FUN_4a114098(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  uint local_40;
  int local_3c;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;

  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar1 = FUN_4a146cd8(param_2);
  local_34 = *(undefined4 *)(param_1 + 0x28);
  iVar7 = 0;
  iVar8 = 0;
  FUN_4a10ca70(auStack_48,param_1);
  iVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_40 - 1);
  iVar6 = 0;
  if (0 < (int)local_40) {
    do {
      uVar9 = s3c_divide_signed32(iVar2 + iVar6,local_40);
      if (local_3c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_3c + 8);
      }
      iVar5 = *(int *)(iVar3 + (int)(uVar9 >> 0x20) * 4);
      iVar3 = FUN_4a143ac8(local_34,*(undefined4 *)(iVar5 + 0x28));
      if (((((*(ushort *)(iVar3 + 0x18) & 0x100) != 0) && (iVar3 = FUN_4a1465dc(iVar5), iVar3 != 0))
          && (iVar3 = FUN_4a146cd8(iVar5), iVar3 == iVar1)) &&
         (iVar3 = FUN_4a145f98(local_28,iVar5), iVar3 != 0)) {
        iVar3 = *(int *)(param_2 + 0x44) - *(int *)(iVar5 + 0x44);
        iVar4 = *(int *)(param_2 + 0x4c) - *(int *)(iVar5 + 0x4c);
        if (iVar3 <= -iVar3) {
          iVar3 = -iVar3;
        }
        if (iVar4 <= -iVar4) {
          iVar4 = -iVar4;
        }
        if ((iVar3 + iVar4 < iVar7) || (iVar7 == 0)) {
          iVar7 = iVar3 + iVar4;
          iVar8 = iVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_40);
  }
  FUN_4a16a5f4(auStack_48);
  return iVar8;
}



// Address: 4a01d924

uint * FUN_4a01d924(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;

  if (param_2 == -1) {
    if (param_3 == 0) {
LAB_4a01d974:
      iVar4 = FUN_4a039bec(param_1,param_2,PTR_DAT_4a01da74,10000);
      uVar5 = (iVar4 + 1) * 2;
      *(undefined2 *)(PTR_DAT_4a01da74 + iVar4 * 2) = 0;
      puVar1 = (uint *)thunk_FUN_4a161570(uVar5);
      s3c_copy_forward_endpoints(puVar1,(uint *)PTR_DAT_4a01da74,uVar5);
      return puVar1;
    }
    if (param_3 == 1) {
      param_2 = s3c_string_length(param_1);
LAB_4a01d9cc:
      uVar5 = param_2 + 1;
      puVar1 = (uint *)thunk_FUN_4a161570(uVar5 * 2);
      if (0 < (int)uVar5) {
        puVar2 = (uint *)((int)param_1 + -1);
        puVar3 = (uint *)((int)puVar1 + -2);
        if ((uVar5 & 1) != 0) {
          *(ushort *)puVar1 = (ushort)(byte)*param_1;
          puVar2 = param_1;
          puVar3 = puVar1;
        }
        for (iVar4 = (int)uVar5 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(ushort *)((int)puVar3 + 2) = (ushort)*(byte *)((int)puVar2 + 1);
          puVar2 = (uint *)((int)puVar2 + 2);
          puVar3 = puVar3 + 1;
          *(ushort *)puVar3 = (ushort)*(byte *)puVar2;
        }
      }
      *(undefined2 *)((int)puVar1 + uVar5 * 2 + -2) = 0;
      return puVar1;
    }
    if (param_3 != 2) {
      return (uint *)0x0;
    }
    param_2 = s3c_utf16_length((short *)param_1);
  }
  else {
    if (param_3 == 0) goto LAB_4a01d974;
    if (param_3 == 1) goto LAB_4a01d9cc;
    if (param_3 != 2) {
      return (uint *)0x0;
    }
  }
  puVar1 = (uint *)thunk_FUN_4a161570(param_2 + 2U);
  s3c_copy_forward_endpoints(puVar1,param_1,param_2 + 2U);
  *(undefined2 *)(((param_2 + 1) - (param_2 + 1 >> 0x1f) & 0xfffffffeU) + (int)puVar1) = 0;
  return puVar1;
}



// Address: 4a090094

int * FUN_4a090094(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint *destination;
  uint *puVar3;
  int iVar4;
  uint *source;
  int iVar5;
  uint *puVar6;
  int local_34;
  int local_30 [3];

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  if (param_6 != 0) {
    iVar1 = FUN_4a15e080(param_6 << 2);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_6 * 4;
  }
  iVar1 = 0;
  if (0 < param_6) {
    do {
      local_30[2] = 0;
      puVar6 = (uint *)param_1[1];
      if (puVar6 == (uint *)param_1[2]) {
        local_30[0] = 1;
        local_30[1] = 0;
        local_34 = param_1[1] - *param_1 >> 2;
        if (local_34 == 0) {
          piVar2 = local_30;
        }
        else {
          piVar2 = &local_34;
        }
        iVar5 = *piVar2 + local_34;
        if (iVar5 == 0) {
          destination = (uint *)0x0;
        }
        else {
          destination = (uint *)FUN_4a15e080(iVar5 * 4);
          if (destination == (uint *)0x0) {
            destination = (uint *)FUN_4a1669a8();
          }
        }
        source = (uint *)*param_1;
        iVar4 = local_30[0];
        puVar3 = destination;
        if (puVar6 != source) {
          puVar3 = s3c_move_preserving_destination(destination,source,(int)puVar6 - (int)source);
          iVar4 = local_30[0];
          puVar3 = (uint *)(((int)puVar6 - (int)source) + (int)puVar3);
        }
        do {
          iVar4 = iVar4 + -1;
          puVar6 = puVar3 + 1;
          *puVar3 = local_30[2];
          puVar3 = puVar6;
        } while (iVar4 != 0);
        if (*param_1 != 0) {
          FUN_4a14f21c();
        }
        param_1[2] = (int)(destination + iVar5);
        *param_1 = (int)destination;
        param_1[1] = (int)puVar6;
      }
      else {
        *puVar6 = 0;
        param_1[1] = param_1[1] + 4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_6);
  }
  return param_1;
}



// Address: 4a0e82b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0e82b8(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint count;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *destination;
  ulonglong uVar5;
  uint local_34;

  uVar1 = FUN_4a14278c();
  uVar2 = (uint)*(ushort *)(param_1 + 0x10);
  uVar1 = uVar1 >> 3;
  if (uVar2 == param_2) {
    puVar4 = *(uint **)(param_1 + 0x18);
    uVar2 = 0;
    if (*(short *)(param_1 + 0x12) != 0) {
      do {
        s3c_copy_forward_endpoints(param_3,puVar4,*(ushort *)(param_1 + 0x10) * uVar1);
        param_3 = (uint *)(param_2 * uVar1 + (int)param_3);
        puVar4 = (uint *)((int)puVar4 + (uint)*(ushort *)(param_1 + 0x14));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x12));
      return;
    }
    return;
  }
  uVar5 = FUN_4a0066d8(param_2,uVar2);
  count = (int)(uVar5 >> 0x20) * uVar1;
  puVar4 = *(uint **)(param_1 + 0x18);
  local_34 = 0;
  if (*(short *)(param_1 + 0x12) != 0) {
    do {
      uVar3 = 0;
      destination = param_3;
      if ((uint)uVar5 != 0) {
        do {
          s3c_copy_forward_endpoints(destination,puVar4,uVar2 * uVar1);
          uVar3 = uVar3 + 1;
          destination = (uint *)((int)destination + uVar2 * uVar1);
        } while (uVar3 < (uint)uVar5);
      }
      s3c_copy_forward_endpoints(destination,puVar4,count);
      if (0x1ffffffff < uVar5) {
        s3c_copy_forward_endpoints
                  ((uint *)((int)destination + (count - uVar1)),
                   (uint *)((*(ushort *)(param_1 + 0x10) - 1) * uVar1 + (int)puVar4),uVar1);
      }
      puVar4 = (uint *)((int)puVar4 + (uint)*(ushort *)(param_1 + 0x14));
      param_3 = (uint *)((int)param_3 + param_2 * uVar1);
      local_34 = local_34 + 1;
    } while (local_34 < *(ushort *)(param_1 + 0x12));
    return;
  }
  return;
}



// Address: 4a084dd8

void FUN_4a084dd8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;

  param_2 = *(int *)(param_1 + 0x6c) + param_2;
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 < 0x1e) {
    return;
  }
  do {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 8);
    }
    iVar6 = 0;
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x5c) * 4) = *(undefined4 *)(param_1 + 0x70);
    uVar7 = *(uint *)(param_1 + 0x54);
    if (0 < (int)uVar7) {
      iVar1 = *(int *)(param_1 + 0x24);
      iVar8 = *(int *)(param_1 + 0x38);
      iVar9 = *(int *)(param_1 + 0x5c);
      do {
        uVar10 = s3c_divide_signed32(iVar9 + iVar6,uVar7);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar1 + 8);
        }
        if (iVar8 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar8 + 8);
        }
        uVar4 = FUN_4a17211c(*(undefined4 *)(iVar3 + (int)(uVar10 >> 0x20) * 4),
                             *(undefined4 *)(iVar2 + iVar6 * 4));
        uVar4 = FUN_4a171a94(uVar4,*(undefined4 *)(param_1 + 0x68));
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_1 + 0x68) = uVar4;
      } while (iVar6 < (int)uVar7);
    }
    iVar1 = *(int *)(param_1 + 0x5c) + -1;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 < 0) {
      *(uint *)(param_1 + 0x5c) = iVar1 + uVar7;
    }
    uVar7 = *(uint *)(param_1 + 0x58);
    if (0 < (int)uVar7) {
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar8 = *(int *)(param_1 + 0x60);
      iVar9 = *(int *)(param_1 + 0x10);
      iVar1 = 0;
      iVar2 = 0;
      do {
        uVar10 = s3c_divide_signed32(iVar8 + iVar1,uVar7);
        if (iVar9 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar9 + 8);
        }
        if (iVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar6 + 8);
        }
        uVar4 = FUN_4a17211c(*(undefined4 *)(iVar5 + (int)(uVar10 >> 0x20) * 4),
                             *(undefined4 *)(iVar3 + iVar1 * 4));
        uVar4 = FUN_4a1724e0(uVar4,*(undefined4 *)(param_1 + 0x68));
        iVar1 = iVar1 + 1;
        *(undefined4 *)(param_1 + 0x68) = uVar4;
      } while (iVar1 < (int)uVar7);
      if (iVar6 != 0) {
        iVar2 = *(int *)(iVar6 + 8);
      }
      *(undefined4 *)(iVar2 + iVar8 * 4) = *(undefined4 *)(param_1 + 0x68);
      iVar1 = *(int *)(param_1 + 0x60) + -1;
      *(int *)(param_1 + 0x60) = iVar1;
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x60) = iVar1 + *(int *)(param_1 + 0x58);
      }
    }
    iVar1 = *(int *)(param_1 + 0x6c) + -0x1e;
    *(int *)(param_1 + 0x6c) = iVar1;
  } while (0x1d < iVar1);
  return;
}



// Address: 4a14bef8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14bef8(int param_1)

{
  uint divisor;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint divisor_00;
  undefined1 *puVar10;
  uint dividend;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_30;

  iVar12 = *(int *)(param_1 + 0x1cc);
  if (*(int *)(param_1 + 0x58) == 1) {
    local_30 = 0x1fe;
    *(undefined4 *)(iVar12 + 0x1c) = 1;
  }
  else {
    local_30 = 0;
    *(undefined4 *)(iVar12 + 0x1c) = 0;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_30 + 0x100,*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(iVar12 + 0x18) = uVar3;
  dividend = *(uint *)(iVar12 + 0x14);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      divisor_00 = *(uint *)(iVar12 + iVar11 * 4 + 0x20);
      uVar13 = s3c_divide_signed32(dividend,divisor_00);
      dividend = (uint)uVar13;
      if (local_30 != 0) {
        *(int *)(*(int *)(iVar12 + 0x18) + iVar11 * 4) =
             *(int *)(*(int *)(iVar12 + 0x18) + iVar11 * 4) + 0xff;
      }
      iVar8 = 0;
      puVar10 = *(undefined1 **)(*(int *)(iVar12 + 0x18) + iVar11 * 4);
      divisor = (divisor_00 - 1) * 2;
      uVar14 = s3c_divide_signed32(divisor_00 + 0xfe,divisor);
      iVar7 = (int)uVar14;
      iVar9 = 0;
      do {
        while (iVar7 < iVar9) {
          iVar8 = iVar8 + 1;
          uVar14 = s3c_divide_signed32((divisor_00 - 1) + (iVar8 * 2 + 1) * 0xff,divisor);
          iVar7 = (int)uVar14;
        }
        iVar6 = iVar9 + 1;
        puVar10[iVar9] = (char)iVar8 * (char)uVar13;
        iVar9 = iVar6;
      } while (iVar6 < 0x100);
      if (local_30 != 0) {
        uVar1 = *puVar10;
        uVar2 = puVar10[0xff];
        puVar4 = puVar10 + -1;
        puVar10[-1] = uVar1;
        puVar5 = puVar10 + 0x100;
        iVar7 = 0x7f;
        puVar10[0x100] = uVar2;
        do {
          puVar4[-1] = uVar1;
          puVar5[1] = uVar2;
          puVar4 = puVar4 + -2;
          *puVar4 = uVar1;
          iVar7 = iVar7 + -1;
          puVar5 = puVar5 + 2;
          *puVar5 = uVar2;
        } while (iVar7 != 0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x78));
    return;
  }
  return;
}



// Address: 4a047ea8

void FUN_4a047ea8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint divisor;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  iVar3 = *(int *)PTR_DAT_4a048034;
  iVar4 = *(int *)(iVar3 + 0x34c);
  iVar5 = *(int *)(iVar3 + 0x350);
  if ((*(uint *)(iVar3 + 0x354) & 1) == 0) {
    iVar5 = iVar5 >> (*(uint *)(iVar3 + 0x66c) & 0xff);
  }
  else {
    iVar4 = iVar4 >> (*(uint *)(iVar3 + 0x66c) & 0xff);
  }
  uVar10 = s3c_divide_signed32(0x1000000,iVar4 << 5);
  *(int *)(iVar3 + 0x330) = (int)uVar10;
  uVar10 = s3c_divide_signed32(0x1000000,iVar5 << 5);
  *(int *)(iVar3 + 0x334) = (int)uVar10;
  if ((*(uint *)(iVar3 + 0x354) & 1) == 0) {
    *(int *)(iVar3 + 0x334) = (int)uVar10 >> (*(uint *)(iVar3 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar3 + 0x330) = *(int *)(iVar3 + 0x330) >> (*(uint *)(iVar3 + 0x66c) & 0xff);
  }
  uVar10 = s3c_divide_signed32(0x40000,*(uint *)(iVar3 + 0x2dc));
  *(int *)(iVar3 + 0x32c) = (int)uVar10;
  iVar1 = FUN_4a02afd0(*(int *)(iVar3 + 0x2dc) * *(int *)(iVar3 + 0x2dc) +
                       ((int)(iVar4 * iVar4 + ((uint)(iVar4 * iVar4 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar3 + 0x2e0) = iVar1 >> 6;
  iVar1 = FUN_4a02afd0(*(int *)(iVar3 + 0x2dc) * *(int *)(iVar3 + 0x2dc) +
                       ((int)(iVar5 * iVar5 + ((uint)(iVar5 * iVar5 >> 0x1f) >> 0x1e)) >> 2));
  uVar8 = *(uint *)(iVar3 + 0x2dc);
  uVar10 = s3c_divide_signed32(*(int *)(iVar3 + 0x2e0) << 0xc,uVar8);
  uVar11 = s3c_divide_signed32((iVar1 >> 6) << 0xc,uVar8);
  *(int *)(iVar3 + 0x2e0) = (int)uVar10 * *(int *)(iVar3 + 0x330) >> 0xc;
  *(int *)(iVar3 + 0x2e4) = *(int *)(iVar3 + 0x334) * (int)uVar11 >> 0xc;
  *(int *)(iVar3 + 0x314) = iVar5 * 8 + -1;
  *(int *)(iVar3 + 0x310) = iVar4 * 8 + -1;
  iVar5 = *(int *)(iVar3 + 0x2c8);
  iVar4 = iVar5 * *(int *)(iVar3 + 0x32c) >> 0xc;
  *(int *)(iVar3 + 0x2d0) = iVar4;
  if (iVar4 < 6) {
    iVar4 = 5;
  }
  *(int *)(iVar3 + 0x2d0) = iVar4;
  iVar6 = *(int *)(iVar3 + 0x2cc);
  iVar1 = iVar6 * *(int *)(iVar3 + 0x32c) >> 0xc;
  iVar4 = iVar1 - iVar4;
  *(int *)(iVar3 + 0x2d4) = iVar1;
  uVar10 = s3c_divide_signed32((iVar6 - iVar5) * 0x1000,iVar4 * 0x40);
  *(int *)(iVar3 + 0x3c8) = (int)uVar10;
  uVar10 = s3c_divide_signed32(iVar4 * 0x8000,iVar6 - iVar5);
  *(int *)(iVar3 + 0x3d0) = (int)uVar10;
  iVar2 = *(int *)PTR_DAT_4a03ebbc;
  iVar1 = *(int *)(iVar2 + 0x32c);
  uVar8 = *(uint *)(iVar2 + 0x3ac);
  iVar4 = iVar1 * iVar5 >> 0xc;
  iVar3 = iVar1 * iVar6 >> 0xc;
  if (iVar4 < 5) {
    iVar4 = 5;
  }
  uVar9 = *(uint *)(iVar2 + 0x3e0);
  if (*(uint *)(iVar2 + 1000) != 0xffffffff) {
    uVar8 = iVar3 >> (*(uint *)(iVar2 + 1000) & 0xff);
  }
  if (uVar9 == 0) {
    iVar7 = *(int *)(iVar2 + 0x3e4);
    if (*(int *)(iVar2 + 0x2cc) + iVar7 != *(int *)(iVar2 + 0x2c8)) {
      uVar10 = s3c_divide_signed32(uVar8 << 0xc,((iVar3 + (iVar7 * iVar1 >> 0xc)) - iVar4) * 0x40);
      *(int *)(iVar2 + 0x3cc) = (int)uVar10;
      uVar10 = s3c_divide_signed32(uVar8 << 0xc,(iVar6 + iVar7) - iVar5);
      *(int *)(iVar2 + 0x3d4) = (int)uVar10;
    }
    if (uVar8 != 0) {
      uVar10 = s3c_divide_signed32(((iVar3 + (iVar7 * *(int *)(iVar2 + 0x32c) >> 0xc)) - iVar4) *
                                   0x8000,uVar8);
      *(int *)(iVar2 + 0x3d8) = (int)uVar10;
      uVar10 = s3c_divide_signed32(((iVar6 + iVar7) - iVar5) * 0x1000,uVar8);
      *(int *)(iVar2 + 0x3dc) = (int)uVar10;
    }
  }
  else {
    divisor = uVar8 - uVar9;
    uVar10 = s3c_divide_signed32(divisor * 0x1000,(iVar3 - iVar4) * 0x40);
    *(int *)(iVar2 + 0x3cc) = (int)uVar10;
    uVar10 = s3c_divide_signed32(divisor * 0x1000,iVar6 - iVar5);
    *(int *)(iVar2 + 0x3d4) = (int)uVar10;
    if (uVar8 != uVar9) {
      uVar10 = s3c_divide_signed32((iVar3 - iVar4) * 0x8000,divisor);
      *(int *)(iVar2 + 0x3d8) = (int)uVar10;
      uVar10 = s3c_divide_signed32((iVar6 - iVar5) * 0x1000,divisor);
      *(int *)(iVar2 + 0x3dc) = (int)uVar10;
    }
  }
  if (*(uint *)(iVar2 + 0x3cc) == 0) {
    *(int *)(iVar2 + 0x2d8) = iVar3;
    return;
  }
  uVar10 = s3c_divide_signed32(uVar8 << 0xc,*(uint *)(iVar2 + 0x3cc));
  *(int *)(iVar2 + 0x2d8) = (int)uVar10 + iVar4 * 0x40 >> 6;
  return;
}



// Address: 4a0e609c

void FUN_4a0e609c(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined1 auStack_48 [18];
  undefined2 local_36;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;

  if ((*(int *)(param_1 + 8) == 0x28) && (iVar1 = FUN_4a0e6898(param_1 + 8), iVar1 == 0)) {
    local_14 = (uint)*(ushort *)(param_1 + 0x12);
    local_18 = (uint)*(ushort *)(param_1 + 0x10);
    local_10 = *(undefined4 *)(param_1 + 0x18);
    local_24 = (uint)*(ushort *)(param_2 + 0x10);
    local_20 = (uint)*(ushort *)(param_2 + 0x12);
    local_1c = FUN_4a15e080(local_20 * local_24 * 4);
    bVar4 = SBORROW4(local_20,local_14);
    iVar1 = local_20 - local_14;
    bVar3 = local_20 == local_14;
    if ((int)local_20 <= (int)local_14) {
      bVar4 = SBORROW4(local_24,local_18);
      iVar1 = local_24 - local_18;
      bVar3 = local_24 == local_18;
    }
    if (bVar3 || iVar1 < 0 != bVar4) {
      uVar5 = s3c_divide_signed32(local_18,local_24);
      uVar6 = s3c_divide_signed32(local_14,local_20);
      FUN_4a032c98(&local_18,auStack_54,(int)uVar5,(int)uVar6);
      FUN_4a032dc0(auStack_54,&local_24);
      thunk_FUN_4a161530(local_4c);
    }
    else {
      FUN_4a032dc0(&local_18,&local_24);
    }
    FUN_4a0ecbc4(auStack_48);
    FUN_4a0ecab0(auStack_48,0x28);
    local_36 = *(undefined2 *)(param_2 + 0x12);
    FUN_4a0ebe9c(auStack_48,*(undefined2 *)(param_2 + 0x10));
    FUN_4a0e4d6c(auStack_48,local_1c,local_20 * local_24 * 4,0,0);
    FUN_4a0e681c(auStack_48,param_2,0);
    thunk_FUN_4a161530(local_1c);
    puVar2 = auStack_48;
  }
  else {
    FUN_4a0ecbc4(auStack_6c);
    FUN_4a0ecab0(auStack_6c,0x28);
    FUN_4a0e681c(param_1,auStack_6c,0);
    FUN_4a0e609c(auStack_6c,param_2);
    puVar2 = auStack_6c;
  }
  FUN_4a0eb918(puVar2);
  return;
}



// Address: 4a137f60

undefined4 FUN_4a137f60(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint divisor;
  int iVar9;
  ulonglong uVar10;

  iVar8 = *(int *)(param_1 + 0x120);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  iVar9 = 0;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  divisor = *(uint *)(iVar8 + 0x40);
  uVar10 = s3c_divide_signed32(uVar2 & 0x7fffffff,divisor);
  uVar5 = (uint)(uVar10 >> 0x20);
  uVar1 = uVar5;
  if (uVar5 == 0) {
    uVar1 = divisor;
  }
  do {
    if (uVar5 == divisor) {
      uVar5 = 0;
    }
    if (*(int *)(iVar8 + 0x44) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar8 + 0x44) + 8);
    }
    iVar3 = *(int *)(iVar3 + uVar5 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
LAB_4a138048:
        uVar5 = 0xffffffff;
LAB_4a13804c:
        if (-1 < (int)uVar5) {
          if (*(int *)(iVar8 + 0x44) != 0) {
            iVar9 = *(int *)(*(int *)(iVar8 + 0x44) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x34) + *(int *)(iVar9 + uVar5 * 4) * 4);
          if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0))
          {
            (**(code **)(*param_2 + 4))(param_2);
          }
          return uVar6;
        }
        if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0)) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(iVar8 + 0x1c) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar4 == uVar2) &&
         ((param_2 == piVar7 || (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar7), iVar3 != 0)
          ))) goto LAB_4a13804c;
    }
    if (uVar5 == uVar1 - 1) goto LAB_4a138048;
    uVar5 = uVar5 + 1;
  } while( true );
}



// Address: 4a17006c

undefined4 FUN_4a17006c(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint divisor;
  int iVar8;
  ulonglong uVar9;

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  iVar8 = 0;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  divisor = *(uint *)(param_1 + 0x40);
  uVar9 = s3c_divide_signed32(uVar2 & 0x7fffffff,divisor);
  uVar5 = (uint)(uVar9 >> 0x20);
  uVar1 = uVar5;
  if (uVar5 == 0) {
    uVar1 = divisor;
  }
  do {
    if (uVar5 == divisor) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    iVar3 = *(int *)(iVar3 + uVar5 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
LAB_4a170154:
        uVar5 = 0xffffffff;
LAB_4a170158:
        if (-1 < (int)uVar5) {
          if (*(int *)(param_1 + 0x44) != 0) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x44) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(iVar8 + uVar5 * 4) * 4);
          if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0))
          {
            (**(code **)(*param_2 + 4))(param_2);
          }
          return uVar6;
        }
        if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0)) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar4 == uVar2) &&
         ((param_2 == piVar7 || (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar7), iVar3 != 0)
          ))) goto LAB_4a170158;
    }
    if (uVar5 == uVar1 - 1) goto LAB_4a170154;
    uVar5 = uVar5 + 1;
  } while( true );
}



// Address: 4a004028

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Removing unreachable block (ram,0x4a172158) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a004028(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint local_20;
  undefined4 uStack_1c;
  uint uStack_18;

  uVar2 = DAT_4a0041c0;
  uStack_18 = param_4;
  uStack_1c = param_3;
  puVar10 = &local_20;
  local_20 = param_2;
  uVar6 = param_1 & 0x7fffffff;
  if (uVar6 < 0x33800000) {
    uVar2 = 0x3f800000;
    goto LAB_4a004190;
  }
  if ((param_1 & 0x80000000) == 0) {
    iVar3 = DAT_4a0041c4;
    if (DAT_4a0041c4 <= (int)uVar6) goto LAB_4a004190;
LAB_4a004070:
    bVar14 = SBORROW4(uVar6,iVar3);
    if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
      uVar6 = 1;
      uVar9 = param_1 >> 0x17 & 0xff;
      bVar15 = uVar9 == 0;
      if (!bVar15) {
        param_4 = uVar9 ^ 0xff;
        bVar15 = param_4 == 0;
      }
      bVar16 = bVar15;
      if (!bVar15) {
        bVar14 = SBORROW4(param_4,1);
        bVar16 = param_4 == 1;
      }
      bVar13 = !bVar15 && (int)(param_4 - 1) < 0;
      bVar15 = bVar13 == bVar14;
      bVar1 = !bVar16;
      if (bVar1 && bVar15) {
        bVar14 = SCARRY4(uVar9,1);
        bVar16 = uVar9 == 0xffffffff;
      }
      if (!bVar16 && ((!bVar1 || !bVar15) && bVar13) == bVar14) {
        return CONCAT44(1,param_1 + 0x800000);
      }
      if (uVar9 == 0) {
        return CONCAT44(1,param_1) & 0xffffffff80000000;
      }
      if (param_4 != 0) {
        return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
      }
      uVar8 = 0xb;
      uVar9 = DAT_4a171bb0;
      if ((param_1 & 0x7fffff) == 0) {
        return CONCAT44(1,param_1);
      }
      goto LAB_4a172874;
    }
    uVar17 = FUN_4a171a2c();
    FUN_4a170848((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_4a0041cc,DAT_4a0041d0);
    iVar3 = FUN_4a171070();
    iVar12 = iVar3 + -0x80;
    uVar4 = FUN_4a171fac(iVar12);
    uVar4 = FUN_4a1724e0(uVar4,param_1);
    FUN_4a006044(uVar4,&uStack_18,&uStack_1c);
    if (iVar12 == 0) {
LAB_4a004168:
      uVar17 = CONCAT44((int)local_20 >> 0x17,local_20);
      if (((int)local_20 >> 0x17 & 0xffU) == 0) goto LAB_4a004178;
    }
    else {
      if (iVar12 < -0x6d) goto LAB_4a004178;
      uVar18 = s3c_divide_signed32(iVar3 - 0x12,10);
      iVar3 = (int)(uVar18 >> 0x20);
      uVar6 = (int)uVar18 - 0xb;
      if (iVar3 != 0) {
        local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041d4 + iVar3 * 4 + 0x4a0040f4));
      }
      if (uVar6 == 0) goto LAB_4a004168;
      if ((int)uVar6 < 1) {
        if (-0xc < (int)uVar6) {
          local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041dc + 0x4a004154 + ~uVar6 * 4));
          param_2 = param_2 - 0x24;
          goto LAB_4a004168;
        }
      }
      else if ((int)uVar6 < 9) {
        local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041d8 + uVar6 * 4 + 0x4a004124));
        param_2 = param_2 + 0x10;
        goto LAB_4a004168;
      }
LAB_4a004178:
      uVar17 = FUN_4a149aa8();
    }
    uVar5 = (uint)uVar17;
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20) & 0xff;
    if (0xfe < (int)(uVar6 + param_2)) goto LAB_4a004190;
    if (-0x19 < (int)(uVar6 - param_2)) {
      uVar6 = param_2 * 0x800000 + 0x3f800000;
      uVar7 = uVar5 >> 7 & 0xff0000;
      bVar14 = uVar7 == 0;
      if (!bVar14) {
        puVar10 = (uint *)(uVar6 >> 7 & 0xff0000);
        bVar14 = puVar10 == (uint *)0x0;
      }
      if (!bVar14) {
        bVar14 = uVar7 == 0xff0000;
      }
      if (!bVar14) {
        bVar14 = puVar10 == (uint *)0xff0000;
      }
      if (!bVar14) {
        if ((int)(uVar5 ^ uVar6) < 0) {
          uVar7 = uVar7 | 0x100;
        }
        iVar3 = uVar6 * 0x100;
        uVar6 = (uint)((ulonglong)(uVar5 << 8 | 0x80000000) * 0x80000000 >> 0x20);
        iVar12 = (int)puVar10 + (uVar7 - 0x800000);
        bVar14 = 0x7fffffff < uVar6;
        if (!bVar14) {
          uVar6 = uVar6 << 1;
        }
        uVar8 = iVar12 + (iVar12 >> 0x10) + (uint)bVar14;
        bVar14 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar9 = uVar6 >> 8;
        if (bVar14) {
          uVar9 = 0;
        }
        uVar6 = (uVar6 >> 8) + uVar8 * 0x800000 + (uint)bVar14;
        if (uVar9 != 0) {
          bVar14 = 0xfbffff < uVar8;
        }
        if (!bVar14) {
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if (uVar9 == 0 || uVar8 == 0xfc0000) {
          uVar6 = uVar6 & 0xfffffffe;
        }
        if (uVar8 < 0xfc0000) {
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if (-1 < (int)(uVar8 - 0xfc0000)) {
          if (-1 < (int)((uVar6 + 0x800000) * 2)) {
            if ((int)(uVar6 + 0xa0000000) < 0) {
              uVar2 = 0xff800000;
            }
            else {
              uVar2 = 0x7f800000;
            }
            return CONCAT44(iVar3,uVar2) | 0x8000000000000000;
          }
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if ((int)(uVar8 ^ 0xff) < -0xffff) {
          uVar6 = uVar6 + 0x60000000;
          if ((int)(uVar8 ^ 0xff) < -0xffff) {
            uVar6 = uVar6 & 0x80000000;
          }
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
      }
      if ((int)(uVar5 ^ uVar6) < 0) {
        uVar7 = uVar7 | 0x100;
      }
      uVar11 = uVar6 >> 7 & 0xff0000;
      if (uVar7 < 0xff0000 && uVar11 < 0xff0000) {
        return CONCAT44(uVar6,uVar5 ^ uVar6) & 0xffffffff80000000;
      }
      uVar5 = uVar5 * 2;
      if (uVar5 < 0xff000001) {
        uVar5 = uVar6 * 2;
      }
      uVar8 = 0x4000003;
      uVar9 = DAT_4a171ba4;
      if (uVar5 < 0xff000001) {
        if ((uVar7 & 0xff0000) == 0 || uVar11 == 0) {
          return CONCAT44(uVar6,DAT_4a172220);
        }
        return CONCAT44(uVar6,(uVar7 | 0xff) << 0x17);
      }
LAB_4a172874:
      uVar8 = uVar8 & 0xf;
      if (uVar8 == 9) {
        return (ulonglong)uVar6 << 0x20;
      }
      if (uVar8 == 10) {
        return CONCAT44(uVar6,uVar9);
      }
      if (uVar8 != 8) {
        return CONCAT44(uVar6,uVar9);
      }
      return CONCAT44(uVar6,uVar6 & 0xff000000 | uVar9 >> 0x1d | (uVar6 & 0xffffff) << 3);
    }
  }
  else {
    iVar3 = DAT_4a0041c8;
    if ((int)uVar6 < DAT_4a0041c8) goto LAB_4a004070;
  }
  uVar2 = 0;
LAB_4a004190:
  return CONCAT44(local_20,uVar2);
}



// Address: 4a136768

undefined4 FUN_4a136768(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint divisor;
  int iVar9;
  ulonglong uVar10;

  piVar8 = *(int **)(param_1 + 0xe8);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  iVar9 = 0;
  uVar2 = (**(code **)(*piVar8 + 0x18))(piVar8);
  divisor = *(uint *)(param_1 + 0x148);
  uVar10 = s3c_divide_signed32(uVar2 & 0x7fffffff,divisor);
  uVar5 = (uint)(uVar10 >> 0x20);
  uVar1 = uVar5;
  if (uVar5 == 0) {
    uVar1 = divisor;
  }
  do {
    if (uVar5 == divisor) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar3 = *(int *)(iVar3 + uVar5 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
LAB_4a136854:
        uVar5 = 0xffffffff;
LAB_4a136858:
        if (-1 < (int)uVar5) {
          if (*(int *)(param_1 + 0x14c) != 0) {
            iVar9 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x13c) + *(int *)(iVar9 + uVar5 * 4) * 4);
          if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 8))(piVar8), iVar9 != 0)) {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
          return uVar6;
        }
        if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 8))(piVar8), iVar9 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(param_1 + 0x124) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar4 == uVar2) &&
         ((piVar8 == piVar7 || (iVar3 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar7), iVar3 != 0))))
      goto LAB_4a136858;
    }
    if (uVar5 == uVar1 - 1) goto LAB_4a136854;
    uVar5 = uVar5 + 1;
  } while( true );
}



// Address: 4a0408b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0408b0(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  CoreDiv64 CVar12;
  CoreDiv64 CVar13;

  iVar8 = *(int *)(param_1 + 0xfc);
  iVar7 = *(int *)PTR_DAT_4a040a50;
  uVar4 = 0;
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x14) == 3)) {
    iVar8 = (int)*(short *)(param_1 + 0xf8);
    if (iVar8 != 0) {
      param_1 = *(int *)(param_1 + 0x14);
    }
    if (iVar8 == 0 || param_1 == 3) {
      return;
    }
    uVar11 = s3c_divide_signed32(iVar8 << 0x12,*(int *)(iVar7 + 0x2cc) - *(int *)(iVar7 + 0x2c8));
    uVar9 = (uint)uVar11;
    if ((int)uVar9 < 1) {
      uVar10 = 0;
      uVar4 = uVar9 + 0x10000;
      goto LAB_4a0409f0;
    }
    uVar4 = 0x10000;
  }
  else {
    if (iVar8 == 0) {
      uVar10 = 0;
      goto LAB_4a0409f0;
    }
    uVar10 = *(uint *)(iVar7 + 0x2c8);
    iVar1 = (int)uVar10 >> 0x1f;
    uVar9 = *(uint *)(iVar7 + 0x2cc);
    iVar2 = (int)uVar9 >> 0x1f;
    uVar4 = iVar2 - (iVar1 + (uint)(uVar9 < uVar10));
    CVar12 = s3c_divide_signed64((uVar9 + uVar10) * 0x10000,
                                 (iVar2 + iVar1 + (uint)CARRY4(uVar9,uVar10)) * 0x10000 |
                                 uVar9 + uVar10 >> 0x10,uVar9 - uVar10,uVar4);
    lVar3 = (ulonglong)uVar9 * (ulonglong)(uVar10 * 2);
    CVar13 = s3c_divide_signed64((uint)lVar3,
                                 uVar10 * 2 * iVar2 +
                                 uVar9 * (iVar1 * 2 + (uint)CARRY4(uVar10,uVar10)) +
                                 (int)((ulonglong)lVar3 >> 0x20),uVar9 - uVar10,uVar4);
    CVar13 = s3c_divide_signed64((uint)CVar13.quotient << 0x10,
                                 CVar13.quotient._4_4_ << 0x10 | (uint)CVar13.quotient >> 0x10,
                                 -iVar8,-iVar8 >> 0x1f);
    uVar4 = (int)CVar13.quotient + (int)CVar12.quotient + 0x10000 >> 1;
    uVar9 = uVar4;
  }
  uVar10 = uVar9;
  if (0x7fffffff < uVar9) {
    return;
  }
LAB_4a0409f0:
  if ((*(uint *)(iVar7 + 0x5bc) & 0x40) == 0) {
    uVar10 = 0x10000 - uVar10;
    uVar4 = 0x10000 - uVar4;
  }
  if (*(int *)(iVar7 + 0xc) != 3) {
    FUN_4a154fcc(uVar10,uVar4);
    return;
  }
  uVar5 = FUN_4a171fac();
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar6 = FUN_4a171fac(uVar10);
  uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
  FUN_4a154f68(uVar6,uVar5);
  return;
}



// Address: 4a005c9c

void FUN_4a005c9c(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;

  if (0x39800000 < (int)param_1) {
    iVar15 = 0;
    iVar16 = 7;
    iVar14 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
    iVar6 = 0;
    iVar12 = -iVar14;
    uVar11 = 0x20000000;
    uVar10 = (param_1 & 0xffffff | 0x800000) << 6;
    uVar9 = 0;
    do {
      piVar13 = (int *)(DAT_4a005e48 + 0x4a005cf0 + iVar16 * 0x20);
      iVar17 = piVar13[1];
      bVar19 = iVar17 == iVar14;
      iVar18 = iVar17;
      if (iVar14 <= iVar17) {
        iVar18 = *piVar13 - ((int)uVar10 >> (iVar17 - iVar14 & 0xffU));
      }
      iVar5 = iVar17 - iVar14;
      if (iVar17 >= iVar14) {
        bVar19 = iVar18 == 0;
        iVar5 = iVar18;
      }
      if (!bVar19 && iVar5 < 0 == (iVar17 < iVar14 && SBORROW4(iVar17,iVar14))) {
        lVar1 = (longlong)piVar13[2] * 0x20000000;
        uVar11 = (uint)lVar1;
        lVar2 = (longlong)piVar13[3] * 0x20000000;
        lVar3 = (longlong)(int)uVar10 * (longlong)piVar13[2];
        iVar6 = piVar13[4];
        lVar4 = (longlong)(int)uVar10 * (longlong)piVar13[3];
        uVar20 = s3c_arm_asr64((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),iVar6 - iVar14);
        iVar16 = iVar6;
        if (iVar12 < iVar6) {
          iVar16 = iVar12;
        }
        local_30 = (uint)lVar3;
        local_2c = (uint)((ulonglong)lVar3 >> 0x20);
        uVar21 = s3c_arm_asr64(local_30,local_2c,-(iVar14 + iVar16));
        local_24 = (uint)((ulonglong)lVar2 >> 0x20);
        local_28 = (uint)lVar2;
        uVar22 = s3c_arm_asr64(local_28,local_24,iVar6 - iVar16);
        uVar10 = (uint)(uVar21 + uVar22) >> 0x1d | (int)(uVar21 + uVar22 >> 0x20) * 8;
        iVar15 = piVar13[5];
        uVar9 = piVar13[6] - 1;
        iVar6 = piVar13[7];
        uVar11 = uVar11 - (uint)uVar20 >> 0x1d |
                 ((int)((ulonglong)lVar1 >> 0x20) -
                 ((int)(uVar20 >> 0x20) + (uint)(uVar11 < (uint)uVar20))) * 8;
        iVar12 = iVar16;
        break;
      }
      bVar19 = iVar16 != 0;
      iVar16 = iVar16 + -1;
    } while (bVar19);
    iVar14 = 0;
    do {
      iVar18 = *(int *)(DAT_4a005e4c + 0x4a005dc0 + iVar6 * 4);
      iVar16 = (int)uVar10 >> (iVar6 + iVar12 & 0xffU);
      if ((int)uVar10 < 0) {
        iVar16 = -iVar16;
        iVar17 = (int)uVar11 >> (iVar6 - iVar12 & 0xffU);
        iVar18 = -(iVar18 >> (iVar6 - uVar9 & 0xff));
      }
      else {
        iVar17 = -((int)uVar11 >> (iVar6 - iVar12 & 0xffU));
        iVar18 = iVar18 >> (iVar6 - uVar9 & 0xff);
      }
      uVar11 = uVar11 + iVar16;
      iVar15 = iVar15 + iVar18;
      uVar10 = uVar10 + iVar17;
      iVar14 = iVar14 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar14 < 0x20);
    uVar7 = FUN_4a171fac(1 << (uVar9 & 0xff));
    uVar7 = FUN_4a17295c(uVar7,0x1e);
    uVar8 = FUN_4a171fac(iVar15);
    FUN_4a171bb8(uVar8,uVar7);
  }
  return;
}



// Address: 4a166340

int * FUN_4a166340(int *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *source;
  uint *puVar5;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined4 local_20;

  local_20 = 0;
  local_24 = 0;
  if (param_2 != param_3) {
    uVar2 = (int)param_3 - (int)param_2;
    local_30 = param_1[1] - *param_1;
    local_34 = 0;
    local_2c = param_2;
    local_28 = param_3;
    if ((uVar2 == 0xffffffff) || (-uVar2 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a1664ec);
    }
    if ((param_1[2] - *param_1) - 1U < local_30 + uVar2) {
      puVar3 = &local_34;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      local_34 = uVar2;
      iVar4 = *puVar3 + local_30 + 1;
      if (iVar4 == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)FUN_4a15e080(iVar4);
        if (puVar3 == (uint *)0x0) {
          puVar3 = (uint *)FUN_4a1669a8();
        }
      }
      source = (uint *)*param_1;
      puVar5 = (uint *)param_1[1];
      FUN_4a166140();
      puVar1 = puVar3;
      if (puVar5 != source) {
        uVar2 = (int)puVar5 - (int)source;
        puVar1 = s3c_move_preserving_destination(puVar3,source,uVar2);
        puVar1 = (uint *)((int)puVar1 + uVar2);
      }
      if (local_28 != local_2c) {
        uVar2 = (int)local_28 - (int)local_2c;
        puVar1 = s3c_move_preserving_destination(puVar1,local_2c,uVar2);
        puVar1 = (uint *)(uVar2 + (int)puVar1);
      }
      *(undefined1 *)puVar1 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar3;
      param_1[1] = (int)puVar1;
      param_1[2] = (int)puVar3 + iVar4;
    }
    else {
      puVar3 = (uint *)((int)local_2c + 1);
      if (local_28 != puVar3) {
        s3c_move_preserving_destination((uint *)(param_1[1] + 1),puVar3,(int)local_28 - (int)puVar3)
        ;
      }
      *(undefined1 *)(param_1[1] + uVar2) = 0;
      *(char *)param_1[1] = (char)*local_2c;
      param_1[1] = param_1[1] + uVar2;
    }
  }
  return param_1;
}



// Address: 4a084660

undefined4
FUN_4a084660(undefined4 param_1,int *param_2,uint param_3,uint *param_4,ushort *param_5,int param_6,
            int param_7,int param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;

  param_2[3] = param_7;
  param_2[4] = param_8;
  param_2[1] = 0;
  param_2[2] = param_6;
  param_2[0xd] = param_3;
  *param_2 = (int)param_4;
  param_2[5] = 0;
  if (param_5 == (ushort *)0x0) {
    if (param_3 != 0) {
      uVar2 = param_3 & 1;
      if (uVar2 == 1) {
        *(undefined2 *)param_4 = 1;
        param_2[1] = param_2[1] + 1;
      }
      for (; uVar2 < param_3; uVar2 = uVar2 + 2) {
        puVar5 = (undefined2 *)((int)param_4 + uVar2 * 2);
        *puVar5 = 1;
        param_2[1] = param_2[1] + 1;
        puVar5[1] = 1;
        param_2[1] = param_2[1] + 1;
      }
    }
  }
  else if (param_3 != 0) {
    uVar2 = param_3 & 1;
    if (uVar2 == 1) {
      uVar1 = *param_5;
      *(ushort *)param_4 = uVar1;
      param_2[1] = (uint)uVar1 + param_2[1];
    }
    for (; uVar2 < param_3; uVar2 = uVar2 + 2) {
      uVar1 = param_5[uVar2];
      puVar4 = (ushort *)((int)param_4 + uVar2 * 2);
      *puVar4 = uVar1;
      param_2[1] = (uint)uVar1 + param_2[1];
      uVar1 = (param_5 + uVar2)[1];
      puVar4[1] = uVar1;
      param_2[1] = param_2[1] + (uint)uVar1;
    }
  }
  uVar2 = param_3 * 2 - 1;
  iVar6 = uVar2 - param_3;
  iVar3 = 0;
  if (1 < uVar2) {
    do {
      iVar3 = iVar3 * 2 + 1;
    } while (iVar3 * 2 + 1U < uVar2);
  }
  param_2[0xc] = iVar3;
  iVar7 = param_3 - (iVar3 - iVar6);
  s3c_move_endpoints((uint *)(*param_2 + iVar3 * 2),param_4,iVar7 * 2);
  s3c_move_endpoints((uint *)(*param_2 + iVar6 * 2),(uint *)((int)param_4 + iVar7 * 2),
                     (iVar3 - iVar6) * 2);
  param_2[0xb] = iVar6;
  uVar2 = FUN_4a083c68(param_1,param_2,0);
  if (uVar2 == param_2[1]) {
    uVar2 = param_2[3];
    if ((uint)param_2[3] < 0x10001) {
      uVar2 = param_2[1];
    }
    if (uVar2 < 0x10001) {
      return 0;
    }
  }
  return 5;
}



// Address: 4a038f24

void FUN_4a038f24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;

  puVar1 = PTR_DAT_4a03904c;
  iVar10 = *(int *)PTR_DAT_4a03904c;
  FUN_4a035dec();
  s3c_fill_end((uint *)PTR_DAT_4a039050,0x10,0xff);
  puVar2 = PTR_DAT_4a039054;
  bVar11 = 0;
  if (*(int *)(iVar10 + 0x4e4) != iVar10 + 0x4dc) {
    *(undefined4 *)(PTR_DAT_4a039054 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  if (*(int *)(iVar10 + 0x690) != iVar10 + 0x688) {
    *(undefined4 *)(puVar2 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  bVar3 = FUN_4a038d54(1,*(undefined4 *)(iVar10 + 0x4f8),*(undefined4 *)(iVar10 + 0x3b8));
  bVar11 = bVar11 & bVar3;
  if (*(int *)(iVar10 + 0x4f0) != iVar10 + 0x4e8) {
    *(undefined4 *)(puVar2 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  bVar3 = FUN_4a038d54(0,*(undefined4 *)(iVar10 + 0x4f4),*(undefined4 *)(iVar10 + 0x3b4));
  if (((bVar3 & bVar11 & puVar2[3]) != 0) && (*(int *)(iVar10 + 0x67c) == 0)) {
    puVar2[3] = 0;
  }
  if (puVar2[2] != '\0') {
    FUN_4a0472a0();
  }
  uVar9 = 0;
  uVar4 = 0x10000;
  if ((*(uint *)(*(int *)PTR_DAT_4a01d740 + 0x5bc) & 0x40) == 0) {
    uVar9 = 0x10000;
    uVar4 = 0;
  }
  if (*(int *)(*(int *)PTR_DAT_4a01d740 + 0xc) == 3) {
    uVar4 = FUN_4a171fac();
    uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
    uVar9 = FUN_4a171fac(uVar9);
    uVar9 = FUN_4a17295c(uVar9,0xfffffff0);
    thunk_FUN_4a1500c4(uVar9,uVar4);
  }
  else {
    thunk_FUN_4a1500d8(uVar9,uVar4);
  }
  thunk_FUN_4a1500f8(0xc11);
  FUN_4a14fd70(0xde1,0);
  FUN_4a037ce4();
  thunk_FUN_4a00d70c();
  thunk_FUN_4a02ca18();
  thunk_FUN_4a00d798();
  thunk_FUN_4a0458a0();
  thunk_FUN_4a03f558();
  piVar6 = *(int **)PTR_DAT_4a05a740;
  if (*piVar6 * 0x200000 < 0) {
    piVar7 = piVar6 + 0x134;
    piVar8 = piVar7;
    while (iVar10 = DAT_4a05a744, piVar8 = (int *)piVar8[2], piVar7 != piVar8) {
      iVar10 = piVar8[3];
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x3c) = 0;
        *(undefined4 *)(iVar10 + 0x40) = 0;
        *(undefined4 *)(iVar10 + 0x44) = 0;
        *(uint *)(iVar10 + 0x10) = *(uint *)(iVar10 + 0x10) & 0xffffefff;
      }
    }
    piVar6[0x136] = (int)piVar7;
    iVar10 = (int)piVar6 + iVar10;
    piVar6[0x135] = (int)piVar7;
    *(int *)(iVar10 + 8) = iVar10;
    *(int *)(iVar10 + 4) = iVar10;
    piVar6[0x1a4] = (int)(piVar6 + 0x1a2);
    piVar6[0x1a3] = (int)(piVar6 + 0x1a2);
    piVar6[0x13c] = (int)(piVar6 + 0x13a);
    piVar6[0x13b] = (int)(piVar6 + 0x13a);
    uVar13 = piVar6[0xed];
    uVar12 = piVar6[0xee];
    for (uVar5 = 0; uVar5 < uVar13; uVar5 = uVar5 + 1) {
      iVar10 = piVar6[0x13d] + uVar5 * 0xc;
      *(int *)(iVar10 + 8) = iVar10;
      *(int *)(iVar10 + 4) = iVar10;
    }
    for (uVar5 = 0; uVar5 < uVar12; uVar5 = uVar5 + 1) {
      iVar10 = piVar6[0x13e] + uVar5 * 0xc;
      *(int *)(iVar10 + 8) = iVar10;
      *(int *)(iVar10 + 4) = iVar10;
    }
  }
  piVar6[0xd8] = 0;
  return;
}



// Address: 4a16c6c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16c6c8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint divisor;
  int *piVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar11;
  undefined1 auStack_38 [20];

  if (param_2 <= *(int *)(param_1 + 0x40)) {
    return;
  }
  iVar2 = FUN_4a16be24(auStack_38);
  uVar9 = *(undefined4 *)(iVar2 + 8);
  piVar8 = *(int **)(iVar2 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))((int *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(int **)(param_1 + 0x44) = piVar8;
  FUN_4a16bef4(auStack_38);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(param_1 + 0x44) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      *(undefined4 *)(iVar5 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  if (iVar2 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a16c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
    uVar3 = (**(code **)(*piVar8 + 0x18))(piVar8);
    divisor = *(uint *)(param_1 + 0x40);
    uVar11 = s3c_divide_signed32(uVar3 & 0x7fffffff,divisor);
    uVar7 = (uint)(uVar11 >> 0x20);
    uVar1 = uVar7;
    if (uVar7 == 0) {
      uVar1 = divisor;
    }
    while( true ) {
      if (uVar7 == divisor) {
        uVar7 = 0;
      }
      iVar4 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      uVar6 = *(uint *)(iVar4 + uVar7 * 4);
      if ((int)uVar6 < 0) {
        if (0xfffffffd < uVar6) goto LAB_4a16c860;
      }
      else {
        piVar10 = *(int **)(*(int *)(param_1 + 0x1c) + uVar6 * 4);
        uVar6 = (**(code **)(*piVar10 + 0x18))(piVar10);
        if ((uVar6 == uVar3) &&
           ((piVar8 == piVar10 ||
            (iVar4 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar10), iVar4 != 0))))
        goto LAB_4a16c860;
      }
      if (uVar7 == uVar1 - 1) break;
      uVar7 = uVar7 + 1;
    }
    uVar7 = 0xffffffff;
LAB_4a16c860:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    *(int *)(iVar4 + uVar7 * 4) = iVar5;
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return;
    }
  } while( true );
}



// Address: 4a16ca98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16ca98(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint divisor;
  int *piVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar11;
  undefined1 auStack_38 [20];

  if (param_2 <= *(int *)(param_1 + 0x40)) {
    return;
  }
  iVar2 = FUN_4a16be24(auStack_38);
  uVar9 = *(undefined4 *)(iVar2 + 8);
  piVar8 = *(int **)(iVar2 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))((int *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(int **)(param_1 + 0x44) = piVar8;
  FUN_4a16bef4(auStack_38);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(param_1 + 0x44) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      *(undefined4 *)(iVar5 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  if (iVar2 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a16cb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
    uVar3 = (**(code **)(*piVar8 + 0x18))(piVar8);
    divisor = *(uint *)(param_1 + 0x40);
    uVar11 = s3c_divide_signed32(uVar3 & 0x7fffffff,divisor);
    uVar7 = (uint)(uVar11 >> 0x20);
    uVar1 = uVar7;
    if (uVar7 == 0) {
      uVar1 = divisor;
    }
    while( true ) {
      if (uVar7 == divisor) {
        uVar7 = 0;
      }
      iVar4 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      uVar6 = *(uint *)(iVar4 + uVar7 * 4);
      if ((int)uVar6 < 0) {
        if (0xfffffffd < uVar6) goto LAB_4a16cc30;
      }
      else {
        piVar10 = *(int **)(*(int *)(param_1 + 0x1c) + uVar6 * 4);
        uVar6 = (**(code **)(*piVar10 + 0x18))(piVar10);
        if ((uVar6 == uVar3) &&
           ((piVar8 == piVar10 ||
            (iVar4 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar10), iVar4 != 0))))
        goto LAB_4a16cc30;
      }
      if (uVar7 == uVar1 - 1) break;
      uVar7 = uVar7 + 1;
    }
    uVar7 = 0xffffffff;
LAB_4a16cc30:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    *(int *)(iVar4 + uVar7 * 4) = iVar5;
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return;
    }
  } while( true );
}



// Address: 4a159188

void FUN_4a159188(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;

  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  puVar1 = PTR_FUN_4a159358;
  param_1[0x6a] = (int)puVar2;
  *puVar2 = puVar1;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(param_1[0x71] + 8) == 0) {
    iVar7 = param_1[0x4f];
  }
  else {
    if (param_1[0x4f] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
    }
    iVar6 = param_1[0x6a];
    iVar8 = param_1[0x4f];
    iVar7 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar6 + 0x38) = iVar7;
    iVar5 = 0;
    *(int *)(iVar6 + 0x3c) = iVar7 + param_1[9] * 4;
    iVar7 = param_1[0x36];
    if (0 < param_1[9]) {
      do {
        uVar10 = s3c_divide_signed32(*(int *)(iVar7 + 0x24) * *(int *)(iVar7 + 0xc),param_1[0x4f]);
        iVar9 = (int)uVar10 * (iVar8 + 4);
        iVar3 = (**(code **)param_1[1])(param_1,1,iVar9 * 8);
        iVar3 = iVar3 + (int)uVar10 * 4;
        iVar7 = iVar7 + 0x54;
        *(int *)(*(int *)(iVar6 + 0x38) + iVar5 * 4) = iVar3;
        *(int *)(*(int *)(iVar6 + 0x3c) + iVar5 * 4) = iVar3 + iVar9 * 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[9]);
    }
    iVar7 = param_1[0x4f] + 2;
  }
  iVar5 = param_1[0x36];
  iVar6 = 0;
  if (0 < param_1[9]) {
    do {
      iVar8 = *(int *)(iVar5 + 0x24);
      uVar10 = s3c_divide_signed32(iVar8 * *(int *)(iVar5 + 0xc),param_1[0x4f]);
      uVar4 = (**(code **)(param_1[1] + 8))
                        (param_1,1,*(int *)(iVar5 + 0x1c) * iVar8,(int)uVar10 * iVar7);
      puVar2[iVar6 + 2] = uVar4;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x54;
    } while (iVar6 < param_1[9]);
    return;
  }
  return;
}



// Address: 4a0ecd40

void FUN_4a0ecd40(short *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;

  uVar6 = (uint)*param_1;
  uVar7 = (uint)param_1[1];
  uVar3 = uVar6;
  if ((int)uVar6 < 1) {
    uVar3 = -uVar6;
  }
  uVar8 = (uint)param_1[2];
  uVar4 = uVar7;
  if ((int)uVar7 < 1) {
    uVar4 = -uVar7;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 1) {
    uVar1 = -uVar8;
  }
  uVar1 = uVar1 | uVar4 | uVar3;
  iVar5 = 0;
  if (uVar1 >> 0x10 == 0) {
    iVar5 = 0x10;
    uVar1 = uVar1 << 0x10;
  }
  if (uVar1 >> 0x18 == 0) {
    iVar5 = iVar5 + 8;
    uVar1 = uVar1 << 8;
  }
  if (uVar1 >> 0x1c == 0) {
    iVar5 = iVar5 + 4;
    uVar1 = uVar1 << 4;
  }
  if (uVar1 >> 0x1e == 0) {
    iVar5 = iVar5 + 2;
    uVar1 = uVar1 << 2;
  }
  if (-1 < (int)uVar1) {
    iVar5 = iVar5 + 1;
  }
  iVar2 = -iVar5 + 0x1f;
  if (iVar2 < 0xe) {
    if (iVar2 < 0xc) {
      uVar3 = 0xc - iVar2;
      *param_1 = (short)(uVar6 << (uVar3 & 0xff));
      param_1[1] = (short)(uVar7 << (uVar3 & 0xff));
      param_1[2] = (short)(uVar8 << (uVar3 & 0xff));
    }
  }
  else {
    uVar3 = -iVar5 + 0x12;
    *param_1 = (short)((int)uVar6 >> (uVar3 & 0xff));
    param_1[1] = (short)((int)uVar7 >> (uVar3 & 0xff));
    param_1[2] = (short)((int)uVar8 >> (uVar3 & 0xff));
  }
  uVar3 = (int)param_1[2] * (int)param_1[2] +
          (int)param_1[1] * (int)param_1[1] + (int)*param_1 * (int)*param_1;
  if (uVar3 == 0) {
    return;
  }
  iVar5 = 0;
  uVar6 = uVar3;
  if (uVar3 >> 0x10 == 0) {
    iVar5 = 0x10;
    uVar6 = uVar3 * 0x10000;
  }
  if (uVar6 >> 0x18 == 0) {
    iVar5 = iVar5 + 8;
    uVar6 = uVar6 << 8;
  }
  if (uVar6 >> 0x1c == 0) {
    iVar5 = iVar5 + 4;
    uVar6 = uVar6 << 4;
  }
  if (uVar6 >> 0x1e == 0) {
    iVar5 = iVar5 + 2;
    uVar6 = uVar6 << 2;
  }
  if (-1 < (int)uVar6) {
    iVar5 = iVar5 + 1;
  }
  uVar6 = (0x1e - (0x1f - iVar5)) / 2;
  iVar5 = FUN_4a030110(uVar3 << ((uVar6 & 0x7f) << 1));
  uVar6 = iVar5 >> (uVar6 + 7 & 0xff);
  uVar3 = ((int)uVar6 >> 0xd) + 0x20000;
  if ((uVar6 & 0xfff) == 0) {
    uVar6 = (int)uVar6 >> 0xc;
  }
  else {
    uVar3 = uVar3 * 0x1000;
  }
  uVar9 = s3c_divide_signed32(uVar3,uVar6);
  iVar5 = (int)uVar9;
  *param_1 = (short)(iVar5 * *param_1 >> 0xc);
  param_1[1] = (short)(iVar5 * param_1[1] >> 0xc);
  param_1[2] = (short)(param_1[2] * iVar5 >> 0xc);
  return;
}



// Address: 4a1664f0

int * FUN_4a1664f0(int *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;

  local_24 = 0;
  local_28 = 0;
  if (param_2 != param_3) {
    uVar2 = (int)param_3 - (int)param_2;
    local_34 = param_1[1] - *param_1;
    local_38 = 0;
    local_30 = param_2;
    local_2c = param_3;
    if ((uVar2 == 0xffffffff) || (-uVar2 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a1666d8);
    }
    puVar3 = local_2c;
    if ((param_1[2] - *param_1) - 1U < local_34 + uVar2) {
      puVar3 = &local_38;
      if (uVar2 <= local_34) {
        puVar3 = &local_34;
      }
      local_38 = uVar2;
      iVar4 = *puVar3 + local_34 + 1;
      if (iVar4 == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)FUN_4a15e080(iVar4);
        if (puVar3 == (uint *)0x0) {
          puVar3 = (uint *)FUN_4a1669a8();
        }
      }
      puVar5 = (uint *)*param_1;
      puVar6 = (uint *)param_1[1];
      FUN_4a166140();
      puVar1 = puVar3;
      if (puVar6 != puVar5) {
        uVar2 = (int)puVar6 - (int)puVar5;
        puVar1 = s3c_move_preserving_destination(puVar3,puVar5,uVar2);
        puVar1 = (uint *)((int)puVar1 + uVar2);
      }
      puVar6 = local_2c;
      puVar5 = local_30;
      FUN_4a166140();
      if (puVar6 != puVar5) {
        uVar2 = (int)puVar6 - (int)puVar5;
        puVar1 = s3c_move_preserving_destination(puVar1,puVar5,uVar2);
        puVar1 = (uint *)((int)puVar1 + uVar2);
      }
      *(undefined1 *)puVar1 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar3;
      param_1[1] = (int)puVar1;
      param_1[2] = (int)puVar3 + iVar4;
    }
    else {
      puVar1 = (uint *)((int)local_30 + 1);
      iVar4 = param_1[1];
      local_38 = 0;
      FUN_4a166140();
      if (puVar3 != puVar1) {
        s3c_move_preserving_destination((uint *)(iVar4 + 1),puVar1,(int)puVar3 - (int)puVar1);
      }
      *(undefined1 *)(param_1[1] + uVar2) = 0;
      *(char *)param_1[1] = (char)*local_30;
      param_1[1] = param_1[1] + uVar2;
    }
  }
  return param_1;
}



// Address: 4a005e50

void FUN_4a005e50(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint local_28;
  uint local_24;

  if (0x39800000 < (int)param_1) {
    iVar15 = 0;
    uVar16 = 0;
    iVar13 = 0;
    uVar11 = 0x20000000;
    iVar14 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
    iVar5 = 0;
    uVar10 = (param_1 & 0xffffff | 0x800000) << 6;
    iVar8 = 8;
    do {
      piVar12 = (int *)(DAT_4a00603c + 0x4a005ea0 + iVar8 * 0x20);
      iVar17 = piVar12[1];
      bVar21 = iVar17 == iVar14;
      iVar18 = iVar17;
      if (iVar14 <= iVar17) {
        iVar18 = *piVar12 - ((int)uVar10 >> (iVar17 - iVar14 & 0xffU));
      }
      iVar4 = iVar17 - iVar14;
      if (iVar17 >= iVar14) {
        bVar21 = iVar18 == 0;
        iVar4 = iVar18;
      }
      if (!bVar21 && iVar4 < 0 == (iVar17 < iVar14 && SBORROW4(iVar17,iVar14))) {
        iVar13 = piVar12[2];
        lVar1 = (longlong)(int)uVar10 * (longlong)iVar13;
        lVar2 = (longlong)piVar12[3] * 0x20000000;
        iVar5 = piVar12[4];
        lVar3 = (longlong)(int)uVar10 * (longlong)piVar12[3];
        uVar22 = s3c_arm_asr64((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),iVar5 - iVar14);
        lVar3 = (longlong)iVar13 * 0x20000000 + uVar22;
        iVar13 = iVar5;
        if (-iVar14 < iVar5) {
          iVar13 = -iVar14;
        }
        uVar22 = s3c_arm_asr64((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),-(iVar14 + iVar13));
        local_28 = (uint)lVar2;
        local_24 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar23 = s3c_arm_asr64(local_28,local_24,iVar5 - iVar13);
        uVar10 = (uint)(uVar22 + uVar23) >> 0x1d | (int)(uVar22 + uVar23 >> 0x20) * 8;
        iVar15 = piVar12[5];
        uVar16 = piVar12[6] - 1;
        iVar5 = piVar12[7];
        uVar11 = (uint)lVar3 >> 0x1d | (int)((ulonglong)lVar3 >> 0x20) * 8;
        break;
      }
      bVar21 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar21);
    iVar8 = iVar5 - (uint)(3 < iVar5);
    uVar20 = (uint)(0xd < iVar5);
    iVar14 = 0;
    uVar9 = (iVar8 - uVar20) + iVar13 + 1;
    uVar19 = ((iVar8 - uVar20) - iVar13) + 1;
    uVar20 = ((iVar8 - uVar20) - uVar16) + 1;
    do {
      iVar13 = (int)uVar10 >> (uVar9 & 0xff);
      bVar21 = -1 < (int)uVar10;
      if (bVar21) {
        iVar13 = -iVar13;
      }
      iVar8 = (int)uVar11 >> (uVar19 & 0xff);
      if (bVar21) {
        iVar8 = -iVar8;
      }
      uVar10 = uVar10 + iVar8;
      iVar8 = *(int *)(DAT_4a006040 + 0x4a005fb4 + iVar5 * 4) >> (uVar20 & 0xff);
      if (!bVar21) {
        iVar8 = -iVar8;
      }
      iVar15 = iVar15 + iVar8;
      if (iVar5 != 3 && iVar5 != 0xd) {
        uVar9 = uVar9 + 1;
        uVar19 = uVar19 + 1;
        uVar20 = uVar20 + 1;
      }
      iVar14 = iVar14 + 1;
      iVar5 = iVar5 + 1;
      uVar11 = uVar11 + iVar13;
    } while (iVar14 < 0x20);
    uVar6 = FUN_4a171fac(1 << (uVar16 & 0xff));
    uVar6 = FUN_4a17295c(uVar6,0x1e);
    uVar7 = FUN_4a171fac(iVar15);
    FUN_4a171bb8(uVar7,uVar6);
  }
  return;
}



// Address: 4a03b0f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a03b0f4(int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint divisor;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;

  puVar1 = PTR_DAT_4a03b170;
  iVar3 = *(int *)PTR_DAT_4a03b170;
  iVar5 = param_3 * 4 + param_1 * 8;
  iVar2 = param_4 * 4;
  bVar11 = *(int *)(iVar3 + 0x34c) == param_3;
  iVar7 = iVar2 + param_2 * 8;
  if (bVar11) {
    iVar2 = *(int *)(iVar3 + 0x350);
  }
  bVar12 = bVar11 && iVar2 == param_4;
  if (bVar11 && iVar2 == param_4) {
    bVar12 = *(int *)(iVar3 + 0x318) == iVar5;
  }
  bVar11 = false;
  if (bVar12) {
    bVar11 = *(int *)(iVar3 + 0x31c) == iVar7;
  }
  if (bVar11) {
    return;
  }
  if (*(int *)(PTR_DAT_4a03b174 + 0x28) != 0 && *(int *)(iVar3 + 0x34c) != 0) {
    FUN_4a05a618();
  }
  iVar2 = *(int *)puVar1;
  *(int *)(iVar2 + 0x318) = iVar5;
  *(int *)(iVar2 + 0x31c) = iVar7;
  *(int *)(iVar2 + 0x34c) = param_3;
  *(int *)(iVar2 + 0x350) = param_4;
  iVar5 = *(int *)PTR_DAT_4a04d43c;
  iVar7 = *(int *)(iVar5 + 0x34c);
  iVar2 = *(int *)(iVar5 + 0x350);
  iVar4 = *(int *)(iVar5 + 0x354);
  iVar3 = iVar7;
  if (iVar4 == 0) {
    *(undefined4 *)(iVar5 + 800) = *(undefined4 *)(iVar5 + 0x318);
    iVar7 = *(int *)(iVar5 + 0x31c);
  }
  else {
    if (iVar4 == 1) {
      *(int *)(iVar5 + 800) = *(int *)(iVar5 + 0x33c) * 8 - *(int *)(iVar5 + 0x31c);
      *(undefined4 *)(iVar5 + 0x324) = *(undefined4 *)(iVar5 + 0x318);
      iVar3 = iVar2;
      iVar2 = iVar7;
      goto LAB_4a047eac;
    }
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        *(undefined4 *)(iVar5 + 800) = *(undefined4 *)(iVar5 + 0x31c);
        *(int *)(iVar5 + 0x324) = *(int *)(iVar5 + 0x340) * 8 - *(int *)(iVar5 + 0x318);
        iVar3 = iVar2;
        iVar2 = iVar7;
      }
      goto LAB_4a047eac;
    }
    *(int *)(iVar5 + 800) = *(int *)(iVar5 + 0x33c) * 8 - *(int *)(iVar5 + 0x318);
    iVar7 = *(int *)(iVar5 + 0x340) * 8 - *(int *)(iVar5 + 0x31c);
  }
  *(int *)(iVar5 + 0x324) = iVar7;
LAB_4a047eac:
  iVar7 = *(int *)(iVar5 + 0x324) >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  iVar2 = iVar2 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  iVar4 = iVar7 + iVar2 * -4;
  *(int *)(iVar5 + 0x328) = iVar7;
  iVar7 = iVar7 + iVar2 * 4;
  *(int *)(iVar5 + 0x2e8) = iVar4;
  *(int *)(iVar5 + 0x2ec) = iVar7;
  *(int *)(iVar5 + 0x2f0) = *(int *)(iVar5 + 800) + iVar3 * -4;
  *(int *)(iVar5 + 0x2f4) = *(int *)(iVar5 + 800) + iVar3 * 4;
  *(short *)(iVar5 + 0x2f8) = (short)((uint)(*(int *)(iVar5 + 0x2f0) << 0xd) >> 0x10);
  *(short *)(iVar5 + 0x2fa) = (short)((uint)(iVar4 * 0x2000) >> 0x10);
  *(short *)(iVar5 + 0x2fc) =
       (short)((*(int *)(iVar5 + 0x2f4) - *(int *)(iVar5 + 0x2f0) & 0xfff8ffffU) >> 3);
  *(short *)(iVar5 + 0x2fe) = (short)((iVar7 - iVar4 & 0xfff8ffffU) >> 3);
  iVar5 = *(int *)PTR_DAT_4a048034;
  iVar2 = *(int *)(iVar5 + 0x34c);
  iVar3 = *(int *)(iVar5 + 0x350);
  if ((*(uint *)(iVar5 + 0x354) & 1) == 0) {
    iVar3 = iVar3 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  else {
    iVar2 = iVar2 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  uVar13 = s3c_divide_signed32(0x1000000,iVar2 << 5);
  *(int *)(iVar5 + 0x330) = (int)uVar13;
  uVar13 = s3c_divide_signed32(0x1000000,iVar3 << 5);
  *(int *)(iVar5 + 0x334) = (int)uVar13;
  if ((*(uint *)(iVar5 + 0x354) & 1) == 0) {
    *(int *)(iVar5 + 0x334) = (int)uVar13 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar5 + 0x330) = *(int *)(iVar5 + 0x330) >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  uVar13 = s3c_divide_signed32(0x40000,*(uint *)(iVar5 + 0x2dc));
  *(int *)(iVar5 + 0x32c) = (int)uVar13;
  iVar7 = FUN_4a02afd0(*(int *)(iVar5 + 0x2dc) * *(int *)(iVar5 + 0x2dc) +
                       ((int)(iVar2 * iVar2 + ((uint)(iVar2 * iVar2 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar5 + 0x2e0) = iVar7 >> 6;
  iVar7 = FUN_4a02afd0(*(int *)(iVar5 + 0x2dc) * *(int *)(iVar5 + 0x2dc) +
                       ((int)(iVar3 * iVar3 + ((uint)(iVar3 * iVar3 >> 0x1f) >> 0x1e)) >> 2));
  uVar9 = *(uint *)(iVar5 + 0x2dc);
  uVar13 = s3c_divide_signed32(*(int *)(iVar5 + 0x2e0) << 0xc,uVar9);
  uVar14 = s3c_divide_signed32((iVar7 >> 6) << 0xc,uVar9);
  *(int *)(iVar5 + 0x2e0) = (int)uVar13 * *(int *)(iVar5 + 0x330) >> 0xc;
  *(int *)(iVar5 + 0x2e4) = *(int *)(iVar5 + 0x334) * (int)uVar14 >> 0xc;
  *(int *)(iVar5 + 0x314) = iVar3 * 8 + -1;
  *(int *)(iVar5 + 0x310) = iVar2 * 8 + -1;
  iVar3 = *(int *)(iVar5 + 0x2c8);
  iVar2 = iVar3 * *(int *)(iVar5 + 0x32c) >> 0xc;
  *(int *)(iVar5 + 0x2d0) = iVar2;
  if (iVar2 < 6) {
    iVar2 = 5;
  }
  *(int *)(iVar5 + 0x2d0) = iVar2;
  iVar6 = *(int *)(iVar5 + 0x2cc);
  iVar7 = iVar6 * *(int *)(iVar5 + 0x32c) >> 0xc;
  iVar2 = iVar7 - iVar2;
  *(int *)(iVar5 + 0x2d4) = iVar7;
  uVar13 = s3c_divide_signed32((iVar6 - iVar3) * 0x1000,iVar2 * 0x40);
  *(int *)(iVar5 + 0x3c8) = (int)uVar13;
  uVar13 = s3c_divide_signed32(iVar2 * 0x8000,iVar6 - iVar3);
  *(int *)(iVar5 + 0x3d0) = (int)uVar13;
  iVar4 = *(int *)PTR_DAT_4a03ebbc;
  iVar7 = *(int *)(iVar4 + 0x32c);
  uVar9 = *(uint *)(iVar4 + 0x3ac);
  iVar2 = iVar7 * iVar3 >> 0xc;
  iVar5 = iVar7 * iVar6 >> 0xc;
  if (iVar2 < 5) {
    iVar2 = 5;
  }
  uVar10 = *(uint *)(iVar4 + 0x3e0);
  if (*(uint *)(iVar4 + 1000) != 0xffffffff) {
    uVar9 = iVar5 >> (*(uint *)(iVar4 + 1000) & 0xff);
  }
  if (uVar10 == 0) {
    iVar8 = *(int *)(iVar4 + 0x3e4);
    if (*(int *)(iVar4 + 0x2cc) + iVar8 != *(int *)(iVar4 + 0x2c8)) {
      uVar13 = s3c_divide_signed32(uVar9 << 0xc,((iVar5 + (iVar8 * iVar7 >> 0xc)) - iVar2) * 0x40);
      *(int *)(iVar4 + 0x3cc) = (int)uVar13;
      uVar13 = s3c_divide_signed32(uVar9 << 0xc,(iVar6 + iVar8) - iVar3);
      *(int *)(iVar4 + 0x3d4) = (int)uVar13;
    }
    if (uVar9 != 0) {
      uVar13 = s3c_divide_signed32(((iVar5 + (iVar8 * *(int *)(iVar4 + 0x32c) >> 0xc)) - iVar2) *
                                   0x8000,uVar9);
      *(int *)(iVar4 + 0x3d8) = (int)uVar13;
      uVar13 = s3c_divide_signed32(((iVar6 + iVar8) - iVar3) * 0x1000,uVar9);
      *(int *)(iVar4 + 0x3dc) = (int)uVar13;
    }
  }
  else {
    divisor = uVar9 - uVar10;
    uVar13 = s3c_divide_signed32(divisor * 0x1000,(iVar5 - iVar2) * 0x40);
    *(int *)(iVar4 + 0x3cc) = (int)uVar13;
    uVar13 = s3c_divide_signed32(divisor * 0x1000,iVar6 - iVar3);
    *(int *)(iVar4 + 0x3d4) = (int)uVar13;
    if (uVar9 != uVar10) {
      uVar13 = s3c_divide_signed32((iVar5 - iVar2) * 0x8000,divisor);
      *(int *)(iVar4 + 0x3d8) = (int)uVar13;
      uVar13 = s3c_divide_signed32((iVar6 - iVar3) * 0x1000,divisor);
      *(int *)(iVar4 + 0x3dc) = (int)uVar13;
    }
  }
  if (*(uint *)(iVar4 + 0x3cc) != 0) {
    uVar13 = s3c_divide_signed32(uVar9 << 0xc,*(uint *)(iVar4 + 0x3cc));
    *(int *)(iVar4 + 0x2d8) = (int)uVar13 + iVar2 * 0x40 >> 6;
    return;
  }
  *(int *)(iVar4 + 0x2d8) = iVar5;
  return;
}



// Address: 4a166148

int * FUN_4a166148(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;

  local_2c = (uint *)param_2[1];
  local_30 = (uint *)*param_2;
  local_24 = 0;
  local_28 = 0;
  if (local_30 != local_2c) {
    uVar2 = (int)local_2c - (int)local_30;
    local_34 = param_1[1] - *param_1;
    local_38 = 0;
    if ((uVar2 == 0xffffffff) || (-uVar2 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a16633c);
    }
    puVar3 = local_2c;
    if ((param_1[2] - *param_1) - 1U < local_34 + uVar2) {
      puVar3 = &local_38;
      if (uVar2 <= local_34) {
        puVar3 = &local_34;
      }
      local_38 = uVar2;
      iVar4 = *puVar3 + local_34 + 1;
      if (iVar4 == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)FUN_4a15e080(iVar4);
        if (puVar3 == (uint *)0x0) {
          puVar3 = (uint *)FUN_4a1669a8();
        }
      }
      puVar5 = (uint *)*param_1;
      puVar6 = (uint *)param_1[1];
      FUN_4a166140();
      puVar1 = puVar3;
      if (puVar6 != puVar5) {
        uVar2 = (int)puVar6 - (int)puVar5;
        puVar1 = s3c_move_preserving_destination(puVar3,puVar5,uVar2);
        puVar1 = (uint *)((int)puVar1 + uVar2);
      }
      puVar6 = local_2c;
      puVar5 = local_30;
      FUN_4a166140();
      if (puVar6 != puVar5) {
        uVar2 = (int)puVar6 - (int)puVar5;
        puVar1 = s3c_move_preserving_destination(puVar1,puVar5,uVar2);
        puVar1 = (uint *)((int)puVar1 + uVar2);
      }
      *(undefined1 *)puVar1 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar3;
      param_1[1] = (int)puVar1;
      param_1[2] = (int)puVar3 + iVar4;
    }
    else {
      puVar1 = (uint *)((int)local_30 + 1);
      iVar4 = param_1[1];
      local_38 = 0;
      FUN_4a166140();
      if (puVar3 != puVar1) {
        s3c_move_preserving_destination((uint *)(iVar4 + 1),puVar1,(int)puVar3 - (int)puVar1);
      }
      *(undefined1 *)(param_1[1] + uVar2) = 0;
      *(char *)param_1[1] = (char)*local_30;
      param_1[1] = param_1[1] + uVar2;
    }
  }
  return param_1;
}



