#include<stdio.h>
int main(){
    int matrix1[20][20],matrix2[20][20],mul[20][20];
    int row1 ,col1,row2,col2;
    printf("Enter the row and colum of first Matrix:");
    scanf("%d %d",&row1,&col1);
    printf("Enter the row and colum of Second Matrix:");
    scanf("%d %d",&row2,&col2);

    if(col1 != row2){
        printf("Not possible\n");
        return 0;
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("Enter Element of Matrix1 %d %d",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nMatrix 1 created sucess..\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf("Enter Element of Matrix2 %d %d",i,j);
            scanff("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix 2 created sucess..");

    for (int i = 0; i < row1; i++)
    {
        for(int j=0;j<col2;j++){
            mul[i][j]=0;
            for(int k=0;k<col1;k++){
                mul[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printf("\nMUltiplication completed:\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}