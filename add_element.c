#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of elements of an array is %d",sum);
    return 0; 
}