#include<iostream>
#include<cstring>
using namespace std;
int top=-1;
const int maxSize=1000;
char Stack[maxSize];

void push(char element){
    if(top==maxSize-1){
        cout<<"the stack is full"<<endl;
    }else{
        Stack[++top]=element;
    }
}

void pop(){
    if(top==-1){
        cout<<"the stack is empty"<<endl;
    }else{
        Stack[top--];
    }
}

void isBalanced(char expr[]){
    int len=strlen(expr);

    for(int i=0;i<len;i++){
        if(expr[i]=='('){
            push(expr[i]);
        }
        else if(expr[i]==')'){
            if(top==-1){
                cout<<"unbalanced expression"<<endl;
                return;
            }
            pop();
        }
    }

    if(top==-1){
        cout<<"is balanced"<<endl;
    }else{
        cout<<"unbalanced expression"<<endl;
    }
}
int main(){

}
