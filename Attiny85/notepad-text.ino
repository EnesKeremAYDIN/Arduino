#include "DigiKeyboard.h"

void loop() { // Codes to be run in a continuous loop.
  DigiKeyboard.delay(1000); // Wait one second.
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); // Press win+d (Shrinks all tabs).
  DigiKeyboard.delay(1000); // Wait one second.
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Press win+r (Opens run).
  DigiKeyboard.delay(1000); // Wait one second.
  DigiKeyboard.print(F("notepad.exe")); // Open notepad.
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Press enter.
  DigiKeyboard.delay(1000); // Wait one second.
  DigiKeyboard.println("YOUR-TEXT-HERE");  // Text to write.
  delay(500); // Wait 500 ms.
}

void loop() { // Codes to be run in a continuous loop.
  pinMode(1, OUTPUT); // Pin mod.
  digitalWrite(1, HIGH); // Lights up the led. 
  delay(500); // Wait 500 ms.
  digitalWrite(1, LOW); // Turns off the led.
  delay(500); // Wait 500 ms.
}

// If the light is not lit, convert the all value 1 to 0!
// This command has been shared for informational purposes only. All operations are the responsibility of the user.
