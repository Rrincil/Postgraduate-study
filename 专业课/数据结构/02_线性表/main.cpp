#include <stdio.h>
#include <stdlib.h>
#define Maxsize 10
typedef int Element;
typedef struct {
	Element a[Maxsize];
	int len;
}Sqlist;
//初始化线性表
void InintSqlist(Sqlist &L,int n){
	L.len =n;
	//int *p;
	//p  = (int *)malloc(sizeof(int)*n); //p指向堆中分配的动态存储空间的 起始地址
	for(int i=0;i<L.len;i++){
		scanf("%d",&L.a[i]);
	}
	
}
//删除线性表
void DeleteSqlist(Sqlist &L){
	int x;
	printf("请输入需要删除的元素位置");
	scanf("%d",&x);	
	for(int i=x-1;i<L.len;i++){
		L.a[i] = L.a[i+1]; 
	}
//	for(int i=x;i<L.len;i++){
//		L.a[i-1] = L.a[i]; 
//	}
	L.len--;
}
//插入线性表
void InsertSqlist(Sqlist &L){
	int x ,y;
	printf("请输入需要要插入元素");
	scanf("%d",&x);	
	printf("请输入需要要插入元素位置");
	scanf("%d",&y);	
	L.len++;	
	for(int i=L.len;i>y-1;i--){
		L.a[i] = L.a[i-1]; 
	}	
	L.a[y-1] = x;
}
//输出线性表
void PrintSqlist(Sqlist &L){
	for(int i=0;i<L.len;i++){
		printf("%d  ",L.a[i]);
	}
}
int main(){
	int n;
	Sqlist L;
	printf("请输入数组长度:");
	scanf("%d",&n);
	printf("请输入数组元素：");
	InintSqlist(L,n);
	InsertSqlist(L);
	PrintSqlist(L);
	printf("\n");
	DeleteSqlist(L);
	PrintSqlist(L);
}
