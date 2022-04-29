#ifndef _LCM_MB_Register_IDM_device_
#define _LCM_MB_Register_IDM_device_

/* _____DEFINETIONS__________________________________________________________ */


// Coils Register
enum LCM_DISCRETE_OUTPUT_COILS_REGISTER_FOR_IDM_DEVICES
{
	LCM_COIL_IDM_1_RUN_BIT = 300,
	LCM_COIL_IDM_2_RUN_BIT,
	LCM_COIL_IDM_3_RUN_BIT,
	LCM_COIL_IDM_4_RUN_BIT,
	LCM_COIL_IDM_5_RUN_BIT,
	LCM_COIL_IDM_6_RUN_BIT,
	LCM_COIL_IDM_7_RUN_BIT,
	LCM_COIL_IDM_8_RUN_BIT,
	LCM_COIL_IDM_9_RUN_BIT,
	LCM_COIL_IDM_10_RUN_BIT,
	LCM_COIL_IDM_11_RUN_BIT,
	LCM_COIL_IDM_12_RUN_BIT,
	LCM_COIL_IDM_13_RUN_BIT,
	LCM_COIL_IDM_14_RUN_BIT,
	LCM_COIL_IDM_15_RUN_BIT,
	LCM_COIL_IDM_16_RUN_BIT,
	LCM_COIL_IDM_17_RUN_BIT,
	LCM_COIL_IDM_18_RUN_BIT,
	LCM_COIL_IDM_19_RUN_BIT,
	LCM_COIL_IDM_20_RUN_BIT,
	LCM_COIL_IDM_21_RUN_BIT,
	LCM_COIL_IDM_22_RUN_BIT,
	LCM_COIL_IDM_23_RUN_BIT,
	LCM_COIL_IDM_24_RUN_BIT,
	LCM_COIL_IDM_25_RUN_BIT,
	LCM_COIL_IDM_26_RUN_BIT,
	LCM_COIL_IDM_27_RUN_BIT,
	LCM_COIL_IDM_28_RUN_BIT,
	LCM_COIL_IDM_29_RUN_BIT,
	LCM_COIL_IDM_30_RUN_BIT,
	LCM_COIL_IDM_31_RUN_BIT,
	LCM_COIL_IDM_32_RUN_BIT,
	LCM_COIL_IDM_33_RUN_BIT,
	LCM_COIL_IDM_34_RUN_BIT,
	LCM_COIL_IDM_35_RUN_BIT,
	LCM_COIL_IDM_36_RUN_BIT,
	LCM_COIL_IDM_37_RUN_BIT,
	LCM_COIL_IDM_38_RUN_BIT,
	LCM_COIL_IDM_39_RUN_BIT,
	LCM_COIL_IDM_40_RUN_BIT,
	LCM_COIL_IDM_41_RUN_BIT,
	LCM_COIL_IDM_42_RUN_BIT,
	LCM_COIL_IDM_43_RUN_BIT,
	LCM_COIL_IDM_44_RUN_BIT,
	LCM_COIL_IDM_45_RUN_BIT,
	LCM_COIL_IDM_46_RUN_BIT,
	LCM_COIL_IDM_47_RUN_BIT,
	LCM_COIL_IDM_48_RUN_BIT,
	LCM_COIL_IDM_49_RUN_BIT,
	LCM_COIL_IDM_50_RUN_BIT,
	LCM_COIL_IDM_51_RUN_BIT,
	LCM_COIL_IDM_52_RUN_BIT,
	LCM_COIL_IDM_53_RUN_BIT,
	LCM_COIL_IDM_54_RUN_BIT,
	LCM_COIL_IDM_55_RUN_BIT,
	LCM_COIL_IDM_56_RUN_BIT,
	LCM_COIL_IDM_57_RUN_BIT,
	LCM_COIL_IDM_58_RUN_BIT,
	LCM_COIL_IDM_59_RUN_BIT,
	LCM_COIL_IDM_60_RUN_BIT,
	LCM_COIL_IDM_61_RUN_BIT,
	LCM_COIL_IDM_62_RUN_BIT,
	LCM_COIL_IDM_63_RUN_BIT,
	LCM_COIL_IDM_64_RUN_BIT,
	LCM_COIL_IDM_65_RUN_BIT,
	LCM_COIL_IDM_66_RUN_BIT,
	LCM_COIL_IDM_67_RUN_BIT,
	LCM_COIL_IDM_68_RUN_BIT,
	LCM_COIL_IDM_69_RUN_BIT,
	LCM_COIL_IDM_70_RUN_BIT,
	LCM_COIL_IDM_71_RUN_BIT,
	LCM_COIL_IDM_72_RUN_BIT,
	LCM_COIL_IDM_73_RUN_BIT,
	LCM_COIL_IDM_74_RUN_BIT,
	LCM_COIL_IDM_75_RUN_BIT,
	LCM_COIL_IDM_76_RUN_BIT,
	LCM_COIL_IDM_77_RUN_BIT,
	LCM_COIL_IDM_78_RUN_BIT,
	LCM_COIL_IDM_79_RUN_BIT,
	LCM_COIL_IDM_80_RUN_BIT,
	LCM_COIL_IDM_81_RUN_BIT,
	LCM_COIL_IDM_82_RUN_BIT,
	LCM_COIL_IDM_83_RUN_BIT,
	LCM_COIL_IDM_84_RUN_BIT,
	LCM_COIL_IDM_85_RUN_BIT,
	LCM_COIL_IDM_86_RUN_BIT,
	LCM_COIL_IDM_87_RUN_BIT,
	LCM_COIL_IDM_88_RUN_BIT,
	LCM_COIL_IDM_89_RUN_BIT,
	LCM_COIL_IDM_90_RUN_BIT,
	LCM_COIL_IDM_91_RUN_BIT,
	LCM_COIL_IDM_92_RUN_BIT,
	LCM_COIL_IDM_93_RUN_BIT,
	LCM_COIL_IDM_94_RUN_BIT,
	LCM_COIL_IDM_95_RUN_BIT,
	LCM_COIL_IDM_96_RUN_BIT,
	LCM_COIL_IDM_97_RUN_BIT,
	LCM_COIL_IDM_98_RUN_BIT,
	LCM_COIL_IDM_99_RUN_BIT,
	LCM_COIL_IDM_100_RUN_BIT
};

enum LCM_DISCRETE_INPUT_CONTACTS_REGISTER_FOR_IDM_DEVICES
{
	LCM_DI_IDM_1_FEEDBACK_BIT = 300,
	LCM_DI_IDM_2_FEEDBACK_BIT,
	LCM_DI_IDM_3_FEEDBACK_BIT,
	LCM_DI_IDM_4_FEEDBACK_BIT,
	LCM_DI_IDM_5_FEEDBACK_BIT,
	LCM_DI_IDM_6_FEEDBACK_BIT,
	LCM_DI_IDM_7_FEEDBACK_BIT,
	LCM_DI_IDM_8_FEEDBACK_BIT,
	LCM_DI_IDM_9_FEEDBACK_BIT,
	LCM_DI_IDM_10_FEEDBACK_BIT,
	LCM_DI_IDM_11_FEEDBACK_BIT,
	LCM_DI_IDM_12_FEEDBACK_BIT,
	LCM_DI_IDM_13_FEEDBACK_BIT,
	LCM_DI_IDM_14_FEEDBACK_BIT,
	LCM_DI_IDM_15_FEEDBACK_BIT,
	LCM_DI_IDM_16_FEEDBACK_BIT,
	LCM_DI_IDM_17_FEEDBACK_BIT,
	LCM_DI_IDM_18_FEEDBACK_BIT,
	LCM_DI_IDM_19_FEEDBACK_BIT,
	LCM_DI_IDM_20_FEEDBACK_BIT,
	LCM_DI_IDM_21_FEEDBACK_BIT,
	LCM_DI_IDM_22_FEEDBACK_BIT,
	LCM_DI_IDM_23_FEEDBACK_BIT,
	LCM_DI_IDM_24_FEEDBACK_BIT,
	LCM_DI_IDM_25_FEEDBACK_BIT,
	LCM_DI_IDM_26_FEEDBACK_BIT,
	LCM_DI_IDM_27_FEEDBACK_BIT,
	LCM_DI_IDM_28_FEEDBACK_BIT,
	LCM_DI_IDM_29_FEEDBACK_BIT,
	LCM_DI_IDM_30_FEEDBACK_BIT,
	LCM_DI_IDM_31_FEEDBACK_BIT,
	LCM_DI_IDM_32_FEEDBACK_BIT,
	LCM_DI_IDM_33_FEEDBACK_BIT,
	LCM_DI_IDM_34_FEEDBACK_BIT,
	LCM_DI_IDM_35_FEEDBACK_BIT,
	LCM_DI_IDM_36_FEEDBACK_BIT,
	LCM_DI_IDM_37_FEEDBACK_BIT,
	LCM_DI_IDM_38_FEEDBACK_BIT,
	LCM_DI_IDM_39_FEEDBACK_BIT,
	LCM_DI_IDM_40_FEEDBACK_BIT,
	LCM_DI_IDM_41_FEEDBACK_BIT,
	LCM_DI_IDM_42_FEEDBACK_BIT,
	LCM_DI_IDM_43_FEEDBACK_BIT,
	LCM_DI_IDM_44_FEEDBACK_BIT,
	LCM_DI_IDM_45_FEEDBACK_BIT,
	LCM_DI_IDM_46_FEEDBACK_BIT,
	LCM_DI_IDM_47_FEEDBACK_BIT,
	LCM_DI_IDM_48_FEEDBACK_BIT,
	LCM_DI_IDM_49_FEEDBACK_BIT,
	LCM_DI_IDM_50_FEEDBACK_BIT,
	LCM_DI_IDM_51_FEEDBACK_BIT,
	LCM_DI_IDM_52_FEEDBACK_BIT,
	LCM_DI_IDM_53_FEEDBACK_BIT,
	LCM_DI_IDM_54_FEEDBACK_BIT,
	LCM_DI_IDM_55_FEEDBACK_BIT,
	LCM_DI_IDM_56_FEEDBACK_BIT,
	LCM_DI_IDM_57_FEEDBACK_BIT,
	LCM_DI_IDM_58_FEEDBACK_BIT,
	LCM_DI_IDM_59_FEEDBACK_BIT,
	LCM_DI_IDM_60_FEEDBACK_BIT,
	LCM_DI_IDM_61_FEEDBACK_BIT,
	LCM_DI_IDM_62_FEEDBACK_BIT,
	LCM_DI_IDM_63_FEEDBACK_BIT,
	LCM_DI_IDM_64_FEEDBACK_BIT,
	LCM_DI_IDM_65_FEEDBACK_BIT,
	LCM_DI_IDM_66_FEEDBACK_BIT,
	LCM_DI_IDM_67_FEEDBACK_BIT,
	LCM_DI_IDM_68_FEEDBACK_BIT,
	LCM_DI_IDM_69_FEEDBACK_BIT,
	LCM_DI_IDM_70_FEEDBACK_BIT,
	LCM_DI_IDM_71_FEEDBACK_BIT,
	LCM_DI_IDM_72_FEEDBACK_BIT,
	LCM_DI_IDM_73_FEEDBACK_BIT,
	LCM_DI_IDM_74_FEEDBACK_BIT,
	LCM_DI_IDM_75_FEEDBACK_BIT,
	LCM_DI_IDM_76_FEEDBACK_BIT,
	LCM_DI_IDM_77_FEEDBACK_BIT,
	LCM_DI_IDM_78_FEEDBACK_BIT,
	LCM_DI_IDM_79_FEEDBACK_BIT,
	LCM_DI_IDM_80_FEEDBACK_BIT,
	LCM_DI_IDM_81_FEEDBACK_BIT,
	LCM_DI_IDM_82_FEEDBACK_BIT,
	LCM_DI_IDM_83_FEEDBACK_BIT,
	LCM_DI_IDM_84_FEEDBACK_BIT,
	LCM_DI_IDM_85_FEEDBACK_BIT,
	LCM_DI_IDM_86_FEEDBACK_BIT,
	LCM_DI_IDM_87_FEEDBACK_BIT,
	LCM_DI_IDM_88_FEEDBACK_BIT,
	LCM_DI_IDM_89_FEEDBACK_BIT,
	LCM_DI_IDM_90_FEEDBACK_BIT,
	LCM_DI_IDM_91_FEEDBACK_BIT,
	LCM_DI_IDM_92_FEEDBACK_BIT,
	LCM_DI_IDM_93_FEEDBACK_BIT,
	LCM_DI_IDM_94_FEEDBACK_BIT,
	LCM_DI_IDM_95_FEEDBACK_BIT,
	LCM_DI_IDM_96_FEEDBACK_BIT,
	LCM_DI_IDM_97_FEEDBACK_BIT,
	LCM_DI_IDM_98_FEEDBACK_BIT,
	LCM_DI_IDM_99_FEEDBACK_BIT,
	LCM_DI_IDM_100_FEEDBACK_BIT
};

enum LCM_HOLDING_REGISTERS_FOR_IDM_DEVICES
{
	LCM_HR_IDM_1_HR_1 = 1200,
	LCM_HR_IDM_1_SET_FREQUENCY,
	LCM_HR_IDM_1_OUTPUT_FREQUENCY,
	LCM_HR_IDM_1_INPUT_VOLTAGE,
	LCM_HR_IDM_1_OUTPUT_VOLTAGE,
	LCM_HR_IDM_2_HR_1,
	LCM_HR_IDM_2_SET_FREQUENCY,
	LCM_HR_IDM_2_OUTPUT_FREQUENCY,
	LCM_HR_IDM_2_INPUT_VOLTAGE,
	LCM_HR_IDM_2_OUTPUT_VOLTAGE,
	LCM_HR_IDM_3_HR_1,
	LCM_HR_IDM_3_SET_FREQUENCY,
	LCM_HR_IDM_3_OUTPUT_FREQUENCY,
	LCM_HR_IDM_3_INPUT_VOLTAGE,
	LCM_HR_IDM_3_OUTPUT_VOLTAGE,
	LCM_HR_IDM_4_HR_1,
	LCM_HR_IDM_4_SET_FREQUENCY,
	LCM_HR_IDM_4_OUTPUT_FREQUENCY,
	LCM_HR_IDM_4_INPUT_VOLTAGE,
	LCM_HR_IDM_4_OUTPUT_VOLTAGE,
	LCM_HR_IDM_5_HR_1,
	LCM_HR_IDM_5_SET_FREQUENCY,
	LCM_HR_IDM_5_OUTPUT_FREQUENCY,
	LCM_HR_IDM_5_INPUT_VOLTAGE,
	LCM_HR_IDM_5_OUTPUT_VOLTAGE,
	LCM_HR_IDM_6_HR_1,
	LCM_HR_IDM_6_SET_FREQUENCY,
	LCM_HR_IDM_6_OUTPUT_FREQUENCY,
	LCM_HR_IDM_6_INPUT_VOLTAGE,
	LCM_HR_IDM_6_OUTPUT_VOLTAGE,
	LCM_HR_IDM_7_HR_1,
	LCM_HR_IDM_7_SET_FREQUENCY,
	LCM_HR_IDM_7_OUTPUT_FREQUENCY,
	LCM_HR_IDM_7_INPUT_VOLTAGE,
	LCM_HR_IDM_7_OUTPUT_VOLTAGE,
	LCM_HR_IDM_8_HR_1,
	LCM_HR_IDM_8_SET_FREQUENCY,
	LCM_HR_IDM_8_OUTPUT_FREQUENCY,
	LCM_HR_IDM_8_INPUT_VOLTAGE,
	LCM_HR_IDM_8_OUTPUT_VOLTAGE,
	LCM_HR_IDM_9_HR_1,
	LCM_HR_IDM_9_SET_FREQUENCY,
	LCM_HR_IDM_9_OUTPUT_FREQUENCY,
	LCM_HR_IDM_9_INPUT_VOLTAGE,
	LCM_HR_IDM_9_OUTPUT_VOLTAGE,
	LCM_HR_IDM_10_HR_1,
	LCM_HR_IDM_10_SET_FREQUENCY,
	LCM_HR_IDM_10_OUTPUT_FREQUENCY,
	LCM_HR_IDM_10_INPUT_VOLTAGE,
	LCM_HR_IDM_10_OUTPUT_VOLTAGE,
	LCM_HR_IDM_11_HR_1,
	LCM_HR_IDM_11_SET_FREQUENCY,
	LCM_HR_IDM_11_OUTPUT_FREQUENCY,
	LCM_HR_IDM_11_INPUT_VOLTAGE,
	LCM_HR_IDM_11_OUTPUT_VOLTAGE,
	LCM_HR_IDM_12_HR_1,
	LCM_HR_IDM_12_SET_FREQUENCY,
	LCM_HR_IDM_12_OUTPUT_FREQUENCY,
	LCM_HR_IDM_12_INPUT_VOLTAGE,
	LCM_HR_IDM_12_OUTPUT_VOLTAGE,
	LCM_HR_IDM_13_HR_1,
	LCM_HR_IDM_13_SET_FREQUENCY,
	LCM_HR_IDM_13_OUTPUT_FREQUENCY,
	LCM_HR_IDM_13_INPUT_VOLTAGE,
	LCM_HR_IDM_13_OUTPUT_VOLTAGE,
	LCM_HR_IDM_14_HR_1,
	LCM_HR_IDM_14_SET_FREQUENCY,
	LCM_HR_IDM_14_OUTPUT_FREQUENCY,
	LCM_HR_IDM_14_INPUT_VOLTAGE,
	LCM_HR_IDM_14_OUTPUT_VOLTAGE,
	LCM_HR_IDM_15_HR_1,
	LCM_HR_IDM_15_SET_FREQUENCY,
	LCM_HR_IDM_15_OUTPUT_FREQUENCY,
	LCM_HR_IDM_15_INPUT_VOLTAGE,
	LCM_HR_IDM_15_OUTPUT_VOLTAGE,
	LCM_HR_IDM_16_HR_1,
	LCM_HR_IDM_16_SET_FREQUENCY,
	LCM_HR_IDM_16_OUTPUT_FREQUENCY,
	LCM_HR_IDM_16_INPUT_VOLTAGE,
	LCM_HR_IDM_16_OUTPUT_VOLTAGE,
	LCM_HR_IDM_17_HR_1,
	LCM_HR_IDM_17_SET_FREQUENCY,
	LCM_HR_IDM_17_OUTPUT_FREQUENCY,
	LCM_HR_IDM_17_INPUT_VOLTAGE,
	LCM_HR_IDM_17_OUTPUT_VOLTAGE,
	LCM_HR_IDM_18_HR_1,
	LCM_HR_IDM_18_SET_FREQUENCY,
	LCM_HR_IDM_18_OUTPUT_FREQUENCY,
	LCM_HR_IDM_18_INPUT_VOLTAGE,
	LCM_HR_IDM_18_OUTPUT_VOLTAGE,
	LCM_HR_IDM_19_HR_1,
	LCM_HR_IDM_19_SET_FREQUENCY,
	LCM_HR_IDM_19_OUTPUT_FREQUENCY,
	LCM_HR_IDM_19_INPUT_VOLTAGE,
	LCM_HR_IDM_19_OUTPUT_VOLTAGE,
	LCM_HR_IDM_20_HR_1,
	LCM_HR_IDM_20_SET_FREQUENCY,
	LCM_HR_IDM_20_OUTPUT_FREQUENCY,
	LCM_HR_IDM_20_INPUT_VOLTAGE,
	LCM_HR_IDM_20_OUTPUT_VOLTAGE,
	LCM_HR_IDM_21_HR_1,
	LCM_HR_IDM_21_SET_FREQUENCY,
	LCM_HR_IDM_21_OUTPUT_FREQUENCY,
	LCM_HR_IDM_21_INPUT_VOLTAGE,
	LCM_HR_IDM_21_OUTPUT_VOLTAGE,
	LCM_HR_IDM_22_HR_1,
	LCM_HR_IDM_22_SET_FREQUENCY,
	LCM_HR_IDM_22_OUTPUT_FREQUENCY,
	LCM_HR_IDM_22_INPUT_VOLTAGE,
	LCM_HR_IDM_22_OUTPUT_VOLTAGE,
	LCM_HR_IDM_23_HR_1,
	LCM_HR_IDM_23_SET_FREQUENCY,
	LCM_HR_IDM_23_OUTPUT_FREQUENCY,
	LCM_HR_IDM_23_INPUT_VOLTAGE,
	LCM_HR_IDM_23_OUTPUT_VOLTAGE,
	LCM_HR_IDM_24_HR_1,
	LCM_HR_IDM_24_SET_FREQUENCY,
	LCM_HR_IDM_24_OUTPUT_FREQUENCY,
	LCM_HR_IDM_24_INPUT_VOLTAGE,
	LCM_HR_IDM_24_OUTPUT_VOLTAGE,
	LCM_HR_IDM_25_HR_1,
	LCM_HR_IDM_25_SET_FREQUENCY,
	LCM_HR_IDM_25_OUTPUT_FREQUENCY,
	LCM_HR_IDM_25_INPUT_VOLTAGE,
	LCM_HR_IDM_25_OUTPUT_VOLTAGE,
	LCM_HR_IDM_26_HR_1,
	LCM_HR_IDM_26_SET_FREQUENCY,
	LCM_HR_IDM_26_OUTPUT_FREQUENCY,
	LCM_HR_IDM_26_INPUT_VOLTAGE,
	LCM_HR_IDM_26_OUTPUT_VOLTAGE,
	LCM_HR_IDM_27_HR_1,
	LCM_HR_IDM_27_SET_FREQUENCY,
	LCM_HR_IDM_27_OUTPUT_FREQUENCY,
	LCM_HR_IDM_27_INPUT_VOLTAGE,
	LCM_HR_IDM_27_OUTPUT_VOLTAGE,
	LCM_HR_IDM_28_HR_1,
	LCM_HR_IDM_28_SET_FREQUENCY,
	LCM_HR_IDM_28_OUTPUT_FREQUENCY,
	LCM_HR_IDM_28_INPUT_VOLTAGE,
	LCM_HR_IDM_28_OUTPUT_VOLTAGE,
	LCM_HR_IDM_29_HR_1,
	LCM_HR_IDM_29_SET_FREQUENCY,
	LCM_HR_IDM_29_OUTPUT_FREQUENCY,
	LCM_HR_IDM_29_INPUT_VOLTAGE,
	LCM_HR_IDM_29_OUTPUT_VOLTAGE,
	LCM_HR_IDM_30_HR_1,
	LCM_HR_IDM_30_SET_FREQUENCY,
	LCM_HR_IDM_30_OUTPUT_FREQUENCY,
	LCM_HR_IDM_30_INPUT_VOLTAGE,
	LCM_HR_IDM_30_OUTPUT_VOLTAGE,
	LCM_HR_IDM_31_HR_1,
	LCM_HR_IDM_31_SET_FREQUENCY,
	LCM_HR_IDM_31_OUTPUT_FREQUENCY,
	LCM_HR_IDM_31_INPUT_VOLTAGE,
	LCM_HR_IDM_31_OUTPUT_VOLTAGE,
	LCM_HR_IDM_32_HR_1,
	LCM_HR_IDM_32_SET_FREQUENCY,
	LCM_HR_IDM_32_OUTPUT_FREQUENCY,
	LCM_HR_IDM_32_INPUT_VOLTAGE,
	LCM_HR_IDM_32_OUTPUT_VOLTAGE,
	LCM_HR_IDM_33_HR_1,
	LCM_HR_IDM_33_SET_FREQUENCY,
	LCM_HR_IDM_33_OUTPUT_FREQUENCY,
	LCM_HR_IDM_33_INPUT_VOLTAGE,
	LCM_HR_IDM_33_OUTPUT_VOLTAGE,
	LCM_HR_IDM_34_HR_1,
	LCM_HR_IDM_34_SET_FREQUENCY,
	LCM_HR_IDM_34_OUTPUT_FREQUENCY,
	LCM_HR_IDM_34_INPUT_VOLTAGE,
	LCM_HR_IDM_34_OUTPUT_VOLTAGE,
	LCM_HR_IDM_35_HR_1,
	LCM_HR_IDM_35_SET_FREQUENCY,
	LCM_HR_IDM_35_OUTPUT_FREQUENCY,
	LCM_HR_IDM_35_INPUT_VOLTAGE,
	LCM_HR_IDM_35_OUTPUT_VOLTAGE,
	LCM_HR_IDM_36_HR_1,
	LCM_HR_IDM_36_SET_FREQUENCY,
	LCM_HR_IDM_36_OUTPUT_FREQUENCY,
	LCM_HR_IDM_36_INPUT_VOLTAGE,
	LCM_HR_IDM_36_OUTPUT_VOLTAGE,
	LCM_HR_IDM_37_HR_1,
	LCM_HR_IDM_37_SET_FREQUENCY,
	LCM_HR_IDM_37_OUTPUT_FREQUENCY,
	LCM_HR_IDM_37_INPUT_VOLTAGE,
	LCM_HR_IDM_37_OUTPUT_VOLTAGE,
	LCM_HR_IDM_38_HR_1,
	LCM_HR_IDM_38_SET_FREQUENCY,
	LCM_HR_IDM_38_OUTPUT_FREQUENCY,
	LCM_HR_IDM_38_INPUT_VOLTAGE,
	LCM_HR_IDM_38_OUTPUT_VOLTAGE,
	LCM_HR_IDM_39_HR_1,
	LCM_HR_IDM_39_SET_FREQUENCY,
	LCM_HR_IDM_39_OUTPUT_FREQUENCY,
	LCM_HR_IDM_39_INPUT_VOLTAGE,
	LCM_HR_IDM_39_OUTPUT_VOLTAGE,
	LCM_HR_IDM_40_HR_1,
	LCM_HR_IDM_40_SET_FREQUENCY,
	LCM_HR_IDM_40_OUTPUT_FREQUENCY,
	LCM_HR_IDM_40_INPUT_VOLTAGE,
	LCM_HR_IDM_40_OUTPUT_VOLTAGE,
	LCM_HR_IDM_41_HR_1,
	LCM_HR_IDM_41_SET_FREQUENCY,
	LCM_HR_IDM_41_OUTPUT_FREQUENCY,
	LCM_HR_IDM_41_INPUT_VOLTAGE,
	LCM_HR_IDM_41_OUTPUT_VOLTAGE,
	LCM_HR_IDM_42_HR_1,
	LCM_HR_IDM_42_SET_FREQUENCY,
	LCM_HR_IDM_42_OUTPUT_FREQUENCY,
	LCM_HR_IDM_42_INPUT_VOLTAGE,
	LCM_HR_IDM_42_OUTPUT_VOLTAGE,
	LCM_HR_IDM_43_HR_1,
	LCM_HR_IDM_43_SET_FREQUENCY,
	LCM_HR_IDM_43_OUTPUT_FREQUENCY,
	LCM_HR_IDM_43_INPUT_VOLTAGE,
	LCM_HR_IDM_43_OUTPUT_VOLTAGE,
	LCM_HR_IDM_44_HR_1,
	LCM_HR_IDM_44_SET_FREQUENCY,
	LCM_HR_IDM_44_OUTPUT_FREQUENCY,
	LCM_HR_IDM_44_INPUT_VOLTAGE,
	LCM_HR_IDM_44_OUTPUT_VOLTAGE,
	LCM_HR_IDM_45_HR_1,
	LCM_HR_IDM_45_SET_FREQUENCY,
	LCM_HR_IDM_45_OUTPUT_FREQUENCY,
	LCM_HR_IDM_45_INPUT_VOLTAGE,
	LCM_HR_IDM_45_OUTPUT_VOLTAGE,
	LCM_HR_IDM_46_HR_1,
	LCM_HR_IDM_46_SET_FREQUENCY,
	LCM_HR_IDM_46_OUTPUT_FREQUENCY,
	LCM_HR_IDM_46_INPUT_VOLTAGE,
	LCM_HR_IDM_46_OUTPUT_VOLTAGE,
	LCM_HR_IDM_47_HR_1,
	LCM_HR_IDM_47_SET_FREQUENCY,
	LCM_HR_IDM_47_OUTPUT_FREQUENCY,
	LCM_HR_IDM_47_INPUT_VOLTAGE,
	LCM_HR_IDM_47_OUTPUT_VOLTAGE,
	LCM_HR_IDM_48_HR_1,
	LCM_HR_IDM_48_SET_FREQUENCY,
	LCM_HR_IDM_48_OUTPUT_FREQUENCY,
	LCM_HR_IDM_48_INPUT_VOLTAGE,
	LCM_HR_IDM_48_OUTPUT_VOLTAGE,
	LCM_HR_IDM_49_HR_1,
	LCM_HR_IDM_49_SET_FREQUENCY,
	LCM_HR_IDM_49_OUTPUT_FREQUENCY,
	LCM_HR_IDM_49_INPUT_VOLTAGE,
	LCM_HR_IDM_49_OUTPUT_VOLTAGE,
	LCM_HR_IDM_50_HR_1,
	LCM_HR_IDM_50_SET_FREQUENCY,
	LCM_HR_IDM_50_OUTPUT_FREQUENCY,
	LCM_HR_IDM_50_INPUT_VOLTAGE,
	LCM_HR_IDM_50_OUTPUT_VOLTAGE,
	LCM_HR_IDM_51_HR_1,
	LCM_HR_IDM_51_SET_FREQUENCY,
	LCM_HR_IDM_51_OUTPUT_FREQUENCY,
	LCM_HR_IDM_51_INPUT_VOLTAGE,
	LCM_HR_IDM_51_OUTPUT_VOLTAGE,
	LCM_HR_IDM_52_HR_1,
	LCM_HR_IDM_52_SET_FREQUENCY,
	LCM_HR_IDM_52_OUTPUT_FREQUENCY,
	LCM_HR_IDM_52_INPUT_VOLTAGE,
	LCM_HR_IDM_52_OUTPUT_VOLTAGE,
	LCM_HR_IDM_53_HR_1,
	LCM_HR_IDM_53_SET_FREQUENCY,
	LCM_HR_IDM_53_OUTPUT_FREQUENCY,
	LCM_HR_IDM_53_INPUT_VOLTAGE,
	LCM_HR_IDM_53_OUTPUT_VOLTAGE,
	LCM_HR_IDM_54_HR_1,
	LCM_HR_IDM_54_SET_FREQUENCY,
	LCM_HR_IDM_54_OUTPUT_FREQUENCY,
	LCM_HR_IDM_54_INPUT_VOLTAGE,
	LCM_HR_IDM_54_OUTPUT_VOLTAGE,
	LCM_HR_IDM_55_HR_1,
	LCM_HR_IDM_55_SET_FREQUENCY,
	LCM_HR_IDM_55_OUTPUT_FREQUENCY,
	LCM_HR_IDM_55_INPUT_VOLTAGE,
	LCM_HR_IDM_55_OUTPUT_VOLTAGE,
	LCM_HR_IDM_56_HR_1,
	LCM_HR_IDM_56_SET_FREQUENCY,
	LCM_HR_IDM_56_OUTPUT_FREQUENCY,
	LCM_HR_IDM_56_INPUT_VOLTAGE,
	LCM_HR_IDM_56_OUTPUT_VOLTAGE,
	LCM_HR_IDM_57_HR_1,
	LCM_HR_IDM_57_SET_FREQUENCY,
	LCM_HR_IDM_57_OUTPUT_FREQUENCY,
	LCM_HR_IDM_57_INPUT_VOLTAGE,
	LCM_HR_IDM_57_OUTPUT_VOLTAGE,
	LCM_HR_IDM_58_HR_1,
	LCM_HR_IDM_58_SET_FREQUENCY,
	LCM_HR_IDM_58_OUTPUT_FREQUENCY,
	LCM_HR_IDM_58_INPUT_VOLTAGE,
	LCM_HR_IDM_58_OUTPUT_VOLTAGE,
	LCM_HR_IDM_59_HR_1,
	LCM_HR_IDM_59_SET_FREQUENCY,
	LCM_HR_IDM_59_OUTPUT_FREQUENCY,
	LCM_HR_IDM_59_INPUT_VOLTAGE,
	LCM_HR_IDM_59_OUTPUT_VOLTAGE,
	LCM_HR_IDM_60_HR_1,
	LCM_HR_IDM_60_SET_FREQUENCY,
	LCM_HR_IDM_60_OUTPUT_FREQUENCY,
	LCM_HR_IDM_60_INPUT_VOLTAGE,
	LCM_HR_IDM_60_OUTPUT_VOLTAGE,
	LCM_HR_IDM_61_HR_1,
	LCM_HR_IDM_61_SET_FREQUENCY,
	LCM_HR_IDM_61_OUTPUT_FREQUENCY,
	LCM_HR_IDM_61_INPUT_VOLTAGE,
	LCM_HR_IDM_61_OUTPUT_VOLTAGE,
	LCM_HR_IDM_62_HR_1,
	LCM_HR_IDM_62_SET_FREQUENCY,
	LCM_HR_IDM_62_OUTPUT_FREQUENCY,
	LCM_HR_IDM_62_INPUT_VOLTAGE,
	LCM_HR_IDM_62_OUTPUT_VOLTAGE,
	LCM_HR_IDM_63_HR_1,
	LCM_HR_IDM_63_SET_FREQUENCY,
	LCM_HR_IDM_63_OUTPUT_FREQUENCY,
	LCM_HR_IDM_63_INPUT_VOLTAGE,
	LCM_HR_IDM_63_OUTPUT_VOLTAGE,
	LCM_HR_IDM_64_HR_1,
	LCM_HR_IDM_64_SET_FREQUENCY,
	LCM_HR_IDM_64_OUTPUT_FREQUENCY,
	LCM_HR_IDM_64_INPUT_VOLTAGE,
	LCM_HR_IDM_64_OUTPUT_VOLTAGE,
	LCM_HR_IDM_65_HR_1,
	LCM_HR_IDM_65_SET_FREQUENCY,
	LCM_HR_IDM_65_OUTPUT_FREQUENCY,
	LCM_HR_IDM_65_INPUT_VOLTAGE,
	LCM_HR_IDM_65_OUTPUT_VOLTAGE,
	LCM_HR_IDM_66_HR_1,
	LCM_HR_IDM_66_SET_FREQUENCY,
	LCM_HR_IDM_66_OUTPUT_FREQUENCY,
	LCM_HR_IDM_66_INPUT_VOLTAGE,
	LCM_HR_IDM_66_OUTPUT_VOLTAGE,
	LCM_HR_IDM_67_HR_1,
	LCM_HR_IDM_67_SET_FREQUENCY,
	LCM_HR_IDM_67_OUTPUT_FREQUENCY,
	LCM_HR_IDM_67_INPUT_VOLTAGE,
	LCM_HR_IDM_67_OUTPUT_VOLTAGE,
	LCM_HR_IDM_68_HR_1,
	LCM_HR_IDM_68_SET_FREQUENCY,
	LCM_HR_IDM_68_OUTPUT_FREQUENCY,
	LCM_HR_IDM_68_INPUT_VOLTAGE,
	LCM_HR_IDM_68_OUTPUT_VOLTAGE,
	LCM_HR_IDM_69_HR_1,
	LCM_HR_IDM_69_SET_FREQUENCY,
	LCM_HR_IDM_69_OUTPUT_FREQUENCY,
	LCM_HR_IDM_69_INPUT_VOLTAGE,
	LCM_HR_IDM_69_OUTPUT_VOLTAGE,
	LCM_HR_IDM_70_HR_1,
	LCM_HR_IDM_70_SET_FREQUENCY,
	LCM_HR_IDM_70_OUTPUT_FREQUENCY,
	LCM_HR_IDM_70_INPUT_VOLTAGE,
	LCM_HR_IDM_70_OUTPUT_VOLTAGE,
	LCM_HR_IDM_71_HR_1,
	LCM_HR_IDM_71_SET_FREQUENCY,
	LCM_HR_IDM_71_OUTPUT_FREQUENCY,
	LCM_HR_IDM_71_INPUT_VOLTAGE,
	LCM_HR_IDM_71_OUTPUT_VOLTAGE,
	LCM_HR_IDM_72_HR_1,
	LCM_HR_IDM_72_SET_FREQUENCY,
	LCM_HR_IDM_72_OUTPUT_FREQUENCY,
	LCM_HR_IDM_72_INPUT_VOLTAGE,
	LCM_HR_IDM_72_OUTPUT_VOLTAGE,
	LCM_HR_IDM_73_HR_1,
	LCM_HR_IDM_73_SET_FREQUENCY,
	LCM_HR_IDM_73_OUTPUT_FREQUENCY,
	LCM_HR_IDM_73_INPUT_VOLTAGE,
	LCM_HR_IDM_73_OUTPUT_VOLTAGE,
	LCM_HR_IDM_74_HR_1,
	LCM_HR_IDM_74_SET_FREQUENCY,
	LCM_HR_IDM_74_OUTPUT_FREQUENCY,
	LCM_HR_IDM_74_INPUT_VOLTAGE,
	LCM_HR_IDM_74_OUTPUT_VOLTAGE,
	LCM_HR_IDM_75_HR_1,
	LCM_HR_IDM_75_SET_FREQUENCY,
	LCM_HR_IDM_75_OUTPUT_FREQUENCY,
	LCM_HR_IDM_75_INPUT_VOLTAGE,
	LCM_HR_IDM_75_OUTPUT_VOLTAGE,
	LCM_HR_IDM_76_HR_1,
	LCM_HR_IDM_76_SET_FREQUENCY,
	LCM_HR_IDM_76_OUTPUT_FREQUENCY,
	LCM_HR_IDM_76_INPUT_VOLTAGE,
	LCM_HR_IDM_76_OUTPUT_VOLTAGE,
	LCM_HR_IDM_77_HR_1,
	LCM_HR_IDM_77_SET_FREQUENCY,
	LCM_HR_IDM_77_OUTPUT_FREQUENCY,
	LCM_HR_IDM_77_INPUT_VOLTAGE,
	LCM_HR_IDM_77_OUTPUT_VOLTAGE,
	LCM_HR_IDM_78_HR_1,
	LCM_HR_IDM_78_SET_FREQUENCY,
	LCM_HR_IDM_78_OUTPUT_FREQUENCY,
	LCM_HR_IDM_78_INPUT_VOLTAGE,
	LCM_HR_IDM_78_OUTPUT_VOLTAGE,
	LCM_HR_IDM_79_HR_1,
	LCM_HR_IDM_79_SET_FREQUENCY,
	LCM_HR_IDM_79_OUTPUT_FREQUENCY,
	LCM_HR_IDM_79_INPUT_VOLTAGE,
	LCM_HR_IDM_79_OUTPUT_VOLTAGE,
	LCM_HR_IDM_80_HR_1,
	LCM_HR_IDM_80_SET_FREQUENCY,
	LCM_HR_IDM_80_OUTPUT_FREQUENCY,
	LCM_HR_IDM_80_INPUT_VOLTAGE,
	LCM_HR_IDM_80_OUTPUT_VOLTAGE,
	LCM_HR_IDM_81_HR_1,
	LCM_HR_IDM_81_SET_FREQUENCY,
	LCM_HR_IDM_81_OUTPUT_FREQUENCY,
	LCM_HR_IDM_81_INPUT_VOLTAGE,
	LCM_HR_IDM_81_OUTPUT_VOLTAGE,
	LCM_HR_IDM_82_HR_1,
	LCM_HR_IDM_82_SET_FREQUENCY,
	LCM_HR_IDM_82_OUTPUT_FREQUENCY,
	LCM_HR_IDM_82_INPUT_VOLTAGE,
	LCM_HR_IDM_82_OUTPUT_VOLTAGE,
	LCM_HR_IDM_83_HR_1,
	LCM_HR_IDM_83_SET_FREQUENCY,
	LCM_HR_IDM_83_OUTPUT_FREQUENCY,
	LCM_HR_IDM_83_INPUT_VOLTAGE,
	LCM_HR_IDM_83_OUTPUT_VOLTAGE,
	LCM_HR_IDM_84_HR_1,
	LCM_HR_IDM_84_SET_FREQUENCY,
	LCM_HR_IDM_84_OUTPUT_FREQUENCY,
	LCM_HR_IDM_84_INPUT_VOLTAGE,
	LCM_HR_IDM_84_OUTPUT_VOLTAGE,
	LCM_HR_IDM_85_HR_1,
	LCM_HR_IDM_85_SET_FREQUENCY,
	LCM_HR_IDM_85_OUTPUT_FREQUENCY,
	LCM_HR_IDM_85_INPUT_VOLTAGE,
	LCM_HR_IDM_85_OUTPUT_VOLTAGE,
	LCM_HR_IDM_86_HR_1,
	LCM_HR_IDM_86_SET_FREQUENCY,
	LCM_HR_IDM_86_OUTPUT_FREQUENCY,
	LCM_HR_IDM_86_INPUT_VOLTAGE,
	LCM_HR_IDM_86_OUTPUT_VOLTAGE,
	LCM_HR_IDM_87_HR_1,
	LCM_HR_IDM_87_SET_FREQUENCY,
	LCM_HR_IDM_87_OUTPUT_FREQUENCY,
	LCM_HR_IDM_87_INPUT_VOLTAGE,
	LCM_HR_IDM_87_OUTPUT_VOLTAGE,
	LCM_HR_IDM_88_HR_1,
	LCM_HR_IDM_88_SET_FREQUENCY,
	LCM_HR_IDM_88_OUTPUT_FREQUENCY,
	LCM_HR_IDM_88_INPUT_VOLTAGE,
	LCM_HR_IDM_88_OUTPUT_VOLTAGE,
	LCM_HR_IDM_89_HR_1,
	LCM_HR_IDM_89_SET_FREQUENCY,
	LCM_HR_IDM_89_OUTPUT_FREQUENCY,
	LCM_HR_IDM_89_INPUT_VOLTAGE,
	LCM_HR_IDM_89_OUTPUT_VOLTAGE,
	LCM_HR_IDM_90_HR_1,
	LCM_HR_IDM_90_SET_FREQUENCY,
	LCM_HR_IDM_90_OUTPUT_FREQUENCY,
	LCM_HR_IDM_90_INPUT_VOLTAGE,
	LCM_HR_IDM_90_OUTPUT_VOLTAGE,
	LCM_HR_IDM_91_HR_1,
	LCM_HR_IDM_91_SET_FREQUENCY,
	LCM_HR_IDM_91_OUTPUT_FREQUENCY,
	LCM_HR_IDM_91_INPUT_VOLTAGE,
	LCM_HR_IDM_91_OUTPUT_VOLTAGE,
	LCM_HR_IDM_92_HR_1,
	LCM_HR_IDM_92_SET_FREQUENCY,
	LCM_HR_IDM_92_OUTPUT_FREQUENCY,
	LCM_HR_IDM_92_INPUT_VOLTAGE,
	LCM_HR_IDM_92_OUTPUT_VOLTAGE,
	LCM_HR_IDM_93_HR_1,
	LCM_HR_IDM_93_SET_FREQUENCY,
	LCM_HR_IDM_93_OUTPUT_FREQUENCY,
	LCM_HR_IDM_93_INPUT_VOLTAGE,
	LCM_HR_IDM_93_OUTPUT_VOLTAGE,
	LCM_HR_IDM_94_HR_1,
	LCM_HR_IDM_94_SET_FREQUENCY,
	LCM_HR_IDM_94_OUTPUT_FREQUENCY,
	LCM_HR_IDM_94_INPUT_VOLTAGE,
	LCM_HR_IDM_94_OUTPUT_VOLTAGE,
	LCM_HR_IDM_95_HR_1,
	LCM_HR_IDM_95_SET_FREQUENCY,
	LCM_HR_IDM_95_OUTPUT_FREQUENCY,
	LCM_HR_IDM_95_INPUT_VOLTAGE,
	LCM_HR_IDM_95_OUTPUT_VOLTAGE,
	LCM_HR_IDM_96_HR_1,
	LCM_HR_IDM_96_SET_FREQUENCY,
	LCM_HR_IDM_96_OUTPUT_FREQUENCY,
	LCM_HR_IDM_96_INPUT_VOLTAGE,
	LCM_HR_IDM_96_OUTPUT_VOLTAGE,
	LCM_HR_IDM_97_HR_1,
	LCM_HR_IDM_97_SET_FREQUENCY,
	LCM_HR_IDM_97_OUTPUT_FREQUENCY,
	LCM_HR_IDM_97_INPUT_VOLTAGE,
	LCM_HR_IDM_97_OUTPUT_VOLTAGE,
	LCM_HR_IDM_98_HR_1,
	LCM_HR_IDM_98_SET_FREQUENCY,
	LCM_HR_IDM_98_OUTPUT_FREQUENCY,
	LCM_HR_IDM_98_INPUT_VOLTAGE,
	LCM_HR_IDM_98_OUTPUT_VOLTAGE,
	LCM_HR_IDM_99_HR_1,
	LCM_HR_IDM_99_SET_FREQUENCY,
	LCM_HR_IDM_99_OUTPUT_FREQUENCY,
	LCM_HR_IDM_99_INPUT_VOLTAGE,
	LCM_HR_IDM_99_OUTPUT_VOLTAGE,
	LCM_HR_IDM_100_HR_1,
	LCM_HR_IDM_100_SET_FREQUENCY,
	LCM_HR_IDM_100_OUTPUT_FREQUENCY,
	LCM_HR_IDM_100_INPUT_VOLTAGE,
	LCM_HR_IDM_100_OUTPUT_VOLTAGE
};

enum LCM_INPUT_REGISTERS_FOR_IDM_DEVICES
{
	LCM_IR_IDM_1_OUTPUT_CURRENT = 1200,
	LCM_IR_IDM_1_IR2,
	LCM_IR_IDM_1_IR3,
	LCM_IR_IDM_1_IR4,
	LCM_IR_IDM_1_FAULT_CODE,
	LCM_IR_IDM_2_OUTPUT_CURRENT,
	LCM_IR_IDM_2_IR2,
	LCM_IR_IDM_2_IR3,
	LCM_IR_IDM_2_IR4,
	LCM_IR_IDM_2_FAULT_CODE,
	LCM_IR_IDM_3_OUTPUT_CURRENT,
	LCM_IR_IDM_3_IR2,
	LCM_IR_IDM_3_IR3,
	LCM_IR_IDM_3_IR4,
	LCM_IR_IDM_3_FAULT_CODE,
	LCM_IR_IDM_4_OUTPUT_CURRENT,
	LCM_IR_IDM_4_IR2,
	LCM_IR_IDM_4_IR3,
	LCM_IR_IDM_4_IR4,
	LCM_IR_IDM_4_FAULT_CODE,
	LCM_IR_IDM_5_OUTPUT_CURRENT,
	LCM_IR_IDM_5_IR2,
	LCM_IR_IDM_5_IR3,
	LCM_IR_IDM_5_IR4,
	LCM_IR_IDM_5_FAULT_CODE,
	LCM_IR_IDM_6_OUTPUT_CURRENT,
	LCM_IR_IDM_6_IR2,
	LCM_IR_IDM_6_IR3,
	LCM_IR_IDM_6_IR4,
	LCM_IR_IDM_6_FAULT_CODE,
	LCM_IR_IDM_7_OUTPUT_CURRENT,
	LCM_IR_IDM_7_IR2,
	LCM_IR_IDM_7_IR3,
	LCM_IR_IDM_7_IR4,
	LCM_IR_IDM_7_FAULT_CODE,
	LCM_IR_IDM_8_OUTPUT_CURRENT,
	LCM_IR_IDM_8_IR2,
	LCM_IR_IDM_8_IR3,
	LCM_IR_IDM_8_IR4,
	LCM_IR_IDM_8_FAULT_CODE,
	LCM_IR_IDM_9_OUTPUT_CURRENT,
	LCM_IR_IDM_9_IR2,
	LCM_IR_IDM_9_IR3,
	LCM_IR_IDM_9_IR4,
	LCM_IR_IDM_9_FAULT_CODE,
	LCM_IR_IDM_10_OUTPUT_CURRENT,
	LCM_IR_IDM_10_IR2,
	LCM_IR_IDM_10_IR3,
	LCM_IR_IDM_10_IR4,
	LCM_IR_IDM_10_FAULT_CODE,
	LCM_IR_IDM_11_OUTPUT_CURRENT,
	LCM_IR_IDM_11_IR2,
	LCM_IR_IDM_11_IR3,
	LCM_IR_IDM_11_IR4,
	LCM_IR_IDM_11_FAULT_CODE,
	LCM_IR_IDM_12_OUTPUT_CURRENT,
	LCM_IR_IDM_12_IR2,
	LCM_IR_IDM_12_IR3,
	LCM_IR_IDM_12_IR4,
	LCM_IR_IDM_12_FAULT_CODE,
	LCM_IR_IDM_13_OUTPUT_CURRENT,
	LCM_IR_IDM_13_IR2,
	LCM_IR_IDM_13_IR3,
	LCM_IR_IDM_13_IR4,
	LCM_IR_IDM_13_FAULT_CODE,
	LCM_IR_IDM_14_OUTPUT_CURRENT,
	LCM_IR_IDM_14_IR2,
	LCM_IR_IDM_14_IR3,
	LCM_IR_IDM_14_IR4,
	LCM_IR_IDM_14_FAULT_CODE,
	LCM_IR_IDM_15_OUTPUT_CURRENT,
	LCM_IR_IDM_15_IR2,
	LCM_IR_IDM_15_IR3,
	LCM_IR_IDM_15_IR4,
	LCM_IR_IDM_15_FAULT_CODE,
	LCM_IR_IDM_16_OUTPUT_CURRENT,
	LCM_IR_IDM_16_IR2,
	LCM_IR_IDM_16_IR3,
	LCM_IR_IDM_16_IR4,
	LCM_IR_IDM_16_FAULT_CODE,
	LCM_IR_IDM_17_OUTPUT_CURRENT,
	LCM_IR_IDM_17_IR2,
	LCM_IR_IDM_17_IR3,
	LCM_IR_IDM_17_IR4,
	LCM_IR_IDM_17_FAULT_CODE,
	LCM_IR_IDM_18_OUTPUT_CURRENT,
	LCM_IR_IDM_18_IR2,
	LCM_IR_IDM_18_IR3,
	LCM_IR_IDM_18_IR4,
	LCM_IR_IDM_18_FAULT_CODE,
	LCM_IR_IDM_19_OUTPUT_CURRENT,
	LCM_IR_IDM_19_IR2,
	LCM_IR_IDM_19_IR3,
	LCM_IR_IDM_19_IR4,
	LCM_IR_IDM_19_FAULT_CODE,
	LCM_IR_IDM_20_OUTPUT_CURRENT,
	LCM_IR_IDM_20_IR2,
	LCM_IR_IDM_20_IR3,
	LCM_IR_IDM_20_IR4,
	LCM_IR_IDM_20_FAULT_CODE,
	LCM_IR_IDM_21_OUTPUT_CURRENT,
	LCM_IR_IDM_21_IR2,
	LCM_IR_IDM_21_IR3,
	LCM_IR_IDM_21_IR4,
	LCM_IR_IDM_21_FAULT_CODE,
	LCM_IR_IDM_22_OUTPUT_CURRENT,
	LCM_IR_IDM_22_IR2,
	LCM_IR_IDM_22_IR3,
	LCM_IR_IDM_22_IR4,
	LCM_IR_IDM_22_FAULT_CODE,
	LCM_IR_IDM_23_OUTPUT_CURRENT,
	LCM_IR_IDM_23_IR2,
	LCM_IR_IDM_23_IR3,
	LCM_IR_IDM_23_IR4,
	LCM_IR_IDM_23_FAULT_CODE,
	LCM_IR_IDM_24_OUTPUT_CURRENT,
	LCM_IR_IDM_24_IR2,
	LCM_IR_IDM_24_IR3,
	LCM_IR_IDM_24_IR4,
	LCM_IR_IDM_24_FAULT_CODE,
	LCM_IR_IDM_25_OUTPUT_CURRENT,
	LCM_IR_IDM_25_IR2,
	LCM_IR_IDM_25_IR3,
	LCM_IR_IDM_25_IR4,
	LCM_IR_IDM_25_FAULT_CODE,
	LCM_IR_IDM_26_OUTPUT_CURRENT,
	LCM_IR_IDM_26_IR2,
	LCM_IR_IDM_26_IR3,
	LCM_IR_IDM_26_IR4,
	LCM_IR_IDM_26_FAULT_CODE,
	LCM_IR_IDM_27_OUTPUT_CURRENT,
	LCM_IR_IDM_27_IR2,
	LCM_IR_IDM_27_IR3,
	LCM_IR_IDM_27_IR4,
	LCM_IR_IDM_27_FAULT_CODE,
	LCM_IR_IDM_28_OUTPUT_CURRENT,
	LCM_IR_IDM_28_IR2,
	LCM_IR_IDM_28_IR3,
	LCM_IR_IDM_28_IR4,
	LCM_IR_IDM_28_FAULT_CODE,
	LCM_IR_IDM_29_OUTPUT_CURRENT,
	LCM_IR_IDM_29_IR2,
	LCM_IR_IDM_29_IR3,
	LCM_IR_IDM_29_IR4,
	LCM_IR_IDM_29_FAULT_CODE,
	LCM_IR_IDM_30_OUTPUT_CURRENT,
	LCM_IR_IDM_30_IR2,
	LCM_IR_IDM_30_IR3,
	LCM_IR_IDM_30_IR4,
	LCM_IR_IDM_30_FAULT_CODE,
	LCM_IR_IDM_31_OUTPUT_CURRENT,
	LCM_IR_IDM_31_IR2,
	LCM_IR_IDM_31_IR3,
	LCM_IR_IDM_31_IR4,
	LCM_IR_IDM_31_FAULT_CODE,
	LCM_IR_IDM_32_OUTPUT_CURRENT,
	LCM_IR_IDM_32_IR2,
	LCM_IR_IDM_32_IR3,
	LCM_IR_IDM_32_IR4,
	LCM_IR_IDM_32_FAULT_CODE,
	LCM_IR_IDM_33_OUTPUT_CURRENT,
	LCM_IR_IDM_33_IR2,
	LCM_IR_IDM_33_IR3,
	LCM_IR_IDM_33_IR4,
	LCM_IR_IDM_33_FAULT_CODE,
	LCM_IR_IDM_34_OUTPUT_CURRENT,
	LCM_IR_IDM_34_IR2,
	LCM_IR_IDM_34_IR3,
	LCM_IR_IDM_34_IR4,
	LCM_IR_IDM_34_FAULT_CODE,
	LCM_IR_IDM_35_OUTPUT_CURRENT,
	LCM_IR_IDM_35_IR2,
	LCM_IR_IDM_35_IR3,
	LCM_IR_IDM_35_IR4,
	LCM_IR_IDM_35_FAULT_CODE,
	LCM_IR_IDM_36_OUTPUT_CURRENT,
	LCM_IR_IDM_36_IR2,
	LCM_IR_IDM_36_IR3,
	LCM_IR_IDM_36_IR4,
	LCM_IR_IDM_36_FAULT_CODE,
	LCM_IR_IDM_37_OUTPUT_CURRENT,
	LCM_IR_IDM_37_IR2,
	LCM_IR_IDM_37_IR3,
	LCM_IR_IDM_37_IR4,
	LCM_IR_IDM_37_FAULT_CODE,
	LCM_IR_IDM_38_OUTPUT_CURRENT,
	LCM_IR_IDM_38_IR2,
	LCM_IR_IDM_38_IR3,
	LCM_IR_IDM_38_IR4,
	LCM_IR_IDM_38_FAULT_CODE,
	LCM_IR_IDM_39_OUTPUT_CURRENT,
	LCM_IR_IDM_39_IR2,
	LCM_IR_IDM_39_IR3,
	LCM_IR_IDM_39_IR4,
	LCM_IR_IDM_39_FAULT_CODE,
	LCM_IR_IDM_40_OUTPUT_CURRENT,
	LCM_IR_IDM_40_IR2,
	LCM_IR_IDM_40_IR3,
	LCM_IR_IDM_40_IR4,
	LCM_IR_IDM_40_FAULT_CODE,
	LCM_IR_IDM_41_OUTPUT_CURRENT,
	LCM_IR_IDM_41_IR2,
	LCM_IR_IDM_41_IR3,
	LCM_IR_IDM_41_IR4,
	LCM_IR_IDM_41_FAULT_CODE,
	LCM_IR_IDM_42_OUTPUT_CURRENT,
	LCM_IR_IDM_42_IR2,
	LCM_IR_IDM_42_IR3,
	LCM_IR_IDM_42_IR4,
	LCM_IR_IDM_42_FAULT_CODE,
	LCM_IR_IDM_43_OUTPUT_CURRENT,
	LCM_IR_IDM_43_IR2,
	LCM_IR_IDM_43_IR3,
	LCM_IR_IDM_43_IR4,
	LCM_IR_IDM_43_FAULT_CODE,
	LCM_IR_IDM_44_OUTPUT_CURRENT,
	LCM_IR_IDM_44_IR2,
	LCM_IR_IDM_44_IR3,
	LCM_IR_IDM_44_IR4,
	LCM_IR_IDM_44_FAULT_CODE,
	LCM_IR_IDM_45_OUTPUT_CURRENT,
	LCM_IR_IDM_45_IR2,
	LCM_IR_IDM_45_IR3,
	LCM_IR_IDM_45_IR4,
	LCM_IR_IDM_45_FAULT_CODE,
	LCM_IR_IDM_46_OUTPUT_CURRENT,
	LCM_IR_IDM_46_IR2,
	LCM_IR_IDM_46_IR3,
	LCM_IR_IDM_46_IR4,
	LCM_IR_IDM_46_FAULT_CODE,
	LCM_IR_IDM_47_OUTPUT_CURRENT,
	LCM_IR_IDM_47_IR2,
	LCM_IR_IDM_47_IR3,
	LCM_IR_IDM_47_IR4,
	LCM_IR_IDM_47_FAULT_CODE,
	LCM_IR_IDM_48_OUTPUT_CURRENT,
	LCM_IR_IDM_48_IR2,
	LCM_IR_IDM_48_IR3,
	LCM_IR_IDM_48_IR4,
	LCM_IR_IDM_48_FAULT_CODE,
	LCM_IR_IDM_49_OUTPUT_CURRENT,
	LCM_IR_IDM_49_IR2,
	LCM_IR_IDM_49_IR3,
	LCM_IR_IDM_49_IR4,
	LCM_IR_IDM_49_FAULT_CODE,
	LCM_IR_IDM_50_OUTPUT_CURRENT,
	LCM_IR_IDM_50_IR2,
	LCM_IR_IDM_50_IR3,
	LCM_IR_IDM_50_IR4,
	LCM_IR_IDM_50_FAULT_CODE,
	LCM_IR_IDM_51_OUTPUT_CURRENT,
	LCM_IR_IDM_51_IR2,
	LCM_IR_IDM_51_IR3,
	LCM_IR_IDM_51_IR4,
	LCM_IR_IDM_51_FAULT_CODE,
	LCM_IR_IDM_52_OUTPUT_CURRENT,
	LCM_IR_IDM_52_IR2,
	LCM_IR_IDM_52_IR3,
	LCM_IR_IDM_52_IR4,
	LCM_IR_IDM_52_FAULT_CODE,
	LCM_IR_IDM_53_OUTPUT_CURRENT,
	LCM_IR_IDM_53_IR2,
	LCM_IR_IDM_53_IR3,
	LCM_IR_IDM_53_IR4,
	LCM_IR_IDM_53_FAULT_CODE,
	LCM_IR_IDM_54_OUTPUT_CURRENT,
	LCM_IR_IDM_54_IR2,
	LCM_IR_IDM_54_IR3,
	LCM_IR_IDM_54_IR4,
	LCM_IR_IDM_54_FAULT_CODE,
	LCM_IR_IDM_55_OUTPUT_CURRENT,
	LCM_IR_IDM_55_IR2,
	LCM_IR_IDM_55_IR3,
	LCM_IR_IDM_55_IR4,
	LCM_IR_IDM_55_FAULT_CODE,
	LCM_IR_IDM_56_OUTPUT_CURRENT,
	LCM_IR_IDM_56_IR2,
	LCM_IR_IDM_56_IR3,
	LCM_IR_IDM_56_IR4,
	LCM_IR_IDM_56_FAULT_CODE,
	LCM_IR_IDM_57_OUTPUT_CURRENT,
	LCM_IR_IDM_57_IR2,
	LCM_IR_IDM_57_IR3,
	LCM_IR_IDM_57_IR4,
	LCM_IR_IDM_57_FAULT_CODE,
	LCM_IR_IDM_58_OUTPUT_CURRENT,
	LCM_IR_IDM_58_IR2,
	LCM_IR_IDM_58_IR3,
	LCM_IR_IDM_58_IR4,
	LCM_IR_IDM_58_FAULT_CODE,
	LCM_IR_IDM_59_OUTPUT_CURRENT,
	LCM_IR_IDM_59_IR2,
	LCM_IR_IDM_59_IR3,
	LCM_IR_IDM_59_IR4,
	LCM_IR_IDM_59_FAULT_CODE,
	LCM_IR_IDM_60_OUTPUT_CURRENT,
	LCM_IR_IDM_60_IR2,
	LCM_IR_IDM_60_IR3,
	LCM_IR_IDM_60_IR4,
	LCM_IR_IDM_60_FAULT_CODE,
	LCM_IR_IDM_61_OUTPUT_CURRENT,
	LCM_IR_IDM_61_IR2,
	LCM_IR_IDM_61_IR3,
	LCM_IR_IDM_61_IR4,
	LCM_IR_IDM_61_FAULT_CODE,
	LCM_IR_IDM_62_OUTPUT_CURRENT,
	LCM_IR_IDM_62_IR2,
	LCM_IR_IDM_62_IR3,
	LCM_IR_IDM_62_IR4,
	LCM_IR_IDM_62_FAULT_CODE,
	LCM_IR_IDM_63_OUTPUT_CURRENT,
	LCM_IR_IDM_63_IR2,
	LCM_IR_IDM_63_IR3,
	LCM_IR_IDM_63_IR4,
	LCM_IR_IDM_63_FAULT_CODE,
	LCM_IR_IDM_64_OUTPUT_CURRENT,
	LCM_IR_IDM_64_IR2,
	LCM_IR_IDM_64_IR3,
	LCM_IR_IDM_64_IR4,
	LCM_IR_IDM_64_FAULT_CODE,
	LCM_IR_IDM_65_OUTPUT_CURRENT,
	LCM_IR_IDM_65_IR2,
	LCM_IR_IDM_65_IR3,
	LCM_IR_IDM_65_IR4,
	LCM_IR_IDM_65_FAULT_CODE,
	LCM_IR_IDM_66_OUTPUT_CURRENT,
	LCM_IR_IDM_66_IR2,
	LCM_IR_IDM_66_IR3,
	LCM_IR_IDM_66_IR4,
	LCM_IR_IDM_66_FAULT_CODE,
	LCM_IR_IDM_67_OUTPUT_CURRENT,
	LCM_IR_IDM_67_IR2,
	LCM_IR_IDM_67_IR3,
	LCM_IR_IDM_67_IR4,
	LCM_IR_IDM_67_FAULT_CODE,
	LCM_IR_IDM_68_OUTPUT_CURRENT,
	LCM_IR_IDM_68_IR2,
	LCM_IR_IDM_68_IR3,
	LCM_IR_IDM_68_IR4,
	LCM_IR_IDM_68_FAULT_CODE,
	LCM_IR_IDM_69_OUTPUT_CURRENT,
	LCM_IR_IDM_69_IR2,
	LCM_IR_IDM_69_IR3,
	LCM_IR_IDM_69_IR4,
	LCM_IR_IDM_69_FAULT_CODE,
	LCM_IR_IDM_70_OUTPUT_CURRENT,
	LCM_IR_IDM_70_IR2,
	LCM_IR_IDM_70_IR3,
	LCM_IR_IDM_70_IR4,
	LCM_IR_IDM_70_FAULT_CODE,
	LCM_IR_IDM_71_OUTPUT_CURRENT,
	LCM_IR_IDM_71_IR2,
	LCM_IR_IDM_71_IR3,
	LCM_IR_IDM_71_IR4,
	LCM_IR_IDM_71_FAULT_CODE,
	LCM_IR_IDM_72_OUTPUT_CURRENT,
	LCM_IR_IDM_72_IR2,
	LCM_IR_IDM_72_IR3,
	LCM_IR_IDM_72_IR4,
	LCM_IR_IDM_72_FAULT_CODE,
	LCM_IR_IDM_73_OUTPUT_CURRENT,
	LCM_IR_IDM_73_IR2,
	LCM_IR_IDM_73_IR3,
	LCM_IR_IDM_73_IR4,
	LCM_IR_IDM_73_FAULT_CODE,
	LCM_IR_IDM_74_OUTPUT_CURRENT,
	LCM_IR_IDM_74_IR2,
	LCM_IR_IDM_74_IR3,
	LCM_IR_IDM_74_IR4,
	LCM_IR_IDM_74_FAULT_CODE,
	LCM_IR_IDM_75_OUTPUT_CURRENT,
	LCM_IR_IDM_75_IR2,
	LCM_IR_IDM_75_IR3,
	LCM_IR_IDM_75_IR4,
	LCM_IR_IDM_75_FAULT_CODE,
	LCM_IR_IDM_76_OUTPUT_CURRENT,
	LCM_IR_IDM_76_IR2,
	LCM_IR_IDM_76_IR3,
	LCM_IR_IDM_76_IR4,
	LCM_IR_IDM_76_FAULT_CODE,
	LCM_IR_IDM_77_OUTPUT_CURRENT,
	LCM_IR_IDM_77_IR2,
	LCM_IR_IDM_77_IR3,
	LCM_IR_IDM_77_IR4,
	LCM_IR_IDM_77_FAULT_CODE,
	LCM_IR_IDM_78_OUTPUT_CURRENT,
	LCM_IR_IDM_78_IR2,
	LCM_IR_IDM_78_IR3,
	LCM_IR_IDM_78_IR4,
	LCM_IR_IDM_78_FAULT_CODE,
	LCM_IR_IDM_79_OUTPUT_CURRENT,
	LCM_IR_IDM_79_IR2,
	LCM_IR_IDM_79_IR3,
	LCM_IR_IDM_79_IR4,
	LCM_IR_IDM_79_FAULT_CODE,
	LCM_IR_IDM_80_OUTPUT_CURRENT,
	LCM_IR_IDM_80_IR2,
	LCM_IR_IDM_80_IR3,
	LCM_IR_IDM_80_IR4,
	LCM_IR_IDM_80_FAULT_CODE,
	LCM_IR_IDM_81_OUTPUT_CURRENT,
	LCM_IR_IDM_81_IR2,
	LCM_IR_IDM_81_IR3,
	LCM_IR_IDM_81_IR4,
	LCM_IR_IDM_81_FAULT_CODE,
	LCM_IR_IDM_82_OUTPUT_CURRENT,
	LCM_IR_IDM_82_IR2,
	LCM_IR_IDM_82_IR3,
	LCM_IR_IDM_82_IR4,
	LCM_IR_IDM_82_FAULT_CODE,
	LCM_IR_IDM_83_OUTPUT_CURRENT,
	LCM_IR_IDM_83_IR2,
	LCM_IR_IDM_83_IR3,
	LCM_IR_IDM_83_IR4,
	LCM_IR_IDM_83_FAULT_CODE,
	LCM_IR_IDM_84_OUTPUT_CURRENT,
	LCM_IR_IDM_84_IR2,
	LCM_IR_IDM_84_IR3,
	LCM_IR_IDM_84_IR4,
	LCM_IR_IDM_84_FAULT_CODE,
	LCM_IR_IDM_85_OUTPUT_CURRENT,
	LCM_IR_IDM_85_IR2,
	LCM_IR_IDM_85_IR3,
	LCM_IR_IDM_85_IR4,
	LCM_IR_IDM_85_FAULT_CODE,
	LCM_IR_IDM_86_OUTPUT_CURRENT,
	LCM_IR_IDM_86_IR2,
	LCM_IR_IDM_86_IR3,
	LCM_IR_IDM_86_IR4,
	LCM_IR_IDM_86_FAULT_CODE,
	LCM_IR_IDM_87_OUTPUT_CURRENT,
	LCM_IR_IDM_87_IR2,
	LCM_IR_IDM_87_IR3,
	LCM_IR_IDM_87_IR4,
	LCM_IR_IDM_87_FAULT_CODE,
	LCM_IR_IDM_88_OUTPUT_CURRENT,
	LCM_IR_IDM_88_IR2,
	LCM_IR_IDM_88_IR3,
	LCM_IR_IDM_88_IR4,
	LCM_IR_IDM_88_FAULT_CODE,
	LCM_IR_IDM_89_OUTPUT_CURRENT,
	LCM_IR_IDM_89_IR2,
	LCM_IR_IDM_89_IR3,
	LCM_IR_IDM_89_IR4,
	LCM_IR_IDM_89_FAULT_CODE,
	LCM_IR_IDM_90_OUTPUT_CURRENT,
	LCM_IR_IDM_90_IR2,
	LCM_IR_IDM_90_IR3,
	LCM_IR_IDM_90_IR4,
	LCM_IR_IDM_90_FAULT_CODE,
	LCM_IR_IDM_91_OUTPUT_CURRENT,
	LCM_IR_IDM_91_IR2,
	LCM_IR_IDM_91_IR3,
	LCM_IR_IDM_91_IR4,
	LCM_IR_IDM_91_FAULT_CODE,
	LCM_IR_IDM_92_OUTPUT_CURRENT,
	LCM_IR_IDM_92_IR2,
	LCM_IR_IDM_92_IR3,
	LCM_IR_IDM_92_IR4,
	LCM_IR_IDM_92_FAULT_CODE,
	LCM_IR_IDM_93_OUTPUT_CURRENT,
	LCM_IR_IDM_93_IR2,
	LCM_IR_IDM_93_IR3,
	LCM_IR_IDM_93_IR4,
	LCM_IR_IDM_93_FAULT_CODE,
	LCM_IR_IDM_94_OUTPUT_CURRENT,
	LCM_IR_IDM_94_IR2,
	LCM_IR_IDM_94_IR3,
	LCM_IR_IDM_94_IR4,
	LCM_IR_IDM_94_FAULT_CODE,
	LCM_IR_IDM_95_OUTPUT_CURRENT,
	LCM_IR_IDM_95_IR2,
	LCM_IR_IDM_95_IR3,
	LCM_IR_IDM_95_IR4,
	LCM_IR_IDM_95_FAULT_CODE,
	LCM_IR_IDM_96_OUTPUT_CURRENT,
	LCM_IR_IDM_96_IR2,
	LCM_IR_IDM_96_IR3,
	LCM_IR_IDM_96_IR4,
	LCM_IR_IDM_96_FAULT_CODE,
	LCM_IR_IDM_97_OUTPUT_CURRENT,
	LCM_IR_IDM_97_IR2,
	LCM_IR_IDM_97_IR3,
	LCM_IR_IDM_97_IR4,
	LCM_IR_IDM_97_FAULT_CODE,
	LCM_IR_IDM_98_OUTPUT_CURRENT,
	LCM_IR_IDM_98_IR2,
	LCM_IR_IDM_98_IR3,
	LCM_IR_IDM_98_IR4,
	LCM_IR_IDM_98_FAULT_CODE,
	LCM_IR_IDM_99_OUTPUT_CURRENT,
	LCM_IR_IDM_99_IR2,
	LCM_IR_IDM_99_IR3,
	LCM_IR_IDM_99_IR4,
	LCM_IR_IDM_99_FAULT_CODE,
	LCM_IR_IDM_100_OUTPUT_CURRENT,
	LCM_IR_IDM_100_IR2,
	LCM_IR_IDM_100_IR3,
	LCM_IR_IDM_100_IR4,
	LCM_IR_IDM_100_FAULT_CODE,
};


#endif