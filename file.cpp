#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>

static const char rnum[] = "0123456789" "qwertyuiopasdfghjklzxcvbnm" "QWERTYUIOPASDFGHJKLZXCVBNM" "\!\@\#\$\%\^\&\*\(\)";
int staticLength = sizeof(rnum) - 1;
std::string RandomTitle;

char GetRandom() {
	return rnum[rand() % staticLength];
}



int main() {
	srand(time(0));
	const char* finalxd{};
	int xd = 0;
	std::cin >> xd;
	for (unsigned int i = 0; i < xd; ++i) {

		RandomTitle += GetRandom();

		finalxd = RandomTitle.c_str();
	}

	std::cout << finalxd;

}
