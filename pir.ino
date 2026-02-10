#define pirsens 2
#define ledpin 3
#define greenpin 4

int val = 0;
int state = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(pirsens, INPUT);
  pinMode(greenpin, OUTPUT);
  digitalWrite(greenpin, HIGH);
  digitalWrite(ledpin, LOW);
}

void loop()
{
  val = digitalRead(pirsens);
  state = LOW;
  if (val != 0) {
    digitalWrite(ledpin, HIGH);
    digitalWrite(greenpin, LOW);
    tone(8, 350);
    state = HIGH;
    delay(500);
    Serial.println("Mouvement detecte");
    digitalWrite(ledpin, LOW);
    noTone(8);
  } else {
    Serial.println("Aucun mouvement");
    digitalWrite(ledpin, LOW);
    digitalWrite(greenpin, HIGH);
    
    state = LOW;
  }
  delay(500);
}