#include <Linear_Algebra.h>

#include <vector>
namespace Mathlibrary{

    std::vector<std::vector<float>> Linear_Algebra::multiply(std::vector<std::vector<float>> matrix){
        
        
        int rows1 = mat.size();
        int columns1=mat[0].size();
        //int rows2=matrix.size();
        int columns2=matrix[0].size();
        //return mul=mat*matrix
        std::vector<std::vector<float>> mul(rows1, std::vector<float> (columns2,0));
        for (int i = 1; i <= rows1; ++i){
            for (int j = 1; j <= columns1;++j){
                for (int k = 1; k <= columns1;++k){
                    mul[i][j] = (mul[i][j]) + (mat[i][j] * matrix[k][j]);
        return mul;
                }
            }
        }
    }
    std::vector<std::vector<float>> Linear_Algebra::transpose()
    {   //for better computation and memory efficiency I should have passed the dimension as const variable & but I didnt have time to do that
        
        int rows1 = mat.size();
        int columns1=mat[0].size();
        std::vector<std::vector<float>> tran(rows1, std::vector<float> (columns1,0));
        for (int i = 1; i <= rows1;++i){
            for(int j = 1; j <= rows1;++j){
                tran[j][i] = mat[i][j];
            }
        return tran;
        }
    }

    void Linear_Algebra::setval(std::vector<std::vector<float>> matrix){
        matrix = mat;
    }

    Linear_Algebra::Linear_Algebra(std::vector<std::vector<float>> matrix)
    {
        mat = matrix;
    }

    Linear_Algebra::~Linear_Algebra()
    {
        mat = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    }
}
