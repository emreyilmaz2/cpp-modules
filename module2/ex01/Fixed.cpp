#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed(const int num) // convert integer to fixed point number
{
    this->value = num << bits; //number * 2^8
    std::cout << "int to fixed" << this->value << std::endl;
    std::cout << "INT constructor called" << std::endl;
}

Fixed::Fixed(const float num){
    this->value = roundf(num * (1 << bits)); //roundf(number * 2^8)
    std::cout << "float to fixed" << this->value << std::endl;
    std::cout << "FLOAT constructor called" << std::endl;
}

//fixed point to float
float Fixed::toFloat(void) const{
    return ((float)value / (1 << bits)); // (number / 2^8)
}

//fixed point to int
int Fixed::toInt(void) const{
    return (value >> bits);// (number / 2^8)
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(Fixed const &other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other){
	os << other.toFloat();
	return os;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
