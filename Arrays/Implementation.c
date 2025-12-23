#include<stdio.h>
int arr[40];
void createArray(int n){
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
}
void traversal(int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int num;
    printf("Enter the Size of array:");
    scanf("%d",&num);
    createArray(num);
    printf("Your array is:\n ");
    traversal(num);
    
    return 0;
}