/*
Q1.Test whether the process(exec() system call) that replaces old program data , will inherit
the fd&#39;s or not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/einfochips/Desktop/lunix internl/Lunix-assignment-2/Q1_file","./Q1", "Q1 file", "discriptor", 0) ;
	
	printf("\n");
	
return 0;
}
