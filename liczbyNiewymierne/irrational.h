#ifndef IRRATIONAL_H
#define IRRATIONAL_H


class IRrational
{
private:
    void toSimForm();
public:
    int x,y;
    IRrational(){}
    IRrational(int a, int b) : x(a),y(b){}
};

void operator!= (IRrational& afrac, IRrational& bfrac);
IRrational operator+ (const IRrational& afrac, const IRrational& bfrac);
IRrational operator- (const IRrational& afrac, const IRrational& bfrac);
IRrational operator* (const IRrational& afrac, const IRrational& bfrac);
IRrational operator/ (const IRrational& afrac, const IRrational& bfrac);

#endif // IRRATIONAL_H
