#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>

using namespace std;

class Var1 {
public:
	Var1();
	Var1(double);
	Var1(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, t;
};

Var1::Var1() : x(0), y(0), z(0), t(0) {};
Var1::Var1(double _xyz) : x(_xyz), y(_xyz), z(_xyz), t(0) {};
Var1::Var1(double _x, double _y, double _z) : x(_x), y(_y), z(_z), t(0) {};
void Var1::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
};
void Var1::Run(void) {
	this->t =
		((2. * cos(this->x - M_PI / 6.)) / (.5 + sin(this->y) * sin(this->y)))
		*
		(1 + this->z * this->z / (3 - (this->z * this->z) / 5));
	return;
}
void Var1::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: t=" << this->t << endl;
	return;
}


class Var2 {
public:
	Var2();
	Var2(double);
	Var2(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, u;
};
Var2::Var2() : x(0), y(0), z(0), u(0) {};
Var2::Var2(double _xyz) : x(_xyz), y(_xyz), z(_xyz), u(0) {};
Var2::Var2(double _x, double _y, double _z) : x(_x), y(_y), z(_z), u(0) {};
void Var2::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var2::Run(void) {
	this->u =
		(pow((fabs(this->x - this->y)*fabs(this->x - this->y) + 8. + 1.), (1. / 3.))
			/
			(this->x * this->x + 2. + this->y * this->y)
		)
			-
			(
				pow(M_E, fabs(this->x - this->y)) *
				pow((tan(this->z) * tan(this->z) + 1), this->x)
				);
}
void Var2::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: u=" << this->u << endl;
	return;
}


class Var3 {
public:
	Var3();
	Var3(double);
	Var3(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, v;
};
Var3::Var3() : x(0), y(0), z(0), v(0) {};
Var3::Var3(double _xyz) : x(_xyz), y(_xyz), z(_xyz), v(0) {};
Var3::Var3(double _x, double _y, double _z) : x(_x), y(_y), z(_z), v(0) {};
void Var3::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var3::Run(void) {
	this->v =
		((1. + sin(this->x + this->y) * sin(this->x + this->y)) / fabs(this->x - (2 * this->y / (1 + this->x * this->x * this->y * this->y)))) * pow(this->x, fabs(this->y))
		+
		(cos(atan(1. / this->z)) * cos(atan(1. / this->z)));
	return;
}
void Var3::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: v=" << this->v << endl;
	return;
}


class Var4 {
public:
	Var4();
	Var4(double);
	Var4(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, w;
};
Var4::Var4() : x(0), y(0), z(0), w(0) {};
Var4::Var4(double _xyz) : x(_xyz), y(_xyz), z(_xyz), w(0) {};
Var4::Var4(double _x, double _y, double _z) : x(_x), y(_y), z(_z), w(0) {};
void Var4::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var4::Run(void) {
	this->w =
		pow(fabs(cos(this->x) - cos(this->y)), (1 + 2 * sin(this->y) * sin(this->y)))
		*
		(1 + this->z + (this->z * this->z / 2.) + (this->z * this->z * this->z / 3.) + (this->z * this->z * this->z * this->z / 4.));

	return;
}
void Var4::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: w=" << this->w << endl;
	return;
}


class Var5 {
public:
	Var5();
	Var5(double);
	Var5(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, alpha;
};
Var5::Var5() : x(0), y(0), z(0), alpha(0) {};
Var5::Var5(double _xyz) : x(_xyz), y(_xyz), z(_xyz), alpha(0) {};
Var5::Var5(double _x, double _y, double _z) : x(_x), y(_y), z(_z), alpha(0) {};
void Var5::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var5::Run(void) {
	this->alpha =
		(log(pow(this->y, -sqrt(fabs(this->x)))) * (this->x - this->y / 2.))
		+
		(sin(atan(this->z)) * sin(atan(this->z)));
}
void Var5::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: alpha=" << this->alpha << endl;
	return;
}


class Var6 {
public:
	Var6();
	Var6(double);
	Var6(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, beta;
};
Var6::Var6() : x(0), y(0), z(0), beta(0) {};
Var6::Var6(double _xyz) : x(_xyz), y(_xyz), z(_xyz), beta(0) {};
Var6::Var6(double _x, double _y, double _z) : x(_x), y(_y), z(_z), beta(0) {};
void Var6::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var6::Run(void) {
	this->beta =
		sqrt(10 * (pow(this->x, 1. / 3.) + pow(this->x, this->y + 2)))
		*
		(asin(this->z) * asin(this->z) - fabs(this->x - this->y));
}
void Var6::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: beta=" << this->beta << endl;
	return;
}


class Var7 {
public:
	Var7();
	Var7(double);
	Var7(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, gamma;
};
Var7::Var7() : x(0), y(0), z(0), gamma(0) {};
Var7::Var7(double _xyz) : x(_xyz), y(_xyz), z(_xyz), gamma(0) {};
Var7::Var7(double _x, double _y, double _z) : x(_x), y(_y), z(_z), gamma(0) {};
void Var7::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var7::Run(void) {
	this->gamma =
		(5 * atan(this->x))
		-
		(
			.25 * acos(this->x)
			*
			((this->x + this->x * this->x + 3 * fabs(this->x - this->y)) / (this->x * this->x + this->z * fabs(this->x - this->y)))
			);
	return;
}
void Var7::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: gamma=" << this->gamma << endl;
	return;
}


class Var8 {
public:
	Var8();
	Var8(double);
	Var8(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, phi;
};
Var8::Var8() : x(0), y(0), z(0), phi(0) {};
Var8::Var8(double _xyz) : x(_xyz), y(_xyz), z(_xyz), phi(0) {};
Var8::Var8(double _x, double _y, double _z) : x(_x), y(_y), z(_z), phi(0) {};
void Var8::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var8::Run(void) {
	this->phi =
		((pow(M_E, fabs(this->x - this->y)) * pow(fabs(this->x - this->y), this->x + this->y))
			/
			(atan(this->x) + atan(this->z)))
		+
		pow((pow(this->x, 6) + log(this->y) * log(this->y)), 1. / 3.);
	return;
}
void Var8::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: phi=" << this->phi << endl;
	return;
}


class Var9 {
public:
	Var9();
	Var9(double);
	Var9(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, psi;
};
Var9::Var9() : x(0), y(0), z(0), psi(0) {};
Var9::Var9(double _xyz) : x(_xyz), y(_xyz), z(_xyz), psi(0) {};
Var9::Var9(double _x, double _y, double _z) : x(_x), y(_y), z(_z), psi(0) {};
void Var9::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var9::Run(void) {
	this->psi =
		fabs(pow(this->x, this->y / this->x) - pow(this->y / this->x, 1. / 3.))
		+
		((this->y - this->x) * ((cos(this->y) - this->z / (this->y - this->x)) / (1. + pow(this->y - this->x, 2))));
	return;
}
void Var9::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: psi=" << this->psi << endl;
	return;
}


class Var10 {
public:
	Var10();
	Var10(double);
	Var10(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, b;
};
Var10::Var10() : x(0), y(0), z(0), b(0) {};
Var10::Var10(double _xyz) : x(_xyz), y(_xyz), z(_xyz), b(0) {};
Var10::Var10(double _x, double _y, double _z) : x(_x), y(_y), z(_z), b(0) {};
void Var10::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var10::Run() {
	this->b =
		pow(this->y, pow(fabs(this->x), 1. / 3.))
		+
		pow(cos(this->y), 3)
		* (
			(fabs(this->x - this->y) * (1. + (sin(this->z) * sin(this->z)) / sqrt(this->x + this->y)))
			/
			(pow(M_E, fabs(this->x - this->y)) + this->x / 2.)
			);
	return;
}
void Var10::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: b=" << this->b << endl;
	return;
}


class Var11 {
public:
	Var11();
	Var11(double);
	Var11(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, c;
};
Var11::Var11() : x(0), y(0), z(0), c(0) {};
Var11::Var11(double _xyz) : x(_xyz), y(_xyz), z(_xyz), c(0) {};
Var11::Var11(double _x, double _y, double _z) : x(_x), y(_y), z(_z), c(0) {};
void Var11::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var11::Run(void) {
	this->c =
		pow(2, pow(this->y, this->x))
		+
		pow(pow(3, this->x), this->y)
		- (
			(this->y * (atan(this->z) - M_PI / 6.))
			/
			(fabs(x) + 1. / (this->y * this->y + 1.))
			);
	return;
}
void Var11::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: c=" << this->c << endl;
	return;
}


class Var12 {
public:
	Var12();
	Var12(double);
	Var12(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, f;
};
Var12::Var12() : x(0), y(0), z(0), f(0) {};
Var12::Var12(double _xyz) : x(_xyz), y(_xyz), z(_xyz), f(0) {};
Var12::Var12(double _x, double _y, double _z) : x(_x), y(_y), z(_z), f(0) {};
void Var12::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var12::Run(void) {
	this->f =
		pow((this->y + pow(this->x - 1., 1. / 3.)), 1. / 4.)
		/
		(fabs(this->x - this->y) * (sin(this->z) * sin(this->z) + tan(this->z)));
	return;
}
void Var12::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: f=" << this->f << endl;
	return;
}


class Var13 {
public:
	Var13();
	Var13(double);
	Var13(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, g;
};
Var13::Var13() : x(0), y(0), z(0), g(0) {};
Var13::Var13(double _xyz) : x(_xyz), y(_xyz), z(_xyz), g(0) {};
Var13::Var13(double _x, double _y, double _z) : x(_x), y(_y), z(_z), g(0) {};
void Var13::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var13::Run(void) {
	this->g =
		(pow(this->y, this->x + 1.) / ( pow(fabs(this->y - 2.), 1./3.) + 3.) )
		+
		(  (this->x + (this->y / 2.)) / (2 * fabs(this->x + this->y))  )
		*
		pow(this->x + 1., -1. / sin(this->z));
}
void Var13::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: g=" << this->g << endl;
	return;
}


class Var14 {
public:
	Var14();
	Var14(double);
	Var14(double, double, double);
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, h;
};
Var14::Var14() : x(0), y(0), z(0), h(0) {};
Var14::Var14(double _xyz) : x(_xyz), y(_xyz), z(_xyz), h(0) {};
Var14::Var14(double _x, double _y, double _z) : x(_x), y(_y), z(_z), h(0) {};
void Var14::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return;
}
void Var14::Run() {
	this->h =
		(((pow(this->x, this->y + 1.) + pow(M_E, this->y - 1.)) / (1. + this->x * fabs(this->y - tan(this->z))))
			*
			(1. + fabs(this->y - this->x)))
		+
		(pow(fabs(this->y - this->x), 2.) / 2.)
		-
		(pow(fabs(this->y - this->x), 3.) / 3.);
	return;
}
void Var14::Print(void) {
	cout << "Çíà÷åíèÿ ïîëåé êëàññà:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Îòâåò: h=" << this->h << endl;
	return;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// double x = 3.74e-2, y = -0.825, z = 0.16e2;
	double x, y, z;
	
	
	x = 14.26, y = -1.22, z = 3.5e-2;
	cout << endl << "Variant 1" << endl;
	Var1 solution11;
	solution11.Set(x, y, z);
	solution11.Run();
	solution11.Print();
	
	/*
	Var3 solution31;
	solution31.Set(x, y, z);
	solution31.Print();
	solution31.Run();
	solution31.Print();

	Var3* solution32 = &solution31;
	Var3* solution33 = new Var3;
	Var3& solution34 = *solution32;

	solution32->Set(x, y, z);
	solution33->Set(x, y, z);
	solution34.Set(x, y, z);
	solution32->Run();
	solution33->Run();
	solution34.Run();

	cout << "solution2:\t"; solution32->Print(); cout << endl;
	cout << "solution3:\t"; solution33->Print(); cout << endl;
	cout << "solution4:\t"; solution34.Print();  cout << endl;
	*/

	

	/*
	x = -4.5, y = .75e-4, z = .845e2;
	cout << "Variant 2:" << endl;
	Var2 solution21;
	solution21.Set(x, y, z);
	solution21.Run();
	solution21.Print();
	*/

	/*
	x = .4e4, y = -.875, z = .475e-3;
	cout << "Variant 4:" << endl;
	Var4 solution41;
	solution41.Set(x, y, z);
	solution41.Run();
	solution41.Print();
	*/

	/*
	x = -15.246, y = 4.642e-2, z = 20.001e2;
	cout << "Variant 5:" << endl;
	Var5 solution(x, y, z);
	solution.Run();
	solution.Print();
	*/

	/*
	x = 16.55e-3, y = -2.75, z = .15;
	cout << "Variant 6:" << endl;
	Var6* solution = new Var6(x, y, z);
	solution->Run();
	solution->Print();
	*/

	/*
	x = .1722, y = 6.33, z = 3.25e-4;
	cout << "Variant 7:" << endl;
	Var7 solution(0);
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/

	/*
	x = 1.825e2, y = 18.225, z = -3.298e-2;
	cout << "Variant 9:" << endl;
	Var9 solution(x, y, z);
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/

	/*
	x = -2.235e-2, y = 2.23, z = 15.221;
	cout << "Variant 8:" << endl;
	Var8* solution = new Var8(x, y, z);
	solution->Set(x, y, z);
	solution->Run();
	solution->Print();
	*/

	/*
	x = 6.251, y = .827, z = 25.001;
	cout << "Variant 10:" << endl;
	Var10 solution;
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/
	
	/*
	x = 3.251, y = .325, z = .466e-4;
	cout << "Variant 11:" << endl;
	Var11 solution;
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/
	
	/*
	x = 17.421, y = 10.365e-3, z = .828e5;
	cout << "Variant 12:" << endl;
	Var12 solution;
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/
	
	/*
	x = 12.3e-1, y = 15.4, z = .252e3;
	cout << "Variant 13:" << endl;
	Var13 solution;
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/
	
	/*
	x = 2.444, y = .869e-2, z = -.13e3;
	cout << "Variant 14:" << endl;
	Var14 solution;
	solution.Set(x, y, z);
	solution.Run();
	solution.Print();
	*/

	return 0;
}
