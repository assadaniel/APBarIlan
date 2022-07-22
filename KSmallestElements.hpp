
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
IrisComp* DistancesToArray(const Iris& iris,std::vector<Iris> v, std::function<double(const Iris, const Iris)>& func);
irisType mostFrequentType(const std::vector<IrisComp>& v);
irisType determineType(int kth,IrisComp arr[],int size);
irisType typeFromIrises(const Iris& iris, const std::vector<Iris>& irisVector, int kth,
                        std::function<double(const Iris, const Iris)> distanceFunction);
#endif //T1_KSmallestElements_HPP
