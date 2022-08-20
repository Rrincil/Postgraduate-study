#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//输出二维数组
void printArray(int x,int y,int a[][y]){
	for(int i=0;i<x;i++){
		for(int j = 0;j<y;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	
	printf("================\n");
}
//初始化二位数组
void InintArray(int x,int y, int a[][y]){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j = 0;j<y;j++){
			a[i][j] = rand()%10;
		}
	}
	printArray(x,y,a);
}
/**
 * 1.实现行列交换输出 并且返回新的数组【返回存数组的首地址】-----求转置矩阵
 **/
int* exchange(int x,int y,int a[][y]){
	//静态数组的生命周期贯穿整个程序，所以我们可以在函数内部创建一个静态局部数组，操作后再返回，这种方式数组的长度必须是函数内确定的。
	static int b[5][3];//使用static修饰之后 维数大小必须是变量
	for(int i=0;i<x;i++){ //行
		for(int j = 0;j<y;j++){ //列
			b[j][i] = a[i][j];
		}
	}		
	printArray(y,x,b);
	return b;
}
/**
 * 2.求二维数组中所有的最大值，并输出行列号
 **/
void maxArray(int x,int y,int a[][y]){
	int m;
	int m0 = 0;
	int i0 = 0,j0 = 0;
 	for(int i=0;i<x;i++){ //行
 		m = 0;//找到每一行的最大值
 		for(int j = 0;j<y;j++){ //列
 			if(a[i][j] >m){
 				m = a[i][j];
 				j0 = j;
			}
 		}
 		printf("第%d行最大值为a[%d][%d]=%d\n",i+1,i,j0,m);
 		//每一行的最大值拿出来再作比较----按照每一行比较----找到最后一个最大值
 		//不能写大于小于-------必须写大于||小于*****************************
		if(m>=m0){
		 	m0 = m;
		 	i0 = i;
		}
	}
	printf("最大值为a[%d][%d]=%d\n",i0,j0,m0);
	
	printf("================\n");	
	//找到所有最大值
 	for(int i=0;i<x;i++){ //行
 		for(int j = 0;j<y;j++){ //列
 			if(a[i][j]  == m0){
 				printf("最大值为a[%d][%d]=%d\n",i,j,m0);
			}
 		}	
 	}
}
/**
 * 2.2 求二维数组中所有的最大值，并输出行列号
 **/
void maxArray2(int x,int y,int a[][y]){
	int m = a[0][0] , i0,j0;
 	for(int i=0;i<x;i++){ //行
 		for(int j = 0;j<y;j++){ //列
 			if(a[i][j]  >=  m){
 				m = a[i][j];
 				i0 = i;
 				j0 = j;
			} 		
 		}
	}
	printf("最大值为a[%d][%d]=%d\n",i0,j0,m);
	
	printf("================\n");	
	//找到所有最大值
 	for(int i=0;i<x;i++){ //行
 		for(int j = 0;j<y;j++){ //列
 			if(a[i][j] == m){
 				printf("最大值为a[%d][%d]=%d\n",i,j,m);
			}
 		}	
 	}
}
int main(){
	int x = 2,y =4;
	int c[x][y]; //数组维数可以用变量定义
	int c2[x];
	
	int a[3][5];
	int *b;
	InintArray(3,5,a);
	b = exchange(3,5,a);
	maxArray2(5,3,b);
}
