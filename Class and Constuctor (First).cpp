#include <iostream>
// Ahmed el sayed abd el aty
// simple example of OOP(Object-Oriented-programming)
using namespace std;

class Triangle
{
private :
    int base ;
    int height ;

public :
    Triangle() // empty constructor
    {
        cout << "Hello in my program (First-Constructor)" << "\n";
        base =0 ;
        height =0 ;
    }
    Triangle(int b , int h) // parameterized  constructor
    {
        cout << "First-Constructor (parameterized)" << "\n";
        base = b ;
        height = h ;

    }
    void set_height_and_base(int b, int h) // can neglect using parameterized constructor
    {
        height = h;
        base = b ;
    }
    float get_area()
    {
        return 0.5*base*height ;
    }
    void print()
    {
        cout << "Height = " << height << "\n" << "Base = " << base << "\n" <<"Area = " << get_area()<<  "\n" ;
    }

};


int main()
{
    Triangle t(5,10) ;

    t.get_area() ;
    t.print() ;
}
