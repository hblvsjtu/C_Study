/* ***************************************************************
 *      Filename: DividedSort.c
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

void SelectSort1(int array[], int n);
void SelectSort2(int array[], int n);
void BubbleSort(int array[], int n);
void merge(int array[], int leftStart, int leftEnd, int rightEnd);
void DividedSort(int array[], int start, int end);
void Merge(int *a, int p, int q, int r );

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
	DividedSort(array, 0, 899);
	for(i=0; i<900; i++) {
		printf("%d\t",array[i]);
		if(i%10 == 9) {
			printf("\n");
		}
	}
	gettimeofday(&EndTime,NULL);
	cost=(EndTime.tv_sec-StartTime.tv_sec)*1000000+(EndTime.tv_usec-StartTime.tv_usec);
	printf("\n采用分治排序法 The time cost is %.f\n",cost);
	return 0;
}



// 分治法
void DividedSort(int arrays[],int start, int end) {
	if(start < end) {
		int leftStart=start;
		int leftEnd=(start + end)/2;
		int rightStart=(start + end)/2 + 1;
		int rightEnd=end;
		// 左侧
		DividedSort(arrays, leftStart, leftEnd);

		// 右侧
		DividedSort(arrays, rightStart, rightEnd);

		// 合并
		Merge(arrays, leftStart, leftEnd, end);
	}
}

// 数组合并-空间复杂度为O(1);
void merge(int array[], int leftStart, int leftEnd, int rightEnd) {
	int i=leftEnd, j=leftEnd, temp=0;

	// printf("\n合并前\n");
	// for(i=leftStart; i<=rightEnd; i++) {
	// 	printf("%d\t",array[i]);
	// }
	// printf("\n");
	for(i=leftEnd; i<rightEnd; i++) {
		if(array[i] < array[i+1]) {
			break;
		}
		for(j=i; j>=leftStart; j--) {
			if(array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	// printf("\n合并后\n");
	// for(i=leftStart; i<=rightEnd; i++) {
	// 	printf("%d\t",array[i]);
	// }
	// printf("\n");

}

// 数组合并-空间复杂度为O(1);
void Merge(int array[], int leftStart, int leftEnd, int rightEnd){

        int i=0, j=0, temp=0;

        // printf("\n合并前\n");
        // for(i=leftStart; i<=rightEnd; i++) {
        // 	printf("%d\t",array[i]);
        // }
        // printf("\n");

        int p = leftStart;
        int q = leftEnd+1;
        int n = rightEnd-leftStart+1;
        int *b=malloc(n * sizeof(int));
        for (i = 0; i < n; i++)
        {
        	if (p > leftEnd) {
        		b[i] = array[q];
        		q++;
        	}else if (q > rightEnd){
        		b[i] = array[p];
        		p++;
        	}else{
        		if(array[p] < array[q]) {
	        		b[i] = array[p];
	        		p++;
	        	}else {
	        		b[i] = array[q];
	        		q++;
	        	}
        	}
        }
        for (j=0; j < n; j++) {
        	array[leftStart+j] = b[j];
        }
        free(b);

        // printf("\n合并后\n");
        // for(i=leftStart; i<=rightEnd; i++) {
        // 	printf("%d\t",array[i]);
        // }
        // printf("\n");
}
