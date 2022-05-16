//
// Created by Manuel Hahn on 5/13/22.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <iostream>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed & other);
    Fixed(int i);
    Fixed(float f);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int bits);
    int toInt() const;
    float toFloat() const;

    Fixed & operator=(const Fixed &other);

    bool    operator>(const Fixed &right) const;
    bool    operator<(const Fixed &right) const;
    bool    operator>=(const Fixed &right) const;
    bool    operator<=(const Fixed &right) const;
    bool    operator==(const Fixed &right) const;
    bool    operator!=(const Fixed &right) const;

    Fixed   operator+(const Fixed &right) const;
    Fixed   operator-(const Fixed &right) const;
    Fixed   operator*(const Fixed &right) const;
    Fixed   operator/(const Fixed &right) const;

    Fixed   operator++();
    Fixed   operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    int bits;
    static const int fraction = 8;
};

std::ostream & operator<<(std::ostream &ostream, const Fixed & instance);


#endif //EX00_FIXED_H
