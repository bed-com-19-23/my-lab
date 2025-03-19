# include <iostream>
# include<fstream>

using namespace std;

int main(){
    ofstream output;
    output.open(score.txt);
    cout<<"hie";

if (output.fail()){
    cout<<"file not exist";
}
}