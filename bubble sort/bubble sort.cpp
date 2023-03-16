#include <iostream>
using namespace std;



int a[20];     //deklarasi array a dengan ukuran 20
int n;   //deklarasi variabel n untuk menyiapkan banyaknya elemen pada array

void input() {  //method untuk input
	while (true) {   //looping
		cout << "masukkan banyaknya elemen pada array : "; //output ke layar
		cin >> n;  //input dari pengguna
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";  //output ke layar
		}
	}
	cout << endl;   //output baris ke kosong
	cout << "=====================" << endl; //output ke layar
	cout << "Masukkan Elemen Array" << endl; // output ke layar
	cout << "=====================" << endl; //output kelayar

	for (int i = 0; i < n; i++) {     //looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": "; //output ke layar
		cin >> a[i];       //input dari pengguna
		
	}
}

void display() {   //method untuk menampilkan hasil
	cout << endl; //output untuk baris kosong
	cout << "============================" << endl;    //output kelayar
	cout << "element array telah tersusun" << endl;  //output kelayar
	cout << "============================" << endl;  //output kelayar
	for (int j = 0; j < n; j++) {        //looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;       //output kelayar
	}
	cout << endl;        //output baris kosong
}

void bubblesortArray() {   // method untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {     //looping dengan i dimulai dengan 1 hingga n-1
		for (int j = 0; j < n; j++) {       //looping dengan j dimulai dari 0 hingga n-i-j
			if (a[j] > a[j + 1]) {    //jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];   //simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];   //assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;   //assign nilai temp ke a[j + 1]
			}
		}
	}
}

int main(){
	// Membuat objek obj dari class BubbleSort
	input();	//Memanggil bubbleSortArray() dari class BubbleSort
	bubblesortArray(); //Memanggil bubbleSortArray() dari class BubbleSort
	display();	//Memanggil display() dari class BubbleSort
	return 0;

}