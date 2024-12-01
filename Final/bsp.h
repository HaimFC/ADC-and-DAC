#ifndef _bsp_H
#define _bsp_H
#include "msp430g2553.h"
//################################BSP FILE######################################
//---------------------------------MSP2553-------------------------------------
#define  RAMcode           0x200
#define  FlashCode         0xC000
//------------BUTTONS----------------
#define   PBsArrPort        &P1IN
#define   PBsArrIntPend     &P1IFG
#define   PBsArrIntEn       &P1IE
#define   PBsArrIntEdgeSel  &P1IES
#define   PBsArrPortSel     &P1SEL
#define   PBsArrPortDir     &P1DIR
#define   PBsOut            &P1OUT  
//---------------LCD-----------------
//***************P2******************   
#define   LCDIn             &P2IN
#define   LCDFlag           &P2IFG
#define   LCDEn             &P2IE
#define   LCDEdgeSel        &P2IES
#define   LCDSel            &P2SEL
#define   LCDDir            &P2DIR
#define   LCDOut            &P2OUT 
//***************P1****************** 
#define   LCDCntIn          &P1IN
#define   LCDCntFlag        &P1IFG
#define   LCDCntEn          &P1IE
#define   LCDCntEdgeSel     &P1IES
#define   LCDCntSel         &P1SEL
#define   LCDCntDir         &P1DIR
#define   LCDCntOut         &P1OUT
//**************ADC******************
#define   ADCCTRL0          &ADC10CTL0
#define   ADCCTRL1          &ADC10CTL1
#define   ADCIE             &ADC10IE
#define   ADCVECTOR         ADC10_VECTOR
#define   ADCIFG            &ADC10IFG
#define   divideNum         0x0124
#define   avgNum            64
#define   ctl0Cfg           ADC10SHT_2+ADC10ON+ADC10IE+REFON+SREF_0
#define   ctl1Cfg           INCH_3
#define   ADCMEM            ADC10MEM
#define   pulsePin          P1SEL
#define   onlyFor419        &ADC10CTL1
#define   ADCSC             ADC10SC
//**************Commands******************
#define   pushIt        push
#define   moveIt        mov.w
#endif