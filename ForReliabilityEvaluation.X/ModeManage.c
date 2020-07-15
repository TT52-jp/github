#include "eusart.h"
#include "ModeManage.h"


/*EUARTが取得した値を元に行う検査MODEを決定します*/
/*作成者　田邊  Date 15,July 2020*/
/*Argument: */
/*Return*/
void ManageModeStatus(uint8_t ModeData){
    uint8_t ModeSelect = NO_SELECT
    switch(ModeData){
        case ASCII_0:
            ModeSelect = NO_SELECT;
            break;
        case ASCII_1:
            ModeSelect = MODE1;
            break;
        case ASCII_2:
            ModeSelect = MODE2;
            break;
        case ASCII_3:
            ModeSelect = MODE3;
            break;
        default:
            ModeSelect = NO_SELECT;
            break;
    }
}
