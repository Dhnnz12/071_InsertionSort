#include <iostream>
using namespace std;

int arr[12];
int n;

void input() {      //procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array = "; // output ke layar
		cin >> n; //input dari pengguna
		if (n <= 12) //jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else {		//Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 12 elemen. \n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {   //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << " : "; // Output ke layar
		cin >> arr[i];    // Output dari pengguna
	}
}
void insertionSort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }

        arr[j + 1] = temp; //step 5
    }
}
void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;  //Menampilkan Array
		if (j < n - 1) {
			cout << "-->";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl; // Menampilkan jumlah dari pass
	cout << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}




