//
// Created by Manuel Hahn on 5/13/22.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H


class Fixed {
public:
    Fixed();
    Fixed(const Fixed & other);
    ~Fixed();

private:
    int bits;
    static const int fraction = 8;
};


#endif //EX00_FIXED_H
