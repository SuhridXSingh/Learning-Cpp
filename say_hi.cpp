#include <iostream>
using namespace std;

void sayHI(string name){
    cout<<"Hello "<<name<<"!"<<endl;
}
int main(){
    string arg;
    cout<<"Enter your name:";
    getline(cin,arg);
    sayHI(arg);
}
