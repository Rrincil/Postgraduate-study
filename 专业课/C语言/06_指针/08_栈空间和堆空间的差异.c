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
	p = (char *)malloc(20);
	strcpy(p,"hello Rrincil");
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
