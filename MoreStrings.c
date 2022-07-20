/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Introduction to Strings
   4/28/2022
*/

/* This function consumes a string argument and modifies it so that it only contains 
two characters: the first, and the last. If there are less than two characters, leave
 the string alone. */
 
void first_last(char *str){
    if(strlen(str)>=2){
        str[1]=str[strlen(str)-1];
        str[2]='\0';
    }
}

/* This function which takes a string as an argument, 
reverses the string and returns the reversed string. */

char *reverse(char str[]) {
    int i, len = 0;
    char temp;
    while (str[len]) {
        ++len;
    }
    for (i = 0; i < len / 2; ++i) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

/* This function that consumes three string arguments. You may assume that the third argument 
is at least as long as the first two put together. Modify the third argument so that the first
 character is the first character of the first string, the second the first of the second string,
 second of first string, second of second, etc. */
void interleave(char *str1, char *str2, char *result) {
    int i = 0, j = 0, len = 0;
    // go through the strings str1 and str2
    while (i < strlen(str1) || j < strlen(str2)) {
        // add character from str1 to result
        if (i < strlen(str1)) {
            result[len++] = str1[i++];
        }
        // add character from str2 to result
        if (j < strlen(str2)) {
            result[len++] = str2[j++];
        }
    }
    // finally, terminate the string with null-terminating character
    result[len] = '\0';
}

/* Write a program to read a character c, and an integer n from the keyboard.
 Using repeats of c, draw a pyramid of n levels (plus a base) as shown in the example. */

#include<stdio.h>
int main(){
	char c;
	int n;
	scanf("%c",&c);
	scanf("%d",&n);
	for(int i=0;i<n;i++){ /*loop to control levels*/
		for(int j=1;j<n-i;j++) /*loop to print space before the character*/
			printf(" ");
			printf("%c",c);/*prints the first character of the row*/
		for(int j=0;j<2*i-1;j++)/*loop to control how many spaces will be printed between the two characters of the row*/
		printf(" ");
		if(i!=0)/*prints second character of the row for all rows except the first*/
			printf("%c",c);
		printf("\n");/*going to next line*/
	}
	for(int i=0;i<2*n-1;i++)
	printf("%c",c);
	printf("\n");
	return 0;
}

/* Write a program that will read a string from stdin. The program should remove from the
 string all characters which are not digits and print the remainder containing only the 
 numeric characters. /*
 
#include <stdio.h>
int main(){   char string[1000]; //As maximum size specified is 1000
    int i;
    scanf("%s", string);
    for (i = 0; string[i] != '\0'; i++){  // terminating condition= check if a character is null
        if (string[i] >= '0' && string[i] <= '9') //condition for numeric character
            printf("%c", string[i]);
    }
    return 0;
}