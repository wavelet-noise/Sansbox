#include "Vector.h"

Color4::Color4()
{
	r = g = b = a = 0;
}

Color4::Color4(float r_, float g_, float b_, float a_)
{
	r = r_; g = g_; b = b_; a = a_;
}

Color4::Color4(int r_, int g_, int b_, int a_)
{
	r = clamp(r_, 0, 255)/255.0; g = clamp(g_, 0, 255)/255.0; b = clamp(b_, 0, 255)/255.0; a = clamp(a_, 0, 255)/255.0;
}

inline int Color4::clamp(int a, int min, int max){
	return a > max ? max : a < min ? min : a;
}

Color4::~Color4()
{

}

Color4 Color4::Red(1.0F,0.0F,0.0F,1.0F);

Color4 Color4::White(1.0F,1.0F,1.0F,1.0F);


Vector2::Vector2()
{
	x = y = 0;
}

Vector2::Vector2(float a, float b)
{
	x = a; y = b;
}

Vector2::Vector2(float a)
{
	x = y = a;
}

Vector2::~Vector2()
{

}


Vector3::Vector3()
{
	x = y = z = 0;
}

Vector3::Vector3(float a, float b, float c)
{
	x = a; y = b; z = c;
}

Vector3::Vector3(float a)
{
	x = y = z = a;
}

Vector3::~Vector3()
{

}