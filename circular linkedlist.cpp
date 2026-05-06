#include<bits/stdc++.h>
using namespace std;
struct node{
int data=0;
node *next;
};
//global variable
node *head=NULL;
//create first node
void createFirstNode(int value){
node *newNode;
newNode=new node; // create new Node in the memory
newNode->data=value; //15
newNode->next=newNode;//its pointin at it self cuz its the first and last one
head=newNode; // newNode=head=001(:
}
//create insert at end function
void insertNodeAtEnd(int value){
 node *newNode;
 newNode=new node;
 newNode->data=value;
 if(head==NULL){
    head=newNode;
    newNode->next=newNode;
    return;
 }
 node *temp;
 temp=head;
 while(temp->next!=head){
    temp=temp->next;
 }
    temp->next=newNode;
    newNode->next=head;
}
//display function(traverser)
void display(){
if(head==NULL){
    cout<<"the list is empty"<<endl;
    return;
 }
node *temp;
temp=head;
while(temp->next!=head){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->next;
}
//insertNode at beggin
void insertAtBegin(int value){
node *newNode;
newNode=new node;
newNode->data=value;
if(head==NULL){ //if its empty
    head=newNode;//the head occupy the newNode address
    newNode->next=head;//i made the only node points at itself
    return;//leave the function
}else{
node *temp;
temp=head;
while(temp->next!=head){ //i wanna reach to the last node
    temp=temp->next;
}
newNode->next=head;//the newNode points at the head
temp->next=newNode; //the head was pointin at the last node
head=newNode;//i made the head points at the newNode
}
}
//delete firstNode
void deleteFirstNode(){
if(head==NULL){
    cout<<"the list is empty"<<endl;
    return;
}
//if only one node
if(head->next==head){
    delete head;
    head=NULL;
    return;
}
node *last;
last=head;
while(last->next!=head){
    last=last->next;
}
node *temp;
temp=head;//this is pointin at the first node
head=head->next;//make the head points at the last node;
last->next=head;//the last node is pointin at itself when it occupy the @ of head
delete temp;//deleting the first node
}
//delete the last node
void DeleteLastNode(){
if(head==NULL){ //first condition its empty
    cout<<"the list is empty bro"<<endl;
    return;
}
if(head->next==head){ //if i have only one node
delete head;//delete the head
head=NULL;//make it = NULL
return;//leave the function
}
node *current;
node *prev;
while(current->next!=head){
    prev=current;//makes the prev occupy the current @ b4 movin the current
    current=current->next;//the current started movin from node to another
}
prev->next=head;//made it pointin at the first Node
delete current;//delete the last node bro
}
int main()
{

}
