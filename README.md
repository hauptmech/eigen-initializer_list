A plugin for Eigen3 to allow the user of C++11 initializer lists.

	#include <iostream>
	#include <Eigen/Dense>

	using namespace Eigen;

	int main()
	{
		// Init a fixed size 3x3 matrix
		Matrix3d m3 {{1.2,2.2,3.3},{4.2,2.5,6.3},{7.2,8.2,9.3}};
		std::cout << "\nm3:\n" << m3 << std::endl;


		// Initialize a variable length Matrix to 2x2
		MatrixXd mY {{1.2,2.2},{3.2,4.5}};
		std::cout << "\nmY:\n" << mY << std::endl;

		// Initialize a variable length Matrix (Vector) to 9x1
		// 2D Matrices are initialized column-wise
		MatrixXd mX {1.2,2.2,3.3, 4.2,2.5,6.3, 7.2,8.2,9.3};
		std::cout << "\nmX:\n" << mX << std::endl;

		// Init a 3 element vector
		Vector3d v3  {1,3,3};
		std::cout << "\nv3:\n" << v3 << std::endl;
	}



The key line to add to your CMakeLists.txt file is:

	add_definitions(-std=c++11 -DEIGEN_MATRIX_PLUGIN="Matrix_initializer_list.h")


