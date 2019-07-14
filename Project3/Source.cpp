#include"Point.h"
#include"Point.cpp"
//          Class definition

double Point::get_x() const
{
	return x;
}
double Point::get_y() const
{
	return y;
}
void Point::set_x(double x)
{
	this->x = x;
}
void Point::set_y(double y)
{
	this->y = y;
}
//			Constructors:
//Point::Point()
//{
//	x = y = double();	//значение по умолчанию для double.
//	cout << "DefaultConstruct" << this << endl;
//}
Point::Point(double x , double y)
{
	this->x = x;
	this->y = y;
	cout << "Constructor:\t" << this << endl;
}
Point::Point(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	cout << "CopyConstructor:" << this << endl;
}
Point::~Point()
{
	cout << "Destructor:\t" << this << endl;
}

//			Operators:
Point& Point::operator=(const Point& other)
{
	this->x = other.x;
	this->y = other.y;
	cout << "CopyAssignment: " << this << endl;
	return *this;
}

Point& Point::operator+=(const Point& other)
{
	this->x += other.x;
	this->y += other.y;
	return *this;
}

//			Increment/Decrement:
Point& Point::operator++()
{
	//Prefix increment
	this->x++;
	this->y++;
	return *this;
}
Point Point::operator++(int)
{
	//Postfix increment:
	Point temp = *this;
	this->x++;
	this->y++;
	return temp;
}

//			Methods:
double Point::distance(const Point& other)
{
	double x_distance = this->x - other.x;	//Вычисляем расстояние до точки по оси 'x'
	double y_distance = this->y - other.y;	//Вычисляем расстояние до точки по оси 'y'
	double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
	//sqrt - Square Root.
	return distance;
}

void Point::print(bool from_derived ) const
{
	cout << x << "\t" << y;
	if (from_derived)cout << "\t";
	else cout << "\n";	//Если метод вызывается НЕ из дочернего класса - переходим на новую строку.
}



Point operator+(const Point& left, const Point& right)
{
	Point temp(left.get_x() + right.get_x(), left.get_y() + right.get_y());

	/*temp.x = left.x + right.x;
	temp.y = left.y + right.y;*/

	/*temp.set_x(left.get_x() + right.get_x());
	temp.set_y(left.get_y() + right.get_y());*/
	return temp;

	//return Point(left.get_x() + right.get_x(), left.get_y() + right.get_y());
}

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
	return os << obj.get_x() << "\t" << obj.get_y();
}

std::istream& operator>>(std::istream& is, Point& obj)
{
	double x, y;
	is >> x >> y;
	obj.set_x(x);
	obj.set_y(y);
	return is;
}

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
	return distance;
}

class Point3D :public Point
{
	double z;
public:
	double get_z() const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
	void print()
	{
		Point::print(true);
		cout << z << endl;
	}
};

