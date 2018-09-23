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

	vec3(const type &x, const type &y, const type &z) : x(x),y(y),z(z){}

	vec3(const vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}

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
		x += vect.x; y += vect.y; z += vect.z;
		return *this;
		
	}

	vec3 operator-=(const vec3 &vect)
	{
		x -= vect.x; y -= vect.y; z -= vect.z;
		return *this;
	}

	vec3 operator=(const vec3 &vect)
	{
		x = vect.x; y = vect.y; z = vect.z;
		return *this;
	}

	bool operator==(const vec3 &vect) const
	{
		return (x == vect.x && y == vect.y && z == vect.z);
	}

	vec3 normalized() const
	{
		type magnitude = sqrt((x * x) + (y * y) + (z * z));
		return vec3 (x/magnitude, y/magnitude, z/magnitude);

	}

	vec3 normalize()
	{
		type magnitude = sqrt((x * x) + (y * y) + (z * z));
		x = x / magnitude; y = y / magnitude; z = z / magnitude;
		return vec3 *this;

	}

	vec3 zero()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
		return *this;
	}

	bool is_zero() const
	{
		return (x == 0.0 && y == 0.0 && z == 0.0);
		
	}

	type distance_to(const vec3 &vect) const
	{
		return sqrt(((x-vect.x) * (x - vect.x)) + ((y - vect.y) * (y - vect.y)) + ((z - vect.z) * (z - vect.z)));
	}

};

#endif
