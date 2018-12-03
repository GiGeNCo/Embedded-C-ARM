int counter = 0;  // am shemtxvevashi sheiqmneba RAM shi
		//ASM - LDR load from memory to register


int main()
{
  int *p_int;
  p_int = &counter; // & nishani gvadzlvs misamarts cvladis.
  
 // int counter1 = 17;
 // int counter2 = 21;
 
  while (*p_int < 21) /* * varskvlavi gvadzlevs 
   misamartze arsebul mnishvnelobas */
  {
    ++(*p_int);   
   // counter2--;
    
   
  }
  //counter1 ++;
  
  p_int = (int *) 0x20000002; //pointershi chavweret misamarti
  
  *p_int = 11; //roca * it aris e.i misamartis mnishvnelobas vexebit
  
  //(int *) 0x20000004 = 10;
  
  
  
  return 0;
}
