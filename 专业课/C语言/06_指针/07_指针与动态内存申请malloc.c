#include <stdio.h>
#include <string.h>
int main(){
	int a;
	scanf("����ռ��С%d",&a);
	char *p;
	
	p = (char *)malloc(a);
	printf("p�ͷ�ǰ��ֵ%d\n",p);
	
	strcpy(p,"hello nihao\n");
	puts(p);
	free(p); //����p�д�ŵ��ڴ���ʼ��ַ���ͷŶ�����Ŀռ�
	
	printf("p�ͷź��ֵ%d",p);  //�ͷź��p�洢���ڴ��ַ���䣬���ͷ�ǰ���뵽�ڴ��ַһ��
	p = NULL;//�ͷſռ�֮��pָ����ڴ�Ŀռ��Ѿ����ͷ��ˣ�p�д���ڴ��ַ������----Ұָ��
//	return 0;
}
