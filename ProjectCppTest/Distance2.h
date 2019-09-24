#pragma once
class Distance2
{
public:
	int feet, inch;
	Distance2() {
		this->feet = 0;
		this->inch = 0;
	}
	Distance2(int f, int i) {
		this->feet = f;
		this->inch = i;
	}
	Distance2 operator+(Distance2& d)
	{
		Distance2 dd;
		dd.feet = d.feet + this->feet;
		dd.inch = d.inch + this->inch;

		return dd;

	}
};

