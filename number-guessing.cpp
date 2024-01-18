#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int numForGuess, playersNum;

	while (true) {
		numForGuess = rand() % 1000;
		cout << "Я загадал число! Угадай какое :)\n";
		while (true) {
			cout << "Введите число: ";
			cin >> playersNum;
			if (playersNum > numForGuess) {
				cout << "Слишком много, бери меньше\n";
			}
			else if (playersNum < numForGuess) {
				cout << "Слишком мало, бери больше\n";
			}
			else {
				cout << "Угадал, поздравляю!\n";
				system("pause");
				system("cls");
				break;
			}
		}
	}
	return 0;
}


