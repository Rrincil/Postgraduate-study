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
//逆序输出
void newAaary(int a[],int n){
	int tem;
	for(int i=0;i<(n/2);i++){ //注意i<(n/2)
		tem = a[i];
		a[i] = a[n-1-i];	
		a[n-1-i] = tem;		
	}
	printArray(a,n);
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
	newAaary(a,10);
}
