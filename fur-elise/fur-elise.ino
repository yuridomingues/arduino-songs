const int BUZZER_PIN = 8;

const int REST = 0;

const int melody[] = {
  659, 622, 659, 622, 659, 494, 587, 523, 440,
  REST,
  262, 330, 440, 494,
  REST,
  330, 416, 494, 523,
  REST,
  330, 659, 622, 659, 622, 659, 494, 587, 523, 440
};

const int beats[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 4,
  8,
  8, 8, 8, 4,
  8,
  8, 8, 8, 4,
  8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 4
};

const int TEMPO = 105;

void playSong() {
  const int wholeNote = (60000 * 4) / TEMPO;
  const int noteCount = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < noteCount; i++) {
    int duration = wholeNote / beats[i];

    if (melody[i] == REST) {
      noTone(BUZZER_PIN);
    } else {
      tone(BUZZER_PIN, melody[i], duration * 0.9);
    }

    delay(duration);
    noTone(BUZZER_PIN);
  }
}

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  playSong();
}

void loop() {}
