#include <iostream>
#include <cstring>
using namespace std;
class Copy // example of copy constructor
{
private:
    int a1,a2,a3,a4,a5,a6;
public:
Copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6) {
    a1 = aa1 ;
    a2 = aa2 ;
    a3 = aa3 ;
    a4 = aa4 ;
    a5 = aa5 ;
    a6 = aa6 ;
    }
Copy(const Copy &obj) {
    a1 = obj.a1 ;
    a2 = obj.a2 ;
    a3 = obj.a3 ;
    a4 = obj.a4 ;
    a5 = obj.a5 ;
    a6 = obj.a6 ;
    }
    void print (){
    cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " <<a5<< " " <<a6 ;
    }
};
int main()
{
   Copy s(1,2,3,4,5,6) ;
   s.print() ;
   Copy s2(s);
   s2.print() ;

}
