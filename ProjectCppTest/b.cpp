//#include <iostream>
//#include <functional>
//#include <numeric>
//#include <iterator>
//#include <algorithm>
//using namespace std;
//int increment(int x) {
//	return x+1;
//}
//class Complex {
//public:
//	Complex() {
//		real = 0;
//		imag = 0;
//	}
//	Complex(double r, double i) {
//		real = r;
//		imag = i;
//
//	}
//	Complex operator+(Complex& c);
//	void display();
//private:
//	double real, imag;
//};
//class Shape {
//public:
//	virtual int getArea() = 0;
//	void setWidth(int w) {
//		width = w;
//	}
//	void setHeight(int h) {
//		height = h;
//	}
//
//protected:
//	int width, height;
//	
//
//};
//class Rectangle : public Shape {
//public:
//	int getArea() {
//		return width * height;
//	}
//};
//class Triangle : public Shape
//{
//public:
//	int getArea()
//	{
//		return (width * height) / 2;
//	}
//};
//Complex Complex::operator+(Complex& c)
//{
//	Complex cc;
//	cc.real = real + c.real;
//	cc.imag = imag + c.imag;
//	return cc;
//}
//void Complex::display() {
//	cout << "(" << real << "," << imag << "i)" << endl;
//}
//int main()
//{
//	Complex c1(3, 4), c2(5, -10), c3;
//	c3 = c1 + c2;
//
//	cout << "c1 = ";
//	c1.display();
//	cout << "c2 = ";
//	c2.display();
//
//	cout << "c1 + c2 = ";
//	c3.display();
//
//	Rectangle Rect;
//	Triangle  Tri;
//
//	Rect.setWidth(5);
//	Rect.setHeight(7);
//	//cout << "Total Rectangle area: " << Rect.getArea() << endl;
//
//	Tri.setWidth(5);
//	Tri.setHeight(7);
//	//cout << "Total Triangle area: " << Tri.getArea() << endl;
//
//	int arr[] = { 1,2,3,4,5 };
//
//	int n = sizeof(arr) / sizeof(int);
//
//	transform(arr, arr + n, arr, increment);
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//
//
//
//
//	return 0;
//}