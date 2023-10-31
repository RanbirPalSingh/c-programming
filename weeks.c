#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a between 1 to 7 :\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Today is Sunday"); 
        break;
    case 2:
        printf("Today is Monday");
        break;

    case 3:
        printf("Today is tuesday"); 
        break;
    case 4:
        printf("Today is Wednesay");
        break;    
    case 5:
        printf("Today is thursday"); 
        break;
    case 6:
        printf("Today is Friday");
        break;    
    case 7:
        printf("Tody is Saturday");
        break;         
    
    default:
            printf("Enter a valid input");
        break;
    }
    return 0;
}