#include<stdio.h>
int main(){
    int redmatrix1[3][3];
    int redmatrix2[3][3];
    int newmatrix[3][3];
    int i,j;

    printf("Enter 1st matrix \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &redmatrix1[i][j]);
        }
    }

    printf("Enter 2nd matrix \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &redmatrix2[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            newmatrix[i][j] = redmatrix1[i][j] - redmatrix2[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", newmatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
