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
		Fraction result;
		result.den = lsv.den * rsv.den;
		result.num = lsv.num * rsv.den + rsv.num * lsv.den;
		return result;
	}
}


Fraction operator-(const Fraction& lsv, const Fraction& rsv)
{
	if (lsv.den == rsv.den)
	{
		Fraction result({ lsv.num + rsv.num }, lsv.den);
		return result;
	}
	else
	{
		Fraction result;
		result.den = lsv.den * rsv.den;
		result.num = lsv.num * rsv.den - rsv.num * lsv.den;
		return result;
	}
}


Fraction operator*(const Fraction& lsv, const Fraction& rsv)
{
	Fraction result;
	result.num = { lsv.num * rsv.num };
	result.den = { lsv.den * rsv.den };
	return result;
}


Fraction operator/(const Fraction& lsv, const Fraction& rsv)
{
	Fraction result;
	result.num = { lsv.num * rsv.den };
	result.den = { lsv.den * rsv.num };
	return result;
}




std::ostream& operator<<(std::ostream& out, const Fraction& obj)
{
	return out << obj.GetNumerator() << '/' << obj.GetDenominator();
}

std::istream& operator>>(std::istream& in, const Fraction& obj)
{
	int num, den;
	in >> num >> den;
}
