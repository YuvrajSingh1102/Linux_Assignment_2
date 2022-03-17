/*
Q5_A.Write a program parent process wait untill ,while child process open a file and read file
data into empty buffer.
*/


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

	pid_t child;
	
	child = fork();
	
	if(child == 0)
	{
		printf("\nThe pid of child process = %d\n\n", getpid());
		
		int fd1;
		char buffer[100];
		fd1 = open("Q5_file.txt", O_CREAT | O_RDWR, 0777);
		
		read(fd1, buffer, 100);
		
		printf("buffer data is : \n%s\n", buffer);
		printf("Child executed \n\n");
		
	}
	else
	{
		sleep(2);
		printf("Parent process started with pid = %d\n\n", getppid());
		
	}
	

return 0;
}