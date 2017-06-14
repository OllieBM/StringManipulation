#pragma once


#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

std::vector<std::string> Split(std::string input, const std::string& delimiter)
{
	std::vector<std::string> ret; 

	auto it = input.begin();
	auto nextIt = it;
	while ((nextIt = std::search(it, input.end(), delimiter.begin(), delimiter.end())) != input.end())
	{
		ret.push_back({ it, nextIt });
		it = nextIt + delimiter.size();
	}
	ret.push_back({ it, input.end()});

	return ret;
}
