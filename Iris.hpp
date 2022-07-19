//
// Created by User on 19/07/2022.
//

#ifndef T1_IRIS_HPP
#define T1_IRIS_HPP
enum irisType {setosa, virginica, versicolor, UNKNOWN};
class Iris {
private:
    double width;
    double sepalLength;
    double sepalWidth;
    double petalLength;
    irisType type;
public:
    Iris(double width, double  sepalLength, double sepalWidth, double petalLength);
    Iris(double width, double  sepalLength, double sepalWidth, double petalLength, irisType type);
//    Iris(const Iris& iris);
//    Iris& operator=(const Iris& iris);
//    Iris(const Iris&& iris);
//    Iris& operator=(Iris&& iris);
//    ~Iris();
//The class only has primitive types has fields therefore an implementation for the DCtor is not needed.
    double eucDistance(const Iris iris) const;
    double chebDistance(const Iris iris) const;
    double manDistance(const Iris iris) const;

    double getWidth() const;

    double getSepalLength() const;

    double getSepalWidth() const;

    double getPetalLength() const;

    irisType getType() const;
};

#endif //T1_IRIS_HPP
