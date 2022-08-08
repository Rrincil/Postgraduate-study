#include <stdio.h>
int main(){
	int h = 5;
	float h1 = 5.0;
	float h2 = h/2;//2.0
	float h3 = h1/2;//2.5
	printf("%f\n%f\n",h2,h3);
	
	int a = 18;
	if(a<=10&&a>=2){
		printf("ok");
	}else{
		printf("false");
	}
	
	//判断浮点数是否相等
	//两数只差是否小于一个精度例如小于0.0001
}