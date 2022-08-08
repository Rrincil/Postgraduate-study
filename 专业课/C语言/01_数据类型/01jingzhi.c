#include <stdio.h>
#include <stdlib.h>
// &引用符的作用
void add(int &x){
	x = x+100;
	printf("x0==%d\n",x);
}
int main(){
	int x = 1;
	printf("a2==%d\n",x);
	add(x);
	printf("a3==%d\n",x);
	system("pause");//生成的exe文件双击运行之后窗口停下来-----引用头文件stdlib.h
}