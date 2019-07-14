#include"Point.h"
void main()
{

#ifdef ENCAPSULATION
	int a = 2;
	Point A;
	A.set_x(2);
	A.set_y(3);
	//cout << A.get_x() << "\t" << A.get_y() << endl;
	A.print();

	Point* pA = &A;
	//cout << pA->get_x() << "\t" << pA->get_y() << endl;
	//cout << (*pA).get_x() << "\t" << (*pA).get_y() << endl;
	pA->print();

	Point3D B;
	B.set_x(4);
	B.set_y(5);
	B.set_z(6);
	cout << B.get_x() << "\t"
		<< B.get_y() << "\t"
		<< B.get_z() << endl;
	B.print();
#endif // ENCAPSULATION

#ifdef CONSTRUCTORS
	int a;	//Объявляется переменная без начального значения.
	Point A;//Создается объект без начального значения. 
			//Здесь вызывается конструктор по умолчанию, 
			//и инициализирует объект значением по умолчанию.
	A.print();
	Point B(2, 3);
	B.print();
	Point C = 5;
	C.print();
	Point D(5);
	D.print();
	cout << "\n-----------------------------------\n";
	//Point E = D;	//CopyConstructor
	B.print();
	cout << A.distance(B) << endl;
	cout << distance(A, B) << endl;
	cout << "\n-----------------------------------\n";
	A = B;
#endif

#ifdef ARITHMETIC_OPERATORS_CHECK
	int a = 2;
	int b = 3;
	cout << a + b << endl;

	Point A(2, 3);
	A.print();
	Point B(4, 5);
	B.print();
	Point C = A + B;
	C.print();

	A += B;
	A.print();
	++A;
	A.print();
#endif // ARITHMETIC_OPERATORS_CHECK

	Point A(2, 3);
	Point B = A++;
	A.print();
	B.print();

	cout << "Input coordinates: ";
	//cin >> A;
	//cout << A << endl;

}