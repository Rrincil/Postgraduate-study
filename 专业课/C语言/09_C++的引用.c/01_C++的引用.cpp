#include <stdio.h>
#include <stdlib.h>
void change(int &x){  //& C++的引用
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}

/**
 * 1. 在C语言中
 **/
//void change(int *p){
//	*p++;
//}
//int main(){
//	int a = 10;
//	change(&a);
//}

void change_y(int* &y){     //在子函数中操作y和主函数操作p一致  //change(类型 &y) 引用 调用的时候: 类型 p; change(p);
	y = (int *)malloc(20);    //1. 加头文件<stdlib.h> 2.注意强制转换类型
	y[0] = 7;
}
/**
 * 2. 在C语言中  二级指针的使用
 **/
//void change_y(int **p){
//	*p = (int *)malloc(20);
//}
//int main(){
//	int *p = NULL;
//	change_y(&p);
//}

int main(){
	int a =10;
	change(a);
	printf("%d\n",a);
	
	//指针的转换
	int *p = NULL;
	change_y(p);
	printf("%d\n",p[0]);
}
