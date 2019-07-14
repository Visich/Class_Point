#pragma once
#include<iostream>
using namespace std;
//#define ENCAPSULATION
//#define CONSTRUCTORS
//#define ARITHMETIC_OPERATORS_CHECK

//using namespace std;
using std::cin;
using std::cout;
using std::endl;

class Point
{
	double x;
	double y;
public:
	//       Class declaration

	double get_x() const;
	double get_y() const;
	void set_x(double x);
	void set_y(double y);
	//			Constructors:
	//Point();
	Point(double x = 0, double y = 0);
	Point(const Point& other);
	~Point();
	//			Operators:
	Point& operator=(const Point& other);
	Point& operator+=(const Point& other);
	//			Increment/Decrement:
	Point& operator++();
	Point operator++(int);
	//			Methods:
	double distance(const Point& other);
	void print(bool from_derived = false) const;
	//friend Point operator+(const Point& left, const Point& right);
};