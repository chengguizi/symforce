// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Core>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*     x2: Scalar
*     x3: Scalar
*     x4: Scalar
*
* Outputs:
*     result: Matrix36_84
*/
template <typename Scalar>
Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> ComputeBDenseDynamicBibd93(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 449

    // Input arrays

    // Intermediate terms (77)
    const Scalar _tmp0 = x2 + 2;
    const Scalar _tmp1 = Scalar(1.0) / (x0);
    const Scalar _tmp2 = _tmp1*x4;
    const Scalar _tmp3 = -_tmp2;
    const Scalar _tmp4 = x0 - 2;
    const Scalar _tmp5 = -_tmp0;
    const Scalar _tmp6 = x1*x3;
    const Scalar _tmp7 = 2*x1;
    const Scalar _tmp8 = std::pow(x1, Scalar(2));
    const Scalar _tmp9 = (Scalar(1)/Scalar(2))*x1;
    const Scalar _tmp10 = x1 - 2;
    const Scalar _tmp11 = x1*x4;
    const Scalar _tmp12 = x2*x3;
    const Scalar _tmp13 = 2*x4;
    const Scalar _tmp14 = Scalar(1.0) / (x3);
    const Scalar _tmp15 = x0*x2;
    const Scalar _tmp16 = -_tmp13;
    const Scalar _tmp17 = x2 + x3;
    const Scalar _tmp18 = 4*x3;
    const Scalar _tmp19 = 2*x3;
    const Scalar _tmp20 = -_tmp19;
    const Scalar _tmp21 = -x2;
    const Scalar _tmp22 = 3*x0;
    const Scalar _tmp23 = -x3;
    const Scalar _tmp24 = x0 + x2;
    const Scalar _tmp25 = x0*x1;
    const Scalar _tmp26 = x3 + 3;
    const Scalar _tmp27 = x0 + 1;
    const Scalar _tmp28 = x3*x4;
    const Scalar _tmp29 = x0 + 2;
    const Scalar _tmp30 = 2*x0;
    const Scalar _tmp31 = -_tmp30;
    const Scalar _tmp32 = _tmp7 + x3;
    const Scalar _tmp33 = x4 + 2;
    const Scalar _tmp34 = _tmp7*x0;
    const Scalar _tmp35 = x2 + 1;
    const Scalar _tmp36 = -x4;
    const Scalar _tmp37 = x0 - 1;
    const Scalar _tmp38 = _tmp23 + 1;
    const Scalar _tmp39 = _tmp6*x0;
    const Scalar _tmp40 = -x0;
    const Scalar _tmp41 = x0*x3;
    const Scalar _tmp42 = x2 + x4;
    const Scalar _tmp43 = x1 + x4;
    const Scalar _tmp44 = _tmp19*x0;
    const Scalar _tmp45 = -x1;
    const Scalar _tmp46 = _tmp11*x0;
    const Scalar _tmp47 = Scalar(1.0) / (x2);
    const Scalar _tmp48 = x2 - 2;
    const Scalar _tmp49 = 2*x2;
    const Scalar _tmp50 = x1 + 1;
    const Scalar _tmp51 = x3 + 1;
    const Scalar _tmp52 = x1 - 1;
    const Scalar _tmp53 = x4 - 1;
    const Scalar _tmp54 = Scalar(1.0) / (x1);
    const Scalar _tmp55 = _tmp41*_tmp54;
    const Scalar _tmp56 = _tmp14*x4;
    const Scalar _tmp57 = _tmp23 + x0;
    const Scalar _tmp58 = x0 + x4;
    const Scalar _tmp59 = _tmp36 + x1;
    const Scalar _tmp60 = _tmp13 - 2;
    const Scalar _tmp61 = _tmp21 + x3;
    const Scalar _tmp62 = std::pow(x0, Scalar(2));
    const Scalar _tmp63 = x1*x2;
    const Scalar _tmp64 = _tmp40 + 2;
    const Scalar _tmp65 = x3 + 2;
    const Scalar _tmp66 = _tmp21 + x0;
    const Scalar _tmp67 = x4 - 2;
    const Scalar _tmp68 = 2 - _tmp7;
    const Scalar _tmp69 = Scalar(1.0) / (x4);
    const Scalar _tmp70 = -_tmp49;
    const Scalar _tmp71 = _tmp36 + x0;
    const Scalar _tmp72 = 2*_tmp14;
    const Scalar _tmp73 = x3 - 2;
    const Scalar _tmp74 = _tmp63 + x4;
    const Scalar _tmp75 = _tmp13 - 1;
    const Scalar _tmp76 = x3 - 1;

    // Output terms (1)
    Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> _result(36, 84);

    _result.setZero();

    _result(0, 0) = _tmp0 + x3;
    _result(1, 0) = -_tmp3 - 1;
    _result(8, 0) = -_tmp4;
    _result(0, 1) = _tmp5;
    _result(2, 1) = x3*(_tmp6 + 1);
    _result(9, 1) = -6;
    _result(0, 2) = -_tmp7 - x4;
    _result(3, 2) = 3*x1 + 3;
    _result(10, 2) = _tmp8;
    _result(0, 3) = _tmp9 + 1;
    _result(4, 3) = x3;
    _result(11, 3) = _tmp10*x1;
    _result(0, 4) = 2;
    _result(5, 4) = -Scalar(1.0)*x3;
    _result(12, 4) = x4;
    _result(0, 5) = x2 - 1;
    _result(6, 5) = _tmp11;
    _result(13, 5) = -8*_tmp12;
    _result(0, 6) = _tmp13;
    _result(7, 6) = -_tmp14*(_tmp15 + 2);
    _result(14, 6) = _tmp16 + x1;
    _result(1, 7) = _tmp17;
    _result(2, 7) = -_tmp18 + _tmp7 - 8;
    _result(15, 7) = -_tmp20 - 2*std::pow(x3, Scalar(2)) - 1;
    _result(1, 8) = _tmp13 + _tmp7;
    _result(3, 8) = -_tmp21 - _tmp9;
    _result(16, 8) = x2*(_tmp1*_tmp12 + x0);
    _result(1, 9) = _tmp22 - 8;
    _result(4, 9) = 3 - _tmp17;
    _result(17, 9) = -_tmp23 - _tmp24;
    _result(1, 10) = _tmp25;
    _result(5, 10) = -_tmp26;
    _result(18, 10) = _tmp27 + x3;
    _result(1, 11) = _tmp28 - _tmp29;
    _result(6, 11) = _tmp3;
    _result(19, 11) = -_tmp31 - _tmp32;
    _result(1, 12) = _tmp30 - 4;
    _result(7, 12) = 1;
    _result(20, 12) = x3/_tmp33;
    _result(2, 13) = -_tmp34 + _tmp35;
    _result(3, 13) = -_tmp36 - _tmp37*x2 - _tmp38;
    _result(21, 13) = _tmp15 - _tmp6;
    _result(2, 14) = x2;
    _result(4, 14) = -_tmp21 - _tmp39;
    _result(22, 14) = _tmp5;
    _result(2, 15) = _tmp23;
    _result(5, 15) = x2/(_tmp21 + _tmp40 + _tmp41 + x4);
    _result(23, 15) = x1*(_tmp26 + _tmp36);
    _result(2, 16) = -_tmp42 - 3;
    _result(6, 16) = _tmp35*x3 - x0;
    _result(24, 16) = -x4/(_tmp38 + _tmp43);
    _result(2, 17) = Scalar(2.0);
    _result(7, 17) = -_tmp44 - x1;
    _result(25, 17) = _tmp21;
    _result(3, 18) = _tmp33*x2;
    _result(4, 18) = -1;
    _result(26, 18) = _tmp45;
    _result(3, 19) = x0 + 4;
    _result(5, 19) = -_tmp21 - _tmp46;
    _result(27, 19) = (Scalar(1)/Scalar(2))*_tmp15;
    _result(3, 20) = x3*(_tmp19 + x2);
    _result(6, 20) = Scalar(4.0)*x1;
    _result(28, 20) = -_tmp15*_tmp18;
    _result(3, 21) = _tmp43;
    _result(7, 21) = 2*_tmp2*(x1 + Scalar(1.0));
    _result(29, 21) = _tmp46;
    _result(4, 22) = -_tmp13*x2 + 2*_tmp47;
    _result(5, 22) = -_tmp48*(_tmp11 + 1);
    _result(30, 22) = -_tmp20 - _tmp27;
    _result(4, 23) = -x0 - 5;
    _result(6, 23) = _tmp10*_tmp28;
    _result(31, 23) = _tmp49 + x0 - 5;
    _result(4, 24) = _tmp50*x4 + x4;
    _result(7, 24) = -_tmp49 - _tmp51;
    _result(32, 24) = (Scalar(1)/Scalar(2))*x0 + (Scalar(3)/Scalar(2))*x4;
    _result(5, 25) = -_tmp30*_tmp52;
    _result(6, 25) = _tmp16 + _tmp32;
    _result(33, 25) = _tmp23 + _tmp53*x1;
    _result(5, 26) = -_tmp47 - x4;
    _result(7, 26) = -_tmp24;
    _result(6, 27) = _tmp27*_tmp55;
    _result(7, 27) = -_tmp27 - _tmp56*x2;
    _result(35, 27) = -_tmp52*(x1 - 4);
    _result(8, 28) = -_tmp35 - _tmp7;
    _result(9, 28) = -_tmp57*x0;
    _result(15, 28) = -_tmp43 - _tmp58*x4;
    _result(8, 29) = _tmp59;
    _result(10, 29) = -_tmp30 - _tmp7 - 4;
    _result(16, 29) = -x3*(_tmp7 + x2) - x3;
    _result(8, 30) = _tmp19;
    _result(11, 30) = -_tmp45 - x0;
    _result(17, 30) = -_tmp60;
    _result(8, 31) = x0 - 4;
    _result(12, 31) = 2;
    _result(18, 31) = _tmp60;
    _result(8, 32) = 4*x2;
    _result(13, 32) = -_tmp61 + Scalar(-1.0);
    _result(19, 32) = _tmp36 + _tmp62*x3;
    _result(20, 33) = -_tmp57 - x4;
    _result(9, 34) = -4*_tmp15;
    _result(10, 34) = -_tmp39*_tmp47*x4;
    _result(21, 34) = _tmp29;
    _result(9, 35) = -_tmp63 - _tmp64;
    _result(11, 35) = _tmp31;
    _result(22, 35) = _tmp4*x0 + _tmp45;
    _result(9, 36) = _tmp22 + 2;
    _result(12, 36) = _tmp49;
    _result(23, 36) = -_tmp9*x0 - x0;
    _result(9, 37) = _tmp0 + _tmp36;
    _result(13, 37) = -_tmp6 - 3;
    _result(24, 37) = _tmp65*x1;
    _result(9, 38) = _tmp27*x4/_tmp42;
    _result(14, 38) = _tmp13*_tmp66;
    _result(25, 38) = _tmp19 - 4;
    _result(10, 39) = -5;
    _result(11, 39) = -x0*std::pow(x4, Scalar(2)) - 2;
    _result(26, 39) = _tmp42*x3 - 1;
    _result(10, 40) = _tmp30;
    _result(12, 40) = -_tmp56;
    _result(27, 40) = _tmp11 + 2;
    _result(10, 41) = _tmp4*(_tmp23 + x2);
    _result(13, 41) = -_tmp11*_tmp62;
    _result(28, 41) = -_tmp62*_tmp67*x1;
    _result(10, 42) = -_tmp4 - _tmp52*x1;
    _result(14, 42) = -_tmp49 - 4;
    _result(29, 42) = -_tmp23 - x3*(_tmp11 + x1);
    _result(11, 43) = _tmp30 + x3;
    _result(12, 43) = _tmp29*_tmp66*x3;
    _result(11, 44) = _tmp68;
    _result(13, 44) = _tmp34;
    _result(31, 44) = x3*(_tmp13 + _tmp17);
    _result(11, 45) = -_tmp50;
    _result(14, 45) = x1*(_tmp61 + x4);
    _result(32, 45) = -_tmp29;
    _result(12, 46) = -_tmp4 - x4;
    _result(13, 46) = -_tmp35*_tmp54;
    _result(33, 46) = -_tmp51*x3;
    _result(12, 47) = x0*(_tmp39 + 1);
    _result(14, 47) = -_tmp13*x0 - x0;
    _result(34, 47) = -2;
    _result(13, 48) = -_tmp36 - _tmp54*x0;
    _result(14, 48) = _tmp47*x3 + Scalar(-2.0);
    _result(35, 48) = x4*(_tmp23 + x1) - 2;
    _result(15, 49) = _tmp6*x4 + 2;
    _result(16, 49) = _tmp51;
    _result(21, 49) = _tmp17 + _tmp67;
    _result(15, 50) = _tmp48*x3;
    _result(17, 50) = -x1 + Scalar(1.0) / (_tmp41 + 1);
    _result(22, 50) = -_tmp40 - x1 - x2;
    _result(15, 51) = -4*_tmp69;
    _result(18, 51) = _tmp15*x4 - 2;
    _result(23, 51) = -_tmp30 - _tmp70;
    _result(15, 52) = -_tmp55;
    _result(19, 52) = _tmp71;
    _result(24, 52) = _tmp33;
    _result(15, 53) = -_tmp1*(x1 + 2) - _tmp24;
    _result(20, 53) = -_tmp56 - _tmp64;
    _result(25, 53) = _tmp15 + _tmp23;
    _result(16, 54) = -1;
    _result(17, 54) = -_tmp35;
    _result(26, 54) = _tmp59 + 2;
    _result(16, 55) = -_tmp21 - _tmp23 - _tmp27;
    _result(18, 55) = x0*(4*_tmp11 + 4);
    _result(27, 55) = -_tmp36 - _tmp67*x3;
    _result(16, 56) = _tmp16 + _tmp30 + _tmp63;
    _result(19, 56) = _tmp52*_tmp8;
    _result(28, 56) = _tmp51*x0;
    _result(16, 57) = _tmp10 + (Scalar(1)/Scalar(2))*_tmp8;
    _result(20, 57) = _tmp48/(_tmp21 + x1);
    _result(29, 57) = -_tmp72 - x0;
    _result(17, 58) = _tmp52;
    _result(18, 58) = -Scalar(1)/Scalar(4)*x2;
    _result(30, 58) = _tmp68;
    _result(17, 59) = Scalar(-1.0);
    _result(19, 59) = x4 - 4;
    _result(31, 59) = -x3*(_tmp49 + _tmp7);
    _result(17, 60) = _tmp0*_tmp13;
    _result(20, 60) = _tmp43 + x2;
    _result(32, 60) = -_tmp37 - Scalar(1)/Scalar(2)*x3;
    _result(18, 61) = -_tmp7*x4;
    _result(19, 61) = -2*_tmp6 - 4;
    _result(33, 61) = -x2*(_tmp7 - 4);
    _result(18, 62) = -_tmp4*_tmp48*x4;
    _result(34, 62) = -_tmp12 - _tmp33;
    _result(19, 63) = -_tmp12*_tmp73 - _tmp23;
    _result(20, 63) = 2 - _tmp28;
    _result(35, 63) = _tmp48;
    _result(21, 64) = -_tmp1*(_tmp7 + 2);
    _result(22, 64) = _tmp30 - 1;
    _result(26, 64) = _tmp40;
    _result(21, 65) = -_tmp44;
    _result(23, 65) = -_tmp30*_tmp69;
    _result(27, 65) = -x3/(_tmp6 - 2);
    _result(21, 66) = -x4*(_tmp36 + _tmp65);
    _result(24, 66) = x4;
    _result(28, 66) = _tmp35*x0;
    _result(21, 67) = x0*(_tmp49 + 2);
    _result(25, 67) = _tmp48 + x4*(_tmp70 + x1);
    _result(29, 67) = 2;
    _result(22, 68) = 1 - _tmp7;
    _result(23, 68) = 3*_tmp14*_tmp54;
    _result(30, 68) = _tmp24 + _tmp36;
    _result(22, 69) = -_tmp37*x3 - x3;
    _result(24, 69) = _tmp21;
    _result(31, 69) = x4 + Scalar(-0.5);
    _result(22, 70) = -_tmp74;
    _result(25, 70) = 3;
    _result(32, 70) = _tmp41 + x1;
    _result(23, 71) = _tmp42*_tmp75 + 1;
    _result(24, 71) = _tmp19 + 2;
    _result(33, 71) = -2*(_tmp51 + x4)*(x0 + x1);
    _result(23, 72) = 4*x0*(_tmp53 + x3);
    _result(25, 72) = _tmp16;
    _result(34, 72) = -4;
    _result(24, 73) = _tmp40;
    _result(25, 73) = -_tmp45 - _tmp60*x1;
    _result(35, 73) = 2 - std::pow(_tmp73, Scalar(2));
    _result(26, 74) = _tmp75;
    _result(27, 74) = x1;
    _result(30, 74) = -x0 - 3;
    _result(26, 75) = _tmp44;
    _result(28, 75) = -_tmp40 - _tmp69 - 1;
    _result(31, 75) = _tmp45 + x4 + 1;
    _result(26, 76) = _tmp17*_tmp35 + _tmp25;
    _result(29, 76) = -x0*(_tmp56 + x2);
    _result(32, 76) = -x4*(x2 + 2/_tmp76);
    _result(27, 77) = _tmp61 + 4;
    _result(28, 77) = _tmp24 + _tmp74;
    _result(27, 78) = _tmp16;
    _result(29, 78) = -_tmp12 + _tmp35;
    _result(34, 78) = _tmp13 + x3 + 6;
    _result(29, 79) = -Scalar(1)/Scalar(4)*_tmp14;
    _result(35, 79) = _tmp23 + _tmp63;
    _result(30, 80) = -_tmp20 - _tmp30;
    _result(31, 80) = -_tmp4*x2;
    _result(33, 80) = -_tmp69*(_tmp12 + x2) + 2;
    _result(30, 81) = _tmp19*_tmp42;
    _result(32, 81) = -_tmp58;
    _result(34, 81) = _tmp71;
    _result(31, 82) = -1;
    _result(32, 82) = _tmp36 + _tmp7;
    _result(35, 82) = _tmp65 + _tmp72;
    _result(33, 83) = _tmp10*x2;
    _result(34, 83) = _tmp28 - 1;
    _result(35, 83) = -_tmp14*_tmp76;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
