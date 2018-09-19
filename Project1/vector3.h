#ifndef _VECTOR3_H_
#define _VECTOR3_H_
#include <math.h>

using namespace std;

template<class type> 
class vec3 
{	
private:
	
	type x, y, z;
public:

	vec3(){}

	vec3(type &x, type &y, type &z) : x(x),y(y),z(z){}

	vec3(vec3 &vec) : x(vec), y(vec), z(vec) {}

	vec3 operator+(const vec3 &vect) const
	{
		return vec3 (x + vect.x, y + vect.y, z + vect.z);
	}

	vec3 operator-(const vec3 &vect) const
	{
		return vec3 (x - vect.x, y - vect.y, z - vect.z);
	}

	vec3 operator+=(const vec3 &vect)
	{
		x += vect.x;
		y += vect.y;
		z += vect.z;
		return *this;
		
	}

	vec3 operator-=(vec3 const &vect)
	{
		x -= vect.x;
		y -= vect.y;
		z -= vect.z;
		return *this;
	}

	vec3 operator=(vec3 const &vect)
	{
		x = vect.x;
		y = vect.y;
		z = vect.z;
		return *this;
	}

	bool operator==(vec3 const &vect) const
	{
		return (x == vect.x && y == vect.y && z == vect.z);
	}

	vec3 normalize() const
	{
		type magnitude = sqrt((x * x) + (y * y) + (z * z));
		return vec3 (x/magnitude, y/magnitude, z/magnitude);

	}

	vec3 zero()
	{
		x = 0u;
		y = 0u;
		z = 0u;
		return *this;;
	}

	bool is_zero() const
	{
		return (x == 0 && y == 0 && z == 0);
		
	}

	type distance_to(vec3 const &vect) const
	{
		type distance = sqrt(((x-vect.x) * (x - vect.x)) + ((y - vect.y) * (y - vect.y)) + ((z - vect.z) * (z - vect.z)));
		return distance;
	}

};

#endif
