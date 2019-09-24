#include <iostream>
#include <cstdarg>
using namespace std;
//pair<int,int> swap(pair<int,int> p) {
//	p.first = p.first ^ p.second;
//	p.second ^= p.second ^ p.first;
//	p.first = p.first ^ p.second;
//
//	return p;
//}
template <typename U>

void swap(pair<int, int> p) {
	p.first = p.first ^ p.second;
	p.second ^= p.second ^ p.first;
	p.first = p.first ^ p.second;

}
int printMax(int n, ...) {
	int i, max, val;
	va_list vl;
	va_start(vl, n);
	val = va_arg(vl, int);
	for (i = 1; i < n; i++) 
		max = va_arg(vl, int);
		val > max ? val : max;
	
	va_end(vl);

	return max;

}
typedef int (*ptr)(int, int); 
int max(int a, int b) {

	return a > b ? a : b;
}

//int reccursive(int a, ptr) {
//	return a > ptr ? a : ptr;
//
//}
void swap3(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int *, int *);
int main() {


	/*int m = 10;
	int n = 20;
	cout << "交换前两个数: " << endl;
	cout << "m = " << m << " n = " << n << endl;
	//swap<int,int>(m,n);

	//swap2(&m, &n);
	swap3(m, n);
	cout << "交换后两个数: " << endl;
	cout << "m = " << m << " n = " << n << endl;


	int t = 20;

	int* ptr = &t;

	cout << *ptr << endl;

	*/
	[]() {cout << "Hello World!" << endl; }();

	[](string s) {cout << s << endl; }("Hello World!");

	//auto f = [](int a, int b) {return a > b ? a : b; }(20, 45);
	auto f = [](int a, int b,int c) {return a > b ?( a > c ? a : c ):( b > c ? b : c); }(20, 89,72);

	cout << f << endl;



	auto val = max(50, max(40, 45));

	cout << val << endl;

	auto g = printMax(5, 1, 3, 5, 2, 9);

	cout << g << endl;

	return 0;
}

void swap2(int *a, int *b) {

	int temp = *a;
	
	*a = *b;

	*b = temp;

}