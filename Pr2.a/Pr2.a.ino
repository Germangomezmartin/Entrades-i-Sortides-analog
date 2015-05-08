const int led0 = 9;          
const int led1 = 10;         
const int led2 = 11;         
const int ldr0 = A0;         
const int ldr1 = A1;         
const int ldr2 = A2;         

int velocitat = 20;          
int valLdr0;                 
int valLdr1;
int valLdr2;


void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  Serial.begin(9600);
}


void loop()
{
  valLdr0 = analogRead(ldr0);   
  Serial.println(valLdr0);
  valLdr1 = analogRead(ldr1); 
  Serial.println(valLdr1);  
  valLdr2 = analogRead(ldr2);
  Serial.println(valLdr2);
  Serial.println();
  
  valLdr0 = map(valLdr0, 400, 900, 255, 0);   
  valLdr1 = map(valLdr1, 400, 900, 255, 0);   
  valLdr2 = map(valLdr2, 400, 900, 255, 0);   
  
  if(valLdr0<50)    
  {
  analogWrite(led0,0);
  }
  else
  {
  analogWrite(led0, valLdr0);
  }
  delay(200);
  {
  if(valLdr1<50) 
  {
  analogWrite(led1,0);
  }
  else
  {
  analogWrite(led1, valLdr1);
  }
  delay(200);
  {
  if(valLdr2<50)
  {
  analogWrite(led2,0);
  }
  else
  {
  analogWrite(led2, valLdr2);
  }
  }
  }
  }
  




