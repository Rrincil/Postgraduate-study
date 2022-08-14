#include <stdio.h>
char * printchar(){
	//栈空间中申请内存
	char a[] ="nihaoya";
	puts(a);
	return a;
}
char* printchar2(){
	//在堆空间中动态申请内存
	char *p;
	int a;
	scanf("%d",&a);
	p = (char *)malloc(a);
//	strcpy(p,"hello Rrincil");
	char c;
	scanf("%c",&c); //去除缓冲区中的\n
	gets(p);//不去除\n会直接读取缓冲区中的\n
	puts(p);
	return p;
}
int main(){
	char *p;
	p = printchar(); //栈空间中 ：函数执行完成之后会自动释放栈空间内存
	puts(p);  //无法打印出字符串
	
	char *p2; //堆空间动态申请的内存不会随着函数的执行而释放，
	p2 = printchar2(); //仍然会打印一遍字符串
	puts(p2);
	
	return 0;
}
