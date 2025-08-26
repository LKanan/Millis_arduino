const int led=10;
unsigned long temps=0;
int etat=0;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  fonction();
}
void fonction(){
  // temps=millis();
  digitalWrite(led,etat);
  if((millis()-temps)>1000){
    etat=!etat;
    digitalWrite(led,etat);
    temps=millis();
  }
  // digitalWrite(10,etat);
  // if((millis()-temps)>1000){
  //   etat=!etat;
  //   digitalWrite(led,etat);
  //   temps=millis();
  // }
}
