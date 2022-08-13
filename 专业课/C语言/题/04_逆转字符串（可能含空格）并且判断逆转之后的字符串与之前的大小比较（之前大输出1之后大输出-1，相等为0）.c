#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	gets(a);
	puts(a);
	char b;
	int len = strlen(a);
//	char a2= a; 字符串数组不能直接赋值
	char a2[100];
	for(int i=0;i<=len;i++){
		a2[i] =a[i];
	}

	//字符串逆转
	for(int i = 0;i<(len-1)/2;i++){
		b  = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = b;
	}
	puts(a);
	int x = strcmp(a2,a);
	printf("x的值为%d",x);
	
}
