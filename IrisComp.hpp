//
// Created by User on 19/07/2022.
//

#ifndef T1_IRISCOMP_HPP
#define T1_IRISCOMP_HPP

#include "Iris.hpp"
class IrisComp {
private:
    Iris iris;
    double dis;
public:
    IrisComp(const Iris iris, double dis = 0);
    IrisComp();
    bool operator<(const IrisComp& irisComp) const;
    bool operator>(const IrisComp& irisComp) const;
    bool operator<=(const IrisComp& irisComp) const;
    bool operator>=(const IrisComp& irisComp) const;
    bool operator==(const IrisComp& irisComp) const;
    bool operator!=(const IrisComp& irisComp) const;

    const Iris &getIris() const;

    double getDis() const;

};

IrisComp* DistancesToArray(Iris iris,std::vector<Iris> v, std::function<double(const Iris, const Iris)> func);

#endif //T1_IRISCOMP_HPP
