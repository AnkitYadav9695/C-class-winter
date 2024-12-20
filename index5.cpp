#include <iostream>
using namespace std;

class shap{
    protected:
    double l;
    double h;
    public:
    void display();
};
class Rectange : public shap{
    
    
    public:
    Rectange(double a , double b){
        l= a;
        h= b;
    }
    void display(){
        cout<<"the lenght of the rectange "<< l <<" and bright of the rectange is "<<h<<endl;
    }
    double area(){
        
        return (l*h);
    }  
};
class sqare : public shap{
    public:
    sqare(int a){
        l=a;
    }
    void display(){
        cout<<"the lenght of the sqare is : "<< l<<endl;
    }
    double area(){
        return (l*l);
    }

};
int main(){
    Rectange rect(5.6, 6.5);
    sqare sq(5.0);
    rect.display();
    cout<<"area of Rectange is "<<rect.area()<<endl;
    sq.display();
    cout<<"area of the square is: "<<sq.area();


}


