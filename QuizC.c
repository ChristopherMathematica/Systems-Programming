/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Quiz C
   5/15/2022
*/

/*

Your current working directory is "thisdir". Enter commands to change the name 
from "thisdir" to "thatdir" and end with your current working directory being "thatdir". 
Don't rename any other files or directories.

cd ..
mv thisdir thatdir
cd thatdir

*/

/*Write a function named find_a that returns the index of the first 'a' found in 
the provided string (upper or lower case). Return -1 if there are no 'a' characters. 
You may not use any function calls, including calls such as strlen!*/

#include <stdio.h>
int find_a(char str[]){
	int i = 0 ;
	while(str[i] != '\0'){
		if(str[i] == 'a' || str[i] == 'A')
		return i;
	i += 1 ;
	}
	return -1;
}

/* Define a two-dimensional array of integers called hours with seven rows (days) of 24 
columns (hours). Fill the array so that each entry is the "12-hour clock time" of the hour 
plus the number of the day. For example, hours[3][14] should be 5 (the time 1400 is 2 o'clock). */

int hours[7][24];
for (int i = 0; i < 7; i++){
	for(int j=0; j<24; j++){
		if(j==0){
		  hours[i][j] = i + 12;
	  }
	   else if(j>12){
	    hours[i][j] = i + (j-12);
	} else {
	hours[i][j] = i+j;
	}
  }
}

/* Define a structure called timeOfDay_t with three integer members, hour, minute, and second. 

Note: timeOfDay_t should be typedef-ed!

Define a function with the following prototype:

timeOfDay_t * make_tod(int hour, int minute, int second); 
that allocates space on the heap for a new timeOfDay_t structure and returns a pointer to it 
with the hour, minute, and second set appropriately. */

typedef struct {
    int hour;
    int minute;
    int second;
} timeOfDay_t;

timeOfDay_t *make_tod(int hour, int minute, int second) {
    timeOfDay_t *time = (timeOfDay_t *) malloc(sizeof(timeOfDay_t));
    time->hour = hour;
    time->minute = minute;
    time->second = second;
    return time;
}

/* Define a structure called timeOfDay with three integer members, hour, minute, and second. (

Note: timeOfDay should not be typedef-ed!

Define a function with the following prototype:

int interval(struct timeOfDay start, struct timeOfDay end); 
It should return the total time in seconds between the two times of day. 
You may assume that the end time is strictly later than the start time, and that 0<=hour<24

I suggest you convert both times to seconds since midnight.*/

#include <stdio.h>

struct timeOfDay
{
    int hour;
    int minute;
    int second;
};


int interval(struct timeOfDay start, struct timeOfDay end){
    int startSeconds = (start.hour * 60 * 60) + (start.minute * 60) + (start.second);
    int endSeconds = (end.hour * 60 * 60) + (end.minute * 60) + (end.second);
    return (endSeconds - startSeconds);   // Convert into seconds, and then return the difference.

}