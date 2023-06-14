#include"Main.h"
// Методи дій зі складом:
void AddContainer(int& Stored) // Завантажити контейнер
{
	if (Stored < 30)
		Stored += 1;
}
bool RemoveContainer(int& Stored) // Відвантажити контейнер
{
	if (Stored > 1) {
		Stored -= 1;
		return true;
	}
	return false;

}
int main()
{
	setlocale(LC_ALL, "ukr");

	// Атрибути складу:
	string Storage = "Склад";
	string Material = "Цегляний";
	int Stored = 20;
	int MaxStored = 30;




	cout << Storage << " " << Material << endl;
	cout << "Кiлькiсть контейнерiв:\t" << Stored << endl;
	cout << "Максимальна кiлькiсть контейнерiв:\t" << MaxStored << endl;

	cout << "Додати контейнер " << endl;
	AddContainer(Stored);
	cout << "Кiлькiсть контейнерiв:\t"
		<< Stored << endl;






}
