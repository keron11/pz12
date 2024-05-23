#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long x = 2;
	float num = 8.5, num1 = 5, num2 = 20, den, Y;

	_asm {
		finit; Ініціалізація FPU(FPU - арифметичний співпроцесор)
		fld num1; Завантаження num1 у стек FPU
		fimul x; Множення num1 на x
		fimul x; Множення попереднього результату на x
		fsub num; Віднімання num від результату
		fstp den; Збереження результату у змінну den і витягування зі стеку
		fld num2; Завантаження num2 у стек FPU
		fimul x; Множення num2 на x
		fdiv den; Ділення результату на den
		fstp Y; Збереження результату у змінну Y і витягування зі стеку
	}

	cout << "Y = " << Y << endl;

}
