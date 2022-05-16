//
// Created by Manuel Hahn on 5/13/22.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H


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

private:
    int bits;
    static const int fraction = 8;
};

std::ostream & operator<<(std::ostream &ostream, const Fixed & instance);


#endif //EX00_FIXED_H
