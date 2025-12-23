#include<stdio.h>
int main(){
    int arr[20];
    int n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Element:");
        scanf("%d",&arr[i]);
    }
    printf("\nTraversal before delete:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //deletion bigging
   
    //shifting
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("deletion succsess\n");
    printf("After deletion your array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}