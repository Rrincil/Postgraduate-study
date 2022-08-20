#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�����ά����
void printArray(int x,int y,int a[][y]){
	for(int i=0;i<x;i++){
		for(int j = 0;j<y;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	
	printf("================\n");
}
//��ʼ����λ����
void InintArray(int x,int y, int a[][y]){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j = 0;j<y;j++){
			a[i][j] = rand()%10;
		}
	}
	printArray(x,y,a);
}
/**
 * 1.ʵ�����н������ ���ҷ����µ����顾���ش�������׵�ַ��-----��ת�þ���
 **/
int* exchange(int x,int y,int a[][y]){
	//��̬������������ڹᴩ���������������ǿ����ں����ڲ�����һ����̬�ֲ����飬�������ٷ��أ����ַ�ʽ����ĳ��ȱ����Ǻ�����ȷ���ġ�
	static int b[5][3];//ʹ��static����֮�� ά����С�����Ǳ���
	for(int i=0;i<x;i++){ //��
		for(int j = 0;j<y;j++){ //��
			b[j][i] = a[i][j];
		}
	}		
	printArray(y,x,b);
	return b;
}
/**
 * 2.���ά���������е����ֵ����������к�
 **/
void maxArray(int x,int y,int a[][y]){
	int m;
	int m0 = 0;
	int i0 = 0,j0 = 0;
 	for(int i=0;i<x;i++){ //��
 		m = 0;//�ҵ�ÿһ�е����ֵ
 		for(int j = 0;j<y;j++){ //��
 			if(a[i][j] >m){
 				m = a[i][j];
 				j0 = j;
			}
 		}
 		printf("��%d�����ֵΪa[%d][%d]=%d\n",i+1,i,j0,m);
 		//ÿһ�е����ֵ�ó��������Ƚ�----����ÿһ�бȽ�----�ҵ����һ�����ֵ
 		//����д����С��-------����д����||С��*****************************
		if(m>=m0){
		 	m0 = m;
		 	i0 = i;
		}
	}
	printf("���ֵΪa[%d][%d]=%d\n",i0,j0,m0);
	
	printf("================\n");	
	//�ҵ��������ֵ
 	for(int i=0;i<x;i++){ //��
 		for(int j = 0;j<y;j++){ //��
 			if(a[i][j]  == m0){
 				printf("���ֵΪa[%d][%d]=%d\n",i,j,m0);
			}
 		}	
 	}
}
/**
 * 2.2 ���ά���������е����ֵ����������к�
 **/
void maxArray2(int x,int y,int a[][y]){
	int m = a[0][0] , i0,j0;
 	for(int i=0;i<x;i++){ //��
 		for(int j = 0;j<y;j++){ //��
 			if(a[i][j]  >=  m){
 				m = a[i][j];
 				i0 = i;
 				j0 = j;
			} 		
 		}
	}
	printf("���ֵΪa[%d][%d]=%d\n",i0,j0,m);
	
	printf("================\n");	
	//�ҵ��������ֵ
 	for(int i=0;i<x;i++){ //��
 		for(int j = 0;j<y;j++){ //��
 			if(a[i][j] == m){
 				printf("���ֵΪa[%d][%d]=%d\n",i,j,m);
			}
 		}	
 	}
}
int main(){
	int x = 2,y =4;
	int c[x][y]; //����ά�������ñ�������
	int c2[x];
	
	int a[3][5];
	int *b;
	InintArray(3,5,a);
	b = exchange(3,5,a);
	maxArray2(5,3,b);
}
