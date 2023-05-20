            #ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed(const int num); // int to fixed point
    Fixed(const float num);   // float to fixed point
    Fixed &operator=(Fixed const &other);
    ~Fixed();

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif