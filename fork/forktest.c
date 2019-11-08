#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	pid_t pid;
	int i=0;
	for(i=0;i<5;i++){
		pid=fork();
		if(pid==-1){
			perror("fork error:");
			exit(1);
		}else if(pid==0){
			//		
		break;
		}else{
//			printf("this is parent :pid=%d,ppid=%u\n",getpid(),getppid());
		}
	}

	if(i<5){
		printf("this is child :pid=%u,ppid=%u\n",getpid(),getppid());
	}else{
		sleep(2);
		printf("this is parent :pid=%u,ppid=%u",getpid(),getppid());
	}
	return 0;
}
