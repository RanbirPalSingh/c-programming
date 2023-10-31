//program to find the gross salary.
#include<stdio.h>
int main(){
    int salary;
    printf("Enter your salary :\n");
    scanf("%d",&salary);
    if(salary>=5000){
        float DA=salary*110/100;
        float HRA=salary*20/100;
        float result=salary+HRA+DA+500;
        printf("The gross salary is %.1f",result);
    }
    else if(salary>=3000 && salary<5000){
        float DA2=salary;
        float HRA2=salary*15/100;
        printf("The gross salary is %.1f",salary+DA2+HRA2+400);
    }
    else if(salary<3000){
        float DA3=salary*90/100;
        float HRA3=salary*10/100;
        printf("The gross salary is %.1f",salary+HRA3+DA3+300);
    }
    else{
        printf("Invalid entry");
    }
    return 0;
}
