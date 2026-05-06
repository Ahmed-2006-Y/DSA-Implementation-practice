#include<bits/stdc++.h>
using namespace std;
//we add from the rear
//we delete from the front
struct node{
int data;
node *link;
}*Front,*Rear;
void enqueue(int item){
node *temp=new node();//create a new node
temp->data=item;
temp->link=NULL;

if(Rear==NULL || Front==NULL){
    Rear=Front=temp;
    //its the only node let the front and rear point at it
}else{
Rear->link=temp;
Rear=temp;
}
}
void pop(){
if(Front==NULL){
    cout<<"the queue is empty"<<endl;
}else{
Front=Front->link;//move the Front to the next
cout<<"the deleted value is "<<Front->data;
}
}
void display(){
node *temp=Front;
if(Front==NULL){
    cout<<"the queue is empty"<<endl;
}else{
while(temp!=NULL){
    cout<<temp->data<<endl; //print the data inside the current node
    temp=temp->link;//let the temp move to the next node
}
}
}
int main(){

}
