int humi = 0;
int temp = 0;
int lux = 0;

void setup() 
{
  Serial.begin(9600);    
}

void loop() 
{ 
  humi = random(40,90);
  temp = random(-10,30);
  lux = random(150,250);

  Serial.print("AA14,AA11,Ambient lux: ");
  Serial.print(lux);
  Serial.print(",Humidity : ");
  Serial.print(humi);
  Serial.print(",Temperature : ");
  Serial.println(temp);
  delay(500); 
}
