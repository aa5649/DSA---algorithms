//linear search
#include<stdio.h>

void linearSearch(int *a,int n,int key);

int main(){
    int n,i,key;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    linearSearch(a,n,key);
    return 0;
}

void linearSearch(int *a,int n,int key){
    int count=0,i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("key found at index %d\n",i);
            break;
        }
        else count++;}
    if(count==n)printf("key not found in array\n");
}
