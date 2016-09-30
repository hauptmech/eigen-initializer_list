A plugin for Eigen3 to allow the user of C++11 initializer lists.
```c++
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
```


The key line to add to your CMakeLists.txt file is:

	add_definitions(-std=c++11 -DEIGEN_MATRIX_PLUGIN="Matrix_initializer_list.h" -DEIGEN_ARRAY_PLUGIN="Array_initializer_list.h")


LICENSE
=======

    This is free and unencumbered software released into the public domain.

    Anyone is free to copy, modify, publish, use, compile, sell, or
    distribute this software, either in source code form or as a compiled
    binary, for any purpose, commercial or non-commercial, and by any
    means.

    In jurisdictions that recognize copyright laws, the author or authors
    of this software dedicate any and all copyright interest in the
    software to the public domain. We make this dedication for the benefit
    of the public at large and to the detriment of our heirs and
    successors. We intend this dedication to be an overt act of
    relinquishment in perpetuity of all present and future rights to this
    software under copyright law.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.

    For more information, please refer to <http://unlicense.org/>

