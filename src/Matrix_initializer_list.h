/* Author: hauptmech <hauptmech@gmail.com>, Nov 2013 */

#include <initializer_list>


/** Constructs a matrix from a C++11 initializer_list

  MatrixXd a {1,2,3,4} //4x1 matrix
  VectorXd b {6,5,8,6} // 4 element vector
  Vector3d c {1,2,3}

  The constructor will have an assertion failure if a fixed size vector or
  matrix given a initializer list of the wrong size.

 **/
EIGEN_STRONG_INLINE Matrix(std::initializer_list<double > initlist) : Base()
{

  Base::_check_template_params();
  int size = initlist.size();

  if (base().size() == 0) { //Empty matrix, gotta resize it
    this->resize(size,1 );
  }

  int initializer_list_size = initlist.size();
  int Matrix_size = base().size();
  eigen_assert(initializer_list_size == Matrix_size);

  if (initlist.size() == base().size()){
    int i = 0;
    for (auto x: initlist){
       coeffRef(i)=Scalar(x);
       i++;
    }
  }
}

/** Constructs a matrix from a C++11 initializer_list

  MatrixXd a {1,2,3,4} //4x1 matrix
  VectorXd b {6,5,8,6} // 4 element vector
  Vector3d c {1,2,3}

  The constructor will have an assertion failure if a fixed size vector or
  matrix given a initializer list of the wrong size.

 **/
EIGEN_STRONG_INLINE Matrix(std::initializer_list<std::initializer_list<double> > initlist) : Base()
{
  Base::_check_template_params();
  int rows = initlist.size();
  int cols = initlist.begin()->size();

  if (base().size() == 0) { //Empty matrix, gotta resize it
    this->resize(rows, cols);
  }

  int initializer_list_size = rows*cols;
  int Matrix_size = base().size();
  eigen_assert(initializer_list_size == Matrix_size);

  if (rows*cols == base().size()){
    int i = 0;
    for (auto x: initlist){
      int j=0;
      for (auto y: x){
        coeffRef(rows*j+i)=Scalar(y);
        j++;
      }
      i++;
    }
  }
}
