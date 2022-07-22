//
// Created by User on 19/07/2022.
//

#include "IrisComp.hpp"
IrisComp ::IrisComp(const Iris iris, double dis) : iris(iris), dis(dis){}
IrisComp ::IrisComp() : dis(0) {}
bool IrisComp ::operator!=(const IrisComp &irisComp) const {return this->dis != irisComp.dis;}
bool IrisComp ::operator<=(const IrisComp &irisComp) const {return this->dis <= irisComp.dis;}
bool IrisComp ::operator>=(const IrisComp &irisComp) const {return this->dis >= irisComp.dis;}
bool IrisComp ::operator==(const IrisComp &irisComp) const {return this->dis == irisComp.dis;}
bool IrisComp ::operator<(const IrisComp &irisComp) const {return this->dis < irisComp.dis;}
bool IrisComp ::operator>(const IrisComp &irisComp) const {return this->dis > irisComp.dis;}

const Iris &IrisComp::getIris() const {
    return iris;
}

double IrisComp::getDis() const {
    return dis;
}


