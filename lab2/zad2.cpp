#include <iostream>

using namespace std;

void zam(int & x, int & y)
{
    int temp;

        temp=x;
        x=y;
        y=temp;

}

int main()
{
    int arg1, arg2;
    cout<<"Podaj pierwszy argument:"<<endl;
    cin>>arg1;
    cout<<endl<<"Podaj drugi argument:"<<endl;
    cin>>arg2;
    zam(arg1, arg2);
    cout<<endl<<"Argumenty po wykonaniu funkcji:"<<endl<<"Argument pierwszy: "<<arg1<<endl<<"Argument drugi: "<<arg2;
    return 0;
}