#include <iostream>
using namespace std;
class Point
{
	double x;
	double y;

public:
	double get_x(void)const
	{
		return x;
	}
	double get_y(void)const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}


	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
};

double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	return sqrt(x_distance * x_distance + y_distance * y_distance);
}

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef STRUCT_POINT;
	int a;
	Point A;

	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;
	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif//STRUCT_POIINT

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << "A:\t" << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << "B:\t" << B.get_x() << "\t" << B.get_y() << endl;

	cout << "���������� �� ����� 'A' �� ����� 'B':\t" << A.distance(B) << endl;
	cout << "���������� �� ����� 'B' �� ����� 'A':\t" << B.distance(A) << endl;
	cout << "���������� ����� 'A' � 'B':\t" << distance(A, B) << endl;
	cout << "���������� ����� 'B' � 'A':\t" << distance(B, A) << endl;
}
