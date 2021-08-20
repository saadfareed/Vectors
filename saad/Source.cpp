#include <iostream>
#include "VectorND.h"
#include "MatrixMxn.h"
int main() 
{
	VectorND vector(4);
	vector.values_.push_back(8);
	vector.values_.push_back(9);
	vector.values_.push_back(7);
	vector.values_.push_back(3);

	VectorND vector1(4);
	vector1.values_.push_back(4);
	vector1.values_.push_back(7);
	vector1.values_.push_back(89);
	vector1.values_.push_back(99);

	VectorND vector2(4);
	vector2.values_.push_back(15);
	vector2.values_.push_back(19);
	vector2.values_.push_back(17);
	vector2.values_.push_back(1);

	VectorND vector3(4);
	vector3.values_.push_back(7);
	vector3.values_.push_back(5);
	vector3.values_.push_back(2);
	vector3.values_.push_back(3);

	VectorND vector4(4);
	vector4.values_.push_back(56);
	vector4.values_.push_back(64);
	vector4.values_.push_back(77);
	vector4.values_.push_back(83);

	MatrixMxN row(5,4);
	row.rows_.push_back(vector);
	row.rows_.push_back(vector1);
	row.rows_.push_back(vector2);
	row.rows_.push_back(vector3);
	row.rows_.push_back(vector4);

	for(int i=0;i<row.num_m;i++)
	std::cout << row.rows_[i]<< std::endl;
	std::cout << std::endl;
	std::cout <<"*"<< vector << std::endl;
	std::cout << "****************" << std::endl;

	VectorND row_n(4);
	row_n = row * vector;
	std::cout << row_n << std::endl;

	return 0;
}