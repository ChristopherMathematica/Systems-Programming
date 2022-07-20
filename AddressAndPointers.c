/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Address and Pointers
   4/28/2022
*/

/*A float variable distance has been previously defined. 
Define a new variable distanceAddr containing a pointer to distance.*/

float* distanceAddr = &distance;

/*A variable weight has been defined as an integer. Create 
a new variable p2weight containing the address of weight.*/

int *p2weight = &weight; //A pointer variable pointing towards weight and storing it's address is declared.

/*A variable p2age has been defined as a pointer to integer.
 Write a line which will print the value of the integer referred to by p2age.*/
 
 printf("%d",*p2age);
 
 /*A variable p2cost has been defined as a pointer to float. Write a line which will assign the value 
 referenced by p2cost to a new variable price.*/
 
 float price = *p2cost;
 
 /* A variable year_p has been defined as a pointer to integer. Write a line which will add 4 to the value
 referred to by year_p and assign the sum to the (already defined) integer variable grad_year.*/
 
 grad_year=*year_p+4;
 
 /*float interest(float);
 
A variable p2money has been defined as a pointer to float. Call the interest function with the value referenced
 by p2money and print the result to one decimal place. */
 
 printf("%0.1f",interest(*p2money));
 
 /*Write code that will call get_int_p and print the integer referenced.*/
 
 printf("%d",*get_int_p());
 
 /*Write code that will call printint with a pointer to an integer that holds the value 6.*/
 
int n = 6;
printint(&n);