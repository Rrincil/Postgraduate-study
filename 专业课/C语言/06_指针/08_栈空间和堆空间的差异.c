#include <stdio.h>
char * printchar(){
	//ջ�ռ��������ڴ�
	char a[] ="nihaoya";
	puts(a);
	return a;
}
char* printchar2(){
	//�ڶѿռ��ж�̬�����ڴ�
	char *p;
	p = (char *)malloc(20);
	strcpy(p,"hello Rrincil");
	puts(p);
	return p;
}
int main(){
	char *p;
	p = printchar(); //ջ�ռ��� ������ִ�����֮����Զ��ͷ�ջ�ռ��ڴ�
	puts(p);  //�޷���ӡ���ַ���
	
	char *p2; //�ѿռ䶯̬������ڴ治�����ź�����ִ�ж��ͷţ�
	p2 = printchar2(); //��Ȼ���ӡһ���ַ���
	puts(p2);
	
	return 0;
}
