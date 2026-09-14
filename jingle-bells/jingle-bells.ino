const int BUZZER_PIN = 8;

const int melody[] = {
  330, 330, 330,
  330, 330, 330,
  330, 392, 262, 294, 330,
  349, 349, 349, 349,
  349, 330, 330, 330, 330,
  330, 294, 294, 330, 294, 392
};

const int beats[] = {
  4, 4, 2,
  4, 4, 2,
  4, 4, 4, 4, 1,
  4, 4, 2, 4,
  4, 4, 4, 8, 8,
  4, 4, 4, 4, 2, 2
};

const int TEMPO = 120;

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
