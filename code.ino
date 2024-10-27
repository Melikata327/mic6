int ledPin =13;
void setup(){
pinMode(ledPin,OUTPUT);
SSerial.begin(9600);
}

void loop(){
if(Serial.available() > 0){
 char a=Serial.read(); 
if( a =='h' || a=='H' ){
  digitalWrite (ledPin,HIGH);
}
else if ( a =='l' || a=='L' ){
  digitalWrite (ledPin,LOW);
    }
   }
}