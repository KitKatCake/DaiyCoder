//#include <iostream>
//using namespace std;
//class Date; 
//class Time {
//public:
//	Time(int h, int m, int s);
//	//friend void display(Time&);
//	void display(Date &);
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//int sum(int a, int b) {
//	return a + b;
//}
//Time::Time(int h,int m,int s):hour(h),minute(m),sec(s){}
///*void display(Time &t){
//	cout << t.hour << ":"<< t.minute <<":"<< t.sec << endl;
//}*/
//class Date {
//public:
//	Date(int y, int m, int d) {
//		year = y;
//		month = m;
//		day = d;
//	}
//	friend void Time::display(Date&);
//private:
//	int year;
//	int month;
//	int day;
//};
//void Time::display(Date& d) {
//	cout << d.year << "/" << d.month << "/" << d.day << endl;
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//int main()
//{
//
////	exit(0);
//
//
////	int a = 10;
//
////	cout << a << endl;
//
//	//++a;
//
//
//	Time t1(10, 13, 56);
//
//	Date d1(2004, 25, 12);
//
//	//t1.display(d1);
//
//
//
//	//display(it);
//
//	int i, j, m, n;
//
//	i = 8;
//
//	j = 10;
//
//	m = ++i + j++;
//	
//	n = (++i) + (++j) + m;
//
//	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;
//
//	//cout << a << endl;
//
//	cout << sum(10, 20) << endl;
//
//
///*
//for (int i = 1; i <= 100; i++)
//		if (i % 3 == 0 && i % 15 != 0)
//			cout << "Flip" << endl;
//		else if (i % 5 == 0 && i % 15 != 0)
//			cout << "Flop" << endl;
//		else if (i % 15 == 0)
//			cout << "FlipFlop" << endl;
//		else
//			cout << i << endl;
//
//*/
//	
//	
//
//
//
//
//
//	//return 0;
//}