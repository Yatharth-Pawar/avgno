#include<iostream>
using namespace std;
class over{

public:
over(int x,int y,int z)
{
    int a=x+y+z;
    int avg= a/3;
    cout<<"average is : "<<avg;
    
}
over(int x,int y,int z,int w)
{
    int a=x+y+z+w;
    int avg= a/4;
    cout<<"average is : "<<avg;
    
}
over(int x,int y,int z,int w,int v)
{
    int a=x+y+z+w+v;
    int avg= a/5;
    cout<<"average is : "<<avg;
    
}
};
int main()
{
    over obj1(5,6,3);
    over obj2(4,8,1,9);
    over obj3(3,7,8,9,2);
    return 0;
}
