#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);
  //Keyboard.press(KEY_LEFT_GUI);
  //Keyboard.press('r');
  //delay(10);
  //Keyboard.releaseAll();
  //delay(200);
  //Keyboard.print("notepad");
  //Keyboard.press(KEY_RETURN);
  //Keyboard.print("test");
  //delay(10);
  //Keyboard.releaseAll();
  //Keyboard.end();
}

int get_button() {
  // get A1 analog input value
  int val=analogRead(A1);
  if(val>1000)
    return 1; //you can change the "return x;" to whatever you want like using a keyboard library you can make it to copy or paste something
  else if(val>900)
    return 2;
  else if(val>820)
    return 3;
  else if(val>750)
    return 4;
  else if(val>660)
    return 5;
  else if(val>620)
    return 6;
  else if(val>585)
    return 7;
  else if(val>540)
    return 8;
  else if(val>500)
    return 9;
  else if(val>475)
    return 10;
  else if(val>455)
    return 11;
  else if(val>425)
    return 12;
  else if(val>370)
    return 13;
  else if(val>300)
    return 14;
  else if(val>260)
    return 15;
  else if(val>200)
    return 16;
  else
     return 0; 
}

void loop() {
  // button detection
  int valueA1=get_button();
  if(valueA1>0) { 
    if (valueA1 == 1) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press('c');      
    }
    if (valueA1 == 5) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press('v');      
    }
    if (valueA1 == 9) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press('x');
    }
    if (valueA1 == 13) {
      Keyboard.press(KEY_INSERT);
    }
    if (valueA1 == 2) {
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(10);
      Keyboard.press(KEY_HOME);
    }
    if (valueA1 == 6) {
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(10);
      Keyboard.press(KEY_PAGE_UP);
    }
    if (valueA1 == 10) {
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(10);
      Keyboard.press(KEY_PAGE_DOWN);
    }
    if (valueA1 == 14) {
      Keyboard.press(KEY_LEFT_SHIFT);
      delay(10);
      Keyboard.press(KEY_END);
    }
    if (valueA1 == 3) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press(KEY_HOME);
    }
    if (valueA1 == 7) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press(KEY_PAGE_UP);
    }
    if (valueA1 == 11) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press(KEY_PAGE_DOWN);
    }
    if (valueA1 == 15) {
      Keyboard.press(KEY_LEFT_CTRL);
      delay(10);
      Keyboard.press(KEY_END);
    }
    if (valueA1 == 4) {
      Keyboard.press(KEY_HOME);
    }
    if (valueA1 == 8) {
      Keyboard.press(KEY_PAGE_UP);
    }
    if (valueA1 == 12) {
      Keyboard.press(KEY_PAGE_DOWN);
    }
    if (valueA1 == 16) {
      Keyboard.press(KEY_END);
    }
    delay(300);
    Keyboard.releaseAll();
    delay(150);
  } 
}
