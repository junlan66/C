#include <stdio.h>
 int main (void) 
{
  printf("result = %d/n",factorial());
  return 0;
}
 int factorial(int n) 
{  
 int result = n;
  if(n > 1)
  {
    while(--n >= 1)
  	 {
      result = result * n;     
  	 }
  }
  else
  {
    result = 1;
  }
  	return result;
}
