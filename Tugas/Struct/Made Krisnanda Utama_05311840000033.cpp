#include <iostream>
#include <string>

struct UserData {
    std: :string name;
    int nrp;
};

const int MAX_DATA = 10;
int numData = 10;
UserData dataArr[MAX_DATA] = {
    {"Bagus", 16},
    {"Papoi", 18},
    {"Hisyam", 19},
    {"Indra", 31},
    {"Aisyi", 36},
    {"Komenk", 38},
    {"Irsyad", 41},
    {"Adit", 42},
    {"Azmi", 47},
    {"Dhika", 48}
};

void displayData();
void addData();
void deleteData();
void updateData();

int main() {
    int choice;

    do {
       std: :cout << "\nMenu:\n";
       std: :cout << "1. Tampilkan Data\n"; 
       std: :cout << "2. Tambah Data\n";
       std: :cout << "3. Hapus Data\n"; 
       std: :cout << "4. Perbarui Data\n"; 
       std: :cout << "0. Keluar\n"; 
       std: :cout << "Masukan Pilihanmu: ";
       std: :cin >> choice;

       switch (choice) {
        case 1:
            displayData();
            break;
        case 2:
            addData();
            break;
        case 3:
            deleteData();
            break;
        case 4:
            updateData();
            break;
        case 0:
            std: :cout << "Mengeluarkan Program.\n";
            break;
        default:
            std: :cout << "Pilihan tidak tersedia, Masukkan pilihan yang tersedia.\n";
       }   
    }
}