#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            if(i%2==1)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
