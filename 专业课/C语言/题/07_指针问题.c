#include <stdio.h>

int main(){
	int(p)[4] = {1,2,3,4};//��p����Ϊָ��4��Ԫ�ص�һά�����ָ�����
	printf("%d\n",p[3]);
	printf("%d",*(p+2)); //ָ���ƫ��
}
