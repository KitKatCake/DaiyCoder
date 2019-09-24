#pragma once
class Distance3
{
public:
	int feet, inch;
	Distance3() {
		this->feet = 0;
		this->inch = 0;
	}
	Distance3(int f, int i) {
		this->feet = f;
		this->inch = i;
	}
	friend Distance3 operator+(Distance3& d1, Distance3& d2);
};
Distance3 operator+(Distance3& d1, Distance3& d2) 
{
	
	Distance3 d3;

	d3.feet = d1.feet + d2.feet;
	d3.inch = d1.inch + d2.inch;

	return d3;
}


