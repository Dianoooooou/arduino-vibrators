#define pot A1
#define vibMin 12
#define vibMax 13

int value = 0;


void setup() {
  Serial.begin(9600);

  pinMode(pot, INPUT);
  pinMode(vibMax, OUTPUT);
  pinMode(vibMin, OUTPUT);

}

void loop() {
  value = analogRead(pot);
  //Serial.print(value);
  //Serial.print("\n");
  
  if (value > 700) {
    digitalWrite(vibMax, HIGH);
  } else {
    digitalWrite(vibMax, LOW);
  }

    if (value < 400) {
    digitalWrite(vibMin, HIGH);
  } else {
    digitalWrite(vibMin, LOW);
  }
  
  delay(200);

}
