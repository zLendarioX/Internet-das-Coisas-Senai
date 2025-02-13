#define luz A1//porta do sensor 
int lumin;//variavel
int fred = 8;
int green = 10;
void setup() {
  Serial.begin(9600);//indica que vai usar o Monitor Serial
  pinMode(fred, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  
  lumin = analogRead(luz);//variavel recebe valor da porta analogica (A0)
  Serial.println(lumin);//exibe valor
  delay(200);//delay para não mostrar valores na velocidade da luz slk 
  if(lumin > 200){
    digitalWrite(fred, HIGH);
    digitalWrite(green, LOW);
    tone(12, 2000, 2005);
  }
  else {
  	digitalWrite(fred, LOW);
    digitalWrite(green, HIGH);
  }
}\
