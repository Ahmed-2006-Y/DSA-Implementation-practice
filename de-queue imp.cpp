#include<bits/stdc++.h>
using namespace std;
const int maxSize=50;
int deq[maxSize];
int Front=-1;
int Rear=-1;

void insertfromFront(int value){
if(Front == 0){
    cout<<"no space from front"<<endl;
    return;
}
if(Front==-1){
    Front=0;
    Rear=0;
}
else{
 Front--;
}
deq[Front]=value;
}
void insertFromRear(int value){
if(Rear == maxSize-1){
    cout<<"its full"<<endl;
    return;
}
if(Front==-1){
    Front=Rear=0;
}
else{
Rear++;
}
deq[Rear]=value;
}
void deleteFromFront(){
if(Front==-1){
    cout<<"the queue is empty"<<endl;
    return;
}
if(Front==Rear){
    Front=Rear=-1;
}else{
Front++;
}
}
//[.,.,4,5,6]<-rear
void deleteFromRear(){
if(Front==-1){
    cout<<"its empty"<<endl;
    return; // stop the code if this condition occured and dont continue execute
}
if(Front==Rear){
    Front=Rear=-1;
}else{
Rear--;
}
}
void display(){
if(Front==-1){
    cout<<"the queue is empty"<<endl;
}else{
for(int i=Front;i<=Rear;i++){ //[3,4,5,6]
    cout<<deq[i]<<endl;
}
}
}
int main(){

}
