
#ifndef T1_KSmallestElements_HPP
#define T1_KSmallestElements_HPP
#include "IrisComp.hpp"
#include <vector>

int partition(IrisComp arr[], int l, int r, int k);
IrisComp& findMedian(IrisComp arr[], int n);
IrisComp& kthSmallest(IrisComp arr[], int l, int r, int k);
void swap(IrisComp &a, IrisComp &b);
int partition(IrisComp arr[], int l, int r, IrisComp x);
std::vector<IrisComp> ArrayOfIris(int k, IrisComp arr[], int size);


#endif //T1_KSmallestElements_HPP
