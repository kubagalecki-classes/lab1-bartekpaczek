#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class Informer
{
public:
    // Informer() { std::cout << "Construct inner\n"; };

    //~Informer() { std::cout << "Destruct inner\n"; }
};

class Wektor2D
{
private:
    double   x;
    double   y;

public:
    Wektor2D(double x_val = 0, double y_val = 0)
    {
        setX(x_val);
        setY(y_val);
    }

    void   setX(double x_val) { x = x_val; };
    void   setY(double y_val) { y = y_val; };
    double getX()
    {
        return x;
    };
    double getY()
    {
        return y;
    };
    friend Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2);
    friend double operator*(Wektor2D vec_1, Wektor2D vec_2);
};
Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
{
    return Wektor2D{vec_1.x + vec_2.x, vec_1.y + vec_2.y};
};

double operator*(Wektor2D vec_1, Wektor2D vec_2)
{
  return double {vec_1.x * vec_2.x + vec_1.y * vec_2.y};
}
int main()
{
Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter
double x1 = v1.getX();   // getter
double y1 = v1.getY();   // getter
 
Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne
 
Wektor2D sum = v1 + v2; // dodawanie wektorów
 
double prod = v1 * v2; // iloczyn skalarny

return 0;
};