#include <stdio.h>
int main(){
	int a = 90;
	short h0 = 3;
    long hh = 1;
	float b = 7.2000;
	float c = 3e-3;//3*10^-3
	float d = 3e3;//3*10^3 e代表10的幂次
	printf("%.2f\n%f\n%.f",b,c,d);//7.00,0.003000,3000
	char x = 'c';
	char x2 = 90;//转换成ASCII码对应的字符输出
	char y = '\n';//转义字符：直接换行输出
	printf("%c%c\n%c",y,x,x2);
}