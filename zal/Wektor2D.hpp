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
      friend Wektor2D operator*(Wektor2D vec_1, Wektor2D vec_2);
};
Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
{
    return Wektor2D{vec_1.x + vec_2.x, vec_1.y + vec_2.y};
};

Wektor2D operator*(Wektor2D vec_1, Wektor2D vec_2)
{
  return Wektor2D{vec_1.x * vec_2.x, vec_1.y * vec_2.y};
};

