#include <stdio.h>
#define N 3
//数组传递
void printArray(int a[],int len){
	for(int i=0;i<len;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int main(){
   int a[10]; //有残留的内存数值
   int b[N] = {1,2,3};
   int c[10] = {0};//初始化为全为0的数组
   int d[] = {0,1,4,5};//编译器自动推断 数组的长度（数组的空间大小）
   printArray(a,9);
   //访问越界
   int j = 10;
   int i[2] = {0};
   int x = 3;
   //微软在内存存储中【栈的形式】 有8字节的保护空间，所以赋值两次
   i[2] = 1;
   i[3] = 2;
   i[4] = 5;
   
   i[5] = 22;
   printf("j=%dx=%d\n",j,x); //打印j=22
   for(int m=0;m<7;m++){
    	printf("%d\n",i[m]);
   }
   
   
}

