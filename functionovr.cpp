// function overloading

#include<iostream>
using namespace std;

class func
{
    public:
    void swapping(int a, int b)
    {
       int temp;
       temp = a;
       a = b;
       b = temp;
       cout<<a<<"\t"<<b<<endl;
    }

    void swapping(char a, char b)
    {
       char temp;
       temp = a;
       a = b;
       b = temp;
       cout<<a<<"\t"<<b<<endl;
    }
    
    
};

int main()
{        
    func obj;
    obj.swapping(10,20);
    obj.swapping('f','g');

    return 0;
}        
