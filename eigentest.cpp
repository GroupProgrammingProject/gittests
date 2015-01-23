#include <iostream>
#include <Eigen/Dense>
#include <vector>

int main(){
	const int size=2;
	typedef Eigen::Matrix<std::complex<double>, size, size> Matrix;
	Matrix m;
	m(0,0)=3;
	m(1,0)=5;
	m(0,1)=2;
	m(1,1)=m(1,0)-m(0,1);
	std::cout<<m<<std::endl;

	//Vector container class example
	std::vector<int> vect;
	for (int i=0; i<5; i++){vect.push_back(i*3);}
	std::cout<<"The elements in the vector: ";
	for (std::vector<int>::iterator it=vect.begin(); it!=vect.end(); ++it){
		std::cout << *it<<"\t";
	}
}
