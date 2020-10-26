#include <iostream>
#include <cmath>

using namespace std;

int Suma(int l)
{
    int s = 0;
    for(int i = 1; i <=l/2; i++)
    {
        if (l % i == 0)
        {
            s += i;
        }
    }

    return s;
}

int main()
{
    int l1, l2;
    int s1, s2;
    cout<<"Wprowadz dwie liczby calkowite"<<endl;
    cin >> l1 >>l2;

    s1 = Suma(l1);
    s2 = Suma(l2);

    if(s1 == l2 + 1 && s2 == l1 + 1)
    {
        cout<<"Liczby skojarzone";
    }
    else 
    {
        cout<<"Liczby nie skojarzone";
    }
    return 0;
}