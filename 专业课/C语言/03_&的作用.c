#include <stdio.h>
int main(){
	
	/**
	 * 1. ��ʾȡ��ַ����
	 * 
	 **/
	int  i =23;
	int x = &i;
	//* ��ʾ������
	int *x2 = x;	
	printf("i�ĵ�ַΪ%d",x);
	printf("i��ֵΪ%d",*x2);

}
