#include <iostream>
using namespace std;
int main(){
    int number=10000;
    int count=0;
    while (number!=0){
        number= number/10;
        count++;
    }
    cout<<count;
    
}