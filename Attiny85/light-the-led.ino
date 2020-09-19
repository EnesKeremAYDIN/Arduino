void loop() { // Codes to be run in a continuous loop.
// Other codes.
}

void loop() { // Codes to be run in a continuous loop.
  pinMode(1, OUTPUT); // Pin mod.
  digitalWrite(1, HIGH); // Lights up the led. 
  delay(500); // Wait 500 ms.
  digitalWrite(1, LOW); // Turns off the led.
  delay(500); // Wait 500 ms.
}

// If the light is not lit, convert the all value 1 to 0!
