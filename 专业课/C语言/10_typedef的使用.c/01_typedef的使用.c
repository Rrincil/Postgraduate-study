#include <stdio.h>
/**
 * 1. typedef的使用
 **/
typedef struct student{
	char name[10];
	int age;
} stu, *stup;     //给结构体起别名 stu在声明使用的时候相当于struct student     stup在声明使用的时候等价于 struct student *
int main(){
	stu s = {"tom",22}; //stu s = {}---------struct student s ={};
	puts(s.name);
	

	stup p; //stu p; ------stu *p-------struct student *p;
	
	p = &s;
	printf("%s\n",p->name);
	
	stu s2[] = {"cat",11}; //定义结构体数组
	p = s2;
	printf("%d",p->age);
}
