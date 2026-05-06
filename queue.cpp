#include<bits/stdc++.h>
using namespace std;
int const Max=100;
int Front=-1,Rear=-1;
int queue_array[Max];
void enQueue(int element){
if(Rear==Max-1){
    cout<<"the queue is full"<<endl;
}else{
if(Front==-1){
    Front=0;
}
  queue_array[++Rear]=element;
}

}
void deQueue(){
if(Front==-1 || Front>Rear){
    cout<<"empty "<<endl;
}else{
cout<<"the deleted element is = "<<queue_array[Front++]<<endl;
}
}
void display(){
if(Front==-1 || Front>Rear){
    cout<<"empty"<<endl;
}else{
for(int i=Front;i<=Rear;i++){
    cout<<queue_array[i]<<" ";
    cout<<endl;
}
}
}
int main(){
enQueue(5);
enQueue(10);
display();
}
