#include <iostream>
#include <vector>

namespace Mathlibrary{
//using vector in the standard library becuase it is computationally efficient
//for memory efficiency we can use pass by reference but I didn't have time to do that
class Linear_Algebra
{
private:
    //main variable Matrix A in AxB
    std::vector<std::vector<float>> mat;
    //matrix B in AxB 
    std::vector<std::vector<float>> mat2;

public:
    Linear_Algebra(std::vector<std::vector<float>> matrix, std::vector<std::vector<float>> matrix2);
    //~Linear_Algebra(); Was destructor
    //not being used in main.cpp
    void setval(std::vector<std::vector<float>> matrix);
    //to multiply the matrices
    std::vector<std::vector<float>> multiply();
    //to find the transpose of a matrix
    std::vector<std::vector<float>> transpose();
};
}