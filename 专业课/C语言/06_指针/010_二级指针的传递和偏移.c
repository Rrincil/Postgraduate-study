#include <stdio.h>
void change(int **x,int *y){
	
	*x = y;
	
}
int main(){
	 int a =10;
	 int *p = &a;
	 int **p2 = &p; //��һ��ָ�뱾���ڴ���ʼ��ַ�������������һ��ָ��
	 
	 int i = 1;
	 int j = 2;
	 int *p0 = &i;
	 int *p1 = &j;
	 printf("*p0=%d,*p1=%d\n",*p0,*p1);
	 
	 change(&p0,p1);//��p0���ڴ��еĵ�ַ������*������ �õ�p0�д�ŵĵ�ַ���ٸı�Ϊpi�д�ŵĵ�ַ 
	 printf("*p0=%d,*p1=%d",*p0,*p1);
	 
}
