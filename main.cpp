#include <iostream>
#include "Linear_Algebra.h"

//this document include test cases

//namespace Mathlibrary{
 int main(){
     std::vector<std::vector<float>> matrix1={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     std::cout << "using the following matrix for test but any MxN matrix will work \n";
         for (int i = 0; i < matrix1.size(); i++)
    {
        for (int j = 0; j < matrix1[i].size(); j++)
        {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }
     // checking if the code works for a 3X3 matrix by mutiplying it by Identity
    
     std::vector<std::vector<float>> matrix2={{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    //checking if the code works for a 3X3 matrix by mutiplying it by another 3X3
     std::vector<std::vector<float>> matrix3={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     std::vector<std::vector<float>> matrix4={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     Mathlibrary::Linear_Algebra matrixAns1(matrix1,matrix2);
     //now to check the sqaure of a matrix
     Mathlibrary::Linear_Algebra matrixAns2(matrix3,matrix4);

     std::vector<std::vector<float>> ans1;
     ans1 = matrixAns1.multiply();

     std::vector<std::vector<float>> ans2;
     ans2 = matrixAns1.transpose();

    //for square of a matrix
     std::vector<std::vector<float>> ans3;
     ans3 = matrixAns2.multiply();
     
     std::vector<std::vector<float>> ans4;
     ans4 = matrixAns2.transpose();
     std::cout << "for multiplication with identity \n";
     // for multiplication with identity
     for (int i = 0; i < ans1.size(); i++)
     {
         for (int j = 0; j < ans1[i].size(); j++)
         {
             std::cout << ans1[i][j] << " ";
         }
         std::cout << std::endl;
    }
    std::cout << "for transpose \n";
    // for transpose
    for (int i = 0; i < ans2.size(); i++)
    {
        for (int j = 0; j < ans2[i].size(); j++)
        {
            std::cout << ans2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "square \n";
    // now to check the square of a matrix

    for (int i = 0; i < ans3.size(); i++)
    {
        for (int j = 0; j < ans3[i].size(); j++)
        {
            std::cout << ans3[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;//
    }