#include <stdio.h>
int main(){
	//fseek����  ���ƶ��ļ���ָ��
	/**
	 * 1. �ƶ��ļ���ָ��
	 * 		fseek(f,pƫ�Ƶ��ֽ���,��SEEK_CUR|SEEK_END|SEEK_SET��)
	 * 		����ֵΪ�ļ�ָ���ƶ����ֽ���
	 **/
	FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r+");
	
	char a[200];
	fseek(f,4,SEEK_SET); //���ļ�ָ�� �ӿ�ʼƫ��4���ֽ�
	while(fread(a,1,30,f)){
		printf("%s",a);
	}
	/**
	 * 2.fftell(f) ���ص�ǰ�ļ�ָ���λ��
	 **/
}
