//bubble sort 
#include<stdio.h>

void bubbleSort(int *a,int n);
void display(int *a,int n);

int main(){
    int n,i;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    bubbleSort(a,n);
    display(a,n);
    return 0;
}

void bubbleSort(int *a,int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void display(int *a,int n){
    int i;
    for(i=0;i<n;i++)printf("%d\t",a[i]);
}
