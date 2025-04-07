#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = f.getRawBits();

}

Fixed& Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->fixed = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "Int constructor called" << std::endl;
    this->fixed = int_num << bit_fixed;
}

Fixed::Fixed(const float flo_num)
{
    std::cout << "Float constructor called" << std::endl;
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