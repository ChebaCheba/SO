#include "types.h"
#include "stat.h"
#include "user.h"

int fib(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  int f[10000];   // 1 extra to handle case, n = 0 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main(int argc, char **argv){
	int n;
	n = atoi(argv[1]);
	printf(1, "The value is: %d",fib(n));
	exit();
}