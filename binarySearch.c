//binary search
#include<stdio.h>

void binarySearch(int *a,int n,int key);

int main(){
    int n,i,key;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    binarySearch(a,n,key);
    return 0;
    
}

void binarySearch(int *a,int n,int key){
    int first=0,last=n,middle,count=0;
    while(first<=last){
        middle=(first+last)/2;
        if(a[middle]>key)middle=middle-1;
        if(a[middle]<key)middle=middle+1;
        if(a[middle]==key){
            printf("key found at index %d\n",middle);
            count+=1;
            break;
        }
        if(count==0){
            printf("key not found\n");
            break;}
    }
}
