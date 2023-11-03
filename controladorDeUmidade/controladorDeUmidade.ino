#define pino_sinal_analogico A0
#define pino_led_vermelho 5
#define pino_led_amarelo 6
#define pino_led_verde 7

int valor_analogico;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pino_sinal_analogico, INPUT);
pinMode(pino_led_vermelho, OUTPUT);
pinMode(pino_led_amarelo, OUTPUT);
pinMode(pino_led_verde, OUTPUT);
}

void loop() {
  valor_analogico = analogRead(pino_sinal_analogico);

  Serial.print("Porta analogica:");
  Serial.print(valor_analogico);

  if(valor_analogico > 0 && valor_analogico < 400){
    Serial.println("Status : solo umido");
    apagaleds();
    digitalWrite(pino_led_verde, HIGH);
  }

  if(valor_analogico > 400 && valor_analogico < 800){
    Serial.println("Status: umidade moderada");
    apagaleds();
    digitalWrite(pino_led_amarelo, HIGH);
  }

  if(valor_analogico > 800 && valor_analogico < 1024){
    Serial.println("Status: solo seco");
    apagaleds();
    digitalWrite(pino_led_vermelho, HIGH);
  }
  delay(100);
}

void apagaleds(){
  digitalWrite(pino_led_vermelho, LOW);
  digitalWrite(pino_led_amarelo, LOW);
  digitalWrite(pino_led_verde, LOW);

}
