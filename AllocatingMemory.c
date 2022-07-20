/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Allocating Memory
   4/30/2022
*/

/* This function akes a string as an argument, 
reverses the string and returns a new string that
 is the reverse of the original. */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char str[]){
	char *rts = (char*) malloc(strlen(str)* sizeof(char)); // Allocating memory for pointer
	char *start=rts; // Store address of pointer is stored in start
	for(int i=strlen(str)-1;i>=0;i--){ // Traversing the str[] array from last to first
		*rts=str[i]; // Storing the element of str[i] to rts
		rts++; // Incrementing pointer
	}
	return start; // Returning starting address of the pointer
}

/* This function takes a string as an argument and returns a new 
string that is a copy of the original with all the vowels removed
(upper and lower case). */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *devowel(char str[]){
	char *new_string; // Declaring new_string
	new_string=(char *)malloc(strlen(str)); // Taking space using malloc
	int ind=0; // Ind for index assigin in new_string
    for(int i=0;i<strlen(str);i++){ // Iterating over the str
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
		str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){ // Checking conditions lower-case vowels
			new_string[ind]=str[i]; // If not vowel, then assign str[i] to new_string[ind];
			ind+=1; // Increment ind by 1
        }
    }
return new_string; // Returning new_string
}

/*  This function that consumes two string arguments. Return a new string such that the
 first character is the first character of the first string, the second the first of the 
 second string, second of first string, second of second, etc. If one string runs out of characters, 
 the rest should come from the remaining string. */
 
char *interleave(char *string1, char *string2) { // Calculating length of string1
	int len1 = strlen(string1);// Calculating length of string2
	int len2 = strlen(string2);
	int i1 = 0, i2 = 0; // Alternate flag is to alternate between two strings
	int alt_flag = 0; // Creating a new character pointer new_str of length len1+len2
	char *new_str = (char *)malloc((len1+len2+1)*sizeof(char));
	/* Iterating through both the strings and
	appending characters into new string from both the strings */
	for(int i=0;i<(len1+len2);i++) {
		if(0 == alt_flag){
			if(i1 < len1){// Appending characters from string1 to new_str
				new_str[i] = string1[i1++];
			} else { // If string 1 runs out of characters then appending characters from string2
		new_str[i] = string2[i2++];}
		alt_flag = 1;
		} else {
		if(i2 < len2){ // Appending characters from string2 to new_str
			new_str[i] = string2[i2++];
		} else { // If string 2 runs out of characters then appending characters from string1
		new_str[i] = string1[i1++];
		}
		alt_flag = 0;
		}
	}
	new_str[len1+len2] = '\0'; // Appending null character at the end
	return new_str;
}

/* This function consumes a string argument and returns a new string that only contains two characters:
 the first, and the last of the original string. If there are less than three characters, return a copy
 of the original string. */
 
 char* first_last(char s[]){
    int length = strlen(s);
    char* result = (char*)malloc(sizeof(char)*3);
    if(length<3){
        strcpy(result,s); } else{
        result[0] = s[0];
        result[1] = s[length-1];
        result[3] = '\0';}
    return result;
	}
	
/* This function computes the hailstone sequence starting at n, stores and returns the sequence in a new array of integers
 (including both n and 1), and uses the length pointer to indicate how long the returned array is. */
 
int * hailstone(int n, int * length) { // Copy the n value to temp
	int temp = n; // Initialize the count value with 1 (to store the value n)
	int count = 1; // Iterate the loop till the temp is greater than 1
	while (temp > 1) {
	if(temp % 2 == 0) { // If the number is even, divide it by 2 to find the next number
		temp = temp / 2;
		count++;
	} else { // If the number is odd, then multiply it by 3 and add 1 to it to find the next number
	temp = temp * 3 + 1;
	count++;
	  }
	}
	* length = count; // Updating the length pointer as count
	int * hailstone_sequence = malloc(sizeof(int) * count); // Dynamically allocating the memory of local array hailstone_sequence
	hailstone_sequence[0] = n; // Storing the first value as n
	count = 1; // Iterate the same loop to assign the numbers to the array hailstone_sequence
	while (n > 1) {
		if (n % 2 == 0) {
			n = n / 2;
			hailstone_sequence[count++] = n;
		} else {
			n = n * 3 + 1;
			hailstone_sequence[count++] = n;
		  }
	}
	return hailstone_sequence; // Return the hailstone_sequence array

}

