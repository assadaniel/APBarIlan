#include "KSmallestElements.hpp"
#include "Iris.hpp"
#include "IrisComp.hpp"
int main(){
    Iris iris(1,1,1,1);
    IrisComp irisComp[5];
    for (int i = 0; i < 5; i++){
        IrisComp temp(iris,i);
        irisComp[i] = temp;
    }
    ArrayOfIris(3,irisComp);
}