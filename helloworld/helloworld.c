/*
 * helloworld.c
 *
 *  Created on: Mar 16, 2014
 *      Author: khmarehman
 */

#include <stdio.h>
#include <stddef.h>
#include <time.h>
int main(void)
{
	time_t current_time;
	struct tm *ltime;
	current_time=time (NULL);
	ltime=localtime(&current_time);
	//printf("%s",ctime(&current_time));
	printf("%s", asctime(ltime));
	printf("This is Khawaja Muhammad Abdur Rehman, \n I am Graduate Student in Robotics and Intelligent Machine Engineering at NUST Pakistan \n applying to GSoC 2014 in beagleboard.org \n");
	return 0;
}
