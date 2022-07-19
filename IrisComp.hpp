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
    IrisComp(Iris iris, double dis);
    bool operator<(const IrisComp& irisComp) const;
    bool operator>(const IrisComp& irisComp) const;
    bool operator<=(const IrisComp& irisComp) const;
    bool operator>=(const IrisComp& irisComp) const;
    bool operator==(const IrisComp& irisComp) const;
    bool operator!=(const IrisComp& irisComp) const;
};
#endif //T1_IRISCOMP_HPP
