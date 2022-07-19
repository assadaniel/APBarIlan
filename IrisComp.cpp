//
// Created by User on 19/07/2022.
//

#include "IrisComp.hpp"
IrisComp ::IrisComp(Iris iris, double dis) : iris(iris), dis(dis){};
bool IrisComp ::operator!=(const IrisComp &irisComp) const {return this->dis != irisComp.dis;}
bool IrisComp ::operator<=(const IrisComp &irisComp) const {return this->dis <= irisComp.dis;}
bool IrisComp ::operator>=(const IrisComp &irisComp) const {return this->dis >= irisComp.dis;}
bool IrisComp ::operator==(const IrisComp &irisComp) const {return this->dis == irisComp.dis;}
bool IrisComp ::operator<(const IrisComp &irisComp) const {return this->dis < irisComp.dis;}
bool IrisComp ::operator>(const IrisComp &irisComp) const {return this->dis > irisComp.dis;}