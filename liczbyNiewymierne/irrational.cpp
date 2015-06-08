#include "irrational.h"

void operator!= (IRrational& afrac, IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x;
    temp.y=afrac.y;
    afrac.x*=bfrac.y;
    afrac.y*=bfrac.y;
    bfrac.x*=temp.y;
    bfrac.y*=temp.y;
}

IRrational operator+ (const IRrational& afrac, const IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x+bfrac.x;
    temp.y=afrac.y;
    return temp;
}

IRrational operator- (const IRrational& afrac, const IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x-bfrac.x;
    temp.y=afrac.y;
    return temp;
}

IRrational operator* (const IRrational& afrac, const IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x*bfrac.x;
    temp.y=afrac.y*bfrac.y;
    return temp;
}

IRrational operator* (const IRrational& afrac, const IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x*bfrac.x;
    temp.y=afrac.y*bfrac.y;
    return temp;
}

IRrational operator/ (const IRrational& afrac, const IRrational& bfrac){
    IRrational temp;
    temp.x=afrac.x*bfrac.y;
    temp.y=afrac.y*bfrac.x;
    return temp;
}

void toSimForm(){

}
