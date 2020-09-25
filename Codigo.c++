//Programa: Conectando Sensor Ultrassonico HC-SR04 ao Arduino
//Autor: RabinoMachineLearning
 
//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
 
//Define os pinos para o trigger e echo
#define pino_trigger 4
#define pino_echo 5
 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  //Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(cmMsec);
  Serial.print(" - Distancia em polegadas: ");
  Serial.println(inMsec);
  delay(1000);


 
 fix(); 

   for ( x=80; x >= 10; x--){  
     
  distance = calculateDistance();
  Serial.println(distance); 
  
 k = map(x, 80, 10, 15,165); 
  myServo.write(k);
  if (distance < 30){
    int f = x+6;
    ucg.setColor(255, 0, 0);
ucg.drawLine(Xmax/2, pos, -val*cos(radians(f*2)),val*sin(radians(f*2)));
  }
ucg.setColor(0, 207, 0);
ucg.drawLine(Xmax/2, pos, -200*cos(radians(x*2)),200*sin(radians(x*2)));

int d = x+1;
 ucg.setColor(0, 207, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(d*2)),200*sin(radians(d*2)));
int c = x+2;
 ucg.setColor(0, 207, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(c*2)),200*sin(radians(c*2)));
 int b = x+3;
 ucg.setColor(0, 102, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(b*2)),200*sin(radians(b*2)));
int a = x+4;
 ucg.setColor(0, 102, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(a*2)),200*sin(radians(a*2)));
int e = x+5;
 ucg.setColor(0, 0, 0);
ucg.drawLine(Xmax/2, pos, -200*cos(radians(e*2)),200*sin(radians(e*2)));
ucg.setColor(255, 0, 0);
  ucg.setPrintPos(160,0);
  ucg.setPrintDir(2);
  ucg.print("Deg :"); 
  deg = map (x, 80, 10 , 0, 180); 
  ucg.setPrintPos(120,0);
  ucg.setPrintDir(2);
  ucg.print(deg);
  ucg.setPrintPos(10,0);
  ucg.print(distance); 
  ucg.setColor(0, 0, 255);
   ucg.setPrintPos(90,38);
  ucg.setPrintDir(2);
  ucg.print("0.25");
  ucg.setPrintPos(90,70);
  ucg.print("0.50");
ucg.setPrintPos(90,110);
  ucg.print("1.00");
  }
  
  
  
  
  
  
 // ucg.clearScreen();
  
  fix();
 
   
  for ( x=10; x <= 80; x++){  
    distance = calculateDistance();
    Serial.println(distance); 
    k = map(x, 10, 80, 165,15); 
  myServo.write(k);
  if (distance < 10){
    int e = x-5;
    ucg.setColor(255, 0, 0);
ucg.drawLine(Xmax/2, pos, -val*cos(radians(e*2)),val*sin(radians(e*2)));
  }
  
  
ucg.setColor(0, 207, 0);
ucg.drawLine(Xmax/2, pos, -200*cos(radians(x*2)),200*sin(radians(x*2)));

 int a = x-1;
 
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(a*2)),200*sin(radians(a*2)));

 int b = x-2;
 ucg.setColor(0, 102, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(b*2)),200*sin(radians(b*2)));

 int c = x-3;
 ucg.setColor(0, 102, 0);
//ucg.drawLine(Xmax/2, pos, -200*cos(radians(c*2)),200*sin(radians(c*2)));

 int d = x-4;
 ucg.setColor(0, 0, 0);
ucg.drawLine(Xmax/2, pos, -200*cos(radians(d*2)),200*sin(radians(d*2)));
 ucg.setColor(255, 0, 0);
  ucg.setPrintPos(160,0);
  ucg.setPrintDir(2);
  ucg.print("Deg :"); 
  deg = map (x, 10, 80 , 0, 180); 
  ucg.setPrintPos(120,0);
  ucg.setPrintDir(2);
  ucg.print(deg); 
  ucg.setPrintPos(10,0);
  ucg.print(distance); 
  
 
  
  
  
  
  ucg.setColor(0, 0, 255);
   ucg.setPrintPos(90,38);
  ucg.setPrintDir(2);
  ucg.print("0.25");
  ucg.setPrintPos(90,70);
  ucg.print("0.50");
ucg.setPrintPos(90,110);
  ucg.print("1.00");
 
 
  }
  //ucg.clearScreen();
  
}







void fix(){
  ucg.setColor(255, 0, 0);
ucg.drawDisc(Xmax/2, base, 5, UCG_DRAW_LOWER_RIGHT);
ucg.drawDisc(Xmax/2, base, 5, UCG_DRAW_LOWER_LEFT);



ucg.setColor(225, 255, 50);
ucg.drawCircle(80, base, 115, UCG_DRAW_LOWER_RIGHT);
ucg.drawCircle(80, base, 115, UCG_DRAW_LOWER_LEFT);  
  
ucg.drawCircle(80, base, 78, UCG_DRAW_LOWER_RIGHT);
ucg.drawCircle(80, base, 78, UCG_DRAW_LOWER_LEFT);

ucg.drawCircle(80, base, 40, UCG_DRAW_LOWER_RIGHT);
ucg.drawCircle(80, base, 40, UCG_DRAW_LOWER_LEFT);

ucg.drawLine(0, base, 160,base);


ucg.setColor(0, 0, 0);
ucg.drawBox(100, 0, 30, 8); 
  
 
  
}


int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2;
  return distance;
}


}