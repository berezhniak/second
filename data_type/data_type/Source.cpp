#include"Main.h"
// ������ �� � �������:
void AddContainer(int& Stored) // ����������� ���������
{
	if (Stored < 30)
		Stored += 1;
}
bool RemoveContainer(int& Stored) // ³���������� ���������
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

	// �������� ������:
	string Storage = "�����";
	string Material = "��������";
	int Stored = 20;
	int MaxStored = 30;




	cout << Storage << " " << Material << endl;
	cout << "�i���i��� ���������i�:\t" << Stored << endl;
	cout << "����������� �i���i��� ���������i�:\t" << MaxStored << endl;

	cout << "������ ��������� " << endl;
	AddContainer(Stored);
	cout << "�i���i��� ���������i�:\t"
		<< Stored << endl;






}
