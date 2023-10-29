class Wektor2D
{
    public:

	Wektor2D() {};

	Wektor2D(double a, double b)
	{
		x = a;
		y = b;
	}
	void setX(double a)
	{
		x = a;
	}

	double getX() { return x; }

	void setY(double b)
	{
		y = b;
	}

	double getY() { return y; }

	Wektor2D operator+( Wektor2D A) {
		return Wektor2D(x + A.x, y + A.y);
	}

	double operator*( Wektor2D A) {
		return x * A.x + y * A.y;
	}
	

private:

	double x;
	double y;

};
