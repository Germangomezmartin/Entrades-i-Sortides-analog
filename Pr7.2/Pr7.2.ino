const int pin = 9;

int note = 800;
int velocitat = 10;

void setup()
{
}

void loop()
{
  
  punt();
  ratlla();
  ratlla();
  ratlla(); 
  espaiL();
  punt();
  punt();
  ratlla();
  espaiL();
  punt();
  ratlla();
  espaiL();
  ratlla();
  punt();
  espaiP();
  punt();
  punt();
  punt();
  punt();
  espaiL();
  punt();
  ratlla();
  espaiL(); 
  ratlla();
  ratlla();
  punt();
  punt();
  espaiL();
  ratlla();
  espaiL();
  punt();
  espaiP();
  ratlla();
  punt();
  ratlla();
  punt();
  espaiL();
  punt();
  punt();
  ratlla();
  espaiL();
  punt();
  ratlla();
  punt();
  punt();
  espaiL();
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

