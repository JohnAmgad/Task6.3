#define ALARM 12
void setup(){
      pinMode(6, INPUT);
      pinMode(7,INPUT);
      pinMode(8,INPUT);
      pinMode(9,INPUT);
      pinMode(ALARM, OUTPUT);
}

void loop()
{
if (digitalRead(6) == HIGH)
(ALARM == HIGH);
if (digitalRead(7) == HIGH)
(ALARM == HIGH);
if (digitalRead(8) == HIGH)
(ALARM == HIGH);
if (digitalRead(9) == HIGH)
(ALARM == HIGH);
else (ALARM == LOW);
delay(3000);
}
