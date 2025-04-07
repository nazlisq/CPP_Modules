#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{

}

Fixed::Fixed(const Fixed &f)
{
    this->fixed = f.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &f)
{
    if (this != &f)
        this->fixed = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits(void)const
{
    return this->fixed;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed = raw;
}

Fixed::Fixed(const int int_num)
{
    this->fixed = int_num << bit_fixed; 
}

Fixed::Fixed(const float flo_num)
{
    this->fixed = roundf(flo_num * (1 << bit_fixed));
}

float   Fixed::toFloat(void)const
{
    return((float)getRawBits() / (1 << bit_fixed));
}

int Fixed::toInt(void)const
{
    return(fixed / (1 << bit_fixed));
}

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
    stream << fixed.toFloat();
    return stream;
}

Fixed Fixed::operator+(const Fixed &f)const
{
    return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f)const
{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f)const
{
    return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f)const
{
    return Fixed(this->toFloat() / f.toFloat());
}

bool    Fixed::operator==(const Fixed &f)const
{
    return (fixed == f.fixed);
}

bool    Fixed::operator!=(const Fixed &f)const
{
    return (fixed != f.fixed);
}

bool    Fixed::operator>(const Fixed &f)const
{
    return (fixed > f.fixed);
}

bool    Fixed::operator<(const Fixed &f)const
{
    return (fixed < f.fixed);
}

bool    Fixed::operator>=(const Fixed &f)const
{
    return (fixed >= f.fixed);
}

bool    Fixed::operator<=(const Fixed &f)const
{
    return (fixed <= f.fixed);
}

Fixed& Fixed::operator++(void)
{
    this->fixed++;
    return (*this);
}

Fixed& Fixed::operator--(void)
{
    this->fixed--;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed a = this->toFloat();
    (++this->fixed);
    return a;
}

Fixed Fixed::operator--(int)
{
    Fixed a = this->toFloat();
    (++this->fixed);
    return a;
}

const   Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

const   Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}