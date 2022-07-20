#include "KSmallestElements.hpp"
#include <vector>
/**
 * @brief copied from:
 * https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-3-worst-case-linear-time/?ref=rp
 */
// Start copy.

// C++ implementation of worst case linear time algorithm
// to find k'th smallest element
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int partition(IrisComp arr[], int l, int r, int k);

// A simple function to find median of arr[]. This is called
// only for an array of size 5 in this program.
IrisComp& findMedian(IrisComp arr[], int n)
{
//    for(int i=0;i<5;i++) {
//        std::cout<<"DIS IS At Front " << arr[i].getDis() << std::endl;
//    }
	sort(arr, arr+n); // Sort the array
//    for(int i=0;i<5;i++) {
//        std::cout<<"DIS IS At End " << arr[i].getDis() << std::endl;
//    }
	return arr[n/2]; // Return middle element

}

// Returns k'th smallest element in arr[l..r] in worst case
// linear time. ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT
IrisComp& kthSmallest(IrisComp arr[], int l, int r, int k)
{
	// If k is smaller than number of elements in array
	if (k > 0 && k <= r - l + 1)
	{
		int n = r-l+1; // Number of elements in arr[l..r]

		// Divide arr[] in groups of size 5, calculate median
		// of every group and store it in median[] array.
		int i;
        IrisComp median[(n+4)/5]; // There will be floor((n+4)/5) groups;
		for (i=0; i<n/5; i++)
			median[i] = findMedian(arr+l+i*5, 5);
		if (i*5 < n) //For last group with less than 5 elements
		{
			median[i] = findMedian(arr+l+i*5, n%5);
			i++;
		}	

		// Find median of all medians using recursive call.
		// If median[] has only one element, then no need
		// of recursive call
		IrisComp medOfMed = (i == 1)? median[i-1]:
								kthSmallest(median, 0, i-1, i/2);

		// Partition the array around a random element and
		// get position of pivot element in sorted array
		int pos = partition(arr, l, r, medOfMed);

		// If position is same as k
		if (pos-l == k-1)
			return arr[pos];
		if (pos-l > k-1) // If position is more, recur for left
			return kthSmallest(arr, l, pos-1, k);

		// Else recur for right subarray
		return kthSmallest(arr, pos+1, r, k-pos+l-1);
	}

	// If k is more than number of elements in array
    Iris iris = Iris(INT_MAX,INT_MAX,INT_MAX,INT_MAX);
    IrisComp irisMAX = IrisComp(iris,INT_MAX);
	return irisMAX;
}

void swap(IrisComp& a, IrisComp& b)
{
	IrisComp temp = a;
	a = b;
	b = temp;
}

// It searches for x in arr[l..r], and partitions the array
// around x.
int partition(IrisComp arr[], int l, int r, IrisComp x)
{
	// Search for x in arr[l..r] and move it to end
	int i;
	for (i=l; i<r; i++)
		if (arr[i] == x)
		break;
	swap(arr[i], arr[r]);

	// Standard partition algorithm
	i = l;
	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] <= x)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

// End copy.

vector<IrisComp> ArrayOfIris(int kth, IrisComp arr[], int size){
//    for(int i=0;i<5;i++) {
//        std::cout<<"DIS IS At Front " << arr[i].getDis() << std::endl;
//    }
    IrisComp k = kthSmallest(arr,0,size-1,kth);
    vector<IrisComp> kSmallest;
    for (int i = 0; i < size; i++){
        if (arr[i] <= k) {
            kSmallest.push_back(arr[i]);
        }
    }
    return kSmallest;
}
