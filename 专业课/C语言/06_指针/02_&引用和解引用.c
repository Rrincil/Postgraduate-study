#include <stdio.h>
int main(){
	
	int *x,y,z;//��ʾ����һ��ָ������x,��������y,z
	int *x1,*y1,*z1;//��������ָ������
	
	int i = 23;
	int *p = &i;
	printf("i��ֵΪ%d",i);//ֱ�ӷ���
	printf("i��ֵΪ%d",*p);//��ӷ���
	
	printf("i�ĵ�ַΪ%d",&i);
	printf("i�ĵ�ַΪ%d",p); //ָ���ı����ĵ�ַ
}
