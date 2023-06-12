

#include <iostream>
#include <cstring>
using namespace std;
struct Distance
{
    int feet ;
    int inches ;
};
Distance add_distacne (Distance d1, Distance d2)
{
    Distance result ;
    result.feet = d1.feet + d2.feet ;
    result.inches = d1.inches +d2.inches;
    return result ;
}
struct Exam
{
    float first ;
    float second ;
    float final_ ;
};
class Subject
{
private :
    char name[20] ;
    Exam exam ;
public:
    Subject()
    {
        strcpy(name, "No Name") ;
        exam = {0,0,0};
    }
    Subject(char n[], float fir,float se, float fin)
    {
        strcpy(name, n) ;
        exam.first = fir ;
        exam.second = se;
        exam.final_= fin ;
    }
    float Total_grade()
    {
        return exam.first + exam.second + exam.final_ ;
    }
    void print ()
    {
        cout << "Subject Name: " << name<<"\n"
             <<"First : " << exam.first  << "\n"
             << "Second : " << exam.second  << "\n"
             <<"Final : " << exam.final_  << "\n"
             << "Total = " <<Total_grade() << "\n" ;
    }

};

int main()
{
    Subject obj ("OOP" , 20 , 12 , 60);
    obj.print() ;
    /*
        Distance d1,d2,r;
        cout << "Enter Feet values : " << "\n" ;
        cin >> d1.feet >> d2.feet ;
        cout << "Enter Inche values : "<< "\n"  ;
        cin >> d1.inches >> d2.inches ;
        r = add_distacne(d1,d2);
        cout <<r.feet << " " << r.inches;
    */

}
