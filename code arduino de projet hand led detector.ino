/*#define HIGH 100
#define LOW 200*/




#define leda 9
#define ledb 10
#define ledc 11
#define ledd 12
#define lede 8

void led_intial()
{
  digitalWrite(leda,LOW);
  digitalWrite(ledb,LOW);
  digitalWrite(ledc,LOW);
  digitalWrite(ledd,LOW);
  digitalWrite(lede,LOW);
}
void active_led( int x[])
{
  int pos[5]={};
  for (int i=0;i<5;i++)
    {
      if(x[i]==1)
      {pos[i]=1;}
      else
      {pos[i]=0;}}
      digitalWrite(leda,pos[0]);
      digitalWrite(ledb,pos[1]);
      digitalWrite(ledc,pos[2]);
      digitalWrite(ledd,pos[3]);
      digitalWrite(lede,pos[4]);
      
}
void setup()
{
Serial.begin(9600);
pinMode(leda,OUTPUT);
pinMode(ledb, OUTPUT);
pinMode(ledc, OUTPUT);
pinMode(ledd, OUTPUT);
pinMode(lede,OUTPUT);
led_intial();

  

}



void loop()
{
  {
  
  
//# Get the number of bytes (characters) available for reading from the serial port.
if(Serial.available() > 0)


{

   if(Serial.parseInt()==1)
      { 
        int tab[5]={0,0,0,0,0};
        active_led(tab);
      }
     
    if(Serial.parseInt()==2)
       { 
       int tab[5]={0,0,0,0,1};
        active_led(tab);}
    if(Serial.parseInt()==3)
       { 
       int tab[5]={0,0,0,1,0};
        active_led(tab);}
    if(Serial.parseInt()==4)
       {
       int tab[5]={0,0,1,0,0};
        active_led(tab);}
    if(Serial.parseInt()==5)
       {
       int tab[5]={0,1,0,0,0};
        active_led(tab);}
    if(Serial.parseInt()==6)
       {
       int tab[5]={1,0,0,0,0};
        active_led(tab);}
  //two
    if(Serial.parseInt()==7)
       { 
       int tab[5]={0,0,0,1,1};
        active_led(tab);}
      
    if(Serial.parseInt()==8)
       { 
       int tab[5]={0,0,1,0,1};
        active_led(tab);}
    if(Serial.parseInt()==9)
       { 
       int tab[5]={0,0,1,1,0};
        active_led(tab);}

    if(Serial.parseInt()==10)
       { 
       int tab[5]={0,1,0,0,1};
        active_led(tab);}    
    if(Serial.parseInt()==11)
       { 
       int tab[5]={0,1,0,1,0};
        active_led(tab);}
    if(Serial.parseInt()==12)
       { 
       int tab[5]={0,1,1,0,0};
        active_led(tab);}
    if(Serial.parseInt()==13)
       { 
       int tab[5]={1,0,0,0,1};
        active_led(tab);}
    if(Serial.parseInt()==14)
       { 
       int tab[5]={1,0,0,1,0};
        active_led(tab);}
    if(Serial.parseInt()==15)
       { 
       int tab[5]={1,0,1,0,0};
        active_led(tab);}
    if(Serial.parseInt()==16)
       { 
       int tab[5]={1,1,0,0,0};
        active_led(tab);}
  //thre
    if(Serial.parseInt()==17)
       { 
       int tab[5]={0,0,1,1,1};
        active_led(tab);}
      
    if(Serial.parseInt()==18)
       { 
       int tab[5]={0,1,0,1,1};
        active_led(tab);}
    if(Serial.parseInt()==19)
       { 
       int tab[5]={0,1,1,0,1};
        active_led(tab);}

    if(Serial.parseInt()==20)
       { 
       int tab[5]={0,1,1,1,0};
        active_led(tab);}    
    if(Serial.parseInt()==21)
       { 
       int tab[5]={1,0,0,1,1};
        active_led(tab);}
    if(Serial.parseInt()==22)
       { 
       int tab[5]={1,0,1,0,1};
        active_led(tab);}
    if(Serial.parseInt()==23)
       { 
       int tab[5]={1,0,1,1,0};
        active_led(tab);}
    if(Serial.parseInt()==24)
       { 
       int tab[5]={1,1,0,0,1};
        active_led(tab);}
    if(Serial.parseInt()==25)
       { 
       int tab[5]={1,1,0,1,0};
        active_led(tab);}
    if(Serial.parseInt()==26)
       { 
       int tab[5]={1,1,1,0,0};
        active_led(tab);}
  //four 
    if(Serial.parseInt()==27)
       { 
       int tab[5]={0,1,1,1,1};
        active_led(tab);}
    if(Serial.parseInt()==28)
       { 
       int tab[5]={1,0,1,1,1};
        active_led(tab);}
    if(Serial.parseInt()==29)
       { 
       int tab[5]={1,1,0,1,1};
        active_led(tab);}
    if(Serial.parseInt()==30)
       { 
       int tab[5]={1,1,1,0,1};
        active_led(tab);}
    if(Serial.parseInt()==31)
       { 
       int tab[5]={1,1,1,1,0};
        active_led(tab);}
  //five
    if(Serial.parseInt()==32)
       { 
       int tab[5]={1,1,1,1,1};
        active_led(tab);}

}
}
}
