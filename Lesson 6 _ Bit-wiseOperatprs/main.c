#include "lm4f120h5qr.h"



#define LED_BLUE (1U << 1) // 0 ebs boloshi daamatebs 1 da wawevs marcxniv
#define LED_RED (1U << 2) // 0 ebs boloshi daamatebs 1 da wawevs marcxniv 2 it
#define LED_GREEN (1U << 3) // 0 ebs boloshi daamatebs 1 da wawevs marcxniv 3 it

// wawevs marcxniv 3 it anu 0000 ebs daamatebs 1s da gadawevs mesame indeqse 0100

int main()
{
  
  /*
  unsigned int a = 0x5a5a5a5a;
  unsigned int b = 0xdeadbeef;
  unsigned int c;
  
  c = a | b; // OR
  c = a&b; // AND
  c = a ^ b; // exclusive OR
  c = ~b; // inversion, NOT
  c = b >> 1; // right-shift
  c = b << 1; // left-shift
  
  int x = 1024;
  int y = -1024;
  int z; 
  z = x >> 3;
  z = y >> 3;
    */
  
  /* davakomentareb radganac gamartivebuls davwer dabla
    
  SYSCTL_RCGCGPIO_R = 0x20U; // enable clock for GPIOF
  GPIO_PORTF_DIR_R = 0x0EU; // set pin 1,2,3 as OUTpUT
  GPIO_PORTF_DEN_R = 0x0EU; // digiral write enable
  */
  
  SYSCTL_RCGCGPIO_R |= (1U << 5); // enable clock for GPIOF
  GPIO_PORTF_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN); 
  GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN); 
  
  
  GPIO_PORTF_DATA_R = LED_BLUE; //turn blue on
  
  while (1)
  {
      
      //GPIO_PORTF_DATA_R = GPIO_PORTF_DATA_R | LED_RED; // turn red on
      // komentari aris dzveli da ise davweret rom agar schirdeba magram eweros
      
      GPIO_PORTF_DATA_R |= LED_RED; // igivea rac zeda brdzaneba komentarshi
      
      volatile int counter = 0; // optimizaciisas
      
      while(counter < 1000000) // dayovneba ^_^
      {
	counter ++;
      }
      
      GPIO_PORTF_DATA_R &=  ~LED_RED;// GPIO data register off
      /* led redshi weria mxolod meore bitze 1 danarchengan arafeli
         NOT operatori piriqit aqcevs 0ebs da 1 ebs
         da roca data portze araferia da meore bitic 0 gaxda
         chaaqrobs leds */
      
      counter = 0;
      while(counter < 1000000) //dayovneba ^_^ 
      {
	counter ++;
      }
  
  }
  
  
  
  
  
  
  return 0;
}
