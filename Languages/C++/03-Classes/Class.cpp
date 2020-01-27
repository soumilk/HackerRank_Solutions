/** here i am solving another problem of hackerrank */

#include<iostream>
using namespace std;

class student
{   
    int a ;
    int b;
    char c[51];
    char d[51];

    public:
    void get_age()
    {cin >> a;}
    void get_first_name()
    {cin>>c;}
    void get_last_name()
    {cin>> d;}
    void get_standard()
    {cin>>b;}

    void set_age()
    {cout<< a<<endl;}
    void set_first_name()
    {cout<<c<<endl;}
    void set_last_name()
    {cout<< d<<", ";}
    void set_standard()
    {cout<<b<<endl;}

    void all()
    {cout<<"\n" <<a<<","<<c<<","<<d<<","<<b<<endl; }
};
int main()
{
    student s ;
    s.get_age();
    s.get_first_name();
    s.get_last_name();
    s.get_standard();

    s.set_age();
    s.set_last_name();
    s.set_first_name();

    s.set_standard();
    s.all();

    return 0;

}
