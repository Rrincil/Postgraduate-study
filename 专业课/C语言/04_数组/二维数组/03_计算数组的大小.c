#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 二维数组的定义使用
 * 		【表格】
 **/
 
 //输出二维数组
 void printArray(int x,int y, int a[][y]){
 	for(int i=0;i<x;i++){
 		for(int j=0;j<y;j++){
 			printf("%d ",a[i][j]);
 		}
 		printf("\n");
 	}
 }
 
 
/**
 * 1. 二维数组初始化 --------多维数组做为函数参数时，只可以省略第一维的大小，后面的维数要写出来。
 * 2. 分行初始化 int a[2][3] = { {1,2,4} ,{5,6,7} }
 **/
void InitArray(int y,int a[][y],int x){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			a[i][j] = rand()%10;
		}
	}
	printArray(x,y,a);
}

int main(){
	/**
	 * 1.二维数组总大小----看出n个一维数组
	 *   行数 * （每一行的大小） =  行数（类型*每一行的数组长度） = 2*(4*3) = 24
	 **/
	int a[2][3];
	printf("sizeof(a)的大小为%d\n",sizeof(a));
	
	
	/**
	 * 2. 计算行大小  计算a[0] = a[1]  a[n]代表一行大小 = 类型*一行的长度 = 4*3 = 12
	 **/
	printf("sizeof(a[0])的大小为%d\n",sizeof(a[0]));
	 
	/**
	 * 3. 计算 a[0][0] 的大小----即每一个元素的大小 == 类型大小 = sizeof(int) = 4
	 **/
	printf("sizeof(a[0])的大小为%d\n",sizeof(a[0][0]));
	 
	printf("%d\n",2/2*4);
	 
	/**
	 * 4. 计算二维数组的行（列）数
	 *     （1）行(列)数 = 总大小/每一行(列)的大小
	 * 		(2)每一行的大小：a[n];
	 * 		(3)每一列的大小 == 行数*类型大小
	 * 
	 **/
	printf("行数==%d\n",sizeof(a)/sizeof(a[0]));
	printf("列数==%d\n",sizeof(a)/(2*4));
	 
	 /**
	  * 5. 计算列数 方法二
	  *    每一行的大小除于每一个元素的大小
	  **/
	printf("列数==%d\n",sizeof(a[0])/sizeof(a[0][0]));
	   
	/**
	 * 6.求行*列 == 数组总大小/每个元素的大小
	 **/
	printf("行数*列数==%d\n",sizeof(a)/sizeof(a[0][0]));
	int x = 5;
	printf("%d",x%2);
}
