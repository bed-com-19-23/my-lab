#include<iostream>
#include<string>
using namespace std;

int main(){
    int rows,cols;
    // prompot user to enter input nad enforce dimesions
    do{
        cout<<"enter number of rows(1-3):"<<endl;
        cin>>rows;
    }while(rows<1||rows>3);

    do{
        cout<<"enter number of cols(1-3):"<<endl;
        cin>>cols;
    }while(cols<1||cols>3);
    // dynamically allocate array to double
    double**arr = new double*[rows];
    for(int i =0;i<rows;i++){
        arr[i] = new double[cols];
    }
        // assign value to each element uing neted loops
        for(int i= 0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<"Enter value for element [" <<i<<"]["<<j<< "]: ";
                cin>>arr[i][j]  ;
            }
        }
    
    
        // assign value to each element uing neted loops
        cout<<"array value "<<endl;
        for(int i= 0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<std::endl;
            } 
            // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
       
    return 0;


}