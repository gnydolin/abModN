#include <iostream>

int main() {
	setlocale(LC_ALL, "ru-RU");
	long long a{};
	long long b{};
	long long n{};
	long long tmp{};

	std::cout << "Святухин Денис Алексеевич, 02.03.03-АИСа-о20 \n";

	//Entry check
	long long _a{};
	long long _n{};
	while (!a || !n) {
		std::cin >> _a;
		std::cin >> _n;
		if (_a > 0)
			a = _a;
		if (_n < pow(10, 9))
			n = _n;
	}

	//Calculating a
	for (long long i{}; i <= n; i++) {
		tmp = (a * i) % n;
		if (tmp == 1) {
			b = i;
			break;
		}
		else
			b = 0;
	}

	std::cout << b << std::endl;
	system("pause");
	return 0;
}
