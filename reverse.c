#include<stdio.h>
int main(){
    int reverse,num;
    printf("Enter the number1:");
    scanf("%d",&num);
    while(num>0){
        reverse=num%10;
        printf("%d",reverse);
        num=num/10;
    }
    return 0;
}
//s
//