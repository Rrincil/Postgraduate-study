#include <stdio.h>
int main(){
	
	int *x,y,z;//表示定义一个指针类型x,两个整型y,z
	int *x1,*y1,*z1;//定义三个指针类型
	
	int i = 23;
	int *p = &i;
	printf("i的值为%d",i);//直接访问
	printf("i的值为%d",*p);//间接访问
	
	printf("i的地址为%d",&i);
	printf("i的地址为%d",p); //指针存的变量的地址
}
