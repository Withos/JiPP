#include "lab5/Matrix.hpp"

using namespace std;

int main()
{
    Matrix test1(4, 4);
    Matrix test2(4);
    test1.set(1,1,5);
    test1.set(1,2,3);
    test2.set(1,2,2);
    test2.set(2,1,4);
    cout<<"Macierz 1:"<<endl;
    test1.print();
    cout<<"Macierz 2:"<<endl;
    test2.print();
    Matrix test3=test1+test2;
    cout<<"Macierz 3, bedaca wynikiem dodania macierzy 1 i 2:"<<endl;
    test3.print();
    Matrix test4=test1-test2;
    cout<<"Macierz 4, bedaca wynikiem rwznicy macierzy 1 i 2:"<<endl;
    test4.print();
    Matrix test5=test1*test2;
    cout<<"Macierz 5, bedaca wynikiem pomnozenia macierzy 1 i 2:"<<endl;
    cout<<test5;
    
    cout<<"Drugi wiersz macierzy 3:"<<endl;
    for(int i=0;i<test3.cols();i++)
    {
        cout<<test3[1][i]<<" ";
    }
    cout<<endl;

    cout<<"Do macierzy 3 dodajemy macierz 2 a od macierzy 4 odejmujemy macierz 2, powinno to sprawic ze obie beda rowne macierzy 1"<<endl;
    test3-=test2;
    test4+=test2;

    if(test3!=test4)
    cout<<"Macierze 3 i 4 nie sa rowne"<<endl;
    else
    cout<<"Macierze 3 i 4 sa rowne"<<endl;
    
    if(test3==test1)
    cout<<"Macierze 3 i 1 sa rowne"<<endl;
    else
    cout<<"Macierze 3 i 1 nie sa rowne"<<endl;

    system ("pause");
    return 0;
}