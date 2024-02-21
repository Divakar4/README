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
     even+=1;
   else
     odd+=1;
}
printf("number of odd numbers=%d\n",odd);
printf("number of even numbers=%d",even);
return 0;
}
