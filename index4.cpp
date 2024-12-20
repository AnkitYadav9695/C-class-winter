#include <iostream>
using namespace std;

 class Area{
    public:
    
    void area(int r){
        cout<<"area of the circle: "<<3.14*(r*r)<<endl;
    }
    void area( float a, int l , int h){
        cout<<"area of traingle: "<<0.5*(l*h)<<endl;
    }
    void area(int b, int h){
        cout<<"area of rectange: "<<b*h<<endl;
    }



};
int main(){
    Area c1;
    Area t1;
    Area r1;
    c1.area(5);
    t1.area(0.5,2,5);
    r1.area(4,5);
}
