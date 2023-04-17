float floatMap(float x,float in_min, float in_max, float out_min, float out_max){
  return(x-in_min)*(out_max-out_min)/(in_max-in_min)+out_min;
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int analogValue=analogRead(4);
float voltage=floatMap(analogValue,0,4095,0,3.3);
Serial.print("analog:");
Serial.print(analogValue);
Serial.print(",voltage");
Serial.print(voltage*1000);
delay(1000);
}
