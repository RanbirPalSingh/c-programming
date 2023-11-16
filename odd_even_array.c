#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int sume=0,sumo=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            sume=sume+arr[i];
        }
        else{sumo=sumo+arr[i];}
    }
printf("The sum of even numbers is %d\n:",sume);
printf("The sum of odd numbers is:%d\n",sumo);
return 0;
}