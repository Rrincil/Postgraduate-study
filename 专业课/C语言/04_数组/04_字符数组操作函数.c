#include <stdio.h>
#include <string.h>  //ʹ���ַ���������ͷ�ļ�
int main(){
	char a[10] = "hello";
	char b[10];
	char c[10] = "hollo";
	//�ַ����� strlen(a)
	printf("%d\n",strlen(a)); 
	
	//�ַ������� strcpy(to,from)
	strcpy(b,a); 
	strcpy(c,"nihao");
	puts(b);
	puts(c);
	
	// int  = strcmp(a,b) �ж������ַ�����Ӧλ�� ASCIIֵ�Ƿ���ȣ�һֱ�Ƚϵ�����ȵ�ʱ�򣩣������ȷ���0������ȣ�1��a>b����1;(2)a<b����-1
	int x  = strcmp(a,b);  
	int y  = strcmp(a,c);
	int y2 = strcmp("ssxx","ssxo");
	printf("x==%d,y==%d,y2==%d\n",x,y,y2);
	
	//strcat(a,b) ƴ���ַ��� ��b�ַ���ƴ�ӵ�a��----ע�����鳤��
	strcat(a,c);
	printf("%s",a);
}
