#include <iostream>

using namespace std;
class Rectangle
{
    int height, width;
public :
    Rectangle():height(0),width(0)
     {};
    Rectangle(int h,int w):height(h),width(w)
    {
        cout << "Hello i am constructor" << endl ;

    }
    ~Rectangle()
    {
        cout << "Rectangle hase been deleted"<<" " <<  height << " " <<width<< "\n";


    }

};
int main()
{
    Rectangle R1(15,20) , R2(20,50);
}
