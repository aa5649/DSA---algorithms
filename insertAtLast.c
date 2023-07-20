#include<stdio.h>
#include<stdlib.h>

void createNode();
void insertAtFirst(int val);
void display();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main(){
    int n,i;
    scanf("%d",&n);
    head = malloc(sizeof(struct node));
    scanf("%d",&head->data);
    for(i=1;i<n;i++)createNode();
    display();
    return 0;
}

void createNode(){
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    ptr=head;
    while(ptr->next!=NULL){
        ptr = ptr->next;}
    ptr->next = temp;
}



void display(){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
        
    }
}
