#include <iostream> 
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
	random_device r;
	default_random_engine e1(r());
	uniform_int_distribution<int> uniform_dist(1, 6);
	int los = uniform_dist(e1);

	return los;
}
