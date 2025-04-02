#include<iostream>
#include<random>
#include<cstdlib>
#include<Ctime>
#include<cmath>
using namespace std;

int main(){
    int dayUntilexpiration;
    int random_number= 1 +rand() /(RAND_MAX/12); 
    random_number = dayUntilexpiration;
    cout<<dayUntilexpiration<<endl;
    if(dayUntilexpiration <= 10){
        cout<<"you have active subscription"<<endl;
    }
        else if(dayUntilexpiration==0){
        cout<<"your subcription has expired"<<endl;   
    }
        else if (dayUntilexpiration >=10){
        cout<<"you subscription expire within a day"<<endl;
        cout<<"Renew now and save 20%"<<endl;
    }
        else if (dayUntilexpiration<=5){
        cout<<"you subscription expire within"<<dayUntilexpiration<<endl;
    }
    else{
        cout<<"you have active subscription"<<endl;
 
    }
    return 0;
}