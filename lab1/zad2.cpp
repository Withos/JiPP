#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string ciag(argv[1]);
    int dl=ciag.size();
    bool x=true;
    for (int i=0;i<(dl/2);i++)
    {
        if(ciag[i]!=ciag[dl-i-1])
        {
            x=false;
            break;
        }

    }
    if(x==true)
    {
        cout<<"Ciag jest palindromem";
    }
    else
    {
        cout<<"Ciag nie jest palindromem";

    }
}