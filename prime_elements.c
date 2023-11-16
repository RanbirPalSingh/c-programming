#include<stdio.h>
int main(){
    int sump=0,sumn=0,n,prime;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        prime=1;
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0)
            prime=0;
            break;
        }
        if(prime)
        sump+=arr[i];
        else
        sumn+=arr[i];
    }
    printf("Sum of prime elements is:%d\n",sump);
    printf("Sum of non prime elements is :%d",sumn);
    return 0;
}
