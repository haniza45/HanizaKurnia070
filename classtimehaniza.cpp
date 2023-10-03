#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Konstruktor untuk inisialisasi objek Time
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // Metode untuk menampilkan waktu
    void displayTime() {
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }

    // Metode untuk mengatur waktu
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // Metode untuk mendapatkan nilai jam
    int getHour() {
        return hour;
    }

    // Metode untuk mendapatkan nilai menit
    int getMinute() {
        return minute;
    }

    // Metode untuk mendapatkan nilai detik
    int getSecond() {
        return second;
    }
};

int main() {
    // Membuat objek Time
    Time currentTime(15, 30, 45);

    // Menampilkan waktu
    std::cout << "Waktu Saat Ini: ";
    currentTime.displayTime();

    // Mengubah waktu
    currentTime.setTime(16, 45, 10);
    std::cout << "Waktu Setelah Diubah: ";
    currentTime.displayTime();

    // Mengakses nilai jam, menit, dan detik
    std::cout << "Jam: " << currentTime.getHour() << std::endl;
    std. cout << "Menit: " << currentTime.getMinute() << std::endl;
    std:: cout << "Detik: " << currentTime.getSecond() << std::endl;

    return 0;
}
