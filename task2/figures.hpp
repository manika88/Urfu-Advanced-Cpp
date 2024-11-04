#pragma once

#include <memory>
#include <stdexcept>

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

