#include <stdio.h>
int main(){
	long x;
	char y;
	while( y = getchar() != EOF){
		x++;
		putchar(y);
		printf("%ld\n",x);
		
	}
}
         