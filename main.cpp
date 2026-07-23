#include <iostream>
using namespace std;

class Add {
  public:
    int sum(int x, int y){
        return x + y;
    }

    int sum(int x, int y, int z){
        return x + y + z;
    }
    double sum(double x, double y){
        return x + y;
    }
};

class Complex{
    public:
        int real;
        int imag;

        Complex() 
        {
            real = imag = -1;

        }
        Compolex(int r, int i) : real(r), imag(i) {};

        void print(){
            printf("[]")
        }
}
int main() 
{
    int x = 5, y =6;
    int z = 2;
    Add add;
    cout<<add.sum(x,y)<<endl;
    cout<<add.sum(x,y,z)<<endl;
    cout<<add.sum(5.5,3.3);
    return 0;
}