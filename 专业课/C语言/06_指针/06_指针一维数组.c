#include <stdio.h>
#include <string.h>
void change(char x[]){  //�βηŵ���ָ�����ͣ���������������, x��ŵ��ǵ�ַ

	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);   //������ָ���ƫ��
	}
}

void change2(char *x){  //�βηŵ���ָ�����ͣ���������������
	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);
	}
}
int main(){
	char c[10] = "nihaoya";
//	char a = 'A';
	//change(&a);
	change(c);
}
