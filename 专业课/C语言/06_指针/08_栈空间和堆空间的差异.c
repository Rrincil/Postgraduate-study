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
	int a;
	scanf("%d",&a);
	p = (char *)malloc(a);
//	strcpy(p,"hello Rrincil");
	char c;
	scanf("%c",&c); //ȥ���������е�\n
	gets(p);//��ȥ��\n��ֱ�Ӷ�ȡ�������е�\n
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
