#include<stdio.h>
#include<stdlib.h>
struct listnode{
        int val;
        struct listnode *next;  
    };
void prin(struct listnode * ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->val);
        ptr=ptr->next;
    }
}    
int main(){
    
    struct listnode *head=NULL;
    head=(struct listnode *)malloc(sizeof(struct listnode));
    head-> val=1;
   struct listnode *second=NULL;
   second=(struct listnode *)malloc(sizeof(struct listnode));
   second-> val=2;
   struct listnode *third=NULL;
   third=(struct listnode *)malloc(sizeof(struct listnode));
   third-> val=3;
    head->next=second;
    second->next=third;
    third->next=NULL;
   prin(head);
    
    return 0;

}