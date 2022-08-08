#include <stdio.h>
int main(){
	int a =123456789;
	while(a != 0){
		printf("%d",a%10);
		a = a/10;
	}
}