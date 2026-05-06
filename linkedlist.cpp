#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
node *head=NULL;
void insertAtBegin(int element){
node *newNode=new node;
newNode->data=element;
newNode->next=head;
head=newNode;
}
void insertAtEnd(int element){
node *newNode=new node;
newNode->data=element;
node *temp=head;
while(temp!=NULL){
    temp=temp->next;
}
temp->next=newNode;
}
void insertAfterGivenNode(node*List,int value){
node *newNode=new node;
newNode->data=value;
List->next=newNode;
newNode->next=List->next;
}
void deleteEnd(){
node *temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
temp->next=NULL;
}
void deleteNode(int key){
node* temp=head;
node*prev=NULL;
if(temp!=NULL && temp->data==key){
    head=head->next;
    return;
}
while(temp!=NULL && temp->data!=key){
    prev=temp;
    temp=temp->next;
}
if(temp==NULL){
  prev->next=temp->next;
}
}
void deleteAtBegin(){
head=head->next;
}
if(temp->next==NULL){
    prev->next=temp->next;
}

void display(){
node *temp=head;
while(temp!=NULL){
    cout<<" "<<temp->data<<" "<<endl;
    temp=temp->next;
}
}
int main(){
}
