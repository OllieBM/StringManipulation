include "Split.h"
include "Join.h"

int main()
{
	std::string input("Hello,World,!,");

	auto s = Split(input, ",");
	for (auto i : s)
	printf("%s\n", i.c_str());


	printf("%s\n", Join(s, "?").c_str());

	return 0;
}
