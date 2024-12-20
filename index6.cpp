#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the matrix n";
    cin>>n;
    int arr1[n][n];
    for(int i=0 ; i<n;i++){
        for(int j= 0; j< n;j++){
            cout<<"enter the number"<<i<<"and"<<j<< endl;
            cin>>arr1[i][j];
        }
    }
    cout<<"print the matrix "<<endl;
    for(int i=1 ; i<n;i++){
        for(int j= 0; j< n;j++){
            cout<<arr1[i][j];

        }
        cout<<endl;
    }


}