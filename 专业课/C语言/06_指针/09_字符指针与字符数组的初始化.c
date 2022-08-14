#include <stdio.h>
int main(){
	char *p="hello"; //把字符串常量区中的"hello"常量的首地址赋值给p
	char a[10]="hello";//等价于 strcpy(p,"hello") 把hello每个字符放在栈空间，可以对其读写
	a[0] = 'H';
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);
//	p[0] = 'H'; //不可以对字符串常量区的字符进行修改------抛出异常
	p = "word"; //将字符串word的地址赋值给p
//	a = "word";//非法
	
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);	
	return 0;
	
}
