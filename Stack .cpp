#include<iostream>
using namespace std;
int top=-1;
const int maxSize=1000;
int stack_arr[maxSize];
void push(int data){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
}else{
stack_arr[++top]=data;
}
}
void pop(){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
stack_arr[top--];
}
}
void display(){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
for(int i=top;i>=1;i--){
    cout<<stack_arr[i]<<endl;
}
}
}
int main(){

}
