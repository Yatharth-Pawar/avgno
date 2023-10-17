#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int b=0;
    for(int i=0;i<5;i++)
        {
          cin>>a[i];  
        }
    for(int i=0;i<5;i++)
        {
            b+=a[i];
        }
    int c=b/5;
    cout<<"average is : "<<c<<endl;
}
