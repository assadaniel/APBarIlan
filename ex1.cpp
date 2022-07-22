//
// Created by Daniel Assa on 20/07/2022.
//

#include <iostream>
#include <vector>
#include "Iris.hpp"
#include "IrisReader.hpp"
#include "IrisComp.hpp"
#include "KSmallestElements.hpp"

int main(int argc, char **argv) {
    if (argc <= 1) {
        std::cout << "argument k must be entered" << std::endl;
        return 0;
    }
    int k = std::stoi(argv[1]);
    std::cout<<k<<std::endl;
    //Create classified Iris vector
    IrisReader classifiedIrisReader("classified.csv");
    Iris cIris;
    std::vector<Iris> classifiedIrises;
    while (classifiedIrisReader.getNextIris(cIris)) { classifiedIrises.push_back(cIris); }
    //Create Unclassified Iris vector
    IrisReader unclassifiedIrisReader("unclassified.csv");
    Iris uIris;
    std::vector<Iris> unclassifiedIrises;
    while (unclassifiedIrisReader.getNextIris(uIris)) { unclassifiedIrises.push_back(uIris); }
    //Create Streams
    std::fstream eucFout("euclidean_output.csv", std::ios::out | std::ios::app);
    std::fstream chebFout("chebyshev_output.csv", std::ios::out | std::ios::app);
    std::fstream manFout("manhattan_output.csv", std::ios::out | std::ios::app);
    for (const Iris& unclassifiedIris: unclassifiedIrises) {
        eucFout << enumArr[typeFromIrises(unclassifiedIris, classifiedIrises, k, eucDistance)]
        << std::endl;
        chebFout << enumArr[typeFromIrises(unclassifiedIris, classifiedIrises, k, chebDistance)]
                 << std::endl;
        manFout << enumArr[typeFromIrises(unclassifiedIris, classifiedIrises, k, manDistance)]
                << std::endl;
    }


    return 0;
}