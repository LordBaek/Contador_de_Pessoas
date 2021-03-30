const int ledVerde = 13;
const int ledLaranja = 11;
const int ledAmarelo = 12;
const int ledVermelho = 9;
const int botaoSubtracao = 7;
const int botaoAdicao = 6;
int pessoas = 0;

void setup(){
  Serial.begin(9600);
  pinMode(botaoSubtracao, INPUT);
  pinMode(botaoAdicao, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop(){
  if (digitalRead(botaoAdicao) == HIGH){
    pessoas++;
     delay(92);
  }


  if (digitalRead(botaoSubtracao) == HIGH){
    pessoas--;
    delay(92);
  }
  if (pessoas >= 0) {
    if (pessoas <=20) {
        digitalWrite(ledVerde, HIGH);
    }
    if (pessoas >=20) {
        digitalWrite(ledVerde, LOW);
    }
  }
   if (pessoas >= 21) {
    if (pessoas <=30) {
        digitalWrite(ledAmarelo, HIGH);
    }

    if (pessoas >=30) {
        digitalWrite(ledAmarelo, LOW);
    }
     if (pessoas <=21) {
        digitalWrite(ledAmarelo, LOW);
    }
  } 
  if (pessoas >= 31) {
    if (pessoas <= 47) {
      digitalWrite(ledLaranja, HIGH);
    }
    if (pessoas >=47) {
        digitalWrite(ledLaranja, LOW);
    }
    if (pessoas <=31) {
        digitalWrite(ledLaranja, LOW);
    }
  }

  if (pessoas >= 48) {
    digitalWrite(ledVermelho, HIGH);
  }
  if (pessoas <=48) {
        digitalWrite(ledVermelho, LOW);
    }
}  
