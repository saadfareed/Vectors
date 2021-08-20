#pragma once
#include <iostream>
#include <vector>
class VectorND 
{
public:
	std::vector<int> values_; 
	int num_n;

	VectorND(const int& _number)
	{
		num_n = _number;
	}
	VectorND operator+(const VectorND& input) {
		VectorND vec_N(num_n);
		for (int i = 0; i < num_n; i++)
		{
			vec_N.values_.push_back(this->values_[i] + input.values_[i]);
		}
		return vec_N;
	}
	int operator*(const VectorND& input) {
		int ans = 0;
		for (int i = 0; i < num_n; i++)
		{
			ans += this->values_[i] * input.values_[i];
		}
		return ans;
	}
};

std::ostream& operator<<(std::ostream& os, const VectorND& vec)
{
	for (int i = 0; i < vec.num_n; i++)
		os << vec.values_[i] << " " ;
	return os;
}