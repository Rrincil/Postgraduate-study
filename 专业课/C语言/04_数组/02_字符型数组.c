#include <stdio.h>
void printArray(char a[]){
	printf("%s\n",a);
	int i = 0; //int i,j = 0; ���׳��쳣
	int j = 0;
	while(a[i]!='\0'){ //while(a[i])||while(a[i]!=0)   '/0' = 0 ��0��Ϊ��
		printf("%c\n",a[i]);
		i++;
	}
	//�ı��ַ� ��д��Сд+32 Сд���д-32
	while(a[j]!=0){
		a[j] -=32;
		printf("%c",a[j]);
		j++;
	}
}
int main(){
	char a[3] ={0,'a','2'};
	printf("%c\n%c\n",a[1],a[2]);
	//��ʶ���ַ���
	char b0[3] = {'h','o','w'};
	char b[8] = "hello";
	printf("a=%s\nb=%s\n",b0,b);
	
	//��ȡ�ַ���
	char x[10],y[10];
	scanf("%s%s",x,y);
	printf("%s---%s\n",x,y);
	printArray(x);
	
	
	return 0; //main�����ķ���ֵ
}
