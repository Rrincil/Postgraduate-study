#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�������һ������
void InitAarrar(int a[],int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%10;
	}
	printArray(a,n); //���������ں����ִ��
}
//�������
void newAaary(int a[],int n){
	int tem;
	for(int i=0;i<(n/2);i++){ //ע��i<(n/2)
		tem = a[i];
		a[i] = a[n-1-i];	
		a[n-1-i] = tem;		
	}
	printArray(a,n);
}
//�������
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
