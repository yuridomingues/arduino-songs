const int BUZZER_PIN = 8;

const int melody[] = {
  262, 262, 392, 392, 440, 440, 392,
  349, 349, 330, 330, 294, 294, 262,
  392, 392, 349, 349, 330, 330, 294,
  392, 392, 349, 349, 330, 330, 294,
  262, 262, 392, 392, 440, 440, 392,
  349, 349, 330, 330, 294, 294, 262
};

const int beats[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};

const int TEMPO = 100;

void playSong() {
  const int wholeNote = (60000 * 4) / TEMPO;
  const int noteCount = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < noteCount; i++) {
    int duration = wholeNote / beats[i];
    tone(BUZZER_PIN, melody[i], duration * 0.9);
    delay(duration);
    noTone(BUZZER_PIN);
  }
}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  playSong();
}

void loop() {}
