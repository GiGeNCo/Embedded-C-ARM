#define RCGCGPIO (*((unsigned int *) 0x400fe608U)) //clock gating control

#define GPIO-F_BASE 0x4002500U
#define GPIO_DIR (*((unsigned int *)(GPIO-F_BASE+0x400U)))
#define GPIO_DEN (*((unsigned int *)(GPIO-F_BASE+0x51CU)))
#define GPIO-F_DATA (*((unsigned int *)(GPIO-F_BASE+0x3FCU))) 


int main()
{
  RCGCGPIO = 0x20U; // Enable Clock for GPIO-F
  GPIO_DIR = 0x0eU; // GPIO-F pin 1,2,3 us output
  GPIO_DEN = 0x0eU; // digital enable func Register
  
  
  
  
  while (1)
  {
      
    unsigned int a = 0;
  --a;
  unsigned long b = 0;
  --b;
      GPIO-F_DATA = 0x02U; // GPIO data register red on
      
      int counter = 0;
      while(counter < 1000000) // dayovneba ^_^
      {
	counter ++;
      }
      
      GPIO-F_DATA = 0x00U; // GPIO data register off   
      
      counter = 0;
      while(counter < 1000000) //dayovneba ^_^ 
      {
	counter ++;
      }
  
  }
  
  
  
  
  
  
  return 0;
}
