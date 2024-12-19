#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number n:";
    cin>>n;
    for(int i=1; i<=n;i++){
            cout<<i<<endl;
            sum=sum+i;
    }
    cout<<"sum of the integer in:"<<sum;
}