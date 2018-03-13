#pragma once
#pragma once
#include <string>


class ComplexNumber
{
private:
	int a;
	int b;

public:
	ComplexNumber(int a, int b);
	ComplexNumber();
	void set_real(int a);
	void set_imaginary(int b);
	ComplexNumber(ComplexNumber, ComplexNumber);
	std::string to_string();
};

