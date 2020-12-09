#include <lab4/Matrix.hpp>

using namespace std;

Matrix::Matrix(int no_rows, int no_columns)
{
    try
    {
        if(no_rows<1)
        throw 'r';
        if (no_columns<1)
        throw 'c';
        m_no_rows=no_rows;
        m_no_columns=no_columns;
        my_matrix.resize(no_rows);
        for (int i=0 ; i<my_matrix.size() ; i++)
        {
            my_matrix[i].resize(no_columns, 0);
        }
    }

    catch (const char err)
    {
        if (err=='r')
            cout<<"Number of rows must be greater than 0"<<endl;
        if (err=='c')
            cout<<"Number of colums must be greater than 0"<<endl;
    }

}

Matrix::Matrix(int n)
{
    try
    {
        if (n<1)
        throw 'n';
        m_no_rows=n;
        m_no_columns=n;
        my_matrix.resize(n);
        for (int i=0 ; i<my_matrix.size() ; i++)
        {
            my_matrix[i].resize(n, 0);
        }
    }

    catch (const char)
    {
        cout<<"Number of rows and columns must be greater than 0";
    }
}

Matrix::Matrix(string path)
{
    ifstream file (path);
    try 
    {
        if (file.is_open())
        {
            file>>m_no_columns>>m_no_rows;
            if (m_no_columns<1 || m_no_rows<1)
            throw 2;
            my_matrix.resize(m_no_rows);
            if (my_matrix.size()!=m_no_rows)
                throw 3;
            for (int i=0 ; i<my_matrix.size() ; i++)
            {
                my_matrix[i].resize(m_no_columns);
                if (my_matrix[i].size()!=m_no_columns)
                throw 3;
            } 
            for (int i = 0; i < m_no_rows; i++) 
            {
                for (int j = 0; j < m_no_columns; j++) 
                {
                    file >> my_matrix[i][j];
                }
            } 
        }
        else 
        throw 1;
    }
    catch(int err)
    { 
        if (err==1)
        cout<<"File couldn't be open";
        if (err==2)
        cout<<"Read number of rows or columns was smaller";
        if (err==3)
        cout<<"Couldn't create the matrix";
    } 
    file.close();
}

Matrix::~Matrix()
{

}

void Matrix::set(int n, int m, double val)
{
    try
    {
        if(n<1 || n>m_no_rows || m<1 || m<m_no_columns)
        throw 1;
        my_matrix[n][m]=val;
    }

    catch (int err)
    {
        cout<<"Desired number of rows or columns out of range of the Matrix";
    }

}

double Matrix::get(int n, int m)
{
    try
    {
        if(n<1 || n>m_no_rows-1 || m<1 || m>m_no_columns-1)
        throw 1;
        return my_matrix[n][m];
    }

    catch(int err)
    {
        cout<<"Desired number of rows or columns out of range of the Matrix"<<endl;
        return 0;
    }
}

Matrix Matrix::add(Matrix m2)
{
    try
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
    throw 1;
    }
    catch (int)
    {
        cout<<"You can't add these matrices"<<endl;
        exit(1);
    }
}

Matrix Matrix::substract(Matrix m2)
{
    try
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
        throw 1;
    }
    catch(int)
    {
        cout<<"You can't substract these matrices"<<endl;
        exit(1);  
    }
     
}

Matrix Matrix::multiply(Matrix m2){
    Matrix multip(m_no_rows,m2.cols());

    try
    {
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
    throw 1;
    }
    catch(int)
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
    try
    {
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
        }
        else
        throw 1;
    }
    catch (int)
    {
        cout<<"Couldn't open the file"<<endl;
        return;
    }
    file.close();
}

