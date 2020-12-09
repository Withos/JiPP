#include <lab4/Matrix.hpp>

using namespace std;

int main()
{
    /*Matrix test1(4, 4);
    Matrix test2(4);
    cout<<"Dwie macierze 4x4 zainicjowane zerami:"<<endl;
    test1.print();
    test2.print();
    cout<<"Ilosc wierszy w macierzy 1: "<<test1.rows()<<endl<<"Ilosc kolumn w macierzy 1: "<<test1.cols()<<endl;
    test1.set(1,1,5);
    test1.set(1,2,3);
    test2.set(1,2,2);
    test2.set(2,1,4);
    cout<<"Macierze 1 i 2 po ustawieniu kilku elementow:"<<endl;
    test1.print();
    test2.print();
    cout<<"Element [1][1] macierzy 1: "<<test1.get(1,1)<<endl;
    Matrix test3=test1.add(test2);
    cout<<"Macierz 3, bedaca wynikiem dodania macierzy 1 i 2:"<<endl;
    test3.print();
    Matrix test4=test1.substract(test2);
    cout<<"Macierz 4, bedaca wynikiem rwznicy macierzy 1 i 2:"<<endl;
    test4.print();
    Matrix test5=test1.multiply(test2);
    cout<<"Macierz 5, bedaca wynikiem pomnozenia macierzy 1 i 2:"<<endl;
    test5.print();
    test5.store("test.txt","./");
    Matrix test6("./test.txt");
    cout<<"Macierz 6, bedaca wynikiem zapisu i odczytu z pliku macierzy 5:"<<endl;
    test6.print();
    system ("pause");*/
    int x,y;
    cout<<"Number of rows and columns:";
    cin>>x>>y;
    Matrix a(x,y);
    system ("pause");
    return 0;
}