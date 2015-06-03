#include <stdio.h>
int main(void)  
{   
  int b = multiply(8,6);
  printf("%d\n",b);	
  return(0);

}

int multiply(int s, int h){
  return s*h;
}

//   int a = 9; //factorial of a
//   int b = 0;

//   int S = a-b;
//   if (S > 2)
//    {
//   	printf("%d\n",S * (a-(b+1)));//a*(a-1)
//    }

//   else 
//   {
//   	printf("%d\n",S);
//   }

  unsigned int factorial(unsigned int n)
  {
  	unsigned int result = n;
  	if(n > 2)
  	{
  	  unsigned int i = n;	
  	  while(--i>0)
  	  {
         result = result * i; 
  	  }
  	}
  	else
  	{
       result = 1;
  	}
  	return result;
  }