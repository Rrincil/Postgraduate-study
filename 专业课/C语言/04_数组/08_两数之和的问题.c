#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��ʼ������//�������
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
//��ʼ������
void IintArray(int a[],int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%10;
	}
	printArray(a,n);
}
//����������֮�͵���targetĿ��ֵ����������������
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
