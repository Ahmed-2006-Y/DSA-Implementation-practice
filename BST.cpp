#include<bits/stdc++.h>
using namespace std;
struct Node{ //creating the box
int data;
Node *left;
Node *right;
};
Node *createNode(int value){
Node *newNode=new Node();//created the node
newNode->data=value;//made the data = to the value
newNode->left=NULL;//the left is pointing at nun
newNode->right=NULL;//the right is pointing at nun
return newNode;
}
Node *Insert(Node*root,int value){
    //creating a node from the function that
    //returns a node.
Node *newNode=createNode(value);
// if the tree is empty make the inserted node is the root
if(root==NULL){
   return newNode;//make it the root
}
Node *temp=root;//i cannot change the root at the BST
//so iam gonna make the temp=root so it can traverse through the whole
//tree.
while(true){
    //case 1: value < root :left.
    //case 2: value > root :right.
    if(value < temp->data){ //if the value is less than the left of the root
        if(temp->left==NULL){ //check if its empty or not
            temp->left=newNode;//if its true make the root pointin at the newNode from the left
        break; //stops the while from repeating
        }
        temp=temp->left;//if the root has node then make the temp move to the linked node
    }else if(value > temp->data){ //if the value is > temp->data (root)
        //go from the right
      if(temp->right==NULL){ // check if node is empty
        temp->right=newNode; // make the newNode linked to right
        break;
      }
      temp=temp->right;//move from the right
    }
    else{
        cout<<"u cannot add duplicates value"<<endl;
        //u cannot same nodes more than one
        break;
    }

}
//return the unchanged root
return root;//001 =>the root wont change during the whole program
}

bool Search(Node *root,int value){ //takes the root and the value
Node *temp=root;//make the temp = the root
while(temp!=NULL){ //if the temp !=NULL keep loopin until it equals to NULL
if(value==temp->data){
    return true;//if the data equal to the roots data return true
}else if(value < temp->data){ //if value < temp->data -> move to the left
    temp=temp->left;
}else{ // if data > the roots data move to the right
    temp=temp->right;
    }
  }
  return false;//if u couldnt find the value
}

int findMax(Node*root){
//if tree is empty
if(root==NULL){ //if its empty print its tree
    cout<<"tree is empty"<<endl;
    return -1;
}
// 1 start from the root
Node *temp=root;//make the temp=root n make it moves
while(temp->right!=NULL){ //while it isnt = to null keep loopin
    temp=temp->right;//it will keep loopin
}

return temp->data;//return the data n it will be the max data
}
int findMin(Node *root){
if(root==NULL){
    cout<<"tree is empty"<<endl;
}
Node *temp=root;
while(temp->left!=NULL){
    temp=temp->left;
}
return temp->data;
}
void preOrder(Node *root){
if(root==NULL){ //if the root == NULL that means i don't have tree
    return;// cancel preOrder(root->left) this is its task
}
//root - left - right
cout<<root->data<<" "; //display the root first
preOrder(root->left);// i recalled(recursion) the function again but gave it the left node
//then displayed it
preOrder(root->right);// i recalled(recursion) the function again but gave it the right
//node's root
}
//left -> root -> right
void inOrder(Node *root){
if(root==NULL){ // if there are no other nodes return(skip)the first step
    return;
}
inOrder(root->left); //print the data of the left node
cout<<root->data<<" ";//print the root's data
inOrder(root->right);// print the root's data
}
//post order
//left - right - root
void postOrder(Node *root){
if(root==NULL){
    return;
}
postOrder(root->left);//left
postOrder(root->right);//right
cout<<root->data<<" ";//return
//and when there are no nodes the if condition returns
}
int main(){
//address : newNode
Node *root=NULL;//the root pointing at nun
//the root took the address of this node
//cuz this is the only node so i made it the root.
root=Insert(root,60);

}
