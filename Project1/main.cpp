#include <iostream>
#include "vector3.h"

int main()
{
	vec3<int> v1(1,2,3);
	vec3<int> v2(1, 1, 1);


	v1.is_zero();
	v2.is_zero();
	system("pause");
	return 0;
}