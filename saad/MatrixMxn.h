#pragma once
#include "VectorND.h"
class MatrixMxN // to MatrixMxN
{
public:
	int num_m,num_n;
	std::vector<VectorND> rows_;

	MatrixMxN(const int & _num_m, const int & _num_n)
	{
		num_m = _num_m;
		num_n = _num_n;
	}

	VectorND operator*(const VectorND& rhs)
	{
		VectorND ans(num_m);
			for (int i = 0; i < num_m; i++)
			{
				ans.values_.push_back(rows_[i] * rhs);
			}
		return ans;
	}
};
