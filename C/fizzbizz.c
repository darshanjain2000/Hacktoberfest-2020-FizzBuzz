//This code simply going into loop and printing values but checking
//if any no is multiple of 3,5,both(15 or can do it individually) and prints values accordingly
//Author: @darshanjain2000

#include <stdio.h> 
  
int main() 
{ 
    int i; 
    for (i=1; i<=100; i++) 
    { 
        if (i%3==0 and i%5 == 0)         
            printf ("FizzBuzz\t");     
        else if ((i%3) == 0)     
            printf("Fizz\t");                  
        else if ((i%5) == 0)                        
            printf("Buzz\t");                  
        else           
            printf("%d\t", i);                  
    } 
  
    return 0; 
} 
