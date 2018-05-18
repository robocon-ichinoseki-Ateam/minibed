#ifndef _MINI_BED_
#define _MINI_BED_

#ifdef __cplusplus
extern "C" {
#endif

#define p0  P0_0
#define p1  P0_1
#define p2  P0_2
#define p3  P0_3
#define p4  P0_4
#define p5  P0_5
#define p6  P0_6
#define p7  P0_7
#define p8  P0_8
#define p9  P0_9
#define p10 P0_10
#define p11 P0_11
#define p12 P0_12
#define p13 P0_13
#define p14 P0_14
#define p15 P0_15
#define p16 P0_16
#define p17 P0_17
#define p18 P0_18
#define p19 P0_19
#define p20 P0_20
#define p21 P0_21
#define p22 P0_22
#define p23 P0_23
#define p24 P0_24
#define p25 P0_25
#define p26 P0_26
#define p27 P0_27
#define p28 P0_28
#define p29 P0_29


#define ISP0 p4
#define ISP1 p16

#define LED1 p26
#define LED2 p27
#define LED3 p28
#define LED4 p29

InterruptIn USB_ISP_bt(ISP0);

// ISP0ボタンを押すとUSB ISPモードに入る設定
void enter_USB_ISP(){
    //pc.printf("enter ISP\n");
    NVIC_SystemReset();
}

void miniBed_init()
{
    USB_ISP_bt.mode(PullUp);
    USB_ISP_bt.fall(&enter_USB_ISP);
}

#ifdef __cplusplus
}
#endif


#endif //_MINI_BED_