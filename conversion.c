#include<stdio.h>
int main(){
    int year;
    int type;
    while(1){
        printf("press 1 for conversion to seconds\n");
        printf("press 2 for conversion to minutes\n");
        printf("press 3 for conversion to hours\n");
        printf("press 4 for conversion to days\n");
        printf("press 5 for conversion to months\n");
        
        scanf("%d",&type);
        printf("Enter the number of years:\n");
        scanf("%d",&year);
        
        switch(type){
        case(1):
            printf("Seconds in %d years are %d",year,year*365*24*60*60);
            break;
        
        case(2):
            printf("Minutes in %d years are %d",year,year*365*24*60);
            break;

        case(3):
            printf("Hours in %d years are %d",year,year*365*24); 
            break;

        case(4):
            printf("Days in %d years are %d",year,year*365); 
            break;

        case(5):
            printf("Months in %d years are %d",year,year*12);       
            break;

        default:
            printf("wrong input");      

        }

        printf("\n\n");
    }
    return 0;
}