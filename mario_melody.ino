#define NOTE_E5 659
#define NOTE_C5 523
#define NOTE_G5 784
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_AS4 466
#define NOTE_F5 698
#define NOTE_D5 587

void setup() {
  pinMode(12, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(7) == LOW) {
    tone(12, NOTE_E5); delay(150); noTone(12); delay(50);
    tone(12, NOTE_E5); delay(150); noTone(12); delay(150);
    tone(12, NOTE_E5); delay(150); noTone(12); delay(150);
    tone(12, NOTE_C5); delay(150); noTone(12); delay(50);
    tone(12, NOTE_E5); delay(150); noTone(12); delay(150);
    tone(12, NOTE_G5); delay(300); noTone(12); delay(300);
    tone(12, NOTE_G4); delay(300); noTone(12); delay(300);
    noTone(12);
  }
}
