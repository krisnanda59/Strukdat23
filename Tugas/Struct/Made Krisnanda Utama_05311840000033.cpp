#include <iostream>
#include <string>

struct UserData {
    std::string name;
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
       std::cout << "\nMenu:\n";
       std::cout << "1. Tampilkan Data\n"; 
       std::cout << "2. Tambah Data\n";
       std::cout << "3. Hapus Data\n"; 
       std::cout << "4. Perbarui Data\n"; 
       std::cout << "0. Keluar\n"; 
       std::cout << "Masukan Pilihanmu: ";
       std::cin >> choice;

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
            std::cout << "Mengeluarkan Program.\n";
            break;
        default:
            std::cout << "Pilihan tidak tersedia, Masukkan pilihan yang tersedia.\n";
       }  

    } while (choice != 0);

    return 0;
}

void displayData() {
    std:: cout << "\nData Ditampilkan:\n";
    for (int i = 0; i < numData; ++i) {
        std::cout << "Data " << i + 1 << ":\n";
        std::cout << "Nama: " << dataArr[i].name << "\n";
        std::cout << "NRP: " << dataArr[i].nrp << "\n";
        std::cout << "-------------------------\n";
        
    }
}

void addData() {
    if (numData < MAX_DATA) {
        std::cout << "Masukkan nama untuk data baru: ";
        std::cin >> dataArr[numData].name;

        std::cout << "Masukkan NRP untuk data baru: ";
        std::cin >> dataArr[numData].nrp;

        ++numData;

        std::cout << "Data baru berhasil ditambahkan.\n";
    } else {
        std::cout << "Tidak bisa menambahkan data, karena sudah maksimal.\n";
    }
}

void deleteData() {
    if (numData > 0) {
        int index;
        std::cout << "Masukkan nomer data yang akan dihapus (1 sampai " << numData << "): ";
        std::cin >> index;

        if (index >= 1 && index <= numData) {
            for (int i = index - 1; i < numData - 1; ++i) {
                dataArr[i] = dataArr[i + 1];
            }

            --numData;

            std::cout << "Data nomer " << index << " berhasil dihapus.\n";
        } else {
            std::cout << "Nomer tidak tersedia, Masukkan nomer yang tersedia.\n";
        }
    } else {
        std::cout << "Tidak ada data untuk dihapus.\n";
    }
}

void updateData() {
    if (numData > 0) {
        int index;
        std::cout << "Masukkan nomer data yang akan diubah (1 sampai " << numData << "): ";
        std::cin >> index;

        if (index >= 1 && index <= numData) {
            std::cout << "Masukkan nama baru: ";
            std::cin >> dataArr[index - 1].name;

            std::cout << "Masukkan NRP baru: ";
            std::cin >> dataArr[index - 1].nrp;

            std::cout << "Data nomer " << index << " berhasil diubah.\n";
        } else {
            std::cout << "Nomer tidak tersedia, Masukkan nomer yang tersedia.\n";
        }
    } else {
        std::cout << "Tidak ada data untuk diubah.\n";
    }
}