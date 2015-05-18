#include <stdio.h>
int main(void)
{
  // 'S' 'F' 'E'->'e'
  char a = '_'; 

  //int c = a+0;

  int b = a+32;

  if ( a > 96 && a <= 122 ) //small
 
 { printf("%c\n",a);
 } 

  else if ((a > 32 && a < 65) || (a > 90 && a < 97) || (a > 122 && a < 128)) //others
 {
 printf("%c\n",a);
 } else 
 {
  printf("%c\n",b);  //big
 }

  return(0);
}
