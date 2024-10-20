const int ledPin= 13
void setup(){
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}
void loop(){
if(Serial.available()>0){
 char incominByte=Serial.read(); if( incominByte =='h'){
  digitalWrite (ledPin,HIGH);
}
else if ( incominByte =='l'){
  digitalWrite (ledPin,LOW);
    }
   }
}