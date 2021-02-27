#ifndef VEC3_HPP
#define VEC3_HPP

#include <cmath>

class Vec3 {
    public:
        double x, y, z;

        Vec3(double, double, double);
        ~Vec3();

        double magnitude();
        Vec3 normalized();
};

// Comapring
bool operator == (const Vec3 & first, const Vec3 & second);

// Adding
Vec3 operator + (const Vec3 & first, const Vec3 & second);
Vec3 operator += (Vec3 & first, const Vec3 & second);

// Subtracting
Vec3 operator - (const Vec3 & first, const Vec3 & second);
Vec3 operator -= (Vec3 & first, const Vec3 & second);

// Multiplying
Vec3 operator * (const Vec3 & first, const float second);
Vec3 operator *= (Vec3 & first, const float second);
Vec3 operator * (const float second, const Vec3 & first);

// Dividing
Vec3 operator / (const Vec3 & first, const float second);
Vec3 operator /= (Vec3 & first, const float second);

// Other
double distance(Vec3 first, Vec3 second);

#endif