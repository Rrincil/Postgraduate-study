#include <stdio.h>
void nixu(unsigned int x,int n){
	int y = 0;
	while(x/10 != 0){
		y += (x%10) * (10^n);
		n--;
	}
	printf("xde����Ϊ��%d",y);
}
int main(){
	/**
	 * 		switch �÷���
	 * 	switch(���ʽ){
	 		case ����|�������ʽ1:
	 			�����1;
	 			break;
	 		case ����|�������ʽ2:
	 			�����2;
	 			break;
	 		..........
	 		default:
	 			�����3;
	 			break;
	 	}
	 	
	 	
	 	**ע��**��
	 	��1��case ���治��break ���������ִ�С�ִ�������case���������������������ѭ����ֱ������break;
	 	��2������case����������������ϣ���ִ��default �е���䡣
	 	 (3) û��case��ֻҪ{}����case,�ͻ�ִ��{}�е���䡿 ����ִ��{}�е���䣬����ִ��switch(���ʽ)�еı��ʽ
	 	 (4) default �����break ����ʡ��
	 	 (5) switch �п���Ƕ��switch���
	 	 (6) C���Ե�switch����е������������������ͣ��������ڵ���bool���͵�ʱ�����ֲ���Ԥ�ϵ�ѭ��������һ�㲻��bool����
	 	
	 **/
	int a;
	scanf("%d",&a);
	switch(a++){ //case ƥ����Ǳ��ʽ��ֵ
		case 3:
			a = a+1;
			break;	
		case 2:
			a *= a;      //case ���治��break ���������ִ�У���������ѭ����ֱ������break;
		case 4:
			a -=2;
			break; 
		default:        //default �����break ����ʡ��
			a = a+2;	
			break;
	}
	
	switch(a+10){
		case 20:
			a--;
		case 19:
			a--; 
	}
	switch (a++) { //����ִ��{}�е�����
		defalut:
			a = a+10;
	}

	switch (a++) { //����ִ��{}�е�����
		a = a+10;
	}
	
	printf("a��ֵΪ%d\n",a);
	
	
	
	/**
	 *  ��3.������ݺ��·ݣ���������ж����죿 �������29�죬����2��28��
	 **/
	int x,y;
	printf("��������ݺ��·ݣ�");
	scanf("%d%d",&x,&y);
	if(y>=1&&y<=112){
		switch(y){
			case 4:
				printf("30��");
				break;
			case 2:
				switch(( x%100!=0 && x%4==0) || x%400==0){
					case 1:
						printf("29��");
						break;
					case 0:
						printf("28��");
						break;
				}
				break;
			case 6:
				printf("30��");
				break;
			case 9:
				printf("30��");
				break;	
			case 11:
				printf("31��");
				break;		
			default:
				printf("31��");
		}	 	
	}else{
	 	printf("��������ȷ���·�");
	}
	printf("\n");
	 /**
	  * ��4 ������ɼ��������Ӧ�ȼ�
	  * 	ע�⣺��1��break��β ��©д
	  * 		��2��ע��ڵ���ж�
	  **/
	unsigned int scort;
	printf("��������ĳɼ���");
	scanf("%d",&scort);
	if(scort<=100){
		switch(scort>=60){
			case 1:
				switch(scort>69){
					case 1:
						switch(scort>84){
							case 1:
								printf("A");
								break;
							case 0:
								printf("B");
								break;
						}
						break;
					case 0:
						printf("C");
						break;
				}
				break;
			case 0:
				printf("D");
				break;
		}
	}else{
		printf("��������ȷ�ķ���");
	}
	
	/**
	 * ��5 ���벻���� 4λ�� ��������������Ǽ�λ���������������
	 * 	�η� pow10(n) ; pow(10,n); 10^n
	 **/
	
	unsigned int z;
	int m = 0;
	printf("�����볬��4λ��������");
	scanf("%d",&z);
	switch(z/10 != 0 ){
		case 1:
			switch(z/pow(10,2) != 0){
				case 1:
					switch(z/pow10(3) != 0){
						case 1:
							switch(z/pow10(4) != 0){
								case 1:
									switch(z/pow10(5) ==0 ){
										case 1:
											printf("������С�ڵ���4λ������");
											break;
										case 0://4λ��
											m += 4;
											nixu(z,m);
											break;
									}
									break;
								case 0://z��3λ��
									m +=3;
									nixu(z,m);
									break;
							}
							break;
						case 0://z��2λ��
							m +=2;
							nixu(z,m);	
					}
					break;
				case 0://z��һλ��
					m++;			
			}
			break;
		case 0:
			printf("��������ȷ����");
	}
	
}
