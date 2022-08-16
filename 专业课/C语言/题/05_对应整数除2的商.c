#include <stdio.h>
void change(int a){
	printf("%d",a/2);
}
int main(){
	int a;
	scanf("%d",&a);
	change(a);
}
