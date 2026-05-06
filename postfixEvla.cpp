#include<bits/stdc++.h>
using namespace std;
/*
int maxSize=1000;
int top=-1;
void push(char *stack ,int element){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
    return;
}else{
Stack[++top]=element;
}
char pop(char *Stack){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
    return;
}else{
return Stack[top--];
}







int maxSize=1000;
int top=-1;
void push(int *Stack,int element){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
    return;
}
Stack[++top];
}
int pop(int *Stack){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}
}
float postfix_eval(char postfix[]){
int len=strlen(postfix);
int *Stack =new int [len];
int temp,a,b;
for(int i=0;i<len;i++){
        //if its between '0' and '9'
    if(postfix[i]<='9'&& postfix[i]>='0'){
        push(Stack,postfix[i]-48);//convert from char to a number
    }else{
       a= pop(Stack);
       b=pop(Stack);
    switch(postfix[i]){
        case '+':
         temp=b+a;
        break;
          case '-':
         temp=b-a;
        break;
          case '*':
         temp=b*a;
        break;
          case '/':
         temp=b/a;
        break;
          case '%':
         temp=b%a;
        break;
          case '^':
         temp=pow(b,a);
        break;
    }
     push(Stack,temp);
    }
}
temp=pop(Stack);
return temp;
}
*/
const int maxSize=1000;
int top=-1;
void push(int *Stack,int element){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
}else{
Stack[++top]=element;
}
}
int pop(int *Stack){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
return Stack[top--];
}
}
float postfix_eval(char postfix[]){
int len=strlen(postfix);
int *Stack=new int [len];
int temp,a,b;
for(int i=0;i<len;i++){
    if(postfix[i]>='0' && postfix[i]<='9'){
        push(Stack,postfix[i]-48);
    }else{
    a=pop(Stack);
    b=pop(Stack);
    switch(postfix[i]){
case '+':
    temp=b+a;
break;
case '-':
    temp=b-a;
break;
case '*':
    temp=b*a;
break;
case '/':
    temp=b/a;
break;
case '%':
    temp=b%a;
case '^':
temp=pow(b,a);
break;
    }
    push(Stack,temp);
    }
}
temp=pop(Stack);
delete [] Stack;
return temp;
}
int main(){
    char postfix[] = "23*5+";
    cout << postfix_eval(postfix);
}
