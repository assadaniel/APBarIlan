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
IrisComp* DistancesToArray(Iris iris,std::vector<Iris> v, std::function<double(const Iris, const Iris)> func) {
    size_t n = v.size();
    IrisComp *irisComps = new IrisComp[n];
    for (int i = 0; i < n; i++) {
        double d = func(iris,v[i]);
        irisComps[i] = IrisComp(v[i],d);
    }
    return irisComps;
}

