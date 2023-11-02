/*write a progrsm to calculate the energy bill .Reading starting frim and ending from meter readingd the charge are as follows:
no of units   consumed rate im rs
200-500----3.50
100-200----2.50
lesss than 100----1.50*/
#include<stdio.h>
int main(){
    float s,e,net;
    printf("Enter the starrting units :\n");
    scanf("%f",&s);
    printf("Enter the ending units :\n");
    scanf("%f",&e);
    net=e-s;
    printf("youe net is %f\n",net);
    if(net>=200&&net<500)
        printf("Your charge is %f",net*3.50);
    else if(net>=100&&net<200)
        printf("Your charge is %f",net*2.50);
    else if (net<100)
        printf("Your charge is %f",net*1.50);   
    else printf("invalid input");
        return 0;   
    


}