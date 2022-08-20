#include <stdio.h>
#define n 3 //n个学生人数
typedef struct{
	int No;
	int math;
	int Clungue; //统计C语言中成绩最高的
}stu,stu2[n];
void findMax(stu a[n]){
	int m = a[0].Clungue;
	int x = 0;
	for(int i=0;i<n;i++){
		if(a[i].Clungue>m){
			m = a[i].Clungue;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].Clungue == m){
			x++;
			printf("学号为%d的同学数学%d分，C语言%d分\n",a[i].No,a[i].math,a[i].Clungue);
		}
	}
	printf("一共有%d个C语言最高成绩的\n",x);
}
int main(){
	stu2 b;
	stu a[n];
	printf("请输入%d个学生的学号、数学和C语言成绩",n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a[i].No,&a[i].math,&a[i].Clungue);
		//scanf("%d%d%d",&b[i].No,&b[i].math,&b[i].Clungue);
	}
	findMax(a);
}
