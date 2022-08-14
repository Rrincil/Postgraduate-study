#include <stdio.h>
void change(int **x,int *y){
	
	*x = y;
	
}
int main(){
	 int a =10;
	 int *p = &a;
	 int **p2 = &p; //存一级指针本身内存起始地址：用来方便查找一级指针
	 
	 int i = 1;
	 int j = 2;
	 int *p0 = &i;
	 int *p1 = &j;
	 printf("*p0=%d,*p1=%d\n",*p0,*p1);
	 
	 change(&p0,p1);//把p0在内存中的地址传入再*解引用 拿到p0中存放的地址，再改变为pi中存放的地址 
	 printf("*p0=%d,*p1=%d",*p0,*p1);
	 
}
