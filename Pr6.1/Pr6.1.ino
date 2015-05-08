  const int speakerPin = 9;
  int tempo = 300;
  int length = 21; 
  char notes[] = "egC egC egCDCb abCabg";
  int beats[]={3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 1, 1, 1, 1, 3, 1};

  void setup() {
  pinMode(speakerPin, OUTPUT);
}

  void loop() {
  for (int i = 0; i < length; i++) {
  if (notes[i] == ' ') {
  delay(beats[i] * tempo);
  } 
  else {
      playNote(notes[i], beats[i] * tempo);
  }
    delay(tempo / 2); 
  }
  }

  void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
  digitalWrite(speakerPin, HIGH);
  delayMicroseconds(tone);
  digitalWrite(speakerPin, LOW);
  delayMicroseconds(tone);
  }
  }

  void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' , 'D'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};

  for (int i = 0; i < 9; i++) {
  if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}


