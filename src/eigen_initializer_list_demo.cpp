#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
Matrix3d aa {1.2,2.2,3.3, 4.2,2.5,6.3, 7.2,8.2,9.3};
Matrix3d bb {{1.2,2.2,3.3},{4.2,2.5,6.3},{7.2,8.2,9.3}};
//Matrix3d m = Matrix3d::Random();
//Matrix2d m {{1.2,2.2},{3.2,4.5}};
//MatrixXd m {1.2,2.2,3.3, 4.2,2.5,6.3, 7.2,8.2,9.3};
Vector3d m  {1,3,3};
std::cout << m << std::endl;
}

