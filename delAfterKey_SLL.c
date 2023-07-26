#include<stdio.h>
#include<stdlib.h>

void createNode();
void delAfterKey(int key);
void display();

struct node *head = NULL;

struct node{
    int data;
    struct node *next;
};

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
    int key;
    printf("Enter the value whose next node is to be deleted: ");
    scanf("%d",&key);
    delAfterKey(key);
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

void delAfterKey(int key){
    struct node *ptr,*p;
    ptr=head->next;
    p=head;
    while(p->data!=key){
        ptr=ptr->next;
        p=p->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void display(){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

