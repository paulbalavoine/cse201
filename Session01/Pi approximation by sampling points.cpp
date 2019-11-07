#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

int main()
{
// initialize the random number generator
// (you only need to do this once)
	srand(time(NULL));
	int n;
	int in;

//Preliminary question
	std::cout << "What number of points do you want to sample?" << std::endl;
	std::cin >> n;

//Sample in itself
	for (int i = 0; i < n; i +=1) {
		float x = (float) rand() / RAND_MAX;
		float y = (float) rand() / RAND_MAX;
		if (sqrt(pow(x-0.5, 2) + pow(y-0.5, 2))<=0.5) {
			in += 1;
		}
	}

//Give the results (remember, we are doing this on the circle of center (1/2, 1/2) and of radius 1/2, so the area is pi divided by 4! So I need to multiply my result by 4.

	double pi = (((double) (in))/((double) (n)))*4;
	std::cout << "We find the following approximation of pi :" << pi << std::endl;

}
