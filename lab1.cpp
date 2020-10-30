#include <iostream>
#include <math.h>
struct Informer
{
    Informer() { std::cout << "Construct inner\n"; };

    ~Informer() { std::cout << "Destruct inner\n"; }
};

struct Wektor2D
{
    Wektor2D(double x_val, double y_val)
    {
        x = x_val;
        y = y_val;
        std::cout << "x=" << x << " "
                  << "y=" << y << "\n";
    }
    ~Wektor2D()
    {
        std::cout << "Destruct "
                  << "x=" << x << " "
                  << "y=" << y << "\n";
    }
    double   x;
    double   y;
    Informer info1;

    double norm() { return sqrt(x * x + y * y); }
};

int main()
{
    Wektor2D dupa1{1, 1};
    Wektor2D dupa2{2, 2};
    Wektor2D dupa3{3, 3};
}