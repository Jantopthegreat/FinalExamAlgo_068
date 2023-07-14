#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100;
int NIM[100];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}

//isi disini
void tampilkanSemuaMahasiswa() {
	cout << "========== DAFTAR MAHASISWA ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM   : " << NIM[i] << endl;
		cout << "Nama   : " << nama[i] << endl;
		cout << "Jurusan   : " << jurusan[i] << endl;
		cout << "TahunMasuk   : " << tahunMasuk[i] << endl;
		cout << endl;
	}
}
void algorithmacariMahasiswaByNIM() {
	int cariNIM;
	cout << "========== DAFTAR MAHASISWA ==========" << endl;
	cout << "Masukan NIM yang ingin dicari! : " << endl;
	cin >> cariNIM;

	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == cariNIM) {
			cout << "NIM   : " << NIM[i] << endl;
			cout << "Nama   : " << nama[i] << endl;
			cout << "Jurusan   : " << jurusan[i] << endl;
			cout << "TahunMasuk   : " << tahunMasuk[i] << endl;
			cout << endl;
		}
		break;
	}
	
}


void algorithmaSortByTahunMasuk() {
	int SortTahunMasuk;
	cout << "========== DAFTAR MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;


}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}
//2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan ? (10 Poin)
// Jawab : 
// 1. AlgoritmaTambahMahasiwa
// 2. AlgoritmaTampilkanSemuaMahasiswa
// 3. AlgoritmaCariMahasiswa (Algoritma LinearSearch)
// 4. AlgoritmaSortbyTahunMasuk (Algoritma BubbleSort)
// 
//3. Jelaskan perbedaan mendasar antara algorithma stack dan queue!(15 Poin)
// Jawab : - Stack Yaitu kumpulan data yang hanya bisa diakses dari 1 sisi saja ang disebut sebagai top Stack bersifat LIFO (Last in first out) artinya data yang terakhir dimasukan akan yang pertama dikeluarkan
// sedangkan Queue bersifat FIFO (First in first out) Data yang pertama dimasukkan akan menjadi yang pertama dikeluarkan
// 
//4. Jelaskan pada saat bagaimana harus menggunakan algorithma stack ? (15 poin)
// Jawab : Algoritma stack digunakan ketika kita ingin data terakhir yang kita masukan yang akan kita hapus dan juga mengefisiensi
//5. Perhatikan gambar berikut : (20 Poin)
//a.Seberapa banyak kedalaman yang dimiliki struktur tersebut ?
// Jawab : 4 Kedalaman
//b.Tentukan Benar atau salah cara membaca struktur pohon di atas ?
// Jawab : 
//In = 1 5 8 12 15 10 20 22 25 28 30 36 38 40 45 48 50 (SALAH)
//Preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50 (BENAR)
//Post = 1 8 5 15 12 10 22 20 28 38 45 50 48 30 40 36 2 (SALAH)