#include <stdio.h>
int main(){
	
	/**
	 * 1. 表示取地址符号
	 * 
	 **/
	int  i =23;
	int x = &i;
	//* 表示解引用
	int *x2 = x;	
	printf("i的地址为%d",x);
	printf("i的值为%d",*x2);

}
