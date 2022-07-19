//
// Created by User on 19/07/2022.
//

#include "Iris.hpp"
#include <cmath>

Iris::Iris(double width, double sepalLength, double sepalWidth, double petalLength)
        : width(width), sepalLength(sepalLength), sepalWidth(sepalWidth), petalLength(petalLength), type(UNKNOWN) {}

Iris::Iris(double width, double sepalLength, double sepalWidth, double petalLength, irisType type)
        : width(width), sepalLength(sepalLength), sepalWidth(sepalWidth), petalLength(petalLength), type(type) {}

//Iris::Iris(const Iris &iris) {
//    this->width = iris.width;
//    this->sepalLength = iris.sepalLength;
//    this->sepalWidth = iris.sepalWidth;
//    this->petalLength = iris.sepalLength;
//    this->type = iris.type;
//}
double Iris::eucDistance(const Iris iris) const {
    return sqrtf(pow((this->width - iris.width), 2) +
                 pow((this->sepalLength - iris.sepalLength), 2) +
                 pow((this->sepalWidth - iris.sepalWidth), 2) +
                 pow((this->petalLength - iris.petalLength), 2));
}

double Iris::chebDistance(const Iris iris) const {
    double m1 = fmax(fabs(this->width - iris.width), fabs(this->sepalLength - iris.sepalLength));
    double m2 = fmax(fabs(this->sepalWidth - iris.sepalWidth), fabs(this->petalLength - iris.petalLength));
    return fmax(m1, m2);
}

double Iris::manDistance(const Iris iris) const {
    return fabs(this->width - iris.width) + fabs(this->sepalLength - iris.sepalLength) +
           fabs(this->sepalWidth - iris.sepalWidth)
           + fabs(this->petalLength - iris.petalLength)
}