// thanks for sketch --  https://robotclass.ru/tutorials/arduino-pulse-sensor/

int PulseSensorPurplePin = 0; // выход Ардуино А0 
int LED13 = 13; //  светодиод на плате 
int Signal; 
int Threshold = 550; // значение для данных сенсора, после которого подаётся сигнал 
const byte dynPin = 2; // зуммер 

void setup() { 
    pinMode(LED13, OUTPUT); 
    Serial.begin(9600); 
    pinMode( dynPin, OUTPUT ); 
} 

void loop(){ 
    Signal = analogRead(PulseSensorPurplePin);  // чтение данных с сенсора
    Serial.println(Signal); 
    if (Signal > Threshold){ 
        digitalWrite(LED13, HIGH); // если значение выше "550", то сигнал на светодиод    
        digitalWrite(dynPin, HIGH ); // если значение выше "550", то включение зуммера  
    } else { 
        digitalWrite(LED13, LOW); 
        digitalWrite(dynPin, LOW ); 
    }
    delay(10); 
}
