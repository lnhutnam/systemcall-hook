#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <string.h>
int main(){
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND);
	printf("[DEBUG] FILE DESCRIPTION: %d\n",fd);
	if(write(fd, "OS-1821:Le Nhut Nam:18120061\n", 29) == 29) {
    		printf("[DEBUG] WRITE SUCCESSFULLY\n");
	}
	else{
    		printf("[DEBUG] WRITE FAILURE\n");
	}
	return 0;
}
