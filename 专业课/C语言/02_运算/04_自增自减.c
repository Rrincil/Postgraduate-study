#include <stdio.h>
int main(){
   int i; 
   int j;
   scanf("%d",&i);  //输入 i=2
   int j1 = i++; //先赋值再增1 j1=2 i=3  
   int j2 = ++i;//先增1再赋值  i=4  j2=4
   
   printf("%d\n",j1); //j=2
   printf("%d\n",j2);//j=3
   
   if(j1 > 0){ //j1=i++先赋值 j1=2>0
      printf("j1为正数");
      printf("%d\n",j1); //j=2
   }
   if(j2 >0){ //j2=3=i++>0;j2再先+1再赋值=4 
      printf("j2为正数");
      printf("%d\n",j2);//j=4
   }
   while(i-- > 0){ //i--=1>0;i==1;j先减i;j=j-i=1;  i=0;j=j-i=
   	  printf("j先为%d",j);
      j = --i;
      printf("j后为%d\n",j);
   }
   printf("j为正数");
   printf("%d",j);//j =1
   printf("i的字节数%d",sizeof(i));
}
