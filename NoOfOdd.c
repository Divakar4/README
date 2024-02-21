#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,odd=0,even=0;
p=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
   scanf("%d",&p[i]);
}
for(int i=0;i<4;i++){
   if(p[i]%2==0)
     even+=p[i];
   else
     odd+=p[i];
}
printf("sum of odd numbers=%d\n",odd);
printf("sum of even numbers=%d",even);
return 0;
}
