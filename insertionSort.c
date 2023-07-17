#include<stdio.h>

void insertionSort(int *a,int n);
void display(int *a,int n);

int main(){
  int n,i;
  printf("Enter the total number of elements: ");
  scanf("%d",&n);
  int *a = malloc(n*sizeof(int));
  printf("Enter the elements: ");
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  insertionSort(a,n);
  display(a,n);
  return 0;}

void insertionSort(int *a,int n){
  int i,j,key;
  for(i=1;i<n;i++){
    key = a[i];
    j = i - 1;
    while(a[j]>key && j>=0){
        a[j+1] = a[j];
        j--;}
    a[j+1] = key;}

void display(int *a,int n){
  for(int i=0;i<n;i++)printf("%d\t,a[i]);}
