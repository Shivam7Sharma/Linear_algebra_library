#include "Linear_Algebra.h"
#include <vector>
#include<iostream>

 namespace Mathlibrary{

std::vector<std::vector<float>> Linear_Algebra::multiply()
{
    //finding the dimensions of A matrix
    int rows1 = mat.size();
    int columns1 = mat[0].size();
    //finding the dimensions of B matrix
    int rows2=mat2.size();
    int columns2 = mat2[0].size();
    //saving the product of AxB in mul matrix
    std::vector<std::vector<float>> mul(rows1, std::vector<float>(columns2, 0));
    //matrix multiplication logic
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns2; j++)
            for (int l = 0; l < rows2; l++)
                mul[i][j] += mat[i][l] * mat2[l][j];

    
    return mul;
}
    //matrix transpose logic
    std::vector<std::vector<float>> Linear_Algebra::transpose()
    {   //for better computation and memory efficiency I should have passed the dimension as const variable & but I didnt have time to do that
        
        int rows1 = mat.size();
        int columns1=mat[0].size();
        std::vector<std::vector<float>> tran(rows1, std::vector<float> (columns1,0));
        for (int i = 0; i < rows1;++i){
            for(int j = 0; j < rows1;++j){
                tran[j][i] = mat[i][j];
            }
        
        }
        return tran;
    }
    //not using but can be used to set the private members of the class. Can change for both A and B
    void Linear_Algebra::setval(std::vector<std::vector<float>> matrix){
        mat=matrix;
        
    }

    //using constructor to set A and B
    Linear_Algebra::Linear_Algebra(std::vector<std::vector<float>> matrix,std::vector<std::vector<float>> matrix2)
    {
        mat = matrix;
        mat2 = matrix2;
    }

    //not using destructor
    //Linear_Algebra::~Linear_Algebra()
    //{
       // mat = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    //}

 }
