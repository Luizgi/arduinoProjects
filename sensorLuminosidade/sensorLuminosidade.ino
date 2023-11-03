const int LDR = A0;
const int luz = 13;
int valorsensor;


void setup() {
  // put your setup code here, to run once:
  pinMode(luz, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);

  }

void loop() {
  // put your main code here, to run repeatedly:
  valorsensor = analogRead(LDR);
  Serial.print("LDR : ");
  Serial.println(valorsensor);

  if(valorsensor < 500){
    digitalWrite(luz, HIGH);
  } else{
    digitalWrite(luz, LOW);
  }
  delay(100);
}
