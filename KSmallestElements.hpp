
#ifndef T1_KSmallestElements_HPP
#define T1_KSmallestElements_HPP
#include "IrisComp.hpp"

class KSmallestElements {
private:
    int partition(IrisComp arr[], int l, int r, int k);
    IrisComp findMedian(IrisComp arr[], int n);
    IrisComp kthSmallest(IrisComp arr[], int l, int r, int k);
    void swap(IrisComp *a, IrisComp *b);
    int partition(IrisComp arr[], int l, int r, IrisComp x);
public:
    vector<IrisComp> ArrayOfIris(IrisComp k, IrisComp arr[]);
};

#endif //T1_KSmallestElements_HPP
