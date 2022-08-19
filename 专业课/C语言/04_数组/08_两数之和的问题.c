#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//初始化数组//输出数组
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
//初始化数组
void IintArray(int a[],int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%10;
	}
	printArray(a,n);
}
//数组中两数之和等于target目标值，返回两数的坐标
void countAarray(int a[], int n,int y){
	int target = y;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j] == target){
				printf("i=%d,j=%d\n",i,j);
			}
		}
	}
}
int main(){
	int a[10];
	IintArray(a,10);
	countAarray(a,10,10);
}
