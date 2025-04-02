#include <iostream>
#include<cmath>
using namespace std;

int main ()
{
    int area;
    int choice;
    do{
    cout << "please select the area of shape to be calculated" << endl;
    cout << "1. square" << endl;
    cout << "2. rectangle" << endl;
    cout << "3. triangle" << endl;
    cout << "4. quit the program" << endl;
    cout << "Enter selection";

     
    cin >> choice;
     
    switch(choice) {

        case 1:{
            int length;
            
            cout << "enter length" ;
            cin >> length;
            area = pow(length,2);
            cout << area;
        break;
        }
        case 2:{
            int length;
            int width;
            cout << "enter length";
            cin >> length;
            cout << " Enter width";
            cin >> width;
            area = length * width;
            cout << area;
            break;
        }
        case 3: {
            int base;
            int height;
            cout << "Enter base ";
            cin >> base;
            cout << "Enter height ";
            cin >> height;
            area = 0.5 * base * height;
            cout << area;
            break;
        }
        default :{
            exit(0);
        }
    
    }
}while(choice != 0);
   return 0;
}