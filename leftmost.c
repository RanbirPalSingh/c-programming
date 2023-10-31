//Write a program to unsaid the leftmost setbit by using bitwise operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    if(a==0){
        printf("C'mon mate");
    }
    else{
        int result=a^(a-1);
        printf("%d",result);
    }
    return 0;
}