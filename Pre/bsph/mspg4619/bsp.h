#ifndef _bsp_H
#define _bsp_H
#include "msp430XG46X.h"

//################################BSP FILE######################################

//---------------------------------MSP46019-------------------------------------
#define  RAMcode           0x1100
#define  FlashCode         0x2100
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
#define   ADCCTRL0          &ADC12CTL0
#define   ADCCTRL1          &ADC12CTL1
#define   ADCIE             &ADC12IE
#define   ADCVECTOR         ADC12_VECTOR
#define   ADCIFG            &ADC12IFG
#define   divideNum         0x04D9
#define   avgNum            15
#define   ctl0Cfg           SHT0_2+ADC12ON
#define   ctl1Cfg           SHP+CSTARTADD_3
#define   ADCMEM            ADC12MEM3
#define   pulsePin          P6SEL
#define   onlyFor419        &ADC12MCTL3
#define   ADCSC             ADC12SC
//**************Commands*************
#define   pushIt            push.w
#define   moveIt            mov.b
#endif   