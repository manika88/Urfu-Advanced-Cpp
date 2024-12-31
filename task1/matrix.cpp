#include "matrix.hpp"

#include <stdexcept>

Matrix::Matrix(int numRows, int numCols)
{
    Reset(numRows, numCols);
}

void Matrix::Reset(int numRows, int numCols)
{
    if(numRows==0 || numCols==0)
    { 
        numRows=numCols=0;
    }
}

int& Matrix::At(int row, int col)
{
    if(row<0 || row>numRows || col<0 || col<numCols)
    {
        trow std::out_of_range;
    }
}

const int& Matrix::At(int row, int col) const
{
     if(row<0 || row>numRows || col<0 || col<numCols)
    {
        trow std::out_of_range;
    }
}

int Matrix::GetRows() const
{
    return row;
}

int Matrix::GetCols() const
{
    return col;
}

bool Matrix::operator==(const Matrix& m2)
{
    return rows == m2.rows && cols == m2.cols && data == m2.data;
}

bool Matrix::operator!=(const Matrix& m2)
{
    return !(*this == m2);
}

Matrix Matrix::operator+(const Matrix& m2)
{
    if (row != m2.rows || col != m2.cols)
    {
        throw std::invalid_argument;
    }
}
