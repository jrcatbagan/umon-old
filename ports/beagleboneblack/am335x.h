//==========================================================================
//
// am335x.h
//
// Author(s):    Luis Torrico, Cogent Computer Systems, Inc.
// Contributors: Jarielle Catbagan
// Date:         05/02/2008
// Description:  This file was modified from omap3530.h. This file containes
//			register base addresses and offsets as well as access macros
//			for the AM335x/Beaglebone Black on-chip peripherals. 
//			Peripherals not used by UMON have not been tested (and
//			may not be defined). Use these defines with caution!!
//

#include "bits.h"

/* AM335x device identification and feature enumeration */
#define AM335X_DEVICE_IDENTIFICATION	0x44E10600
#define AM335X_DEVICE_FEATURE		0x44E10604

/* L3 and L4 Interconnects */
#define L3F_CFG_REG_BASE_ADDR		0x44000000
#define L3S_CFG_REG_BASE_ADDR		0x44800000
#define L4_WKUP_BASE_ADDR		0x44C00000
#define L4_PER_BASE_ADDR		0x48000000
#define L4_FAST_BASE_ADDR		0x4A000000

/* McASPx Data Registers */
#define MCASP0_DATA_REG_BASE_ADDR	0x46000000
#define MCASP1_DATE_REG-BASE_ADDR	0x46400000

/* USB Subsystem */
#define USB_SUBSYS_BASE_ADDR		0x47400000
/* USB Subsystem Registers offset */
#define USBSS_BASE_REG_OFFSET		0x0000
#define USBSS_REVREG			0x0000
#define USBSS_SYSCONFIG			0x0010
#define USBSS_IRQSTATRAW		0x0024
#define USBSS_IRQSTAT			0x0028
#define USBSS_IRQENABLER		0x002C
#define USBSS_IRQCLEARR			0x0030
#define USBSS_IRQDMATHOLDTX00		0x0100
#define USBSS_IRQDMATHOLDTX01		0x0104
#define USBSS_IRQDMATHOLDTX02		0x0108
#define USBSS_IRQDMATHOLDTX03		0x010C
#define USBSS_IRQDMATHOLDRX00		0x0110
#define USBSS_IRQDMATHOLDRX01		0x0114
#define USBSS_IRQDMATHOLDRX02		0x0118
#define USBSS_IRQDMATHOLDRX03		0x011C
#define USBSS_IRQDMATHOLDTX10		0x0120
#define USBSS_IRQDMATHOLDTX11		0x0124
#define USBSS_IRQDMATHOLDTX12		0x0128
#define USBSS_IRQDMATHOLDTX13		0x012C
#define USBSS_IRQDMATHOLDRX10		0x0130
#define USBSS_IRQDMATHOLDRX11		0x0134
#define USBSS_IRQDMATHOLDRX12		0x0138
#define USBSS_IRQDMATHOLDRX13		0x013C
#define USBSS_IRQDMAENABLE0		0x0140
#define USBSS_IRQDMAENABLE1		0x0144
#define USBSS_IRQFRAMETHOLDTX00		0x0200
#define USBSS_IRQFRAMETHOLDTX01		0x0204
#define USBSS_IRQFRAMETHOLDTX02		0x0208
#define USBSS_IRQFRAMETHOLDTX03		0x020C
#define USBSS_IRQFRAMETHOLDRX00		0x0210
#define USBSS_IRQFRAMETHOLDRX01		0x0214
#define USBSS_IRQFRAMETHOLDRX02		0x0218
#define USBSS_IRQFRAMETHOLDRX03		0x021C
#define USBSS_IRQFRAMETHOLDTX10		0x0220
#define USBSS_IRQFRAMETHOLDTX11		0x0224
#define USBSS_IRQFRAMETHOLDTX12		0x0228
#define USBSS_IRQFRAMETHOLDTX13		0x022C
#define USBSS_IRQFRAMETHOLDRX10		0x0230
#define USBSS_IRQFRAMETHOLDRX11		0x0234
#define USBSS_IRQFRAMETHOLDRX12		0x0238
#define USBSS_IRQFRAMETHOLDRX13		0x023C
#define USBSS_IRQFRAMEENABLE0		0x0240
#define USBSS_IRQFRAMEENABLE1		0x0244
/* USB Controller Registers offset  */
#define USBCNTLR_USB0_BASE_REG_OFFSET	0x1000 /* USB0 */
#define USBCNTLR_USB1_BASE_REG_OFFSET	0x1800 /* USB1 */
#define USBCNTLR_REV			0x0000
#define USBCNTLR_CTRL			0x0014
#define USBCNTLR_STAT			0x0018
#define USBCNTLR_IRQMSTAT		0x0020
#define USBCNTLR_IRQSTATRAW0		0x0028
#define USBCNTLR_IRQSTATRAW1		0x002C
#define USBCNTLR_IRQSTAT0		0x0030
#define USBCNTLR_IRQSTAT1		0x0034
#define USBCNTLR_IRQENABLESET0		0x0038
#define USBCNTLR_IRQENABLESET1		0x003C
#define USBCNTLR_IRQENABLECLR0		0x0040
#define USBCNTLR_IRQENABLECLR1		0x0044
#define USBCNTLR_TXMODE			0x0070
#define USBCNTLR_RXMODE			0x0074
#define USBCNTLR_GENRNDISEP1		0x0080
#define USBCNTLR_GENRNDISEP2		0x0084
#define USBCNTLR_GENRNDISEP3		0x0088
#define USBCNTLR_GENRNDISEP4		0x008C
#define USBCNTLR_GENRNDISEP5		0x0090
#define USBCNTLR_GENRNDISEP6		0x0094
#define USBCNTLR_GENRNDISEP7		0x0098
#define USBCNTLR_GENRNDISEP8		0x009C
#define USBCNTLR_GENRNDISEP9		0x00A0
#define USBCNTLR_GENRNDISEP10		0x00A4
#define USBCNTLR_GENRNDISEP11		0x00A8
#define USBCNTLR_GENRNDISEP12		0x00AC
#define USBCNTLR_GENRNDISEP13		0x00B0
#define USBCNTLR_GENRNDISEP14		0x00B4
#define USBCNTLR_GENRNDISEP15		0x00B8
#define USBCNTLR_AUTOREQ		0x00D0
#define USBCNTLR_SRPFIXTIME		0x00D4
#define USBCNTLR_TDOWN			0x00D8
#define USBCNTLR_UTMI			0x00E0
#define USBCNTLR_MGCUTMILB		0x00E4
#define USBCNTLR_MODE			0x00E8
/* USB PHY Registers offset */
#define USBPHY_USB0_BASE_REG_OFFSET	0x1300 /* USB0 */
#define USBPHY_USB1_BASE_REG_OFFSET	0x1B00 /* USB1 */
#define USBPHY_TERMINATION_CNTL		0x0000
#define USBPHY_RX_CALIB			0x0004
#define USBPHY_DLLHS_2			0x0008
#define USBPHY_RX_TEST_2		0x000C
#define USBPHY_CHRG_DET			0x0014
#define USBPHY_PWR_CNTL			0x0018
#define USBPHY_UTMI_INTERFACE_CNTL_1	0x001C
#define USBPHY_UTMI_INTERFACE_CNTL_2	0x0020
#define USBPHY_BIST			0x0024
#define USBPHY_BIST_CRC			0x0028
#define USBPHY_CDR_BIST2		0x002C
#define USBPHY_GPIO			0x0030
#define USBPHY_DLLHS			0x0034
#define USBPHY_USB2PHYCM_CONFIG		0x003C
#define USBPHY_AD_INTERFACE_REG1	0x0044
#define USBPHY_AD_INTERFACE_REG2	0x0048
#define USBPHY_AD_INTERFACE_REG3	0x004C
#define USBPHY_ANA_CONFIG2		0x0054
/* USB Core Registers offset */
#define USBCORE_USB0_BASE_REG_OFFSET	0x1400
#define USBCORE_USB1_BASE_REG_OFFSET	0x1C00
/* USB CPPI DMA Controller Registers offset */
#define USBCPPIDMACNTLR_BASE_REG_OFFSET 0x2000
#define USBCPPIDMACNTLR_DMAREVID	0x0000
#define USBCPPIDMACNTLR_TDFDQ		0x0004
#define USBCPPIDMACNTLR_DMAEMU		0x0008
#define USBCPPIDMACNTLR_TXGCR0		0x0800
#define USBCPPIDMACNTLR_RXGCR0		0x0808
#define USBCPPIDMACNTLR_RXHPCRA0	0x080C
#define USBCPPIDMACNTLR_RXHPCRB0	0x0810
#define USBCPPIDMACNTLR_TXGCR1		0x0820
#define USBCPPIDMACNTLR_RXGCR1		0x0828
#define USBCPPIDMACNTLR_RXHPCRA1	0x082C
#define USBCPPIDMACNTLR_RXHPCRB1	0x0830
#define USBCPPIDMACNTLR_TXGCR2		0x0840
#define USBCPPIDMACNTLR_RXGCR2		0x0848
#define USBCPPIDMACNTLR_RXHPCRA2	0x084C
#define USBCPPIDMACNTLR_RXHPCRB2	0x0850
#define USBCPPIDMACNTLR_TXGCR3		0x0860
#define USBCPPIDMACNTLR_RXGCR3		0x0868
#define USBCPPIDMACNTLR_RXHPCRA3	0x086C
#define USBCPPIDMACNTLR_RXHPCRB3	0x0870
#define USBCPPIDMACNTLR_TXGCR4		0x0880
#define USBCPPIDMACNTLR_RXGCR4		0x0888
#define USBCPPIDMACNTLR_RXHPCRA4	0x088C
#define USBCPPIDMACNTLR_RXHPCRB4	0x0890
#define USBCPPIDMACNTLR_TXGCR5		0x08A0
#define USBCPPIDMACNTLR_RXGCR5		0x08A8
#define USBCPPIDMACNTLR_RXHPCRA5	0x08AC
#define USBCPPIDMACNTLR_RXHPCRB5	0x08B0
#define USBCPPIDMACNTLR_TXGCR6		0x08C0
#define USBCPPIDMACNTLR_RXGCR6		0x08C8
#define USBCPPIDMACNTLR_RXHPCRA6	0x08CC
#define USBCPPIDMACNTLR_RXHPCRB6	0x08D0
#define USBCPPIDMACNTLR_TXGCR7		0x08E0
#define USBCPPIDMACNTLR_RXGCR7		0x08E8
#define USBCPPIDMACNTLR_RXHPCRA7	0x08EC
#define USBCPPIDMACNTLR_RXHPCRB7	0x08F0
#define USBCPPIDMACNTLR_TXGCR8		0x0900
#define USBCPPIDMACNTLR_RXGCR8		0x0908
#define USBCPPIDMACNTLR_RXHPCRA8	0x090C
#define USBCPPIDMACNTLR_RXHPCRB8	0x0910
#define USBCPPIDMACNTLR_TXGCR9		0x0920
#define USBCPPIDMACNTLR_RXGCR9		0x0928
#define USBCPPIDMACNTLR_RXHPCRA9	0x092C
#define USBCPPIDMACNTLR_RXHPCRB9	0x0930
#define USBCPPIDMACNTLR_TXGCR10		0x0940
#define USBCPPIDMACNTLR_RXGCR10		0x0948
#define USBCPPIDMACNTLR_RXHPCRA10	0x094C
#define USBCPPIDMACNTLR_RXHPCRB10	0x0950
#define USBCPPIDMACNTLR_TXGCR11		0x0960
#define USBCPPIDMACNTLR_RXGCR11		0x0968
#define USBCPPIDMACNTLR_RXHPCRA11	0x096C
#define USBCPPIDMACNTLR_RXHPCRB11	0x0970
#define USBCPPIDMACNTLR_TXGCR12		0x0980
#define USBCPPIDMACNTLR_RXGCR12		0x0988
#define USBCPPIDMACNTLR_RXHPCRA12	0x098C
#define USBCPPIDMACNTLR_RXHPCRB12	0x0990
#define USBCPPIDMACNTLR_TXGCR13		0x09A0
#define USBCPPIDMACNTLR_RXGCR13		0x09A8
#define USBCPPIDMACNTLR_RXHPCRA13	0x09AC
#define USBCPPIDMACNTLR_RXHPCRB13	0x09B0
#define USBCPPIDMACNTLR_TXGCR14		0x09C0
#define USBCPPIDMACNTLR_RXGCR14		0x09C8
#define USBCPPIDMACNTLR_RXHPCRA14	0x09CC
#define USBCPPIDMACNTLR_RXHPCRB14	0x09D0
#define USBCPPIDMACNTLR_TXGCR15		0x09E0
#define USBCPPIDMACNTLR_RXGCR15		0x09E8
#define USBCPPIDMACNTLR_RXHPCRA15	0x09EC
#define USBCPPIDMACNTLR_RXHPCRB15	0x09F0
#define USBCPPIDMACNTLR_TXGCR16		0x0A00
#define USBCPPIDMACNTLR_RXGCR16		0x0A08
#define USBCPPIDMACNTLR_RXHPCRA16	0x0A0C
#define USBCPPIDMACNTLR_RXHPCRB16	0x0A10
#define USBCPPIDMACNTLR_TXGCR17		0x0A20
#define USBCPPIDMACNTLR_RXGCR17		0x0A28
#define USBCPPIDMACNTLR_RXHPCRA17	0x0A2C
#define USBCPPIDMACNTLR_RXHPCRB17	0x0A30
#define USBCPPIDMACNTLR_TXGCR18		0x0A40
#define USBCPPIDMACNTLR_RXGCR18		0x0A48
#define USBCPPIDMACNTLR_RXHPCRA18	0x0A4C
#define USBCPPIDMACNTLR_RXHPCRB18	0x0A50
#define USBCPPIDMACNTLR_TXGCR19		0x0A60
#define USBCPPIDMACNTLR_RXGCR19		0x0A68
#define USBCPPIDMACNTLR_RXHPCRA19	0x0A6C
#define USBCPPIDMACNTLR_RXHPCRB19	0x0A70
#define USBCPPIDMACNTLR_TXGCR20		0x0A80
#define USBCPPIDMACNTLR_RXGCR20		0x0A88
#define USBCPPIDMACNTLR_RXHPCRA20	0x0A8C
#define USBCPPIDMACNTLR_RXHPCRB20	0x0A90
#define USBCPPIDMACNTLR_TXGCR21		0x0AA0
#define USBCPPIDMACNTLR_RXGCR21		0x0AA8
#define USBCPPIDMACNTLR_RXHPCRA21	0x0AAC
#define USBCPPIDMACNTLR_RXHPCRB21	0x0AB0
#define USBCPPIDMACNTLR_TXGCR22		0x0AC0
#define USBCPPIDMACNTLR_RXGCR22		0x0AC8
#define USBCPPIDMACNTLR_RXHPCRA22	0x0ACC
#define USBCPPIDMACNTLR_RXHPCRB22	0x0AD0
#define USBCPPIDMACNTLR_TXGCR23		0x0AE0
#define USBCPPIDMACNTLR_RXGCR23		0x0AE8
#define USBCPPIDMACNTLR_RXHPCRA23	0x0AEC
#define USBCPPIDMACNTLR_RXHPCRB23	0x0AF0
#define USBCPPIDMACNTLR_TXGCR24		0x0B00
#define USBCPPIDMACNTLR_RXGCR24		0x0B08
#define USBCPPIDMACNTLR_RXHPCRA24	0x0B0C
#define USBCPPIDMACNTLR_RXHPCRB24	0x0B10
#define USBCPPIDMACNTLR_TXGCR25		0x0B20
#define USBCPPIDMACNTLR_RXGCR25		0x0B28
#define USBCPPIDMACNTLR_RXHPCRA25	0x0B2C
#define USBCPPIDMACNTLR_RXHPCRB25	0x0B30
#define USBCPPIDMACNTLR_TXGCR26		0x0B40
#define USBCPPIDMACNTLR_RXGCR26		0x0B48
#define USBCPPIDMACNTLR_RXHPCRA26	0x0B4C
#define USBCPPIDMACNTLR_RXHPCRB26	0x0B50
#define USBCPPIDMACNTLR_TXGCR27		0x0B60
#define USBCPPIDMACNTLR_RXGCR27		0x0B68
#define USBCPPIDMACNTLR_RXHPCRA27	0x0B6C
#define USBCPPIDMACNTLR_RXHPCRB27	0x0B70
#define USBCPPIDMACNTLR_TXGCR28		0x0B80
#define USBCPPIDMACNTLR_RXGCR28		0x0B88
#define USBCPPIDMACNTLR_RXHPCRA28	0x0B8C
#define USBCPPIDMACNTLR_RXHPCRB28	0x0B90
#define USBCPPIDMACNTLR_TXGCR29		0x0BA0
#define USBCPPIDMACNTLR_RXGCR29		0x0BA8
#define USBCPPIDMACNTLR_RXHPCRA29	0x0BAC
#define USBCPPIDMACNTLR_RXHPCRB29	0x0BB0
/* USB CPPI DMA Scheduler Registers offset */
#define USBCPPIDMASCHED_BASE_REG_OFFSET	0x3000
#define USBCPPIDMASCHED_CNTL		0x0000
/* USB Queue Manager Registers offset */
#define USBQUEUEMNGER_BASEREG_OFFSET	0x4000
#define USBQUEUEMNGER_QMGRREVID		0x0000
#define USBQUEUEMNGER_QMGRRST		0x0008
#define USBQUEUEMNGER_FDNSCO		0x0020
#define USBQUEUEMNGER_FDNSC1		0x0024
#define USBQUEUEMNGER_FDNSC2		0x0028
#define USBQUEUEMNGER_FDNSC3		0x002C
#define USBQUEUEMNGER_FDNSC4		0x0030
#define USBQUEUEMNGER_FDNSC5		0x0034
#define USBQUEUEMNGER_FDNSC6		0x0038
#define USBQUEUEMNGER_FDNSC7		0x003C
#define USBQUEUEMNGER_LRAM0BASE		0x0080
#define USBQUEUEMNGER_LRAM0SIZE		0x0084
#define USBQUEUEMNGER_LRAM1BASE		0x0088
#define USBQUEUEMNGER_PEND0		0x0090
#define USBQUEUEMNGER_PEND1		0x0094
#define USBQUEUEMNGER_PEND2		0x0098
#define USBQUEUEMNGER_PEND3		0x009C
#define USBQUEUEMNGER_PEND4		0x00A0
#define USBQUEUEMNGER_QMEMRBASE0	0x1000
#define USBQUEUEMNGER_QMEMCNTL0		0x1004
#define USBQUEUEMNGER_QMEMRBASE1	0x1010
#define USBQUEUEMNGER_QMEMCNTL1		0x1014
#define USBQUEUEMNGER_QMEMRBASE2	0x1020
#define USBQUEUEMNGER_QMEMCNTL2		0x1024
#define USBQUEUEMNGER_QMEMRBASE3	0x1030
#define USBQUEUEMNGER_QMEMCNTL3		0x1034
#define USBQUEUEMNGER_QMEMRBASE4	0x1040
#define USBQUEUEMNGER_QMEMCNTL4		0x1044
#define USBQUEUEMNGER_QMEMRBASE5	0x1050
#define USBQUEUEMNGER_QMEMCNTL5		0x1054
#define USBQUEUEMNGER_QMEMRBASE6	0x1060
#define USBQUEUEMNGER_QMEMCNTL6		0x1064
#define USBQUEUEMNGER_QMEMRBASE7	0x1070
#define USBQUEUEMNGER_QMEMCNTL7		0x1074



/*
 * 3530 specific Section
 */

/* Stuff on L3 Interconnect */
#define SMX_APE_BASE			0x68000000

/* L3 Firewall */
#define A_REQINFOPERM0		(SMX_APE_BASE + 0x05048)
#define A_READPERM0		(SMX_APE_BASE + 0x05050)
#define A_WRITEPERM0		(SMX_APE_BASE + 0x05058)

/* GPMC */
#define OMAP35XX_GPMC_BASE		0x6E000000

/* SMS */
#define OMAP35XX_SMS_BASE		0x6C000000

/* SDRC */
#define OMAP35XX_SDRC_BASE		0x6D000000

/*
 * L4 Peripherals - L4 Wakeup and L4 Core now
 */
#define OMAP35XX_CORE_L4_IO_BASE	0x48000000

#define OMAP35XX_WAKEUP_L4_IO_BASE	0x48300000

#define OMAP35XX_L4_PER			0x49000000

#define OMAP35XX_L4_IO_BASE		OMAP35XX_CORE_L4_IO_BASE

/* TAP information  dont know for 3430*/
#define OMAP35XX_TAP_BASE		(0x49000000) /*giving some junk for virtio */

/* base address for indirect vectors (internal boot mode) */
#define SRAM_OFFSET0			0x40000000
#define SRAM_OFFSET1			0x00200000
#define SRAM_OFFSET2			0x0000F800
#define SRAM_VECT_CODE			(SRAM_OFFSET0|SRAM_OFFSET1|SRAM_OFFSET2)

#define LOW_LEVEL_SRAM_STACK		0x4020FFFC

/*-------------------------------------------------------------------------------------*/
/* UART */
/*-------------------------------------------------------------------------------------*/
#define OMAP35XX_UART1		(OMAP35XX_L4_IO_BASE+0x6A000)
#define OMAP35XX_UART2		(OMAP35XX_L4_IO_BASE+0x6C000)
#define OMAP35XX_UART3		(OMAP35XX_L4_PER+0x20000)
#define UART1_REG(_x_)		*(vulong *)(OMAP35XX_UART1 + _x_)
#define UART2_REG(_x_)		*(vulong *)(OMAP35XX_UART2 + _x_)
#define UART3_REG(_x_)		*(vulong *)(OMAP35XX_UART3 + _x_)

/* UART Register offsets */
#define UART_RHR			0x00		// Receive Holding Register (read only)
#define UART_THR			0x00		// Transmit Holding Register (write only)
#define UART_DLL      		0x00        // Baud divisor lower byte (read/write)     
#define UART_DLH      		0x04        // Baud divisor higher byte (read/write)     
#define UART_IER			0x04		// Interrupt Enable Register (read/write) 				
#define UART_IIR			0x08		// Interrupt Identification Register (read only) 				
#define UART_FCR			0x08		// FIFO Control Register (write only) 				
#define UART_EFR			0x08		// Enhanced Feature Register 				
#define UART_LCR			0x0C		// Line Control Register (read/write)  				
#define UART_MCR			0x10		// Modem Control Register (read/write) 			
#define UART_LSR			0x14		// Line Status Register (read only) 				
#define UART_MSR			0x18		// Modem Status Register (read only) 				
#define UART_TCR			0x18		// 
#define UART_TLR			0x1C		// 
#define UART_SPR			0x1C		// Scratch Pad Register (read/write) 				
#define UART_MDR1			0x20		// Mode Definition Register 1 				
#define UART_MDR2			0x24		// Mode Definition Register 2 		
//#define UART_SFLSR			0x28		// Status FIFO Line Status Register (IrDA modes only) 			
//#define UART_TXFLL			0x28		// Transmit Frame Length Register Low (IrDA modes only)			
//#define UART_RESUME			0x2C		// Resume Register (IR-IrDA and IR-CIR modes only) 			
//#define UART_TXFLH			0x2C		// Transmit Frame Length Register High (IrDA modes only) 
//#define UART_RXFLL			0x30		// Receive Frame Length Register Low (IrDA modes only) 			
//#define UART_SFREGL			0x30		// Status FIFO Register Low (IrDA modes only) 
//#define UART_RXFLH			0x34		// Receive Frame Length Register High (IrDA modes only) 
//#define UART_SFREGH			0x34		// Status FIFO Register High (IrDA modes only)
//#define UART_BLR			0x38		// BOF Control Register (IrDA modes only) 					
//#define UART_UASR			0x38		// UART Autobauding Status Register (UART autobauding mode only) 					
//#define UART_ACREG			0x3C		// Auxiliary Control Register (IrDA-CIR modes only)					
#define UART_SCR			0x40		// Supplementary Control Register 					
#define UART_SSR			0x44		// Supplementary Status Register 					
//#define UART_EBLR			0x48		// BOF Length Register (IR-IrDA and IR-CIR modes only) 					
#define UART_SYSC			0x54		// System Configuration Register 					
#define UART_SYSS			0x58		// System Status Register 					
#define UART_WER			0x5C		// Wake-up Enable Register 					
#define UART_CFPS			0x60		// Carrier Frequency Prescaler Register 					

/*-------------------------------------------------------------------------------------*/
/* SPI - Serial Peripheral Interface */
/*-------------------------------------------------------------------------------------*/
#define SPI1_BASE_ADD		(OMAP35XX_L4_IO_BASE+0x98000) // routed to I/O sites on CSB703
#define SPI2_BASE_ADD		(OMAP35XX_L4_IO_BASE+0x9A000)
#define SPI3_BASE_ADD		(OMAP35XX_L4_IO_BASE+0xB8000) // routed to AD7843 touch controller on CSB703
#define SPI4_BASE_ADD		(OMAP35XX_L4_IO_BASE+0xBA000)
#define SPI1_REG(_x_)		*(vulong *)(SPI1_BASE_ADD + _x_)
#define SPI2_REG(_x_)		*(vulong *)(SPI2_BASE_ADD + _x_)
#define SPI3_REG(_x_)		*(vulong *)(SPI3_BASE_ADD + _x_)
#define SPI4_REG(_x_)		*(vulong *)(SPI4_BASE_ADD + _x_)

// SPI Register Defines
#define SPI_SYSCONFIG		0x10 	// System Configuration Register
#define SPI_SYSSTATUS		0x14 	// System Status Register
#define SPI_IRQSTATUS		0x18 	// Interrupt Status Register
#define SPI_IRQENABLE		0x1C 	// Interrupt Enable/Disable Register
#define SPI_WAKEUPENABLE	0x20 	// WakeUp Enable/Disable Register
#define SPI_SYST 			0x24 	// System Test Register
#define SPI_MODULCTRL		0x28 	// Serial Port Interface Configuration Register
#define SPI_CH0_CONF		0x2C 	// Channel 0 Configuration Register
#define SPI_CH1_CONF		0x40 	// Channel 1 Configuration Register
#define SPI_CH2_CONF		0x54 	// Channel 2 Configuration Register
#define SPI_CH3_CONF		0x68 	// Channel 3 Configuration Register
#define SPI_CH0_STAT		0x30 	// Channel 0 Status Register
#define SPI_CH1_STAT		0x44 	// Channel 1 Status Register
#define SPI_CH2_STAT		0x58 	// Channel 2 Status Register
#define SPI_CH3_STAT		0x6C 	// Channel 3 Status Register
#define SPI_CH0_CTRL		0x34 	// Channel 0 Control Register
#define SPI_CH1_CTRL		0x48 	// Channel 1 ControlRegister
#define SPI_CH2_CTRL		0x5C 	// Channel 2 ControlRegister
#define SPI_CH3_CTRL		0x70 	// Channel 3 ControlRegister
#define SPI_TXD0 			0x38 	// Channel 0 Transmit Data Register
#define SPI_TXD1 			0x4C 	// Channel 1 Transmit Data Register
#define SPI_TXD2 			0x60 	// Channel 2 Transmit Data Register
#define SPI_TXD3 			0x74 	// Channel 3 Transmit Data Register
#define SPI_RXD0 			0x3C 	// Channel 0 Receive Data Register
#define SPI_RXD1 			0x50 	// Channel 1 Receive Data Register
#define SPI_RXD2 			0x64 	// Channel 2 Receive Data Register
#define SPI_RXD3 			0x78 	// Channel 3 Receive Data Register
#define SPI_XFERLEVEL		0x7C 	// FIFO Transfer Levels Register

// SPI Channel x Configuration Bit Defines
#define SPI_CH_CONF_CLKG		BIT29				// 1 = One clock cycle granularity
#define SPI_CH_CONF_FFER		BIT28				// 1 = FIFO buffer is used to Receive data
#define SPI_CH_CONF_FFEW		BIT27				// 1 = FIFO buffer is used to Transmit data
#define SPI_CH_CONF_TCS_0_5		(0x00 << 25)		// 0.5 clock cycles between CS toggling and first (or last) edge of SPI clock
#define SPI_CH_CONF_TCS_1_5		(0x01 << 25)		// 1.5 clock cycles between CS toggling and first (or last) edge of SPI clock
#define SPI_CH_CONF_TCS_2_5		(0x02 << 25)		// 2.5 clock cycles between CS toggling and first (or last) edge of SPI clock
#define SPI_CH_CONF_TCS_3_5		(0x03 << 25)		// 3.5 clock cycles between CS toggling and first (or last) edge of SPI clock
#define SPI_CH_CONF_SB_POL		BIT24				// 1 = Start bit polarity is held to 1 during SPI transfer
#define SPI_CH_CONF_SBE			BIT23				// 1 = Start bit added before SPI transfer, 0 = default length specified by WL
#define SPI_CH_CONF_SPIENSLV_0	(0x00 << 21)		// Slave select detection enabled on CS0
#define SPI_CH_CONF_SPIENSLV_1	(0x01 << 21)		// Slave select detection enabled on CS1
#define SPI_CH_CONF_SPIENSLV_2	(0x02 << 21)		// Slave select detection enabled on CS2
#define SPI_CH_CONF_SPIENSLV_3	(0x03 << 21)		// Slave select detection enabled on CS3
#define SPI_CH_CONF_FORCE		BIT20				// 1 = CSx high when EPOL is 0 and low when EPOL is 1 
#define SPI_CH_CONF_TURBO		BIT19				// 1 = Turbo is activated
#define SPI_CH_CONF_IS			BIT18				// 1 = spim_simo selected for reception, 0 = spim_somi selected for reception
#define SPI_CH_CONF_DPE1		BIT17				// 1 = no transmission on spim_simo, 0 = spim_simo selected for transmission
#define SPI_CH_CONF_DPE0		BIT16				// 1 = no transmission on spim_somi, 0 = spim_somi selected for transmission
#define SPI_CH_CONF_DMAR		BIT15				// 1 = DMA read request enabled
#define SPI_CH_CONF_DMAW		BIT14				// 1 = DMA write request enabled
#define SPI_CH_CONF_TRM_TR		(0x00 << 12)		// Transmit and receive mode
#define SPI_CH_CONF_TRM_RO		(0x01 << 12)		// Receive-only mode
#define SPI_CH_CONF_TRM_TO		(0x02 << 12)		// Transmit-only mode
#define SPI_CH_CONF_WL(_x_)		((_x_ & 0x1f) << 7)	// SPI word length, 0x7 = 8-bit
#define SPI_CH_CONF_EPOL		BIT6			   	// 1 = SPIM_CSx is low during active state, 0 = high during active state
#define SPI_CH_CONF_CLKD(_x_)	((_x_ & 0xf) << 2) 	// Frequency divider for spim_clk
#define SPI_CH_CONF_POL			BIT1			   	// 1 = spim_clk is low during active state, 0 = high during active state
#define SPI_CH_CONF_PHA			BIT0			   	// 1 = data latched on even-numbered edges, 0 = data latched on odd-numbered edges	

// SPI Interrupt Status Register Bit Defines
#define SPI_RX3_FULL		BIT14				//  
#define SPI_TX3_EMPTY		BIT12				//  
#define SPI_RX2_FULL		BIT10				//  
#define SPI_TX2_EMPTY		BIT8				//  
#define SPI_RX1_FULL		BIT14				//  
#define SPI_TX1_EMPTY		BIT6				//  
#define SPI_RX0_FULL		BIT2				//  
#define SPI_TX0_EMPTY		BIT0				//  

// SPI Channel Status Register Bit Defines
#define SPI_RXF_FULL		BIT6				//  
#define SPI_RXF_EMPTY		BIT5				//  
#define SPI_TXF_FULL		BIT4				//  
#define SPI_TXF_EMPTY		BIT3				//  
#define SPI_CH_EOT			BIT2				//  
#define SPI_CH_TX0_EMPTY	BIT1				//  
#define SPI_CH_RX0_FULL		BIT0				//  

/*-------------------------------------------------------------------------------------*/
/* General Purpose Timers */ 
/*-------------------------------------------------------------------------------------*/
#define OMAP35XX_GPT1			0x48318000
#define OMAP35XX_GPT2			0x49032000
#define OMAP35XX_GPT3			0x49034000 
#define OMAP35XX_GPT4			0x49036000
#define OMAP35XX_GPT5			0x49038000 
#define OMAP35XX_GPT6			0x4903A000 
#define OMAP35XX_GPT7			0x4903C000 
#define OMAP35XX_GPT8			0x4903E000 
#define OMAP35XX_GPT9			0x49040000 
#define OMAP35XX_GPT10			0x48086000
#define OMAP35XX_GPT11			0x48088000
#define OMAP35XX_GPT12			0x48304000

/*-------------------------------------------------------------------------------------*/
/* General Purpose I/O */ 
/*-------------------------------------------------------------------------------------*/
#define GPIO1_BASE_ADD      0x48310000
#define GPIO2_BASE_ADD      0x49050000
#define GPIO3_BASE_ADD      0x49052000
#define GPIO4_BASE_ADD      0x49054000
#define GPIO5_BASE_ADD      0x49056000
#define GPIO6_BASE_ADD      0x49058000
#define GPIO1_REG(_x_)		*(vulong *)(GPIO1_BASE_ADD + _x_)
#define GPIO2_REG(_x_)		*(vulong *)(GPIO2_BASE_ADD + _x_)
#define GPIO3_REG(_x_)		*(vulong *)(GPIO3_BASE_ADD + _x_)
#define GPIO4_REG(_x_)		*(vulong *)(GPIO4_BASE_ADD + _x_)
#define GPIO5_REG(_x_)		*(vulong *)(GPIO5_BASE_ADD + _x_)
#define GPIO6_REG(_x_)		*(vulong *)(GPIO6_BASE_ADD + _x_)

/* GPIO Register offsets */
#define GPIO_SYSCONFIG		0x10 	// 
#define GPIO_SYSSTATUS		0x14 	// 
#define GPIO_CTRL			0x30 	// 
#define GPIO_OE		 		0x34 	// 
#define GPIO_DATAIN	 		0x38 	// 
#define GPIO_DATAOUT 		0x3C 	// 
#define GPIO_CLEARDATAOUT	0x90 	// 
#define GPIO_SETDATAOUT		0x94 	// 

/*-------------------------------------------------------------------------------------*/
/* WatchDog Timers (1 secure, 3 GP) */
/*-------------------------------------------------------------------------------------*/
#define WD1_BASE_ADD		0x4830C000
#define WD2_BASE_ADD		0x48314000
#define WD3_BASE_ADD		0x49030000
#define WD1_REG(_x_)		*(vulong *)(WD1_BASE_ADD + _x_)
#define WD2_REG(_x_)		*(vulong *)(WD2_BASE_ADD + _x_)
#define WD3_REG(_x_)		*(vulong *)(WD3_BASE_ADD + _x_)

/* WatchDog Timer Register offsets */
#define WD_CONFIG 			0x10 	// System Configuration Register
#define WD_STATUS 			0x14 	// System Configuration Register
#define WD_WISR 			0x18 	// System Configuration Register
#define WD_WIER 			0x1C 	// System Configuration Register
#define WD_WCLR 			0x24 	// System Configuration Register
#define WD_WCRR 			0x28 	// System Configuration Register
#define WD_WLDR 			0x2C 	// System Configuration Register
#define WD_WTGR 			0x30 	// System Configuration Register
#define WD_WWPS 			0x34 	// System Configuration Register
#define WD_WSPR 			0x48 	// System Configuration Register

/*-------------------------------------------------------------------------------------*/
/* 32KTIMER */
/*-------------------------------------------------------------------------------------*/
#define SYNC_32KTIMER_BASE	(0x48320000)
#define S32K_CR				(SYNC_32KTIMER_BASE+0x10)

/*-------------------------------------------------------------------------------------*/
/* System Control Module */ 
/*-------------------------------------------------------------------------------------*/
/* Module Name		Base Address		Size */
/* 
   INTERFACE		0x48002000			36 bytes
   PADCONFS			0x48002030			564 bytes
   GENERAL			0x48002270			767 bytes
   MEM_WKUP			0x48002600			1K byte
   PADCONFS_WKU		0x48002A00			80 bytes
   GENERAL_WKUP		0x48002A60			31 bytes
*/
/*-------------------------------------------------------------------------------------*/
#define OMAP35XX_CTRL_BASE	(OMAP35XX_L4_IO_BASE+0x2000)
#define SCM_REG(_x_)		*(vulong *)(OMAP35XX_CTRL_BASE + _x_)

/* Pad Configuration Registers */
/* Note: Cogent is only defining the PADCONFS registers that are used in Micromonitor */
#define PADCONFS_GPMC_NCS3		0xB4 	// NCS3[15:0], NCS4[31:16]
#define PADCONFS_GPMC_NCS5		0xB8	// NCS5[15:0], EXP_INTX[31:16]
#define PADCONFS_GPMC_NCS7		0xBC 	// LCD_BKL_X[15:0], LCLK[31:16]
#define PADCONFS_GPMC_NADV_ALE  0xC0	// NADV_ALE[15:0], NOE[31:16] 
#define PADCONFS_GPMC_NWE		0xC4	// NWE[15:0], NBE0_CLE[31:16] 
#define PADCONFS_DSS_PCLK		0xD4 	// LCD_PCLK_X[15:0], LCD_HS_X[31:16]
#define PADCONFS_DSS_VSYNC		0xD8	// LCD_VS_X[15:0], LCD_OE_X[31:16]
#define PADCONFS_DSS_DATA0		0xDC	// LCD_B0_X[15:0], LCD_B1_X[31:16]
#define PADCONFS_DSS_DATA2		0xE0	// LCD_B2_X[15:0], LCD_B3_X[31:16]
#define PADCONFS_DSS_DATA4		0xE4 	// LCD_B4_X[15:0], LCD_B5_X[31:16]
#define PADCONFS_DSS_DATA6		0xE8	// LCD_G0_X[15:0], LCD_G1_X[31:16]
#define PADCONFS_DSS_DATA8		0xEC	// LCD_G2_X[15:0], LCD_G3_X[31:16]
#define PADCONFS_DSS_DATA10		0xF0 	// LCD_G4_X[15:0], LCD_G5_X[31:16]
#define PADCONFS_DSS_DATA12		0xF4	// LCD_R0_X[15:0], LCD_R1_X[31:16]
#define PADCONFS_DSS_DATA14		0xF8	// LCD_R2_X[15:0], LCD_R3_X[31:16]
#define PADCONFS_DSS_DATA16		0xFC	// LCD_R4_X[15:0], LCD_R5_X[31:16]
#define PADCONFS_DSS_DATA18		0x100 	// SPI1_CLK_X[15:0], SPI1_MOSI_X[31:16]
#define PADCONFS_DSS_DATA20		0x104 	// SPI1_MISO_X[15:0], *SPI1_CS0_X[31:16]
#define PADCONFS_DSS_DATA22		0x108 	// GPIO7_X[15:0], NC[31:16]
#define PADCONFS_MMC1_DAT4		0x150 	// *I2C_INT_X[15:0], *PIRQ_X[31:16]
#define PADCONFS_MMC1_DAT6		0x154 	// GPIO0_X[15:0], GPIO1_X[31:16]
#define PADCONFS_MCBSP3_CLKX	0x170 	// D_TXD[15:0], D_RXD[31:16]
#define PADCONFS_SYS_NIRQ		0x1E0 	// FIQ[15:0], SYS_CLK2[31:16]
#define PADCONFS_SYS_OFF_MODE	0xA18 	// OFF_MODE_X[15:0], USB_CLK[31:16]
#define PADCONFS_GPMC_WAIT2		0xD0    // NA[15:0], E_INTX[31:16]
#define PADCONFS_MMC1_CLK		0x144	// MMC1_CLK[15:0], MMC1_CMD[31:16]
#define PADCONFS_MMC1_DAT0		0x148	// MMC1_DAT0[15:0], MMC1_DAT1[31:16]
#define PADCONFS_MMC1_DAT2		0x14C	// MMC1_DAT2[15:0], MMC1_DAT3[31:16]


#define CM_REV_REG		0x48004800
#define PRM_REV_REG		0x48306804
#define CM_REV_MAJ()	((*(volatile unsigned long *)CM_REV_REG & 0xf0)>>4)
#define CM_REV_MIN()	(*(volatile unsigned long *)CM_REV_REG & 0x0f)
#define PRM_REV_MAJ()	((*(volatile unsigned long *)PRM_REV_REG & 0xf0)>>4)
#define PRM_REV_MIN()	(*(volatile unsigned long *)PRM_REV_REG & 0x0f)

/* MMC registers...
 */
#define CM_FCLKEN1_CORE		0x48004a00
#define CM_ICLKEN1_CORE		0x48004a10
#define CM_IDLEST1_CORE		0x48004a20
#define CM_AUTOIDLE1_CORE	0x48004a30
#define PM_WKEN1_CORE		0x48306aa0
#define PM_MPUGRPSEL1_CORE	0x48306aa4
#define PM_IVA2GRPSEL1_CORE	0x48306aa8
#define PM_WKST1_CORE		0x48306ab0
#define CONTROL_DEVCONF0	0x48002274
#define MMC1_BASE_ADD		0x4809c000
#define MMC2_BASE_ADD		0x480ad000
#define MMC3_BASE_ADD		0x480b4000
#define MMC1_REG(_x_)		*(vulong *)(MMC1_BASE_ADD + _x_)
#define MMC2_REG(_x_)		*(vulong *)(MMC2_BASE_ADD + _x_)
#define MMC3_REG(_x_)		*(vulong *)(MMC3_BASE_ADD + _x_)
#define MMCHS_SYSCONFIG 	0x10
#define MMCHS_SYSSTATUS 	0x14
#define MMCHS_CSRE			0x24
#define MMCHS_SYSTEST		0x28
#define MMCHS_CON			0x2C
#define MMCHS_PWCNT			0x30
#define MMCHS_BLK			0x104
#define MMCHS_ARG			0x108
#define MMCHS_CMD			0x10C
#define MMCHS_RSP10			0x110
#define MMCHS_RSP32			0x114
#define MMCHS_RSP54			0x118
#define MMCHS_RSP76			0x11C
#define MMCHS_DATA			0x120
#define MMCHS_PSTATE		0x124
#define MMCHS_HCTL			0x128
#define MMCHS_SYSCTL		0x12C
#define MMCHS_STAT			0x130
#define MMCHS_IE			0x134
#define MMCHS_ISE			0x138
#define MMCHS_AC12			0x13C
#define MMCHS_CAPA			0x140
#define MMCHS_CUR_CAPA		0x148
#define MMCHS_REV			0x1FC

/* Miscellaneous MMC register bits...
 * (only specified the ones I use)
 */
#define EN_MMC1				(1 << 24)
#define ST_MMC1				(1 << 24)
#define AUTO_MMC1			(1 << 24)
#define GRPSEL_MMC1			(1 << 24)
#define VS18				0x04000000
#define VS30				0x02000000
#define VS33				0x01000000
#define MMCINIT				0x00000002
#define ODE					0x00000001
#define SVDS				0x00000e00
#define SVDS18				(5 << 9)
#define SVDS30				(6 << 9)
#define SVDS33				(7 << 9)
#define SDBP				0x00000100
#define ICE					0x00000001
#define ICS					0x00000002
#define CEN					0x00000004
#define CLKD(v)				((v & 0x3ff) << 6)
#define CLKDMSK				(0x3ff << 6)
#define CLKACTIVITYMSK		(3 << 8)
#define CLKACTIVITY(n)		((n & 3) << 8)
#define SIDLEMODEMSK		(3 << 3)
#define SIDLEMODE(n)		((n & 3) << 3)
#define ENWAKEUP			(1 << 2)
#define IWE					(1 << 24)
#define AUTOIDLE			1
#define CLKEXTFREE			(1 << 16)
#define SRESET				0x00000002
#define CC					0x00000001
#define RESETDONE			0x00000001
#define IE_ALL				0x317f8337
#define CDP					(1 << 7)
#define CMD(v)				((v & 0x3f) << 24)
#define CMDMSK				(0x3f << 24)
#define CMDI				0x00000001
#define DEBOUNCE			(3 << 16)
#define CCRC				(1 << 17)
#define DCRC				(1 << 21)
#define CERR 				(1 << 28)
#define CTO					(1 << 16)
#define DP					(1 << 21)
#define RSPTYPE_NONE		0x00000000
#define RSPTYPE_136			0x00010000
#define RSPTYPE_48			0x00020000
#define RSPTYPE_48BSY		0x00030000
#define RSPTYPE				0x00030000
#define SRD					(1 << 26)
#define SRC					(1 << 25)
#define SRA					(1 << 24)
#define DTOMSK				(0xf<<16)
#define DTO(a)				((a&0xf) << 16)
#define NBLK(a)				((a&0xffff) << 16)
#define BLEN(a)				(a&0x7ff)
#define MMCSDIO1ADPCLKISEL	(1 << 24)

/* PBIAS...
 */
#define CONTROL_PBIAS_LITE	0x48002520
#define PBIAS_LITE_VMMC1_3V		(0x0101)
#define MMC_PWR_STABLE			(0x0202)
#define PBIAS_LITE_VMMC1_52MHZ	(0x0404)
#define PBIAS_LITE_MMC1_ERROR	(0x0808)
#define PBIAS_LITE_MMC1_HIGH	(0x8080)

/* Control status...
 */
#define CONTROL_STATUS	0x480022f0
#define	SYSBOOT			0x3f
#define	DEVICETYPE		(0x3 << 8)

/* 16 bit access CONTROL */
#define 	MUX_VAL(OFFSET,VALUE)\
	*(unsigned short *) (OMAP35XX_CTRL_BASE + (OFFSET)) = VALUE;

#define		CP(x)	(CONTROL_PADCONF_##x)

#define  CONTROL_PADCONF_DSS_DATA18          0x0100       
#define  CONTROL_PADCONF_DSS_DATA19          0x0102       
#define  CONTROL_PADCONF_DSS_DATA20          0x0104       
#define  CONTROL_PADCONF_DSS_DATA21          0x0106       

#define  CONTROL_PADCONF_MMC1_CLK            0x0144       
#define  CONTROL_PADCONF_MMC1_CMD            0x0146       
#define  CONTROL_PADCONF_MMC1_DAT0           0x0148       
#define  CONTROL_PADCONF_MMC1_DAT1           0x014A       
#define  CONTROL_PADCONF_MMC1_DAT2           0x014C       
#define  CONTROL_PADCONF_MMC1_DAT3           0x014E       

#define  CONTROL_PADCONF_HSUSB0_CLK          0x01A2       
#define  CONTROL_PADCONF_HSUSB0_STP          0x01A4       
#define  CONTROL_PADCONF_HSUSB0_DIR          0x01A6       
#define  CONTROL_PADCONF_HSUSB0_NXT          0x01A8       
#define  CONTROL_PADCONF_HSUSB0_DATA0        0x01AA       
#define  CONTROL_PADCONF_HSUSB0_DATA1        0x01AC       
#define  CONTROL_PADCONF_HSUSB0_DATA2        0x01AE       
#define  CONTROL_PADCONF_HSUSB0_DATA3        0x01B0       
#define  CONTROL_PADCONF_HSUSB0_DATA4        0x01B2       
#define  CONTROL_PADCONF_HSUSB0_DATA5        0x01B4       
#define  CONTROL_PADCONF_HSUSB0_DATA6        0x01B6       
#define  CONTROL_PADCONF_HSUSB0_DATA7        0x01B8       
#define  CONTROL_PADCONF_I2C1_SCL            0x01BA       
#define  CONTROL_PADCONF_I2C1_SDA            0x01BC       
#define  CONTROL_PADCONF_McBSP3_DX           0x016C       

/*  bits used in control reg's above
 * IEN  - Input Enable
 * IDIS - Input Disable
 * PTD  - Pull type Down
 * PTU  - Pull type Up
 * DIS  - Pull type selection is inactive
 * EN   - Pull type selection is active
 * M0   - Mode 0
 */
 
#define  IEN	(1 << 8)

#define  IDIS	(0 << 8)
#define  PTU	(1 << 4)
#define  PTD	(0 << 4)
#define  EN		(1 << 3)
#define  DIS	(0 << 3)

#define  M0	0 /* modes */
#define  M1	1
#define  M2	2
#define  M3	3
#define  M4	4
#define  M5	5
#define  M6	6
#define  M7	7                                                                                                                                      

