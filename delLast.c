#include<stdio.h>
#include<stdlib.h>

void createNode();
void delLast();
void display();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main(){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    head = malloc(sizeof(struct node));
    scanf("%d",&head->data);
    for(i=1;i<n;i++){
        printf("Enter the value of node %d: ",i+1);
        createNode();
    }
    delLast();
    display();
    return 0;
}

void createNode(){
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;}
    ptr->next = temp;
}

void delLast(){
    struct node *p,*ptr;
    p = head;
    ptr = p->next;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    p->next = NULL;
    free(ptr);
}

void display(){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
