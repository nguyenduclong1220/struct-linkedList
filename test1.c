#include <stdio.h>

#define BIT0 0x01
#define BIT1 0x02
#define BIT2 0x04
#define BIT3 0x08
#define BIT4 0x10
#define BIT5 0x20
#define BIT6 0x40
#define BIT7 0x80

union _register {
    struct _bits {
        unsigned char BIT_7:1;
        unsigned char BIT_6:1;
        unsigned char BIT_5:1;
        unsigned char BIT_4:1;
        unsigned char BIT_3:1;
        unsigned char BIT_2:1;
        unsigned char BIT_1:1;
        unsigned char BIT_0:1;
    } bits;
    unsigned char value;
};

void setVaue(union _register *reg, unsigned char bit, unsigned char value) {

}
int main () {
    union _register REG_A;

    setVaue(&REG_A, BIT1, 0);
    return 0;
}