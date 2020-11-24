#include <lab4/Matrix.hpp>

using namespace std;

Matrix::Matrix(int no_rows, int no_columns)
{
    m_no_rows=no_rows;
    m_no_columns=no_columns;
    my_matrix.resize(no_rows);
    for (int i=0 ; i<my_matrix.size() ; i++)
    {
        my_matrix[i].resize(no_columns, 0);
    }
}

Matrix::Matrix(int n)
{
    m_no_rows=n;
    m_no_columns=n;
    my_matrix.resize(n);
    for (int i=0 ; i<my_matrix.size() ; i++)
    {
        my_matrix[i].resize(n, 0);
    }
}

Matrix::Matrix(string path)
{
    ifstream file (path);
    if (file.is_open())
    {
        file>>m_no_columns>>m_no_rows;
        my_matrix.resize(m_no_rows);
        for (int i=0 ; i<my_matrix.size() ; i++)
        {
            my_matrix[i].resize(m_no_columns);
        } 
        for (int i = 0; i < m_no_rows; i++) 
        {
            for (int j = 0; j < m_no_columns; j++) 
            {
                file >> my_matrix[i][j];
            }
        } 
    } 
    file.close();
}

Matrix::~Matrix()
{

}

void Matrix::set(int n, int m, double val)
{
    my_matrix[n][m]=val;
}

double Matrix::get(int n, int m)
{
    return my_matrix[n][m];
}

Matrix Matrix::add(Matrix m2)
{
    if (m_no_rows==m2.rows() && m_no_columns==m2.cols())
    {
    Matrix sum(m_no_rows, this->m_no_columns);
    for (int i=0 ; i<m_no_rows ; i++)
    {
        for (int j = 0 ; j<m_no_columns ; j++)
        {
            sum.my_matrix[i][j]=this->my_matrix[i][j]+m2.get(i,j); 
        }
    }
    return sum;
    }
    else
    {
        cout<<"You can't add these matrices"<<endl;
        exit(1);
    }
}

Matrix Matrix::substract(Matrix m2)
{
     if (this->m_no_rows==m2.rows() && this->m_no_columns==m2.cols())
     {
    Matrix difference(m_no_rows, m_no_columns);
    for (int i=0 ; i<m_no_rows ; i++)
    {
        for (int j = 0 ; j<m_no_columns ; j++)
        {
            difference.my_matrix[i][j]=this->my_matrix[i][j]-m2.get(i,j);  
        }
    }
    return difference;
    }
    else
    {
        cout<<"You can't substract these matrices"<<endl;
        exit(1);    
    }
     
}

Matrix Matrix::multiply(Matrix m2){
    Matrix multip(m_no_rows,m2.cols());
    if(m_no_columns == m2.rows())
    {
        int i,j,k;
        double temp = 0.0;
        for (i = 0; i < m_no_rows; i++)
        {
            for (j = 0; j < m2.cols(); j++)
            {
                temp = 0.0;
                for (k = 0; k < m_no_columns; k++)
                {
                    temp += my_matrix[i][k] * m2.get(k,j);
                }
                multip.my_matrix[i][j] = temp;
            }
        }
        return multip;
    }
    else
    {
        cout<<"You can't multiply these matrices"<<endl;
        exit (1);
    }
}

int Matrix::cols()
{
    return m_no_columns;
}

int Matrix::rows()
{
    return m_no_rows;
}

void Matrix::print() const
{
    for (int i = 0; i < m_no_rows; i++) 
    {
        for (int j = 0; j < m_no_columns; j++) 
        {
            cout<<"["<<my_matrix[i][j]<<"]\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Matrix::store(string filename, string path)
{
    ofstream file;
    file.open (path+filename);
    if (file.is_open())
    {
    file << m_no_columns << " " << m_no_rows <<"\n"; 
        for (int i = 0; i < m_no_rows; i++) 
        {
            for (int j = 0; j < m_no_columns; j++) 
            {
                file << my_matrix[i][j]<< " ";
            }
            file <<"\n";
        }
    file.close();
    }
}

