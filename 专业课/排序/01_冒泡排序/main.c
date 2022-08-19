#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//生成随机数

//初始化数组
void InintArray(int a[]){
	srand((unsigned int)time(NULL));
	for(int i=0;i<10;i++){
		// 产生0~9的随机数
		a[i] = rand()%10;
		
		
	}
	printArray(a,10);
}
//冒泡排序----从顶层开始冒泡   大的排在最后面
void sortArray(int a[],int n){
	int m = 0;//第二层执行次数
	for(int i=0;i<n;i++){
		int flage = 0;
		for(int j =i+1;j<n;j++){
			//交换--- 小在前大在后
			if(a[i]>a[j]){
				m++;
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
				flage = 1;
			}
		}
		//后面已经排好了  首次 和 后面排好的 比较  若首次最小 则跳出循环
		if(flage == 0){
			break;
		}
	}
	printArray(a,n);
	printf("m=%d\n",m);
}
//冒泡排序------从底层开始冒泡   找出最小的排在前面
void sortArray2(int a[],int n){
	int m = 0;
	for(int i=0;i<n-1;i++){
		//从后向前则 前面的都是顺序排列的  ----因此只需要比较后面未交换过的序列的首位
		int flage = 0;
		for(int j=n-1;j>i;j--){
			//交换大小
			if(a[j-1]>a[j]){
				m++;
				int tem = a[j-1];
				a[j-1] = a[j];
				a[j] = tem;
				flage = 1;
			}

		}
		
		//如果首次 和 前面已经排序的首位 比较 前面都要小，则不需要再对前面做比较，已经顺序排好了 直接退出循环（结束循环）
		if(flage == 0){
//			printArray(a,n);
//			printf("m=%d",m);
//			return;
			break;
		}
	}
	printArray(a,n);
	printf("m=%d",m);
}
//输出数组
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[10];
	InintArray(a);
	sortArray(a,10);
	//sortArray2(a,10);
}
