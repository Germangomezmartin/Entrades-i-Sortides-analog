  const int sirena = 9;        
  const int pot0 = A0;         
  const int pot1 = A1;         
  int valPot0;                  
  int valPot1;


  void setup()
  {
  pinMode(sirena, OUTPUT);  
  }


  void loop()
  {
  valPot0 = analogRead(pot0);   
  valPot1 = analogRead(pot1);   

  tone(sirena, 800, valPot0);    
  delay(valPot0 + valPot1);  
  }
