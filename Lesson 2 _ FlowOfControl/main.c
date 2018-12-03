
int main()
{
  int counter = 0; //0 iwereba R0 registrSi, ASM - MOVS
 
  //dessasimble , meore moqmedeba aris ASM - B.N instruqcia, ASM branch
  //brenchi eubneba PC is rom gamotovos ramdenime instruqcia
   while (counter < 21) //ASM - CMP (Compare to 21), 21 to hex is 15 
  {
    counter++;   
    if((counter & 1) != 0) /* & bitwise and 0011 & 0110 = 0010
       3 & 6 = 2, 0000(counter++) & 0001
       zeda magalitshi masin iqneba 0 isgan gansxavebuli pirpba
       roca counter iqneba kenti anu dabolovebuli iqneba
       counter cvladis orobiti mnishvneloba 1 ianit */
    {
      /* do something when counter is odd (luwi)*/
    } // else if (), else.
  }
  
  return 0;
}
