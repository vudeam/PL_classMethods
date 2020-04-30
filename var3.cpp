#include <iostream>
#include <math.h>

using namespace std;

class Var3 {
public:
	Var3();
	void Set(double, double, double);
	void Run(void);
	void Print(void);
private:
	double x, y, z, v;
};
Var3::Var3() : x(0), y(0), z(0), v(0) {};        // запись поле(значение) инициализирует 
                                                 // поле "имя_поля" значением в скобках.
												 // это сокращает запись и делает конструктор "чище"
void Var3::Set(double _x, double _y, double _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
}
void Var3::Run(void) {
	this->v =
		((1. + sin(this->x + this->y) * sin(this->x + this->y)) / fabs(this->x - (2 * this->y / (1 + this->x * this->x * this->y * this->y)))) * pow(this->x, fabs(this->y))
		+
		(cos(atan(1. / this->z)) * cos(atan(1. / this->z)));
}
void Var3::Print(void) {
	cout << "Значения полей класса:" << endl <<
		"x=" << this->x << "\ty=" << this->y << "\tz=" << this->z << endl <<
		"Ответ: v=" << this->v << endl;
}

int main() {
	double x = 0.0374, y = -0.825, z = 16;
	
	Var3 Result;
	Result.Set(x, y, z);
	cout << "Result:" << endl;
	Result.Run();
	Result.Print();

	Var3* pResult = &Result;  // указатель на Var3 — адрес объекта Result
	pResult->Set(0, 0, 0);    // обнуляем
	cout << endl << "pResult:" << endl;
	pResult->Set(x, y, z);    // устанавливаем значение полей x, y и z
	pResult->Run();           // вычисляем значение v заново
	pResult->Print();

	Var3* nResult = new Var3; // динамически созданный объект класса Var3
	nResult->Set(x, y, z);
	cout << endl << endl << "nResult:" << endl;
	nResult->Run();
	nResult->Print();

	Var3& sResult = *pResult;   // ссылка на то, куда указывает pResult — на объект класса Var3
	sResult.Set(0, 0, 0);
	sResult.Set(x, y, z);
	cout << endl << endl << "sResult:" << endl;
	sResult.Run();
	sResult.Print();
	

	return 0;
}