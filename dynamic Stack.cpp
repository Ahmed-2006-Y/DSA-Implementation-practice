#include<iostream>
using namespace std;
class Stack{
int top;
int maxSize;
int *stackArr;
public:
Stack(int maxSize){
top=-1;
stackArr=new int [maxSize];
}
~Stack(){
delete [] stackArr;
}
void push(int data){
if(top==maxSize-1){
    maxSize++;
    int *nw=new int [maxSize];
    for(int i=0;i<maxSize-1;i++){
        nw[i]=stackArr[i];
    }
    delete []stackArr;
    stackArr=nw;
}
stackArr[++top]=data;
}
void pop(){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
stackArr[top--];
}
}
void display(){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
for(int i=top;i>=0;--i){
    cout<<"the values = "<<endl;
    cout<<stackArr[i]<<endl;
}
}
}
};
int main(){

}
