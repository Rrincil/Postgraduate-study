#include <stdio.h>
#include <stdlib.h>
#define Maxsize 10
typedef int Element;
typedef struct {
	Element a[Maxsize];
	int len;
}Sqlist;
//��ʼ�����Ա�
void InintSqlist(Sqlist &L,int n){
	L.len =n;
	//int *p;
	//p  = (int *)malloc(sizeof(int)*n); //pָ����з���Ķ�̬�洢�ռ�� ��ʼ��ַ
	for(int i=0;i<L.len;i++){
		scanf("%d",&L.a[i]);
	}
	
}
//ɾ�����Ա�
void DeleteSqlist(Sqlist &L){
	int x;
	printf("��������Ҫɾ����Ԫ��λ��");
	scanf("%d",&x);	
	for(int i=x-1;i<L.len;i++){
		L.a[i] = L.a[i+1]; 
	}
//	for(int i=x;i<L.len;i++){
//		L.a[i-1] = L.a[i]; 
//	}
	L.len--;
}
//�������Ա�
void InsertSqlist(Sqlist &L){
	int x ,y;
	printf("��������ҪҪ����Ԫ��");
	scanf("%d",&x);	
	printf("��������ҪҪ����Ԫ��λ��");
	scanf("%d",&y);	
	L.len++;	
	for(int i=L.len;i>y-1;i--){
		L.a[i] = L.a[i-1]; 
	}	
	L.a[y-1] = x;
}
//������Ա�
void PrintSqlist(Sqlist &L){
	for(int i=0;i<L.len;i++){
		printf("%d  ",L.a[i]);
	}
}
int main(){
	int n;
	Sqlist L;
	printf("���������鳤��:");
	scanf("%d",&n);
	printf("����������Ԫ�أ�");
	InintSqlist(L,n);
	InsertSqlist(L);
	PrintSqlist(L);
	printf("\n");
	DeleteSqlist(L);
	PrintSqlist(L);
}
