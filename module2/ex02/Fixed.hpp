#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    std::string name;
    static const int bits = 8;
public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed(const int num); // int to fixed point
    Fixed(const float num);   // float to fixed point
    Fixed &operator=(Fixed const &other);
    ~Fixed();

    Fixed operator++(int); //a++
    Fixed &operator++();   //++a
    Fixed operator--(int); //a--
    Fixed &operator--();   //--a 

    bool operator>(const Fixed &temp) const; // bu üye fonksiyonları const olmalı
    bool operator>=(const Fixed &temp) const;// çünkü alınan degerde değişiklik yapmayacak bu fonksiyonlar
    bool operator<(const Fixed &temp) const; // sadece karşılaştırma için kullanılıcak
    bool operator<=(const Fixed &temp) const;
    bool operator!=(const Fixed &temp) const;
    bool operator==(const Fixed &temp) const;
    Fixed operator+(const Fixed &temp) const; // Bu fonksiyonlar da parametre olarak aldığı değişkenlerin
    Fixed operator-(const Fixed &temp) const; // değerlerini değiştirmeyecek sadece işlemi yapıp geri döndürecek
    Fixed operator*(const Fixed &temp) const;
    Fixed operator/(const Fixed &temp) const;

    static Fixed &min(Fixed &num1, Fixed &num2);
    static const Fixed &min(const Fixed &num1, const Fixed &num2);
    static Fixed &max(Fixed &num1, Fixed &num2);
    static const Fixed &max(const Fixed &num1, const Fixed &num2);

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif