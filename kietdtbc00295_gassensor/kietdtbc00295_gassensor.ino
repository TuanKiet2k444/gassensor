int const PINO_SGAS = A1;
int LED_VERDE = 7;
int LED_AMARELO = 6;
int LED_VERMELHO1 = 5;
int LED_VERMELHO2 = 4;
int LED_VERMELHO3 = A0;
void setup(){
  	pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERMELHO1, OUTPUT);
    pinMode(LED_VERMELHO2, OUTPUT);
    pinMode (LED_VERMELHO3, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int valor = analogRead(PINO_SGAS);
    valor = map(valor, 300, 750, 0, 100);
    digitalWrite(LED_VERDE, HIGH);
  	digitalWrite(LED_AMARELO, valor >= 30 ? HIGH : LOW);
    digitalWrite(LED_VERMELHO1, valor >= 50 ? HIGH : LOW);
    digitalWrite(LED_VERMELHO2, valor >= 80 ? HIGH : LOW);
    digitalWrite(LED_VERMELHO3, valor >= 60 ? HIGH : LOW);
  
  delay(250);
}