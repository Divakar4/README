#include<stdio.h>
#include<stdlib.h>
int main(){
int *p;
p=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
  scanf("%d",&p[i]);
}
int search,t=0;
printf("enter the element to search\n");
scanf("%d",&search);
for(int i=0;i<4;i++){
  if(search==p[i]){
    printf("\nelement is found as the %dth element in the sequence\n",i+1);
    t=1;
  }
}
  if(t!=1)
  printf("element is not found");

return 0;
}
