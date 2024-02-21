#include<stdio.h>
#include<stdlib.h>
int main(){
int *p;
float sum=0;
p=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
  scanf("%d",&p[i]);
}
for(int i=0;i<4;i++){
  sum+=p[i];
}
printf("\naverage of the array elements is %.2f",sum/4);
return 0;
}
