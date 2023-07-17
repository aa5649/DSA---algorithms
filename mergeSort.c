#include<stdio.h>
#include<stdlib.h>

void MergeSort(int *a,int l,int r);
void merge(int *a,int l,int m, int r);
void display(int *a,int n);

int main(){
    int n,i,l=0;
    scanf("%d",&n);int r=n-1;
    int *a = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    MergeSort(a,l,r);
    display(a,n);
    return 0;
}


void MergeSort(int *a,int l,int r){
    if(l<r){
        int q = l + (r-l)/2;
        MergeSort(a,l,q);
        MergeSort(a,q+1,r);
        merge(a,l,q,r);
    }
}

void merge(int *a,int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
    
    int i,j,k;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)L[i] = a[l+i];
    for(j=0;j<n2;j++)R[j] = a[m+j+1];
    
    i=0;j=0;k=l;
    
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k] = L[i];
            i++;}
        else{
            a[k] = R[j];
            j++;}
        k++;}
    
    while(i<n1){
        a[k] = L[i];
        i++;k++;
    }
    
    while(j<n2){
        a[k] = R[j];
        j++;k++;
    }
}
