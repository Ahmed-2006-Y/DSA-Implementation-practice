#include<iostream>
#include<cstring>
using namespace std;
int top=-1;
int maxSize=1000;
void push(char *Stack,int element){
if(top==maxSize-1){
    cout<<"the stack is full"<<endl;
}else{
Stack[++top]=element;
}
}
char pop(char *Stack){
if(top==-1){
    cout<<"the stack is empty"<<endl;
}else{
return Stack[top--];
}
}
int prec(char symbol){
switch(symbol){
case '(':
       return 1;
break;
case ')':
       return 2;
break;
case '+':
case '-':
       return 3;
break;
case '*':
case '/':
case '%':
       return 4;
break;
case '^':
       return 5;
default://operand
    return 0;
}
}
void infix_Postfix(char infix[]){
int len=strlen(infix);
char *Stack=new char [len];
char *postfix=new char [len];
int infixIndex=0,postfixIndex=0;
char ch;
infix[len++]=')';//we pushed at the end of expression the closed
push(Stack,'(');//we pushed at the beggin of the expression the open
for(;infixIndex<len;++infixIndex){
switch(prec(infix[infixIndex])){
case 1: //(
      push(Stack,infix[infixIndex]);
break;
case 2://)
    ch=pop(Stack);
    while(ch!='('){
     postfix[postfixIndex++]=ch;
     ch=pop(Stack);
   }
break;
case 3:
    ch=pop(Stack);
    while(prec(ch)>=3){
        postfix[postfixIndex++]=ch;
        ch=pop(Stack);
    }
    push(Stack,ch);
    push(Stack,infix[infixIndex]);
break;
case 4:
    ch=pop(Stack);
    while(prec(ch)>=4){
        postfix[postfixIndex++]=ch;
        ch=pop(Stack);
    }
    push(Stack,ch);
    push(Stack,infix[infixIndex]);
break;
case 5:
    ch=pop(Stack);
    while(ch==5){
        postfix[postfixIndex++]=ch;
        ch=pop(Stack);
    }
    push(Stack,ch);
    push(Stack,infixIndex);
break;
default:
    postfix[postfixIndex++]=infix[infixIndex];
break;
}
}
for(int i=0;i<postfixIndex;i++){
    cout<<postfix[i];
    delete [] Stack;
    delete [] postfix;
}
}
int main(){

}
