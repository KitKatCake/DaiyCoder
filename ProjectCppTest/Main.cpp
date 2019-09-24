//#include <iostream>
//#include "Distance2.h"
//#include "Distance3.h"
//using namespace std;
//int recursive(int n) {
//	if (n <= 1) 
//		return 1;	
//	else 
//		return recursive(n - 1) * n ;
//}
//int main()
//{
//	
//	Distance2 d1(8, 9);
//
//	Distance2 d2(10, 2);
//
//	Distance2 d3;
//
//	d3 = d1 + d2;
//
//	cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
//
//	Distance3 d31(8, 9);
//
//	Distance3 d32(10, 2);
//
//	Distance3 d33;
//
//	d33 = d31 + d32;
//
//	cout << "\nTotal Feet & Inches: " << d33.feet << "'" << d33.inch;
//
//	float s = 0;
//	float t = 1;
//
//	int n;
//	for (n = 1; n <= 5; n++) {
//		t *= n;
//		s += t;
//	}
//
//	cout << endl;
//
//	cout << s << endl;
//
///*	int val = recursive(5);
//
//	cout << val << endl;
//
//*/
//
//	int sum = 0;
//
//	for (int i = 1; i <=5; i++) {
//	
//		sum += recursive(i);
//	}
//
//	cout << sum << endl;
//
//
//	return 0;
//}