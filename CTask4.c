#include<stdio.h>
int main(){
    int arr[3][3];
    int i,j;
    int count =0;
    int nonzero=0;
    int arr1[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter the values of array: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", arr[i][j]);
            if(arr[i][j] == 0){
                count++;
            }
            else if(arr[i][j] != 0){
                nonzero++;
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("the 0 element in matrix is %d\n", count);
    printf("the non zero element in matrix is %d\n", nonzero);

    if(count > nonzero){
        printf("The given matrix is sparse matrix\n");
    }
    else{
        printf("The given matrix is not sparse matrix\n");
    }

    return 0;
}
