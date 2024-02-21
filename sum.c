#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
p=malloc(4*sizeof(int));
for(int i=0;i<4;i++){
  scanf("%d",&p[i]);
}
int sum=0;
for(int i=0;i<4;i++){
  sum+=p[i];
}
printf("%d",sum);
return 0;
}
