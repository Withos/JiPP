#ifndef __Matrix__
#define __Matrix__

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <cmath>

using std::vector;
using namespace std;

class Matrix
{
    private:
        int m_no_rows;
        int m_no_columns;
        vector<vector<double> > my_matrix;
    public:
        Matrix(int no_rows, int no_colums);
        Matrix(int n);
        Matrix(std::string path);
        ~Matrix();
        void set(int n, int m, double val);
        double get(int n, int m);
        Matrix operator+(Matrix m2);
        Matrix operator-(Matrix m2);
        Matrix operator*(Matrix m2);
        friend ostream &operator<<(ostream &output, const Matrix &m2);
        bool operator==(Matrix m2);
        bool operator!=(Matrix m2);
        void operator-=(Matrix m2);
        void operator+=(Matrix m2);
        vector<double> operator[](int x);
        int cols();
        int rows();
        void print() const;
        void store(std::string filename, std::string path);
};
#endif