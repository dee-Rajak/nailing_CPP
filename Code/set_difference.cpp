#include <bits/stdc++.h>

int main()
{
	int first[] = {0,1,4,6,8};
	int second[] = {2,3,5,6,7,8};
	int n = sizeof(first) / sizeof(first[0]);

	std::vector<int> v2(5);
	std::vector<int>::iterator it, ls;

	std::sort(first, first + 5);
	std::sort(second, second + 5);

	std::cout << "First array :";
	for (int i = 0; i < n; i++)
		std::cout << " " << first[i];
	std::cout << "\n";

	std::cout << "Second array :";
	for (int i = 0; i < n; i++)
		std::cout << " " << second[i];
	std::cout << "\n\n";

	ls = std::set_difference(first, first + 5, second, second + 5, v2.begin());

	std::cout << "Using default comparison, \n";
	std::cout << "The difference has " << (ls - v2.begin()) << " elements :";
	for (it = v2.begin(); it < ls; ++it)
		std::cout << " " << *it;
	std::cout << "\n";

	return 0;
}

