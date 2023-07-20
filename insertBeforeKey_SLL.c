#include<stdio.h>
#include<stdlib.h>

void createNode();
void insertAtMiddleAfterKey(int val,int key,int n);
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
    int val,key;
    scanf("%d %d",&val,&key);
    insertAtMiddleAfterKey(val,key,n);
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
    temp->next = NULL;
}

void insertAtMiddleAfterKey(int val,int key,int n){
    struct node *ptr = head->next,*p=head,*temp;
    temp = malloc(sizeof(struct node));
    temp->data=val;
    while(ptr->data!=key){
        ptr=ptr->next;
        p=p->next;
        count++;
    }
    p->next = temp;
    temp->next = ptr;
    
    
}


void display(){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
