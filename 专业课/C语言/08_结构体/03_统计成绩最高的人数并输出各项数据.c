#include <stdio.h>
#define n 3 //n��ѧ������
typedef struct{
	int No;
	int math;
	int Clungue; //ͳ��C�����гɼ���ߵ�
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
			printf("ѧ��Ϊ%d��ͬѧ��ѧ%d�֣�C����%d��\n",a[i].No,a[i].math,a[i].Clungue);
		}
	}
	printf("һ����%d��C������߳ɼ���\n",x);
}
int main(){
	stu2 b;
	stu a[n];
	printf("������%d��ѧ����ѧ�š���ѧ��C���Գɼ�",n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a[i].No,&a[i].math,&a[i].Clungue);
		//scanf("%d%d%d",&b[i].No,&b[i].math,&b[i].Clungue);
	}
	findMax(a);
}
