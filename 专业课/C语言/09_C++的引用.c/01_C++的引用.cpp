#include <stdio.h>
#include <stdlib.h>
void change(int &x){  //& C++������
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}

/**
 * 1. ��C������
 **/
//void change(int *p){
//	*p++;
//}
//int main(){
//	int a = 10;
//	change(&a);
//}

void change_y(int* &y){     //���Ӻ����в���y������������pһ��  //change(���� &y) ���� ���õ�ʱ��: ���� p; change(p);
	y = (int *)malloc(20);    //1. ��ͷ�ļ�<stdlib.h> 2.ע��ǿ��ת������
	y[0] = 7;
}
/**
 * 2. ��C������  ����ָ���ʹ��
 **/
//void change_y(int **p){
//	*p = (int *)malloc(20);
//}
//int main(){
//	int *p = NULL;
//	change_y(&p);
//}

int main(){
	int a =10;
	change(a);
	printf("%d\n",a);
	
	//ָ���ת��
	int *p = NULL;
	change_y(p);
	printf("%d\n",p[0]);
}
