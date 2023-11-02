#include<stdio.h>
int main(){
    int n,small;
    printf("enter the numbers:\n");
    scanf("%d",&small);
    for(int i=2;i<=5;i++){
        scanf("%d",&n);
        if(n<small){
            small=n;
        }
    }
    printf("%d",small);
    return 0;
}