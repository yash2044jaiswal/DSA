//normal
#include<stdio.h>
int main(){
    int a[30][30],b[30][30],sum[30][30];
    int row,column;
    printf("Enter the row And Column:");
    scanf("%d %d",&row,&column);

    //create first matrix:
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the Element's of Matrix A %d %d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n First Matrix created successfuly:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the Element's of MAtrix B %d %d :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Second Matrix created successfuly:\n");

    //sumation
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nFirst Matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
   int num=5;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==num/2 || j== num/2){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nSecond Matrix is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nResult:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}





// more clear by me extra work for beter design of outpuy like matrix:

// #include<stdio.h>
// int main(){
//     int a[30][30],b[30][30],sum[30][30];
//     int row,column;
//     printf("Enter the row And Column:");
//     scanf("%d %d",&row,&column);

//     //create first matrix:
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("Enter the Element's of Matrix A %d %d :",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n First Matrix created successfuly:\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("Enter the Element's of MAtrix B %d %d :",i,j);
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("\n Second Matrix created successfuly:\n");

//     //sumation
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             sum[i][j]=a[i][j]+b[i][j];
//         }
//     }

//     printf("\nFirst Matrix:\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
    
//    int num=5;
//     for(int i=0;i<num;i++){
//         for(int j=0;j<num;j++){
//             if(i==num/2 || j== num/2){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     printf("\nSecond Matrix is:\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nResult:\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");
//     }


// }