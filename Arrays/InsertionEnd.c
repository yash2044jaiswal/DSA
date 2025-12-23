#include<stdio.h>
int arr[20];
void traversal(int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
}
int main(){
    int num;
    printf("Enter the Size of Array:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    printf("Trevarsal before insertion\n");
    traversal(num);
    int ele;
    printf("\nEnter new element:");
    scanf("%d",&ele);

    arr[num]=ele;
    num++;
    printf("\nTrevarsal After insertion\n");
    traversal(num);

return 0;
}
