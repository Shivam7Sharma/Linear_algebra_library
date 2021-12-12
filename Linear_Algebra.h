
#include <iostream>
#include <vector>


namespace Mathlibrary{


class Linear_Algebra
{
private:
    std::vector<std::vector<float>> mat;

public:
    Linear_Algebra(std::vector<std::vector<float>> matrix);
    ~Linear_Algebra();
    void setval(std::vector<std::vector<float>> matrix);
    std::vector<std::vector<float>> multiply(std::vector<std::vector<float>> matrix);
    std::vector<std::vector<float>> transpose();
};
}
