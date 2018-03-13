#include "ComplexNumber.h"
#include <sstream>



ComplexNumber::ComplexNumber(int a, int b)
{
	this->a = a;
	this->b = b;
}

ComplexNumber::ComplexNumber()
{
}

void ComplexNumber::set_real(int a)
{
	this->a = a;
}

void ComplexNumber::set_imaginary(int b)
{
	this->b = b;
}

ComplexNumber::ComplexNumber(ComplexNumber konst, ComplexNumber def)
{
	this->a = konst.a + def.a;
	this->b = konst.b + def.b;
}

std::string ComplexNumber::to_string()
{
	std::stringstream ss;
	ss << a << "+" << b << " i";
	return ss.str();
}