/* A partir da montaxe da práctica anterior cos dous
LEDs (nos pins 13 e 12), modifica
a programación por bloques de maneira que primeiro 
encenda e apague o LED do pin 13 
e a continuación faga o mesmo o LED do pin 12. 
Observa como se modifica o programa 
en texto.
*/

// C++ code
//
/*
  leds alternativos
*/

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
