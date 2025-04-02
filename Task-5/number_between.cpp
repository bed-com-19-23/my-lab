#include<iostream>
using namespace std;

int main(){
    int number;
    int choice =5;
    while(choice<=10){

        cout<<"Enter number"<<endl;
        cin>>choice;
        if(choice>5&&choice<=10){
            cout<<"You output value have been accepted"<<endl; 
            return choice;
        }
    else{
            cout<<"sorry Entered"<<" "+ choice<< "invaled number please try again you enter"<<endl;
        }

    }
    choice++;
    return 0;
}