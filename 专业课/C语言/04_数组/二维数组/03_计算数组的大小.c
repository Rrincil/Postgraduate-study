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
 * 1. ��ά�����ʼ�� --------��ά������Ϊ��������ʱ��ֻ����ʡ�Ե�һά�Ĵ�С�������ά��Ҫд������
 * 2. ���г�ʼ�� int a[2][3] = { {1,2,4} ,{5,6,7} }
 **/
void InitArray(int y,int a[][y],int x){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			a[i][j] = rand()%10;
		}
	}
	printArray(x,y,a);
}

int main(){
	/**
	 * 1.��ά�����ܴ�С----����n��һά����
	 *   ���� * ��ÿһ�еĴ�С�� =  ����������*ÿһ�е����鳤�ȣ� = 2*(4*3) = 24
	 **/
	int a[2][3];
	printf("sizeof(a)�Ĵ�СΪ%d\n",sizeof(a));
	
	
	/**
	 * 2. �����д�С  ����a[0] = a[1]  a[n]����һ�д�С = ����*һ�еĳ��� = 4*3 = 12
	 **/
	printf("sizeof(a[0])�Ĵ�СΪ%d\n",sizeof(a[0]));
	 
	/**
	 * 3. ���� a[0][0] �Ĵ�С----��ÿһ��Ԫ�صĴ�С == ���ʹ�С = sizeof(int) = 4
	 **/
	printf("sizeof(a[0])�Ĵ�СΪ%d\n",sizeof(a[0][0]));
	 
	printf("%d\n",2/2*4);
	 
	/**
	 * 4. �����ά������У��У���
	 *     ��1����(��)�� = �ܴ�С/ÿһ��(��)�Ĵ�С
	 * 		(2)ÿһ�еĴ�С��a[n];
	 * 		(3)ÿһ�еĴ�С == ����*���ʹ�С
	 * 
	 **/
	printf("����==%d\n",sizeof(a)/sizeof(a[0]));
	printf("����==%d\n",sizeof(a)/(2*4));
	 
	 /**
	  * 5. �������� ������
	  *    ÿһ�еĴ�С����ÿһ��Ԫ�صĴ�С
	  **/
	printf("����==%d\n",sizeof(a[0])/sizeof(a[0][0]));
	   
	/**
	 * 6.����*�� == �����ܴ�С/ÿ��Ԫ�صĴ�С
	 **/
	printf("����*����==%d\n",sizeof(a)/sizeof(a[0][0]));
	int x = 5;
	printf("%d",x%2);
}
