#define IR_PIN 15
#define BUZZER_PIN 25

int visitorCount = 0;
bool objectPresent = false;

void setup() {
  Serial.begin(115200);

  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Visitor Counter System Started");
}

void loop() {

  int state = digitalRead(IR_PIN);

  // Object detected
  if (state == LOW && objectPresent == false) {

    visitorCount++;

    Serial.print("Visitor Count = ");
    Serial.println(visitorCount);

    digitalWrite(BUZZER_PIN, HIGH);
    delay(100);
    digitalWrite(BUZZER_PIN, LOW);

    objectPresent = true;
  }

  // Object removed
  if (state == HIGH) {
    objectPresent = false;
  }

  delay(50);
}
 
