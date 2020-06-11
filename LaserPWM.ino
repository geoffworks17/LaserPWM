// Analog read to PWM output
// This is a slightly modified Knob sketch from the Arduino Examples
// Sketch written by Geoff

int pot_pin = 0;  // analog pin for pot
int pwm_pin = 9;  // pwm pin used to write to the LED or laser
int val;    // variable to read analog value from pot

void setup() {
}

void loop() {
  val = analogRead(pot_pin);        // Read the analog value from the pot
  val = map(val, 0, 1023, 0, 255);  // Map the input value to the range of the pwm output
  analogWrite(pwm_pin, val);        // Write the pwm value to the pwm pin
  
}
