#include <stdio.h>
int main(){
	/**
	 * 1.枚举的定义和使用--------提高代码可阅读性
	 * 		(1)定义时未赋值，则从0开始   0，1，2，3，4
	 * 		(2)如果赋值，则赋值之后按值增1 计算
	 * 		(3)枚举有符号，根据数值分配内存。---------枚举类型的尺寸是以能够容纳最大枚举子的值的整数的尺寸
	 * 		   枚举类型的尺寸不能够超过int类型的尺寸
	 * 		(4)枚举内声明的变量为全局变量 enum x{a};   a为全局变量
	 **/
	enum day{mon,tues,wed,thur,fri,sat,sun}; //声明 enum x{};
	enum day data;
	printf("data所占字节数%d\n",sizeof(enum day));
	printf("data所占字节数%d\n",sizeof(data));
	data = mon;
	data = sat;
	printf("%d\n",data);
	
	
	
	enum g0{
		gg=1
	}g;
	printf("g所占字节数%d\n",sizeof(g));
	enum x{a=10,b,c,d=-40,e,f};
	enum x x0;
	printf("x0所占字节数%d\n",sizeof(x0));
	x0 =b;
	printf("%d %d %d %d",x0,c,e,f);
	
	enum b{a1,b2,c3,d4,e5};
	enum b x;//属于常量形式
	
	
}
