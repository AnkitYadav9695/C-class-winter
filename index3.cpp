#include <iostream>
using namespace std;
int main(){
    int number=7945464;
    int n=number;
    int remainder;
    int largest=0;

    while(number!=0){
        remainder=number%10;
        number=number/10;
        if(remainder>largest){
            largest=remainder;
        }
    }
    cout<<"the largest digit of give number "<< n<< " is "<<largest;

    
}