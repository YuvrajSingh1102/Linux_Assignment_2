/*
Q5_B.Write a program, where functions of the program are called in the reverse order of
their function calls from main().
*/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void callback1()
{
    printf("callback1\n"); 
}

void callback2()
{
    printf("callback2\n"); 
}

void callback3()
{
	printf("callback3\n"); 
}

int main(){
	
	printf("registering callback 1\n");
	atexit(callback1);
	
	printf("registering callback 2\n");
	atexit(callback2);
	
	printf("registering callback 3\n");
	atexit(callback3);
	
	printf("main() ... exiting now\n");
	
return 0;
}
