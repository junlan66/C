#include <stdio.h>
int main(void)
{
  printf("input a character\n");	
  
  char a = getchar(); 

  if ((a >= 1 && a < 65) || (a > 90 && a < 128)) //lower and others
 {
 printf("%c\n",a);
 } else 
 {
  printf("%c\n",a+32);  //upper
 }

  return(0);
}
