#include <stdio.h>
int main(){
	//����1~100�����ĺ�
	int i =0;
	int m = 0;
	while(i<100){
		i++;
		if(i%2==0){
			//ż������ѭ��
			continue;
		}
		m = m+i;
	}
	printf("m��ֵΪ%d",m);
}
