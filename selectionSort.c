#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *a,int n);
void display(int *a,int n);

int main(){
  int n,i;
  printf("Enter the total number of elements: ");
  scanf("%d",&n);
  int *a = malloc(sizeof(int)*n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  selectionSort(a,n);
  display(a,n);
  return 0;}

void selectionSort(int *a,int n){
    int i,j,min,p,temp;
    min = a[0];
    for(i=0;i<n;i++){
        min = a[i];
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min = a[j];
                p = j;}}
            if(a[i]>min){
                temp = a[i];
                a[i] = a[p];
                a[p] = temp;
            }
    }
}

void display(int *a,int n){
    for(int i=0;i<n;i++)printf("%d\t",a[i]);
}

  
