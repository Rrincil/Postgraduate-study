#include <stdio.h>
struct animal{
	char name[10];
	int num;
	float weight;
	
};
int main(){
	/**
	 * 1. �ṹ��ָ��
	 **/
	 struct animal cat ={"elefent",10,30};
	 struct animal *p; //����ṹ��ָ��
	 p = &cat;
	 printf("%d\n",(*p).num); //*p.num����---��Ϊ���ȼ������� .��[]��()�����ȼ����ڵ�Ŀ���������߼�
	 printf("%s,%d,%.2f\n",(*p).name,(*p).num,(*p).weight);//(1)
	 printf("%s,%d,%.2f\n",p->name,p->num,p->weight);//��ͬ�ڣ�1����д��
	 
	 /**
	  * 2.�ṹ��ָ���ڽṹ�������е�ƫ��
	  **/
	 struct animal arr0[2] = {"tom",10,60.2,"cat",20,68.5};
	 p = arr0;//pָ��arro������׵�ַ
	 int x;
	 x = p->num++;  //num++ �ȸ�ֵ ������1   p[0].num =10 = p->num = x; num������1 p->num = p[0].num = 11;
	 printf("%d,%d\n",x,p->num);
	 
	 x = p++->num;  //p++�ȸ�ֵ ������1 x = p->num = p[0].num =11 =x; p->num = p+1->num = p[1].num = 20;
	 printf("%d,%d",x,p->num);
	 
}
