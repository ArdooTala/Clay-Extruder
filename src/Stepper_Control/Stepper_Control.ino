const int st = 4;
const int dr = 5;
const int en = 6;
const int sl = 7;
int spd = 300;
unsigned long t;

void setup() {
  pinMode(st, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(dr, OUTPUT);
  pinMode(sl, OUTPUT);

  digitalWrite(dr, HIGH);
  digitalWrite(sl, LOW);
  digitalWrite(en, LOW);

  t = micros();
}

void loop() {
    if (micros() - t > spd) {
      t = micros();
      digitalWrite(st, HIGH);
    }
    else if (micros() - t > 50) {
      digitalWrite(st, LOW);
    }    
}

void motorsState() {
}
