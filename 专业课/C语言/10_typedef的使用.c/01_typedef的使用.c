#include <stdio.h>
/**
 * 1. typedef��ʹ��
 **/
typedef struct student{
	char name[10];
	int age;
} stu, *stup;     //���ṹ������� stu������ʹ�õ�ʱ���൱��struct student     stup������ʹ�õ�ʱ��ȼ��� struct student *
int main(){
	stu s = {"tom",22}; //stu s = {}---------struct student s ={};
	puts(s.name);
	

	stup p; //stu p; ------stu *p-------struct student *p;
	
	p = &s;
	printf("%s\n",p->name);
	
	stu s2[] = {"cat",11}; //����ṹ������
	p = s2;
	printf("%d",p->age);
}
