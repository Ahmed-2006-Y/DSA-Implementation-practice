#include<bits/stdc++.h>
using namespace std;
int const Max=3;
int Front=-1;
int Rear=-1;
int queue_array[Max];
void enQueue(int element){
if((Front==0 && Rear==Max-1) || Front==Rear+1){
    cout<<"the queue is full "<<endl;
}else{
if(Front==-1){
    Front=0;
    Rear=0;
}else{
if(Rear==Max-1){
    Rear=0;
}else{
Rear++;
}
}
queue_array[Rear]=element;
}
}
void dqQueue(){
if(Front==-1){
    cout<<"the queue is empty"<<endl;
}else{
if(Front==Rear){
    Front=-1;
    Rear=-1;
}else{
if(Front==Max-1){
    Front=0;
}else{
Front++;
}
}
}
}
void display(){
int i;
if(Front==-1){
    cout<<"the queue is empty"<<endl;
}else{
cout<<"The Queue :"<<endl;
for(int i=Front;i!=Rear;i=(i+1)%Max){
    cout<<queue_array[i]<<" ";
       cout<<queue_array[i]<<endl;
}
}
}
int main(){

}
