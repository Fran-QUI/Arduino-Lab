int nbPinLed1;
int nbPinLed2;

void setup()
{
    nbPinLed1=7;
    nbPinLed2=6;
    Serial.println("*** Debut du programme ***");
    Serial.begin(9600); //initialisation communication
    pinMode(nbPinLed1,OUTPUT);
    pinMode(nbPinLed2,OUTPUT);
}

void loop()
{
  for (int compteur=0;compteur<=20;compteur=compteur+1)
  {
    Serial.println(compteur);
    for (int nbFlash=0;nbFlash<compteur;nbFlash=nbFlash+1)
    {
      digitalWrite(nbPinLed1,LOW);
      delay(250);
      digitalWrite(nbPinLed1,HIGH);
      delay(250);
    }
    digitalWrite(nbPinLed2,LOW);
    delay(1000);
    digitalWrite(nbPinLed2,HIGH);
    delay(1000);
  }
}
