#include<iostream>

#include<string>

using  namespace std;

int main(){
    string var[8] ={"B123","C234","A345","C13","B177","G3003","C235","B179"};
    for(int i=0;i<8;i++){
        if(var[i][0]=='B'){
            cout<<var[i]<<endl;
        }
    }
return 0;
}