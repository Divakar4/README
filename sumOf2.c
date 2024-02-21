#include<stdio.h>
#include<stdlib.h>
int main(){
int *a1,*a2,*sum;
a1=malloc(4*sizeof(int));
a2=malloc(4*sizeof(int));
sum=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
  scanf("%d",&a1[i]);
}
for(int i=0;i<4;i++){
  scanf("%d",&a2[i]);
}
for(int i=0;i<4;i++){
  sum[i]=a1[i]+a2[i];
}
for(int i=0;i<4;i++){
printf("%d,",sum[i]);
}
return 0;
}
