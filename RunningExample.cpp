//
// Created by Daniel Assa on 20/07/2022.
//

#include <iostream>
#include <vector>
#include "Iris.hpp"
#include "IrisReader.hpp"
#include "IrisComp.hpp"
int main() {
    IrisReader irisReader("someflowerdata.csv");
    Iris iris;
    std::vector<Iris> v;
    while(irisReader.getNextIris(iris)) { v.push_back(iris);}
    Iris newIris(1,1,1,1);
    IrisComp* irisComp = DistancesToArray(newIris,v,&eucDistance);
    for(int i=0;i<v.size();i++) {
        std::cout << irisComp[i].getDis() << std:: endl;
    }



}