const int pin = 9;

int note = 1047;
int velocitat = 10;

void setup()
{
}

void loop()
{
  
  punt();
  punt();
  punt();
  
  espaiL();
  
  ratlla();
  ratlla();
  ratlla();
  
  espaiL();
  
  punt();
  punt();
  punt();
  
  espaiP();
}


void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  
{   
  delay(6*(1000/velocitat));  
}

