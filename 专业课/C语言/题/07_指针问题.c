#include <stdio.h>

int main(){
	int(p)[4] = {1,2,3,4};//将p定义为指向含4个元素的一维数组的指针变量
	printf("%d\n",p[3]);
	printf("%d",*(p+2)); //指针的偏移
}
