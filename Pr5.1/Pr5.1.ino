  const int xiulet = 9;        
  const int ldr0 = A0;         
  const int ldr1 = A1;         
  const int ldr2 = A2;         

  int valLdr0;                  
  int valLdr1;
  int valLdr2;
  int freq;                    

  void setup()
  {
  pinMode(xiulet, OUTPUT);     
  }

  void loop()
  {
  valLdr0 = analogRead(ldr0);   
  valLdr1 = analogRead(ldr1);   
  valLdr2 = analogRead(ldr2);
  
  freq = min(valLdr0, valLdr1);  
  freq = min(valLdr2, freq);
  freq = map(freq, 0, 1023, 2000, 0);   
  
  tone(xiulet, freq, 100);   
  delay(100+100);            
  }
