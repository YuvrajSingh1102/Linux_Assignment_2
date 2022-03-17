/*
Q2.Write a program such that parent process create two child processes,such that
each child executes a separate task.
*/

#include<stdio.h> 
#include<unistd.h>

int main()
{
	int pi_d;
	int pid;
	pi_d = fork();
	if (pi_d == 0)
	{
		printf("Child Process B:\npid :%d\nppid:%d\n", getpid(), getppid());
	}
	if (pi_d > 0)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("\nParent Process:\npid:%d\nppid :%d\n", getpid(), getppid());
		}
		else if (pid == 0)
		{
			printf("Child Process A:\npid :%d\nppid:%d\n", getpid(), getppid());
		}
	}
	return 0;
}