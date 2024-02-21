#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,larg=0,slarg=0;
p=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
  scanf("%d",&p[i]);
}
for(int i=0;i<4;i++){
    if(p[i]>larg)
    larg=p[i];
}
for(int i=0;i<4;i++){
    if(p[i]>slarg&&p[i]<larg)
    slarg=p[i];
}
printf("the largest nummber among the array is %d",larg);
printf("\nthe second largest nummber among the array is %d",slarg);
return 0;
}
