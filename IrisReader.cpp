//
// Created by Daniel Assa on 20/07/2022.
//

#include "IrisReader.hpp"
#include <sstream>
IrisReader ::IrisReader(const std::string& fileName){
    fin.open(fileName, std::ios::in);
    if(!fin.is_open()) {
        std::cout<< "Could not open the file."<<std::endl;
    }

}
bool IrisReader ::getNextIris(Iris& iris) {
    row.clear(); // clear the vector
    std::string line, word;
    if (getline(fin, line)) {
        std::stringstream s(line);
        while (getline(s, word, ',')) {
            row.push_back(word);
        }
        iris.setFromVector(row);
        return true;
    }
    return false;
}


