/*Aula 08 - EEPROM e LCD*/
#include"config.h"
#include"lcd.h"

void setup() {
    lcd_init();
    lcd_cmd(L_CLR);
    //lcd_custom(0, 0x11, 0x19, 0x15, 0x13, 0x13, 0x15, 0x19, 0x11);
    //lcd_custom(1, 0x0E, 0x11, 0x0E, 0x05, 0x0E, 0x14, 0x0A, 0x11);
    
    //Teste, colorindo todo o LCD
    lcd_custom(0, 0x4,0xe,0x1f,0x4,0xe,0x15,0x4,0x4);
    lcd_custom(1, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13);
    lcd_custom(2, 0b1010,0b10101,0b1010,0b10101,0b1010,0b10101,0b1010,0b10101);
    lcd_custom(3, 0xe,0x1b,0xe,0x15,0x11,0x1f,0xa,0x1b);
}
unsigned char j = 0;

void loop() {
    //Rotina para trocar o caractere
    lcd_dat(j % 4);
    delay(100);
    j++;
}
