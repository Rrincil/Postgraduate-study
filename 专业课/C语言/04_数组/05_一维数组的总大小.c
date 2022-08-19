#include <stdio.h>
int arr[10];//值全为0

int main(){
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	printf("\n-----------------\n");
	/**
	 * 0. 数组的初始化
	 * 		(1).整体（完全赋值）
	 * 		(2).局部赋值---其余都为0
	 * 		(3).未赋初始值
	 * 			(3.1).未赋初值但加了 static修饰或者定义在函数外部--------全为0
	 * 			(3.2).未赋初值 什么修饰符也不加，且在函数内部-----随机值（即内存中残留数据）
	 **/
	static int a0[10];//值全为0
	for(int i=0;i<10;i++){
		printf("%d ",a0[i]);
	}
	printf("\n-----------------\n");
	
	/**
	 * 1.数组的总大小: sizeof(数组名) 计算的是数组的总大小==(类型)*数组长度
	 *   数组元素的个数： sizeof(数组名)/sizeof(类型)===总大小/数组类型
	 **/
	int a[10]; //随机值----即内存中残留数据
	int x = sizeof(a);  //sizeof(数组名) 计算的是数组的总大小==(类型)*数组长度 ：4*10 = 40
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n-----------------\n");	
	printf("数组的总大小为%d\n",x);
	int y;
	y = sizeof(a)/sizeof(int);
	printf("a数组元素的个数为%d\n",y);
	
	/**
	 * 1. 求数组中元素的个数
	 **/
	 int b[10] = {1,2,4};//局部赋值，其余全为0
	for(int i=0;i<10;i++){
	 	printf("%d ",b[i]);
	}
	printf("\n-----------------\n");	
	y = sizeof(b)/sizeof(int);
	printf("b数组元素的个数为%d",y);
}
