#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int value;
    int num1,num2;
    cout<<"Enter (1) for addition, (2) for subtraction, (3) for multiplication, (4) for division, (5) for power, (6) for root, anything else to quit:";
    cin >> value;
    switch(value){
        case 1:
            cout<<"Enter nums to add:";
            cin>>num1>>num2;
            cout<<"Sum is:"<< num1+num2<<endl;
            break;
        case 2:
            cout<<"Enter nums to subtract:";
            cin>>num1>>num2;
            cout<<"Difference is"<< num1-num2<<endl;
            break;
        case 3:
            cout<<"Enter nums to multiply:";
            cin>>num1>>num2;
            cout<<"Multiplication is:"<< num1*num2<<endl;
            break;
        case 4:    
            cout<<"Enter nums to divide:";
            cin>>num1>>num2;
            cout<<"Division is:"<< num1/num2<<endl;        
            break;
        case 5:
            cout<<"Enter nums to power:";
            cin>>num1>>num2;
            cout<<num1<<" to the power "<<num2<<"is: "<<pow(num1,num2)<<endl;
            break;    
        case 6:
            cout<<"Enter nums to root:";
            cin>>num1>>num2;
            cout<<num1<<" to the root "<<num2<<"is: "<<pow(num1,1.0/num2)<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
}
