#include <stdio.h>
/**
 * ��������������10���ַ���������sort��������ð������Ȼ����������������������������ַ������Ȳ�����20��
 * �ַ�������ʽ������ĸ�������1��ʾ������ĸ��ݼ���0��ʾ���ʹ�������ַ����ɲ������ݸ�sort ������
 * Ҫ���������sort���������������У����롢���Ӧ����Ӧ��ʾ�� ����̬����ռ� �� �ͷ��ڴ桿
 * 		����1. �ṹ������
 * 		����2. ��ά����
 **/
typedef struct{
	char s[20];
}str[10];
//������ַ������ṹ������
void printArray(str a){
	for(int i=0;i<10;i++){
		puts(a[i].s);
	}
	printf("\n=======================\n");
}
//��ʼ���ַ���
void Init(str a){
	for(int i=0;i<10;i++){
		scanf("%s",&a[i].s);//.��������ȼ�����&
	}
	//printArray(a);
}

void sort(str a,int n){
	int flage;
	for(int k=0;k<10;k++){
		int len = strlen(a[k].s);
		if(n){ //��ĸ�������1
			int i = 0;
			while(a[k].s[i] != '\0'){
				flage = 0;
				int j = i+1;
				while(a[k].s[j] != '\0'){
					if(a[k].s[j]>a[k].s[i]){
						int tem  = a[k].s[i];
						a[k].s[i] = a[k].s[j];
						a[k].s[j] = tem;
						flage = 1;
					}
					j++;
				}
				i++;
				if(flage == 0){
					break;
				}
			}
		}else{//����ĸ��ݼ���0
			for(int i=0;i<len;i++){
				flage = 0;
				for(int j=i+1;j<len;j++){
					if(a[k].s[i]>a[k].s[j]){  //ǰ����ں��� �ͽ���
						int tem  = a[k].s[i];
						a[k].s[i] = a[k].s[j];
						a[k].s[j] = tem;
						flage = 1;
					}
				}
				if(flage == 0){
					break;
				}
			}		
		}
	}	
	printArray(a);
}
int main(){
	int (p)[2];
	
	str a;
	Init(a);
	sort(a,1);
	sort(a,0);
}
