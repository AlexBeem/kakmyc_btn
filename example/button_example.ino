#include <kakmyc_btn.h>

btn Btn1(3,0,3);//1st button (pin 3, signal log0, max multiclick value 3)
btn Btn2(4,1,5);//2nd button(pin 4, signal log1, max multiclick value 5)
/* LONGPRESS time>1.5sec
click interval 0.3 sec
LONGPRESS value=255 */
void setup(){
    Serial.begin(9600);
   
}
void loop(){
    int BTN1=Btn1.key();
    int BTN2=Btn2.key();
   if(BTN1) {Serial.print("btn1=");Serial.println(BTN1);}
       if(BTN2) {Serial.print("btn2=");Serial.println(BTN2);}
    
}