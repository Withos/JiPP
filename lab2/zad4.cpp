#include <iostream>

using namespace std;

int fun(int &a, int &b, int &suma)
{
    suma=a+b;
    return a*b;
}

int main()
{
    
    int arg1, arg2, suma;
    cout<<"Podaj pierwszy argument:"<<endl;
    cin>>arg1;
    cout<<endl<<"Podaj drugi argument:"<<endl;
    cin>>arg2;
    cout<<"Iloczyn: "<< fun(arg1, arg2, suma)<<endl<<"Suma: "<<suma;
    return 0;
}