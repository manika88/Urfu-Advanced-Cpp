# Полиморфизм и наследование

#### Требуется реализовать интерфейс:

```c++
enum class FigureType
{
    TRIANGLE,
    CIRCLE,
    RECTANGLE,
};

class Figure {
public:
    virtual FigureType Type() const = 0;
    virtual double Perimeter() const = 0;
    virtual double Area() const = 0;
};

class Rect : public Figure
{
};

class Triangle : public Figure
{
};

class Circle : public Figure
{
};

std::unique_ptr<Figure> make_figure(FigureType type, double a, double b = 0, double c = 0);

class WrongTriangle : public std::invalid_argument
{
};

class LessThanZeroParam : public std::invalid_argument
{
};
```

- для подсчёта площади использовать число пи, равное 3.14
- в функции `make_figure` параметры a, b, c для треугольника соответствуют сторонам треугольника,
параметр a соответствует радиусу для круга, параметры a и b соответствуют длине и высоте соответственно
для прямоугольника
- если треугольник не существует, то нужно выбросить исключение WrongTriangle
- если в функцию make_figure приходят отрицательные числа, то выбросить исключение LessThanZeroParam
