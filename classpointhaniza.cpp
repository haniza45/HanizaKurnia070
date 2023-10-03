#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Konstruktor untuk inisialisasi objek Point
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Metode untuk menampilkan koordinat titik
    void displayPoint() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    // Metode untuk mengatur koordinat titik
    void setPoint(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Metode untuk mendapatkan nilai koordinat x
    double getX() {
        return x;
    }

    // Metode untuk mendapatkan nilai koordinat y
    double getY() {
        return y;
    }
};

int main() {
    // Membuat objek Point
    Point titikA(2.5, 3.0);

    // Menampilkan koordinat titik
    std::cout << "Koordinat Titik A: ";
    titikA.displayPoint();

    // Mengubah koordinat titik
    titikA.setPoint(4.0, 5.5);
    std::cout << "Koordinat Titik A yang Diubah: ";
    titikA.displayPoint();

    // Mengakses nilai koordinat x dan y
    std::cout << "Koordinat X: " << titikA.getX() << std::endl;
    std::cout << "Koordinat Y: " << titikA.getY() << std::endl;

    return 0;
}
