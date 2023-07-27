#include<stdio.h>
#include<stdlib.h>

void push(int val);
void display();
void pop();

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

int main(){
    int n,i,val;
    printf("Total no.of elements: ");
    scanf("%d",&n);
    top = malloc(sizeof(struct node));
    scanf("%d",&top->data);
    for(i=1;i<n;i++){
        scanf("%d",&val);
        push(val);
    }
    display();
    pop();
    display();
    return 0;
}

void push(int val){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = top;
    top = temp;
}

void pop(){
    struct node *ptr = top;
    top = top->next;
    free(ptr);
}


void display(){
    struct node *ptr = top;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
