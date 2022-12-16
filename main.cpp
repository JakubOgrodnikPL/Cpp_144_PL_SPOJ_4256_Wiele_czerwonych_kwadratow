#include <iostream>

long long ileCzerwonych(long long x, long long y);
int main()
{
	long long xld, yld, xpg, ypg;

	std::cin >> xld >> yld >> xpg >> ypg;
	std::cout << (ileCzerwonych(xpg, ypg)+ ileCzerwonych(xld, yld)- ileCzerwonych(xpg, yld)- ileCzerwonych(xld, ypg)) << std::endl;

	return 0;
}
long long ileCzerwonych(long long x, long long y)
{
	long long temp;
	(x > y) ? (true) : (temp = x, x = y, y = temp); //aby x by zawsze max;

	if (x < 2 || y == 0) return 0;

	if (y < 2) {
		return (x/2);
	}
	else
	{
		return (((6 + (y / 2 - 1) * 4)/2)*(y/2) + ((x - y+(y%2)) / 2)*y);
	}
}
