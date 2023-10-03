#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Konstruktor untuk inisialisasi objek Date
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Metode untuk menampilkan tanggal
    void displayDate() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }

    // Metode untuk mengatur tanggal
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Metode untuk mendapatkan nilai hari
    int getDay() {
        return day;
    }

    // Metode untuk mendapatkan nilai bulan
    int getMonth() {
        return month;
    }

    // Metode untuk mendapatkan nilai tahun
    int getYear() {
        return year;
    }
};

int main() {
    // Membuat objek Date
    Date today(3, 10, 2023);

    // Menampilkan tanggal
    std::cout << "Tanggal Hari Ini: ";
    today.displayDate();

    // Mengubah tanggal
    today.setDate(4, 10, 2023);
    std::cout << "Tanggal Setelah Diubah: ";
    today.displayDate();

    // Mengakses nilai hari, bulan, dan tahun
    std::cout << "Hari: " << today.getDay() << std::endl;
    std::cout << "Bulan: " << today.getMonth() << std::endl;
    std::cout << "Tahun: " << today.getYear() << std::endl;

    return 0;
}
