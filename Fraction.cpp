#include "Fraction.hpp"

Fraction::Fraction(int num, int den)
{
	this->num = num;
	this->den = den;
}




Fraction::Fraction(const Fraction& other)
{
	this->num = other.num;
	this->den = other.den;
}


Fraction& Fraction::operator=(const Fraction& other)
{
	if (this != &other)
	{
		this->num = other.num;
		this->den = other.den;
	}
	return *this;
}




void Fraction::SetNumerator(int num)
{
	this->num = num;
}


void Fraction::SetDenominator(int den)
{
	this->den = den;
}




int Fraction::GetNumerator() const
{
	return this->num;
}


int Fraction::GetDenominator() const
{
	return this->den;
}




bool Fraction::operator==(const Fraction& other)
{
	return this->num / this->den == other.num / other.den;
}


bool Fraction::operator!=(const Fraction& other)
{
	return this->num / this->den != other.num / other.den;	
}




Fraction operator+(const Fraction& lsv, const Fraction& rsv)
{
	if (lsv.den == rsv.den)
	{
		Fraction result({ lsv.num + rsv.num }, lsv.den);
		return result;
	}
	else
	{

	}
}


Fraction operator-(const Fraction& lsv, const Fraction& rsv)
{
	// TODO: вставьте здесь оператор return
}


Fraction operator*(const Fraction& lsv, const Fraction& rsv)
{
	// TODO: вставьте здесь оператор return
}


Fraction operator/(const Fraction& lsv, const Fraction& rsv)
{
	// TODO: вставьте здесь оператор return
}
