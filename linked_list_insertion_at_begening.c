#include<stdio.h>
#include<stdlib.h> 
struct listnode{
    int value;
    struct listnode *next;
}; 
void display(struct listnode * ptr){
    while(ptr!=NULL){
        printf(" %d ",ptr->value);
        ptr=ptr->next;
    }
}
int main(){
    struct listnode *head=NULL;
    head=(struct listnode *)malloc(sizeof(struct listnode));
    head->value=1;
    struct listnode *second=NULL;
    second=(struct listnode *)malloc(sizeof(struct listnode));
    second->value=2;
    struct listnode *third=NULL;
    third=(struct listnode *)malloc(sizeof(struct listnode));
    third->value=3;
    head->next=second;
    second->next=third;
    third->next=NULL;
    struct listnode *new=NULL;
    
    new=(struct listnode *)malloc(sizeof(struct listnode));
    new->value=5;
    new->next=head;
    head=new;
   display(head);
   return 0;
}