# Класс Matrix

#### Требуется реализовать интерфейс:

```c++
class Matrix
{
public:
    Matrix() = default;
    Matrix(int numRows, int numCols);

    void Reset(int numRows, int numCols);
    int& At(int row, int col);
    const int& At(int row, int col) const;
    int GetRows() const;
    int GetCols() const;

    bool operator==(const Matrix& m2);
    bool operator!=(const Matrix& m2);
    Matrix operator+(const Matrix& m2);
};
```

- методы At должны выбрасывать исключение std::out_of_range, если ячейка, которая в него передана выходит за границы матрицы
- если в метод Reset передали число колонок или столбцов равное 0, то оставляем объект в консистентном состоянии, зануляя количество столбцов и количество строк
- если мы пытаемся сложить 2 матрицы разных размеров, то должно выбрасываться исключение std::invalid_argument
