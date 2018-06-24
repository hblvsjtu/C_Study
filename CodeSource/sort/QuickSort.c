/* ***************************************************************
 *      Filename: QuickSort.c
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
#include <stdlib.h>

int Divide(int array[], int Start, int end);
void DividedSort(int array[],int start, int end);

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
	
	DividedSort(array,0 ,899);
	for(i=0; i<900; i++) {
		printf("%d\t",array[i]);
		if(i%10 == 9) {
			printf("\n");
		}
	}
	gettimeofday(&EndTime,NULL);
	cost=(EndTime.tv_sec-StartTime.tv_sec)*1000000+(EndTime.tv_usec-StartTime.tv_usec);
	printf("\n采用快速排序法 The time cost is %.f\n",cost);
	return 0;
}



// 分治法
void DividedSort(int array[],int start, int end) {
	if(start < end) {
		// 分解
		int DividePoint = Divide(array, start, end);

		int leftStart=start;
		int leftEnd=DividePoint-1;
		int rightStart=DividePoint + 1;
		int rightEnd=end;
		// 左侧
		DividedSort(array, leftStart, leftEnd);

		// 右侧
		DividedSort(array, rightStart, rightEnd);
	}
}


// Divide function
// 以最后一个元素为基准进行原址排序
int Divide(int array[], int start, int end) {

	int DividePoint = start-1;
	int i = start;
	int tem = 0;

	// printf("\n合并前\n");
	// for(i=start; i<=end; i++) {
	// 	printf("%d\t",array[i]);
	// }
	// printf("\n");

	for(i = start; i<end; i++) {
		if (array[i] < array[end]) {
			DividePoint++;
			tem = array[i];
			array[i] = array[DividePoint];
			array[DividePoint] = tem;
		}
	}
	DividePoint++;
	tem = array[end];
	array[end] = array[DividePoint];
	array[DividePoint] = tem;

	// printf("\n合并后\n");
	// for(i=start; i<=end; i++) {
	// 	printf("%d\t",array[i]);
	// }
	// printf("\n");
	// printf("DividePoint = %d\n", DividePoint);
	return DividePoint;
}