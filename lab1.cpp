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
    Wektor2D(double x_val, double y_val)
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

    void setX(double x_val) { x = x_val; };
    void setY(double y_val) { y = y_val; };
    void getX() { std::cout << x; };
    void getY() { std::cout << y; };

    double norm() { return sqrt(x * x + y * y); }
};

int main()
{
    Wektor2D dupa1{1, 1};
    dupa1.setX(5);
}