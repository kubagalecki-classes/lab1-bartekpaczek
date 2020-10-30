#include <iostream>
#include <math.h>
struct Wektor2D
{
    double x;
    double y;

    double norm() { return sqrt(x * x + y * y); }
};

int main()
{
    Wektor2D dupa;
    dupa.x = 2;
    dupa.y = 2;
    std::cout << dupa.norm() << std::endl;
}