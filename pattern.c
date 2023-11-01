#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the rows you want to make:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }return 0;
}
/*#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number of rows you want:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n-1;j++){
            printf(" ");
             }
                for(k=1;k<=i;k++){
                    printf("%d ",k);
                }
                printf("\n");
             }
        
 
    
return 0;

}
*/
