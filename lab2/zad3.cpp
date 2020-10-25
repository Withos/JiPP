#include <iostream>

using namespace std;

void zam(int & a, int * b)
{
    int temp;

        temp=a;
        a=*b;
        *b=temp;

}

int main()
{
    int arg1, arg2;
    int *arg2ptr=&arg2;
    cout<<"Podaj pierwszy argument:"<<endl;
    cin>>arg1;
    cout<<endl<<"Podaj drugi argument:"<<endl;
    cin>>arg2;
    zam(arg1, arg2ptr);
    cout<<endl<<"Argumenty po wykonaniu funkcji:"<<endl<<"Argument pierwszy: "<<arg1<<endl<<"Argument drugi: "<<arg2;
    return 0;
}