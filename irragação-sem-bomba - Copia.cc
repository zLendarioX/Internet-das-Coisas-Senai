//https://www.blogdarobotica.com/2022/10/06/como-utilizar-o-sensor-de-umidade-do-solo-com-o-arduino/



#define umidadeAnalogica A0 //Atribui o pino A0 a variável umidade - leitura analógica do sensor
#define umidadeDigital 7 //Atribui o pino 7 a variável umidadeDigital - leitura digital do sensor
#define LedVermelho 5 
#define LedVerde 6

int valorumidade; 
int valorumidadeDigital; 

void setup() {
  Serial.begin(9600); 
  pinMode(umidadeAnalogica, INPUT); 
  pinMode(umidadeDigital, INPUT); 
  pinMode(LedVermelho, OUTPUT); 
  pinMode(LedVerde, OUTPUT); 
}

void loop() {
  valorumidade = analogRead(umidadeAnalogica);
  valorumidade = map(valorumidade, 1023, 315, 0, 100);
  Serial.print("Umidade encontrada: ");
  Serial.print(valorumidade); 
  Serial.println(" % " );

  valorumidadeDigital = digitalRead(umidadeDigital); 
  if (valorumidadeDigital == 0) { 
    Serial.println("Status: Solo úmido");
    digitalWrite(LedVermelho, LOW);
    digitalWrite(LedVerde, HIGH);
  }
  else { 
    Serial.println("Status: Solo seco");
    digitalWrite(LedVermelho, HIGH);
    digitalWrite(LedVerde, LOW);
  }
  delay(3000); //Atraso de 500ms
}