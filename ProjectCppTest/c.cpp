//#include <iostream>
//#include <cstring>
//using namespace std;
//class Point {
//private:
//	int x, y;
//public:
//	Point(int x1, int y1) {
//		x = x1;
//		y = y1;
//	}
//	Point(const Point& p) {
//		x = p.x;
//		y = p.y;
//	}
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//class Base {
//public:
//	virtual ~Base() = 0;
//};
//Base::~Base() {
//	cout << "Pure virtual destructor is called";
//}
//class Derived : public Base{
//public:
//	~Derived()
//	{
//		cout << "~Derived() is executed\n";
//	}
//};
//class Distance {
//public:
//	int feet, inch;
//	Distance(int feet, int inch) {
//		this->feet = feet;
//		this->inch = inch;
//	}
//	void operator-() {
//		feet--;
//		inch--;
//		cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
//	}
//};
///*class Str {
//private:
//	char* s;
//	int size;
//public:
//	Str(const char* str) {
//		size = strlen(str);
//		s = new char[size + 1];
//		strcpy(s, str);
//
//	}
//	Str(const Str& old_) {
//		size = s.size;
//		s = new char[size + 1];
//		strcpy(s)
//	}
//};
//*/
//int main()
//{
//	/*Point p1(10, 15);
//	Point p2 = p1;
//
//	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
//	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
//	*/
//	Base* b = new Derived();
//	delete b;
//
//	Distance d1(8, 9);
//
//	-d1;
//
//
//
//
//	return 0;
//}