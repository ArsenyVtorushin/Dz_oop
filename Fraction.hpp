#ifndef FRACTION_HPP
#define FRACTION_HPP

class Fraction
{
public:
	Fraction() = default;
	Fraction(int num, int den);

	Fraction(const Fraction& other);
	Fraction& operator=(const Fraction& other);

	void SetNumerator(int num);
	void SetDenominator(int den);

	int GetNumerator()const;
	int GetDenominator()const;

	bool operator==(const Fraction& other);
	bool operator!=(const Fraction& other);

	friend Fraction operator + (const Fraction& lsv, const Fraction& rsv);
	friend Fraction operator - (const Fraction& lsv, const Fraction& rsv);
	friend Fraction operator * (const Fraction& lsv, const Fraction& rsv);
	friend Fraction operator / (const Fraction& lsv, const Fraction& rsv);

private:
	int num;
	int den;
};

#endif // !FRACTION_HPP
