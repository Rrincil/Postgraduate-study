#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���������

//��ʼ������
void InintArray(int a[]){
	srand((unsigned int)time(NULL));
	for(int i=0;i<10;i++){
		// ����0~9�������
		a[i] = rand()%10;
		
		
	}
	printArray(a,10);
}
//ð������----�Ӷ��㿪ʼð��   ������������
void sortArray(int a[],int n){
	int m = 0;//�ڶ���ִ�д���
	for(int i=0;i<n;i++){
		int flage = 0;
		for(int j =i+1;j<n;j++){
			//����--- С��ǰ���ں�
			if(a[i]>a[j]){
				m++;
				int tem = a[i];
				a[i] = a[j];
				a[j] = tem;
				flage = 1;
			}
		}
		//�����Ѿ��ź���  �״� �� �����źõ� �Ƚ�  ���״���С ������ѭ��
		if(flage == 0){
			break;
		}
	}
	printArray(a,n);
	printf("m=%d\n",m);
}
//ð������------�ӵײ㿪ʼð��   �ҳ���С������ǰ��
void sortArray2(int a[],int n){
	int m = 0;
	for(int i=0;i<n-1;i++){
		//�Ӻ���ǰ�� ǰ��Ķ���˳�����е�  ----���ֻ��Ҫ�ȽϺ���δ�����������е���λ
		int flage = 0;
		for(int j=n-1;j>i;j--){
			//������С
			if(a[j-1]>a[j]){
				m++;
				int tem = a[j-1];
				a[j-1] = a[j];
				a[j] = tem;
				flage = 1;
			}

		}
		
		//����״� �� ǰ���Ѿ��������λ �Ƚ� ǰ�涼ҪС������Ҫ�ٶ�ǰ�����Ƚϣ��Ѿ�˳���ź��� ֱ���˳�ѭ��������ѭ����
		if(flage == 0){
//			printArray(a,n);
//			printf("m=%d",m);
//			return;
			break;
		}
	}
	printArray(a,n);
	printf("m=%d",m);
}
//�������
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[10];
	InintArray(a);
	sortArray(a,10);
	//sortArray2(a,10);
}
