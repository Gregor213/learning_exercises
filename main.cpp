#include <iostream>

using namespace std;

int main(void)
{
    int a,b,suma=0;
    cout<<"Podaj a:";
    cin>>a;
    cout<<"Podaj b:";
    cin>>b;
    for (int i=a;i<=b;i++)
    {
        suma+=i;
    }
    cout<<"Suma to "<<suma<<endl;
}