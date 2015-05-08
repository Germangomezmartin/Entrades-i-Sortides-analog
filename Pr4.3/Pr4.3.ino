  const int xiulet = 9;        
  const int pot0 = A0;         
  const int pot1 = A1;         
  int valPot0;                   
  int valPot1;

  void setup()
  {
  pinMode(xiulet, OUTPUT);   
  }

  void loop()
  {
  valPot0 = analogRead(pot0);       
  valPot1 = analogRead(pot1);   

  tone(xiulet, valPot1, valPot0);  
  delay(2*valPot0);                
  }
