#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    int a ;

    int func1(){
        cout<< "Func 1 "<<endl;
    }

};

class Der : public Base{

    public:
    int b ;

    int Func2(){
        cout<< "Func 2  "<<endl;
    }

};



int main()
{
    Der d1 ;
    d1.b = 12;
    d1.Func2();
    cout<< " d1 address == "<< &d1 <<endl;

    Base* bptr = &d1;
    
    
    cout <<"bptr pointing to ->" << bptr<<endl;
    cout << "bptr ka address " << &bptr<<endl;

    Base b3 ;
    b3.a  =90;



    Der* dptr = &b3;
    
    return 0;
}