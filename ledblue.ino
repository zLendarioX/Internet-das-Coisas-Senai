int led = 8;//amarelo 

  void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT);//led amarelo
    
  }

  void loop(){
     String comando = Serial.readString();
     Serial.println(comando);
       if( comando == "on"){//liga led amarelo 
        digitalWrite(led, HIGH);
      }else if(comando == "off"){// desliga led amarelo 
        digitalWrite(led, LOW);
      }
}//o porque do nome e opcional 