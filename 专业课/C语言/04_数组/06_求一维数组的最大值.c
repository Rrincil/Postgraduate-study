#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//随机生成一个数组
void InitAarrar(int a[],int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%10;
	}
	printArray(a,n); //函数定义在后面可执行
}
//求数组最大值
void maxArray(int a[],int n){
		for(int j = 0;j<n;j++){
			if(a[j]>a[j+1]){
				int tem = a[j];
				a[j] = a[j+1];
				a[j+1] = tem;
			}
		}
		printf("数组最大值为%d \n",a[n-1]);
	printArray(a,n);
	
	//遍历一次
	int m;
	for(int j = 0;j<n;j++){
		m = a[j];
		if(a[j]>m){
			m = a[j];
		}
	}	
	printf("数组最大值为%d \n",m);
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
	InitAarrar(a,10);
	maxArray(a,10);
}
