/*
 * Copyright (c) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_MT6775_H
#define _DT_BINDINGS_CLK_MT6775_H


/* APMIXEDSYS */

#define CLK_APMIXED_ARMPLL2		0
#define CLK_APMIXED_ARMPLL1		1
#define CLK_APMIXED_ARMPLL3		2
#define CLK_APMIXED_CCIPLL		3
#define CLK_APMIXED_MAINPLL		4
#define CLK_APMIXED_UNIVPLL		5
#define CLK_APMIXED_MSDCPLL		6
#define CLK_APMIXED_EMIPLL		7
#define CLK_APMIXED_GPUPLL		8
#define CLK_APMIXED_MMPLL		9
#define CLK_APMIXED_MPLL		10
#define CLK_APMIXED_APLL1		11
#define CLK_APMIXED_APLL2		12
#define CLK_APMIXED_TVDPLL		13
#define CLK_APMIXED_MIPIC1_26M		14
#define CLK_APMIXED_MIPID1_26M		15
#define CLK_APMIXED_MIPID0_26M		16
#define CLK_APMIXED_APLL2_TUNER_EN	17
#define CLK_APMIXED_APLL1_TUNER_EN	18
#define CLK_APMIXED_NR_CLK		19

/* TOPCKGEN */

#define CLK_TOP_CLK_NULL		0
#define CLK_TOP_CLK32K			1
#define CLK_TOP_CLK26M			2
#define CLK_TOP_ARMPLL1			3
#define CLK_TOP_ARMPLL2			4
#define CLK_TOP_ARMPLL3			5
#define CLK_TOP_CCIPLL			6
#define CLK_TOP_SYSPLL			7
#define CLK_TOP_SYSPLL_D2		8
#define CLK_TOP_SYSPLL1_D2		9
#define CLK_TOP_SYSPLL1_D4		10
#define CLK_TOP_SYSPLL1_D8		11
#define CLK_TOP_SYSPLL1_D16		12
#define CLK_TOP_SYSPLL_D3		13
#define CLK_TOP_SYSPLL2_D2		14
#define CLK_TOP_SYSPLL2_D4		15
#define CLK_TOP_SYSPLL2_D8		16
#define CLK_TOP_SYSPLL2_D3		17
#define CLK_TOP_SYSPLL_D5		18
#define CLK_TOP_SYSPLL3_D2		19
#define CLK_TOP_SYSPLL3_D4		20
#define CLK_TOP_SYSPLL_D7		21
#define CLK_TOP_SYSPLL4_D2		22
#define CLK_TOP_SYSPLL4_D3		23
#define CLK_TOP_SYSPLL4_D4		24
#define CLK_TOP_UNIVPLL			25
#define CLK_TOP_AD_USB_192M		26
#define CLK_TOP_AD_USB20_96M		27
#define CLK_TOP_USB_PHY48M		28
#define CLK_TOP_UNIVPLL_D7		29
#define CLK_TOP_UNIVPLL4_D2		30
#define CLK_TOP_UNIVPLL4_D4		31
#define CLK_TOP_UNIVPLL4_D8		32
#define CLK_TOP_UNIVPLL_D2		33
#define CLK_TOP_UNIVPLL1_D2		34
#define CLK_TOP_UNIVPLL1_D4		35
#define CLK_TOP_UNIVPLL1_D8		36
#define CLK_TOP_UNIVPLL1_D16		37
#define CLK_TOP_UNIVPLL_D3		38
#define CLK_TOP_UNIVPLL2_D2		39
#define CLK_TOP_UNIVPLL2_D4		40
#define CLK_TOP_UNIVPLL2_D8		41
#define CLK_TOP_UNIVPLL2_D16		42
#define CLK_TOP_UNIVPLL_D5		43
#define CLK_TOP_UNIVPLL3_D2		44
#define CLK_TOP_UNIVPLL3_D4		45
#define CLK_TOP_UNIVPLL3_D8		46
#define CLK_TOP_UNIVPLL3_D16		47
#define CLK_TOP_UNIVPLL_D52		48
#define CLK_TOP_UNIVPLL_D104		49
#define CLK_TOP_UNIVPLL_D208		50
#define CLK_TOP_UNIVPLL_D416		51
#define CLK_TOP_APLL1			52
#define CLK_TOP_APLL1_D2		53
#define CLK_TOP_APLL1_D4		54
#define CLK_TOP_APLL1_D8		55
#define CLK_TOP_APLL2			56
#define CLK_TOP_APLL2_D2		57
#define CLK_TOP_APLL2_D4		58
#define CLK_TOP_APLL2_D8		59
#define CLK_TOP_AD_SYS_26M		60
#define CLK_TOP_AD_SYS_26M_D2		61
#define CLK_TOP_AD_SYS_26M_D52		62
#define CLK_TOP_CLK26M_BYP		63
#define CLK_TOP_CLKRTC			64
#define CLK_TOP_GPUPLL			65
#define CLK_TOP_EMIPLL			66
#define CLK_TOP_EMIPLL_D2		67
#define CLK_TOP_MSDCPLL			68
#define CLK_TOP_MSDCPLL_D2		69
#define CLK_TOP_MSDCPLL_D4		70
#define CLK_TOP_MSDCPLL_D8		71
#define CLK_TOP_MSDCPLL_D16		72
#define CLK_TOP_MMPLL			73
#define CLK_TOP_MMPLL_D3		74
#define CLK_TOP_MMPLL_D4		75
#define CLK_TOP_MMPLL_D8		76
#define CLK_TOP_MMPLL_D16		77
#define CLK_TOP_MMPLL_D5		78
#define CLK_TOP_MMPLL_D10		79
#define CLK_TOP_MMPLL_D20		80
#define CLK_TOP_MMPLL_D6		81
#define CLK_TOP_MMPLL_D7		82
#define CLK_TOP_TVDPLL			83
#define CLK_TOP_TVDPLL_D2		84
#define CLK_TOP_TVDPLL_D4		85
#define CLK_TOP_TVDPLL_D8		86
#define CLK_TOP_TVDPLL_D16		87
#define CLK_TOP_ULPOSCPLL		88
#define CLK_TOP_ULPOSCPLL_D2		89
#define CLK_TOP_ULPOSCPLL_D16		90
#define CLK_TOP_DSI_PHY			91
#define CLK_TOP_DSI_DSI			92
#define CLK_TOP_MIPI_TST		93

#define CLK_TOP_CLK13M				135
#define CLK_TOP_F_FRTC				136
#define CLK_TOP_APLL12_DIV0			137
#define CLK_TOP_APLL12_DIV1			138
#define CLK_TOP_APLL12_DIV2			139
#define CLK_TOP_APLL12_DIV3			140
#define CLK_TOP_APLL12_DIV4			141
#define CLK_TOP_APLL12_DIVB			142
#define CLK_TOP_APLL12_DIV5			143
#define CLK_TOP_SSUB_TOP_REF_EN			144
#define CLK_TOP_PCIE_REF_EN			145
#define CLK_TOP_F_FAUD26M_EN			146
#define CLK_TOPCKGEN_EN				147
#define CLK_TOP_MD_32K				148
#define CLK_TOP_MD_26M				149
#define CLK_TOP_MD2_32K				150
#define CLK_TOP_MD2_26M				151
#define CLK_TOP_SC_26CK_OFF_EN			152
#define CLK_TOP_SC_MEMCK_OFF_EN			153
#define CLK_TOP_SC_AXICK_OFF_EN			154
#define CLK_TOP_SC_SMICK_OFF_EN			155
#define CLK_TOP_SC_ARMCK_OFF_EN			156
#define CLK_TOP_SC_MD_32K_OFF_EN		157
#define CLK_TOP_SC_MD_26M_OFF_EN		158
#define CLK_TOP_SC_MD2_32K_OFF_EN		159
#define CLK_TOP_SC_MD2_26M_OFF_EN		160
#define CLK_TOP_SC_MAC_26M_OFF_EN		161
#define CLK_TOP_SC_ARMCA15CK_OFF_EN		162
#define CLK_TOP_UFS_MP_SAP_CFG_EN		163
#define CLK_TOP_DA_OSC_OUT_EN_VAO		164
#define CLK_TOP_L2_EN				165
#define CLK_TOP_SPM_EN				166
#define CLK_TOP_DFP_IMGSYS0_EN			167
#define CLK_TOP_DFP_IMGSYS1_EN			168
#define CLK_TOP_DFP_CAMSYS_EN			169
#define CLK_TOP_DFP_MMSYS_EN			170
#define CLK_TOP_DFP_VDEC_EN			171
#define CLK_TOP_DFP_VENC_EN			172
#define CLK_TOP_DFP_MJC_EN			173
#define CLK_TOP_DFP_INFRA_EN			174
#define CLK_TOP_DFP_PERI_M1_EN			175
#define CLK_TOP_DFP_PERI_M2_EN			176
#define CLK_TOP_DFP_MCSI_EN			177
#define CLK_TOP_HVENC_L2_EN			178
#define CLK_TOP_CSI3_TICK1US_EN			179
#define CLK_TOP_DRAMC_F26M_EN			180
#define CLK_TOP_DRAMC_F52M_EN			181
#define CLK_TOP_DRAMC_F104M_EN			182
#define CLK_TOP_MPLL_208M_EN			183
#define CLK_TOP_USB_192M_EN			184
#define CLK_TOP_MPLL_52_SEL			185
#define CLK_TOP_DIS_CLKREF_GATED		186
#define CLK_TOP_DIS_QSWITCH			187

/* todo check  */
#define CLK_TOP_AXI_SEL				188
#define CLK_TOP_MEM_SEL				189
#define CLK_TOP_DDRPHYCFG_SEL			190
#define CLK_TOP_DPI0_SEL			191
#define CLK_TOP_MM_SEL				192
#define CLK_TOP_PWM_SEL				193
#define CLK_TOP_DISPPWM_SEL			194
#define CLK_TOP_VDEC_SEL			195
#define CLK_TOP_VENC_SEL			196
#define CLK_TOP_MFG_SEL				197
#define CLK_TOP_CAMTG_SEL			198
#define CLK_TOP_CAMTG2_SEL			199
#define CLK_TOP_CAMTG3_SEL			200
#define CLK_TOP_CAMTG4_SEL			201
#define CLK_TOP_I2C_SEL				202
#define CLK_TOP_UART_SEL			203
#define CLK_TOP_SPI_SEL				204
#define CLK_TOP_USB30_P0_SEL			205
#define CLK_TOP_MSDC50_0_HCLK_SEL		206
#define CLK_TOP_MSDC50_0_SEL			207
#define CLK_TOP_MSDC30_1_SEL			208
#define CLK_TOP_I3C_SEL				209
#define CLK_TOP_MSDC30_3_SEL			210
#define CLK_TOP_MSDC50_3_HCLK_SEL		211
#define CLK_TOP_AUDIO_SEL			212
#define CLK_TOP_AUD_INTBUS_SEL			213
#define CLK_TOP_PMICSPI_SEL			214
#define CLK_TOP_SCP_SEL				215
#define CLK_TOP_ATB_SEL				216
#define CLK_TOP_DSP_SEL				219
#define CLK_TOP_AUD_1_SEL			220
#define CLK_TOP_AUD_2_SEL			221
#define CLK_TOP_AUD_ENGEN1_SEL			222
#define CLK_TOP_AUD_ENGEN2_SEL			223
#define CLK_TOP_DFP_MFG_SEL			224
#define CLK_TOP_CAM_SEL				225
#define CLK_TOP_IPU_IF_SEL			226
#define CLK_TOP_IMG_SEL				227
#define CLK_TOP_AES_UFSFDE_SEL			228
#define CLK_TOP_AUDIO_H_SEL			229
#define CLK_TOP_SSPM_SEL			230
#define CLK_TOP_UFS_CARD_SEL			231
#define CLK_TOP_BSI_SPI_SEL			232
#define CLK_TOP_DXCC_SEL			233
#define CLK_TOP_SENINF_SEL			234
#define CLK_TOP_DFP_SEL				235
#define CLK_TOP_DSP1_SEL			236
#define CLK_TOP_DSP2_SEL			237
#define CLK_TOP_DSP3_SEL			238
#define CLK_TOP_NR_CLK				239

/* AUDIO */
#define CLK_AUDIO_AFE				0
#define CLK_AUDIO_I2S				1
#define CLK_AUDIO_22M				2
#define CLK_AUDIO_24M				3
#define CLK_AUDIO_APLL2_TUNER			4
#define CLK_AUDIO_APLL_TUNER			5
#define CLK_AUDIO_TDM				6
#define CLK_AUDIO_ADC				7
#define CLK_AUDIO_DAC				8
#define CLK_AUDIO_DAC_PREDIS			9
#define CLK_AUDIO_TML				10
#define CLK_AUDIO_I2S1_BCLK_SW			11
#define CLK_AUDIO_I2S2_BCLK_SW			12
#define CLK_AUDIO_I2S3_BCLK_SW			13
#define CLK_AUDIO_I2S4_BCLK_SW			14
#define CLK_AUDIO_I2S5_BCLK_SW			15
#define CLK_AUDIO_ADC_HIRES			16
#define CLK_AUDIO_ADC_HIRES_TML			17
#define CLK_AUDIO_ADDA6_ADC			18
#define CLK_AUDIO_ADDA6_ADC_HIRES		19
#define CLK_AUDIO_NR_CLK			20

/* CAM */
#define CLK_CAM_LARB6			0
#define CLK_CAM_DFP_VAD			1
#define CLK_CAM_LARB3			2
#define CLK_CAM				3
#define CLK_CAMTG			4
#define CLK_CAM_SENINF			5
#define CLK_CAMSV0			6
#define CLK_CAMSV1			7
#define CLK_CAMSV2			8
#define CLK_CAM_CCU			9
#define CLK_CAM_NR_CLK			10

/* IMG */
#define CLK_IMG_LARB5			0
#define CLK_IMG_LARB2			1
#define CLK_IMG_DIP			2
#define CLK_IMG_FDVT			3
#define CLK_IMG_DPE			4
#define CLK_IMG_RSC			5
#define CLK_IMG_MFB			6
#define CLK_IMG_WPE_A			7
#define CLK_IMG_WPE_B			8
#define CLK_IMG_OWE			9
#define CLK_IMG_NR_CLK			10

/* INFRACFG */

#define CLK_INFRA_PMIC_TMR			0
#define CLK_INFRA_PMIC_AP			1
#define CLK_INFRA_PMIC_MD			2
#define CLK_INFRA_PMIC_CONN			3
#define CLK_INFRA_SCP				4
#define CLK_INFRA_SEJ				5
#define CLK_INFRA_APXGPT			6
#define CLK_INFRA_DVFSRC			7
#define CLK_INFRA_GCE				8
#define CLK_INFRA_DBG				9
#define CLK_INFRA_SPM_APB_ASYNC			10
#define CLK_INFRA_CLDMA_AP_TOP			11
#define CLK_INFRA_CCIF_3_SET_0			12
#define CLK_INFRA_AES_TOP0			13
#define CLK_INFRA_AES_TOP1			14
#define CLK_INFRA_DEVAPC_MPU			15
#define CLK_INFRA_CCIF_3_SET_1			16
#define CLK_INFRA_MD2MD_CCIF_SET_0		17
#define CLK_INFRA_MD2MD_CCIF_SET_1		18
#define CLK_INFRA_MD2MD_CCIF_SET_2		19
#define CLK_INFRA_FHCTL				20
#define CLK_INFRA_MODEM_TEMP_SHARE		21
#define CLK_INFRA_MD2MD_CCIF_MD_SET_0		22
#define CLK_INFRA_MD2MD_CCIF_MD_SET_1		23
#define CLK_INFRA_AUDIO_DCM_EN			24
#define CLK_INFRA_CLDMA_AO_TOP_HCLK		25
#define CLK_INFRA_MD2MD_CCIF_MD_SET_2		26
#define CLK_INFRA_TRNG				27
#define CLK_INFRA_AUXADC			28
#define CLK_INFRA_CPUM				29
#define CLK_INFRA_CCIF1_AP			30
#define CLK_INFRA_CCIF1_MD			31
#define CLK_INFRA_CCIF2_AP			32
#define CLK_INFRA_CCIF2_MD			33
#define CLK_INFRA_CCIF4_AP			34
#define CLK_INFRA_XIU_CKCG_SET_FOR_DBG_CTRLER	35
#define CLK_INFRA_DEVICE_APC			36
#define CLK_INFRA_CCIF4_MD			37
#define CLK_INFRA_SMI_L2C			38
#define CLK_INFRA_CCIF_AP			39
#define CLK_INFRA_RG_DBG_AO_CLK			40
#define CLK_INFRA_AUDIO				41
#define CLK_INFRA_CCIF_MD			42
#define CLK_INFRA_CCIF5_AP			43
#define CLK_INFRA_CCIF5_MD			44
#define CLK_INFRA_RG_FT_L2C			45
#define CLK_INFRA_SPM_AHB			46
#define CLK_INFRA_DRAMC_F26M			47
#define CLK_INFRA_THERM_BCLK			48
#define CLK_INFRA_PTP_BCLK			49
#define CLK_INFRA_AUXADC_MD			50
#define CLK_INFRA_DVFS_CTRL_APB_RX		51
#define CLK_INFRA_NR_CLK			52

/* IPU */

/* IPU CONN */
#define CLK_IPU_CONN_CABGEN_CG_DIS					1
#define CLK_IPU_CONN_DAP_RX_CLOCK_CG_EN				2
#define CLK_IPU_CONN_APB2AXI_BRIDGE_GATED_PCLK_EN	3
#define CLK_IPU_CONN_APB2AHB_BRIDGE_GATED_PCLK_EN	4
#define CLK_IPU_CONN_IPU_CAB1TO2_CG_DISABLE			5
#define CLK_IPU_CONN_IPU1_CAB1TO2_CG_DISABLE		6
#define CLK_IPU_CONN_IPU2_CAB1TO2_CG_DISABLE		7
#define CLK_IPU_CONN_CAB3TO3_CG_DISABLE				8
#define CLK_IPU_CONN_CAB2TO1_CG_DISABLE				9
#define CLK_IPU_CONN_CAB3TO1_SLICE_CG_DISABLE		10
#define CLK_IPU_CONN_IPU_CG							11
#define CLK_IPU_CONN_AHB_CG							12
#define CLK_IPU_CONN_AXI_CG							13
#define CLK_IPU_CONN_ISP_CG							14
#define CLK_IPU_CONN_CAM_ADL_CG						15
#define CLK_IPU_CONN_IMG_ADL_CG						16
#define CLK_IPU_CONN_NR_CLK							17

/* IPU VCORE */
#define CLK_IPU_VCORE_AHB_CG						1
#define CLK_IPU_VCORE_AXI_CG						2
#define CLK_IPU_VCORE_ADL_CG						3
#define CLK_IPU_VCORE_NR_CLK						4

/* IPU CORE0 */
#define CLK_IPU_CORE0_JTAG_CG						1
#define CLK_IPU_CORE0_AXI_M_CG						2
#define CLK_IPU_CORE0_IPU_CG						3
#define CLK_IPU_CORE0_NR_CLK						4

/* IPU CORE1 */
#define CLK_IPU_CORE1_JTAG_CG						1
#define CLK_IPU_CORE1_AXI_M_CG						2
#define CLK_IPU_CORE1_IPU_CG						3
#define CLK_IPU_CORE1_NR_CLK						4

/* IPU CORE2 */
#define CLK_IPU_CORE2_JTAG_CG						1
#define CLK_IPU_CORE2_AXI_M_CG						2
#define CLK_IPU_CORE2_IPU_CG						3
#define CLK_IPU_CORE2_NR_CLK						4


/* MFG */

#define CLK_MFG_BG3D			0
#define CLK_MFG_NR_CLK			1

/* MM */

#define CLK_MM_SMI_COMMON		0
#define CLK_MM_SMI_LARB0		1
#define CLK_MM_SMI_LARB1		2
#define CLK_MM_GALS_COMM0		3
#define CLK_MM_GALS_COMM1		4
#define CLK_MM_GALS_VENC2MM		5
#define CLK_MM_GALS_VDEC2MM		6
#define CLK_MM_GALS_IMG2MM		7
#define CLK_MM_GALS_CAM2MM		8
#define CLK_MM_GALS_IPU2MM		9
#define CLK_MM_MDP_DL_TX_CLOCK		10
#define CLK_MM_IPU_DL_TX_CLOCK		11
#define CLK_MM_MDP_RDMA0		12
#define CLK_MM_MDP_RDMA1		13
#define CLK_MM_MDP_RSZ0			14
#define CLK_MM_MDP_RSZ1			15
#define CLK_MM_MDP_TDSHP		16
#define CLK_MM_MDP_WROT0		17
#define CLK_MM_MDP_WROT1		18
#define CLK_MM_FAKE_ENG			19
#define CLK_MM_DISP_OVL0		20
#define CLK_MM_DISP_OVL0_2L		21
#define CLK_MM_DISP_OVL1_2L		22
#define CLK_MM_DISP_RDMA0		23
#define CLK_MM_DISP_RDMA1		24
#define CLK_MM_DISP_WDMA0		25
#define CLK_MM_DISP_COLOR0		26
#define CLK_MM_DISP_CCORR0		27
#define CLK_MM_DISP_AAL0		28
#define CLK_MM_DISP_GAMMA0		29
#define CLK_MM_DISP_DITHER0		30
#define CLK_MM_DISP_SPLIT		31
#define CLK_MM_DSI0_MM_CLOCK		32
#define CLK_MM_DSI0_INTERFACE_CLOCK	33
#define CLK_MM_DSI1_MM_CLOCK		34
#define CLK_MM_DSI1_INTERFACE_CLOCK	35
#define CLK_MM_FAKE_ENG2		36
#define CLK_MM_MDP_DL_RX_CLOCK		37
#define CLK_MM_IPU_DL_RX_CLOCK		38
#define CLK_MM_26M			39
#define CLK_MMSYS_R2Y			40
#define CLK_MM_DISP_RSZ			41
#define CLK_MM_MDP_CCORR		42
#define CLK_MM_MDP_AAL			43
#define CLK_MM_GALS_IPU12MM		44
#define CLK_MM_GALS_CCU2MM		45
#define CLK_MM_NR_CLK			46

/* PERICFG */

#define CLK_PERICFG_RG_PWM_BCLK			0
#define CLK_PERICFG_RG_PWM_FBCLK1		1
#define CLK_PERICFG_RG_PWM_FBCLK2		2
#define CLK_PERICFG_RG_PWM_FBCLK3		3
#define CLK_PERICFG_RG_PWM_FBCLK4		4
#define CLK_PERICFG_RG_I2C0_BCLK		5
#define CLK_PERICFG_RG_I2C1_BCLK		6
#define CLK_PERICFG_RG_I2C2_BCLK		7
#define CLK_PERICFG_RG_I2C3_BCLK		8
#define CLK_PERICFG_RG_I2C4_BCLK		9
#define CLK_PERICFG_RG_I2C5_BCLK		10
#define CLK_PERICFG_RG_I2C6_BCLK		11
#define CLK_PERICFG_RG_I2C7_BCLK		12
#define CLK_PERICFG_RG_I2C2_IMM_BCLK		13
#define CLK_PERICFG_RG_I2C3_IMM_BCLK		14
#define CLK_PERICFG_RG_I2C8_BCLK		15
#define CLK_PERICFG_RG_I2C9_BCLK		16
#define CLK_PERICFG_RG_IDVFS		        17
#define CLK_PERICFG_RG_UART0		        18
#define CLK_PERICFG_RG_UART1		        19
#define CLK_PERICFG_RG_UART2		        20
#define CLK_PERICFG_RG_SPI0			21
#define CLK_PERICFG_RG_SPI1			22
#define CLK_PERICFG_RG_SPI2			23
#define CLK_PERICFG_RG_SPI3			24
#define CLK_PERICFG_RG_SPI4			25
#define CLK_PERICFG_RG_SPI5			26
#define CLK_PERICFG_RG_SPI6			27
#define CLK_PERICFG_RG_SPI7			28
#define CLK_PERICFG_RG_SPI8			29
#define CLK_PERICFG_RG_SPI9			30
#define CLK_PERICFG_RG_MSDC0_AP_NORM		31
#define CLK_PERICFG_RG_MSDC1		        32
#define CLK_PERICFG_RG_MSDC2		        33
#define CLK_PERICFG_RG_MSDC3		        34
#define CLK_PERICFG_RG_MSDC4		        35
#define CLK_PERICFG_RG_UFSDEV			36
#define CLK_PERICFG_RG_UFSDEV_MP_SAP_CFG	37
#define CLK_PERICFG_RG_UFSCARD			38
#define CLK_PERICFG_RG_UFSCARD_MP_SAP_CFG	39
#define CLK_PERICFG_RG_UFS_AES_CORE	        40
#define CLK_PERICFG_RG_MSDC0_AP_SECURE		41
#define CLK_PERICFG_RG_MSDC0_MD_SECURE		42
#define CLK_PERICFG_RG_USB_P1		        43
#define CLK_PERICFG_RG_AP_DM		        44
#define CLK_PERICFG_RG_DISP_PWM0	        45
#define CLK_PERICFG_RG_BTIF			46
#define CLK_PERICFG_RG_CQ_DMA			47
#define CLK_PERICFG_RG_BIST2FPC			48
#define CLK_PERICFG_RG_MBIST_MEM_OFF_DLY	49
#define CLK_PERICFG_RG_DEVICE_APC_PERI		50
#define CLK_PERICFG_RG_DXCC_AO		        51
#define CLK_PERICFG_RG_DXCC_PUB		        52
#define CLK_PERICFG_RG_DXCC_SEC		        53
#define CLK_PERICFG_RG_MTK_TRNG		        54
#define CLK_PERICFG_RG_DEBUGTOP		        55
#define CLK_PERICFG_NR_CLK			56

/* VDEC */

#define CLK_VDEC_CKEN			0
#define CLK_VDEC_LARB1_CKEN		1
#define CLK_VDEC_NR_CLK			2

/* VENC */

#define CLK_VENC_CKE0			0
#define CLK_VENC_CKE1			1
#define CLK_VENC_NR_CLK			2

/* SCP_SYS */

#define SCP_SYS_MFG0		0
#define SCP_SYS_MFG1		1
#define SCP_SYS_MFG2		2
#define SCP_SYS_MFG3		3
#define SCP_SYS_MFG4		4
#define SCP_SYS_MFG5		5
#define SCP_SYS_C2K		6
#define SCP_SYS_MD1		7
#define SCP_SYS_CONN		8
#define SCP_SYS_AUD		9
#define SCP_SYS_MM0		10
#define SCP_SYS_CAM		11
#define SCP_SYS_ISP		12
#define SCP_SYS_VEN		13
#define SCP_SYS_VDE		14
#define SCP_SYS_IPU_VCORE_SHUTDOWN	15
#define SCP_SYS_IPU_SHUTDOWN		16
#define SCP_SYS_IPU_CORE0_SHUTDOWN	17
#define SCP_SYS_IPU_CORE0_SLEEP		18
#define SCP_SYS_IPU_CORE1_SHUTDOWN	19
#define SCP_SYS_IPU_CORE1_SLEEP		20
#define SCP_SYS_IPU_CORE2_SHUTDOWN	21
#define SCP_SYS_IPU_CORE2_SLEEP		22
#define SCP_NR_SYSS			23


#endif /* _DT_BINDINGS_CLK_MT6775_H */
