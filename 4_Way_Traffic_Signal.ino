int red1 = 13 ;
int yello1 = 12 ;
int green1 = 11 ;
//signal 2
int red2 = 10 ;
int yello2 = 9 ;
int green2 = 8 ;
//signal3
int red3 = 7 ;
int yello3 = 6 ;
int green3 = 5 ;
//signal4
int red4 = 4 ;
int yello4 = 3 ;
int green4 = 2 ;
//timer
int a = 1;
int b = 0;
int c = 14;
int d = 15;
int e = 16;
int f = 17;
int g = 18;
int h = 19;
void setup() {
pinMode(red1,OUTPUT);
pinMode(yello1,OUTPUT);
pinMode(green1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(yello2,OUTPUT);
pinMode(green2,OUTPUT);
pinMode(red3,OUTPUT);
pinMode(yello3,OUTPUT);
pinMode(green3,OUTPUT);
pinMode(red4,OUTPUT);
pinMode(yello4,OUTPUT);
pinMode(green4,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(0,OUTPUT);
 pinMode(14,OUTPUT);
 pinMode(15,OUTPUT);
 pinMode(16,OUTPUT);
 pinMode(17,OUTPUT);
 pinMode(18,OUTPUT);
 pinMode(19,OUTPUT);
}
void time();
void loop() {
signalone();
signaltwo();
signalthree();
signalfour();
zero();
delay(100);
one();
delay(100);
two();
delay(100);
three();
delay(100);
four();
delay(100);
five();
delay(100);
six();
delay(100);
seven();
delay(100);
eight();
delay(100);
nine();
delay(100);
signaltwoA();
signalfourA();
signalthreeA();
signaloneA();
zero();
delay(100);
one();
delay(100);
two();
delay(100);
three();
delay(100);
four();
delay(100);
five();
delay(100);
six();
delay(100);
seven();
delay(100);
eight();
delay(100);
nine();
delay(100);


 }
 void signalone(){
  digitalWrite(red1,HIGH);
   digitalWrite(yello1,LOW);
  digitalWrite(green1,LOW);
}
 void signaltwo(){
  
   digitalWrite(red2,LOW);
   digitalWrite(yello2,LOW);
  digitalWrite(green2,HIGH);
 }
 void signalthree()
 {
  digitalWrite(red3,HIGH);
   digitalWrite(yello3,LOW);
  digitalWrite(green3,LOW);
 }
 void signalfour()
 {
   digitalWrite(red4,LOW);
   digitalWrite(yello4,LOW);
  digitalWrite(green4,HIGH);
 }
 void zero() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,LOW);
  delay(100);
}
void one(){
  digitalWrite(1,LOW);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,LOW);
  digitalWrite(16,LOW);
  digitalWrite(17,LOW);
  digitalWrite(18,LOW);
  delay(100);
  
}

void two() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,LOW);
  digitalWrite(15,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(17,LOW);
  digitalWrite(18,HIGH);
  delay(100);
}

 void three() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,LOW);
  digitalWrite(17,LOW);
  digitalWrite(18,HIGH);
  delay(100);
  
 }

void four() {
  digitalWrite(1,LOW);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,LOW);
  digitalWrite(16,LOW);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  delay(100);
  
}

void five() {
  digitalWrite(1,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,LOW);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  delay(100);
  
}

void six() {
  digitalWrite(1,HIGH);
  digitalWrite(0,LOW);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  delay(100);
}

void seven() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,LOW);
  digitalWrite(16,LOW);
  digitalWrite(17,LOW);
  digitalWrite(18,LOW);
  delay(100);
  }

void eight() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  delay(100);
  
}

void nine() {
  digitalWrite(1,HIGH);
  digitalWrite(0,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(16,LOW);
  digitalWrite(17,HIGH);
  digitalWrite(18,HIGH);
  delay(100);
}
void signaloneA()
{
  digitalWrite(red1,LOW);
   digitalWrite(yello1,HIGH);
   delay(100);
   digitalWrite(yello1,LOW);
  digitalWrite(green1,HIGH);
  delay(100);
}
void signalthreeA()
{
  digitalWrite(red3,LOW);
  digitalWrite(yello3,HIGH);
  delay(100);
  digitalWrite(yello3,LOW);
  digitalWrite(green3,HIGH);
  delay(200);
}
void signalfourA()
{
   digitalWrite(green4,LOW);
   digitalWrite(yello4,HIGH);
   delay(100);
   digitalWrite(yello4,LOW);
   digitalWrite(red4,HIGH);
   delay(300);
  }
  void signaltwoA()
  {
   digitalWrite(green2,LOW);
   digitalWrite(yello2,HIGH);
   delay(100);
   digitalWrite(yello2,LOW);
   digitalWrite(red2,HIGH);
   delay(300); 
  }void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
