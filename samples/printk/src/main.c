#include <stdint.h>
#include <stdio.h>

#define a (*(int *)0x8C000000) /*BRAM 000*/
#define b (*(int *)0x8C000001) /*BRAM 000*/
#define c (*(int *)0x8C000002) /*BRAM 000*/
#define d (*(int *)0x8C000003) /*BRAM 000*/
#define e (*(int *)0x8C000004) /*BRAM 000*/
#define f (*(int *)0x8C000005) /*BRAM 000*/
#define g (*(int *)0x8C000006) /*BRAM 000*/
#define h (*(int *)0x8C000007) /*BRAM 000*/
#define i (*(int *)0x8C000008) /*BRAM 000*/
#define j (*(int *)0x8C000009) /*BRAM 000*/
#define k (*(int *)0x8C00000a) /*BRAM 000*/

int main() {
        a = 72;
        b = 69;
        c = 76;
        d = 76;
        e = 79;
        f = 95;
        g = 87;
        h = 79;
        i = 82;
        j = 76;
        k = 68;
    __asm__ volatile(
        "nop \n\t"
        "li x4,0x88000000 \n\t"
        "li x5,0x48 \n\t"
        "sw x5,0x4(x4) \n\t"
        "li x6,0x45 \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x4C \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x4C \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x4F \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x5F \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x57 \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x4F \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x52 \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x4C \n\t"
        "sw x6,0x4(x4) \n\t"
        "li x6,0x44 \n\t"
        "sw x6,0x4(x4) \n\t"
        "rep: \n\t"
        "jal rep \n\t"
        "nop \n\t"
        "nop \n\t"
    );
    hold();
    return 0;
}

void hold(){
    while(1){
        hold();
    }
}










