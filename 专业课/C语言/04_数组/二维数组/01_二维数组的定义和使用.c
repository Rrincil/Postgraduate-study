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
 * 二维数组初始化 --------多维数组做为函数参数时，只可以省略第一维的大小，后面的维数要写出来。
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
	static int a0[2][3]; //static 修饰全为0
	int a[4][30];//4个班级，每个班30个同学----初始化未赋值，随机数---残留值
	InitArray(30,a,4);
	
	int b[2][3] = {1,2,4}; //部分赋值----补零
	int b1[2][3] = {1,0};//部分赋值----补零
	int b2[2][3] = {1,2,4,5,6,7};//整体赋值
	
	printArray(2,3,a0); //1,2,4;0,0,0
}
