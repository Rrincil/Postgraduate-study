#include <stdio.h>
struct animal{
	char name[10];
	int num;
	float weight;
	
};
int main(){
	/**
	 * 1. 结构体指针
	 **/
	 struct animal cat ={"elefent",10,30};
	 struct animal *p; //定义结构体指针
	 p = &cat;
	 printf("%d\n",(*p).num); //*p.num出错---因为优先级的问题 .与[]与()的优先级高于单目运算符，最高级
	 printf("%s,%d,%.2f\n",(*p).name,(*p).num,(*p).weight);//(1)
	 printf("%s,%d,%.2f\n",p->name,p->num,p->weight);//等同于（1）的写法
	 
	 /**
	  * 2.结构体指针在结构体数组中的偏移
	  **/
	 struct animal arr0[2] = {"tom",10,60.2,"cat",20,68.5};
	 p = arr0;//p指向arro数组的首地址
	 int x;
	 x = p->num++;  //num++ 先赋值 后自增1   p[0].num =10 = p->num = x; num再自增1 p->num = p[0].num = 11;
	 printf("%d,%d\n",x,p->num);
	 
	 x = p++->num;  //p++先赋值 后自增1 x = p->num = p[0].num =11 =x; p->num = p+1->num = p[1].num = 20;
	 printf("%d,%d",x,p->num);
	 
}
