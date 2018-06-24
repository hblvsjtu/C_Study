/* ***************************************************************
 *      Filename: BubbleSort.c
 *   Description:
 *       Version: 1.0
 *       Created: 2018/06/24 
 *      Revision: none
 *      Compiler: gcc
 *        Author: Lv Hongbin
 *       Company: Shanghai JiaoTong Univerity
 * **************************************************************/

#include<stdio.h>
#include<time.h>
#include<sys/time.h>

void BubbleSort(int array[], int n);

int main()
{
	int array[] = {	1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
				 	1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,1,3,5,7,9,2,4,6,8,
					1,3,5,7,9,2,4,6,8};
	int i;
	struct timeval StartTime, EndTime;
	double cost;
	gettimeofday(&StartTime,NULL);
	BubbleSort(array,900);
	for(i=0; i<900; i++) {
		printf("%d\t",array[i]);
		if(i%10 == 9) {
			printf("\n");
		}
	}
	gettimeofday(&EndTime,NULL);
	cost=(EndTime.tv_sec-StartTime.tv_sec)*1000000+(EndTime.tv_usec-StartTime.tv_usec);
	printf("\n采用冒泡法 The time cost is %.f\n",cost);
	return 0;
}


// 冒泡法
void BubbleSort(int array[], int n) {
	int i=0,j=1;
	int temp=0;
	// 外层循环-右边界
	for(i=n-1; i>0; i--) {

		// 内层循环
		for(j=0; j<i; j++) {
			if(array[j]>array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}