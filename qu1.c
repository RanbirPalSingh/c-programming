//calculate sum of first five numbers and their squares display in the result.
#include<stdio.h>
int main(){
    int sum1=0,sum2=0;
    for(int i=1;i<=5;i++){
        printf("%d:",i);
        printf("%d\n",i*i);
        sum1=sum1+i;
        sum2=sum2+i*i;
        }
        printf("sum of numbers are:%d\n",sum1);
        printf("Sum of square of numbers are:%d",sum2);

    
}