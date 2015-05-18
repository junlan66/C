#include <stdio.h>
int main(void)
{
  
  char a = 'Y'; 

  int b = a+32;

  if ((a >= 1 && a < 65) || (a > 90 && a < 128)) //small and others
 {
 printf("%c\n",a);
 } else 
 {
  printf("%c\n",b);  //big
 }

  return(0);
}
