#include<bits/stdc++.h>
using namespace std;
//5
//5*1=5
//(4,5)
//5*4=20
//(3,20)
//-----
void fact(int no,int facto=1){
if(no<=1){
    cout<<"the factorial is = "<<facto;
}else{
facto=facto*no;
fact(--no,facto);
}
}
int main(){
fact(5);
}
