#include<stdio.h>

int main(){
    int i,j;
    int quarter1[3][3];
    int quarter2[3][3];
    int net[3][3];

    printf("Enter the sales of 1st quarter: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &quarter1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the sales of 2nd quarter: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &quarter2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            net[i][j] = quarter1[i][j] + quarter2[i][j];
        }
    }

    printf("total sale correspond to half of months \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d \n", net[i][j]);
        }
    }

    printf("\n");

    return 0;
}
