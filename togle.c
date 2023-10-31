//program to togle kth term.
#include<stdio.h>
int main(){
    int num,k;
    printf("Enter the value of num: \n");
    scanf("%d",&num);
    printf("Enter the value of k: \n");
    scanf("%d",&k);
    int b=1<<(k-1);
    int result=num^(b);
    printf("%d",result);
    return 0;
}