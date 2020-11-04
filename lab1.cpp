#include <iostream>
#include <math.h>
class Informer
{
public:
    Informer() { std::cout << "Construct inner\n"; };

    ~Informer() { std::cout << "Destruct inner\n"; }
};

class Wektor2D
{
private:
    double   x;
    double   y;
    Informer info1;

public:
    Wektor2D(double x_val = 0, double y_val = 0)
    {
        setX(x_val);
        setY(y_val);
        std::cout << "x=" << x << " "
                  << "y=" << y << "\n";
    }
    ~Wektor2D()
    {
        std::cout << "Destruct "
                  << "x=" << x << " "
                  << "y=" << y << "\n";
    }

    void   setX(double x_val) { x = x_val; };
    void   setY(double y_val) { y = y_val; };
    double getX()
    {
        std::cout << x;
        return x;
    };
    double getY()
    {
        std::cout << y;
        return y;
    };

    double norm() { return sqrt(x * x + y * y); }
};
Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
{
    Wektor2D vec_result{vec_1.getX() + vec_2.getX(), vec_1.getY() + vec_2.getY()};
};
int main()
{
    Wektor2D dupa1{1, 1};
    Wektor2D dupa2{2, 2};
    Wektor2D result;
    result = dupa1 + dupa2;
}