/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Quiz A and B
   4/30/2022
*/

//This will double all the values in an integer array.
void dbl(int *array, int size)
{
    for(int i = 0;i<size;i++)
    {
        array[i] = array[i]*2;
    }
}

//Input: 21:18:22 Expected: T: 21H 18M 22S
#include <stdio.h>

int main(void) {
    char tod[32] = "";
    scanf("%s", tod);
    char ho[3], mi[3], se[3];   // use 3 character strings
    ho[0] = tod[0];
    ho[1] = tod[1];
    ho[2] = '\0';
    mi[0] = tod[3];
    mi[1] = tod[4];
    mi[2] = '\0';
    se[0] = tod[6];
    se[1] = tod[7];
    se[2] = '\0';
    printf("T: %sH %sM %sS\n", ho, mi, se);
    return 0;
}

struct box {
    float length;
    float width;
    float height;
};

float volume(struct box apple){ // Write a function volume that consumes "a box" and returns the volume.
    return apple.length*apple.width*apple.height;
}

/*The following program should reverse each line the user types.*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *s) {
	int len=strlen(s); // Declaring dynamic memory to buf variable by using malloc
	char *buf = malloc(256);
	char *b=buf;
	for(char *e=s+len-1;e>=s;e--,b++) {
		*b=*e;
	}
	*b='\0';
	return buf;
}

int main(void) {
	char s[256];
	while(fgets(s,256,stdin)) {
	s[strlen(s)-1] = '\0'; // eliminates the trailing \n
	printf("%s\n",reverse(s));
	}
}

/* Returns an array of doubles each of which is three times the size
 of the corresponding value in the given array */
 
 double *tripleArray(double *arr, int size) {
    int i;
    double *result = (double *) malloc(sizeof(double) * size);
    for (i = 0; i < size; ++i) {
        result[i] = arr[i] * 3;
    }
    return result;
}

/* Write a C function with the prototype:
   int *skipsum(int skip, int count, int *data);
data is an array of integers and count is the size of the array. 
skipsum should return an array of integers where each member of the
 array is produced by adding every skip values in the data array starting
 with the index corresponding to the entry being created. 
 (This is like adding the columns if we broke data into rows each having skip columns). */
 
int *skipsum(int skip,int count,int *data){
	int *temp=(int*)malloc(sizeof(int)*skip);
	int i,j;
	for(i=0;i<skip;i++){
	int sum=0;
	for(j=i;j<count;j=j+skip){
		sum+=data[j];
		}
	temp[i]=sum;
	}
	return temp;
}