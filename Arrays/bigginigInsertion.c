#include<stdio.h>
int arr[20];
void traversal(int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("trversal before insertion\n");
    traversal(n);
    int newele;
    printf("\nEnter the new element:");
    scanf("%d ",&newele);

    //shifting
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=newele;
    n++;
    printf("trversal after insertion\n");
    traversal(n);

    

}