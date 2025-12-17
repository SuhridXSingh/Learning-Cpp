#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>
using namespace std;

int random_num();

int main(){
    int rand_num = random_num();
    int user_num;

    do{ 
        cout<<"Enter a Number between 0-10(Inclusive): ";
        cin>>user_num;

        if(user_num!=rand_num){
            cout<<"Not a match! Try again"<<endl;
        }
        else{
            cout<<"Coungrats!! You've Guessed the correct number."<<endl;
        }

    }while(rand_num!=user_num);

}

int random_num(){
    return rand()%11;
}
