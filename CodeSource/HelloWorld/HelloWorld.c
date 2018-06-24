#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Hello World!\n");
	printf("before system function...\n");
	system("ls");
	printf("after system function...\n");
	return 0;
}