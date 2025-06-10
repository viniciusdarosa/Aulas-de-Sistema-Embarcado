#define botaoA 2
#define botaoB 3
#define botaoC 5
#define led1 9
#define led2 10
#define led3 11
#define led4 12

void setup() {
  pinMode(botaoA, INPUT);
  pinMode(botaoB, INPUT);
  pinMode(botaoC, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {

if ((digitalRead(botaoA) == 1) && (digitalRead(botaoB) == 1)){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
}

if ((digitalRead(botaoA) == 1) && (digitalRead(botaoB) == 0)){
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
}

if ((digitalRead(botaoA) == 0) && (digitalRead(botaoB) == 1)){
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
}

if ((digitalRead(botaoA) == 0) && (digitalRead(botaoB) == 0)){
  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
}

}
