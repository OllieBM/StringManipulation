#pragma once 

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

std::string Join(const std::vector<std::string>& inputs, const std::string& joiner)
{
	//auto s = std::accumulate(inputs.begin(), inputs.end(), std::string("?"));
	std::string output("");
	/*for (auto i : inputs)
		output.append(inputs)
		output.append(joiner);*/
	std::for_each(inputs.begin(), inputs.end() - 1, [&output, &joiner](std::string s)
		{
			output.append(s);
			output.append(joiner);
		});
	output.append(inputs.back());// add the last

	
	return  output;
}
