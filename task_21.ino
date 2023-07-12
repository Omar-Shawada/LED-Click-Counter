int r=8;
int y=9;
int g=10;
int pb=12;
int counter=0;
int reading=0;
void setup(){
  pinMode(r,OUTPUT);
    pinMode(y,OUTPUT);
    pinMode(g,OUTPUT);
    pinMode(pb,INPUT);
}
void loop(){
  reading=digitalRead(pb);
  if(reading==HIGH){
  counter++;
    if(counter==1){
    digitalWrite(r,HIGH);
  }
  else if(counter==2){
    
    digitalWrite(y,HIGH);
    }
  else if(counter==3){
    digitalWrite(g,HIGH);
  }
  else {
    digitalWrite(r,LOW);
        digitalWrite(y,LOW);
    digitalWrite(g,LOW);
    counter=0;}
    delay(250);}}
