#include <stdio.h>
int main(){
   int i; 
   int j;
   scanf("%d",&i);  //���� i=2
   int j1 = i++; //�ȸ�ֵ����1 j1=2 i=3  
   int j2 = ++i;//����1�ٸ�ֵ  i=4  j2=4
   
   printf("%d\n",j1); //j=2
   printf("%d\n",j2);//j=3
   
   if(j1 > 0){ //j1=i++�ȸ�ֵ j1=2>0
      printf("j1Ϊ����");
      printf("%d\n",j1); //j=2
   }
   if(j2 >0){ //j2=3=i++>0;j2����+1�ٸ�ֵ=4 
      printf("j2Ϊ����");
      printf("%d\n",j2);//j=4
   }
   while(i-- > 0){ //i--=1>0;i==1;j�ȼ�i;j=j-i=1;  i=0;j=j-i=
   	  printf("j��Ϊ%d",j);
      j = --i;
      printf("j��Ϊ%d\n",j);
   }
   printf("jΪ����");
   printf("%d",j);//j =1
   printf("i���ֽ���%d",sizeof(i));
}
