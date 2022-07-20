

   CSC:210 - Dr. Roosen
   Loops and Branches
   3/18/2022
*/

/* This function consumes an integer argument and returns 1
 if it'a prime number; 0 if it's not a prime number. 
 */
 
 int isPrime(int num)
{
   int i;
   if (num <= 1) return 0;
   if (num % 2 == 0 && num > 2) return 0;
   for (i = 3; i <= sqrt(num); i += 2)
   {
      if (num % i == 0)
         return 0;
   }
   return 1;
}

/* This function chooses a random integer between 1 and 1000 (inclusive). */
int computer_choose(void){
   // reset to generate new number
   //srand(time(NULL));
   // generate number between 1 to 10000
   int number = ((rand() % 1000) + 1);
   return number;
}

/* This function  consumes an integer argument and returns the number
 of positive factors of that integer 
 */
 
 int count_factors(int b)
{
int count = 0;
  
for(int i=1; i<=b; i++)
if(b%i == 0) //i is a factor
count++; // increasing count by 1
  
return count;
}

/* Write a function pounds2kilos that returns the metric (kilo) equivalent of a 
weight given in pounds (all values should be floats). Use this function in a program 
that keeps asking the user for a weight in pounds and reports the equivalent value in kilos. 
If the user enters something other than a number, the program should exit.
*/

#include <stdio.h>

float pounds2kilos(float pounds){
    return pounds * 0.45356;
}
int main(){
    float n;
    while(scanf("%f,&n",&n) > 0){
        float b = pounds2kilos(n);
        printf("%.2f pounds is %.2f kilos.\n",n,b);
        
    }
    return 0;
}