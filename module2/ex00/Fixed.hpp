#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &fixed);
    Fixed &operator=(Fixed const &other);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif