/*Christpher Yonek
   CSC:210 - Dr. Roosen
   Introduction to Strings
   3/25/2022
*/

/*This function consumes two "string" arguments (first and last), and one int, num. 
The function returns nothing. This function should loop num times, printing first 
and last together on a line each iteration. On even iterations, it should print first, 
then last. On odd iterations: last, then first. In both cases, the strings must be separated 
by a comma and a space.
*/

void together(const char *first, const char *last, int n) {
    int i;
    for (i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            printf("%s, %s\n", last, first);
        } else {
            printf("%s, %s\n", first, last);
        }
    }
}

/* This function that consumes two string arguments str1 and str2 and
 displays the strings on different lines as shown.
 */
 
 void stringtaker(char str1[], char str2[]){
        int length1, length2;
        
        length1 = strlen(str1);
        length2 = strlen(str2);
        
        if(length1>10 || length2>10){
                printf("One or more input string length greater than 10");
        }
        else if(length1==0 || length2==0){
                printf("One or more input string is empty");
        }
        else{
                printf("First string: %s\n",str1);
                printf("Second string: %s",str2);
        }
}

/* This function that consumes a single string argument and returns the number
 of lower-case vowels in the given string.
 */
 
 int count_vowels(char *str) {
    int count = 0, i = 0;
    char ch;
    while (str[i]) {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        i++;
    }
    return count;
}

/* This function consumes a string argument and returns 1 if the string is
in the form of a US Social Security Number (SSN), 0 otherwise. 
*/

int is_ssn(char str[])
{
    int i;
    if (strlen(str) == 11){
        for (i = 0; i < 11; i++){
            if (i != 3 && i != 6){
                if (!(str[i] >= '0' && str[i] <= '9'))  //cpndition for digit

                    return 0;
            }
            else{

                if (!(str[i] == '-'))

                    return 0;
            }
        }
        return 1;
    }
    return 0;}
	
	/* Write a C program that will read a string from the keyboard and print its
	length. You may assume the length of the string is < 50 characters. */
	
#include <stdio.h>
int main(){
	char string[50]; // declare string variable
	int i;
	fgets(string,sizeof(string),stdin); // take string input from user
	for (i = 0; string[i] != '\0'; ++i); // count character one by one untill null char found
	printf("%d", i-1); // print the Length of the string
	return 0;
}
