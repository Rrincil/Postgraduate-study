#include <stdio.h>
int main(){
	/**
	 * 1.ö�ٵĶ����ʹ��--------��ߴ�����Ķ���
	 * 		(1)����ʱδ��ֵ�����0��ʼ   0��1��2��3��4
	 * 		(2)�����ֵ����ֵ֮��ֵ��1 ����
	 * 		(3)ö���з��ţ�������ֵ�����ڴ档---------ö�����͵ĳߴ������ܹ��������ö���ӵ�ֵ�������ĳߴ�
	 * 		   ö�����͵ĳߴ粻�ܹ�����int���͵ĳߴ�
	 * 		(4)ö���������ı���Ϊȫ�ֱ��� enum x{a};   aΪȫ�ֱ���
	 **/
	enum day{mon,tues,wed,thur,fri,sat,sun}; //���� enum x{};
	enum day data;
	printf("data��ռ�ֽ���%d\n",sizeof(enum day));
	printf("data��ռ�ֽ���%d\n",sizeof(data));
	data = mon;
	data = sat;
	printf("%d\n",data);
	
	
	
	enum g0{
		gg=1
	}g;
	printf("g��ռ�ֽ���%d\n",sizeof(g));
	enum x{a=10,b,c,d=-40,e,f};
	enum x x0;
	printf("x0��ռ�ֽ���%d\n",sizeof(x0));
	x0 =b;
	printf("%d %d %d %d",x0,c,e,f);
	
	enum b{a1,b2,c3,d4,e5};
	enum b x;//���ڳ�����ʽ
	
	
}
