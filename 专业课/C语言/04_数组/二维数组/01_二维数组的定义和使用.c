#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * ��ά����Ķ���ʹ��
 * 		�����
 **/
 
 //�����ά����
 void printArray(int x,int y, int a[][y]){
 	for(int i=0;i<x;i++){
 		for(int j=0;j<y;j++){
 			printf("%d ",a[i][j]);
 		}
 		printf("\n");
 	}
 }
 
 
/**
 * ��ά�����ʼ�� --------��ά������Ϊ��������ʱ��ֻ����ʡ�Ե�һά�Ĵ�С�������ά��Ҫд������
 **/
void InitArray(int y,int a[][y],int x){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j=0;j<y;i++){
			a[i][j] = rand()%10;
			printf("%d ",a[i][j]);
		}
	}
	printArray(x,y,a);
}

int main(){
	int a[4][30];//4���༶��ÿ����30��ͬѧ----��ʼ��δ��ֵ�������---����ֵ
//	InitArray(30,a,4);
	
	int b[2][3] = {1,2,4}; //���ָ�ֵ----����
	int b[2][3] = {1,2,4,5,6,7};//���帳ֵ
	printArray(2,3,b); //1,2,4;0,0,0
}
