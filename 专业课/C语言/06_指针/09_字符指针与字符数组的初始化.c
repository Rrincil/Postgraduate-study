#include <stdio.h>
int main(){
	char *p="hello"; //���ַ���"hello"�������׵�ַ��ֵ��p
	char a[10]="hello";//�ȼ��� strcpy(p,"hello")
	a[0] = 'H';
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);
//	p[0] = 'H'; //�����ԶԳ����������޸�
	p = "word"; //���ַ���word�ĵ�ַ��ֵ��p
//	a = "word";//�Ƿ�
	
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);	
	return 0;
	
}
