#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("enter the mark of the students\n");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
        if(p[i]<40){
            printf("the %dth student is fail\n",i+1);
        }
        else{
            printf("the %dth student is pass\n",i+1);
    }
    }
    return 0;
}
