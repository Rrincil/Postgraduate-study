#include <stdio.h>
struct student{ //�ṹ������  ��struct �ṹ���� {�ṹ���Ա};��
	int num; //�ṹ���Ա
	char name[20];
	char sex;
}; //�ṹ���������;  ���Է���main()���棬���涼��
int main(){
	//�ṹ����ռ�ֽڴ�СΪ28 !=4+20+1  ��Ϊ�ڴ���ڶ���  ������Ϊ�����cpu�����ڴ�Ч��
	printf("%d\n-",sizeof(struct student));
	
	/**
	 * 1.�ṹ�����
	 **/
	struct student s= {20,"jdkjdk",'M'}; //����,��ʼ���ṹ�����
	//���ʽṹ���Ա  s.��Ա����
	printf("%d,%s,%c\n",s.num,s.name,s.sex); 
	
	/**
	 *  2. �ṹ��������������塢ʹ��
	 * 
	 **/
	 struct student arr0[2] = {10,"tom",'M',20,"cat",'w'};
	 
	 struct student arr[3];
//	 arr[0].name = "ddd";
	  
	 //��ȡ�ṹ������
	 for(int i= 0 ;i<3;i++){
	 	scanf("%d%s %c",&arr[i].num,arr[i].name,arr[i].sex); //%s ��%c��ȡ��ʱ���м���Ҫ�� �ո�---�������%cǰ�ӿո�
	 	
	 }
	 for(int j = 0,k=0;j<3,k<2;j++,k++){
	 	printf("num=%d name=%s sex=%c\n",arr0[j].num,arr0[j].name,arr0[j].sex);
	 	printf("num=%d name=%s sex=%c\n",arr[j].num,arr[j].name,arr[j].sex);
	 }
}
