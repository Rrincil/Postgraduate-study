#include <stdio.h>
#include <string.h>  //使用字符串函数的头文件
int main(){
	char a[10] = "hello";
	char b[10];
	char c[10] = "hollo";
	//字符长度 strlen(a)
	printf("%d\n",strlen(a)); 
	
	//字符串拷贝 strcpy(to,from)
	strcpy(b,a); 
	strcpy(c,"nihao");
	puts(b);
	puts(c);
	
	// int  = strcmp(a,b) 判断两个字符串对应位置 ASCII值是否相等（一直比较到不相等的时候），如果相等返回0，不相等（1）a>b返回1;(2)a<b返回-1
	int x  = strcmp(a,b);  
	int y  = strcmp(a,c);
	int y2 = strcmp("ssxx","ssxo");
	printf("x==%d,y==%d,y2==%d\n",x,y,y2);
	
	//strcat(a,b) 拼接字符串 把b字符串拼接到a上----注意数组长度
	strcat(a,c);
	printf("%s",a);
}
