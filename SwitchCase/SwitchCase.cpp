#include <iostream>
using namespace std;

int a, b;

void input()
{
	cout << "Bilangan Pertama = ";
	cin >> a;

	cout << "Bilangan Kedua = ";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2)
{
	return bil_1 + bil_2;
}

int pengurangan(int bil_1, int bil_2)
{
	return bil_1 - bil_2;
}

int perkalian(int bil_1, int bil_2)
{
	return bil_1 * bil_2;
}

int pembagian(int bil_1, int bil_2)
{
	return bil_1 / bil_2;
}

int main()
{
	int pilihan;

	do
	{
		system("cls");
		cout << "====== MENU ======" << endl;
		cout << "1. Perjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukan menu yang ingin di pilih (1/2/3/4/5) : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1 :
			input();
			cout << "Hasil Penjumlahan = " << penjumlahan(a, b) << endl;
			system("pause");
			break;
		case 2 :
			input();
			cout << "Hasil Pengurangan = " << pengurangan(a, b) << endl;
			system("pause");
			break;
		case 3 :
			input();
			cout << "Hasil Perkalian = " << perkalian(a, b) << endl;
			system("pause");
			break;
		case 4 :
			input();
			cout << "Hasil Pembagain = " << pembagian(a, b) << endl;
			system("pause");
			break;
		case 5 :
			break;
		default :
			cout << "Menu tidak tersedia, silahkan pilih lagi (1/2/3/4/5)" << endl;
			break;
		}
	} while (pilihan != 5);
}
