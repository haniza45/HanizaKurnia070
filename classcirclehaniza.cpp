#include <iostream>

// Deklarasi kelas Circle
class Circle {
private:
    double radius;

public:
    // Konstruktor untuk inisialisasi objek Circle
    Circle(double r) {
        radius = r;
    }

    // Metode untuk menghitung luas lingkaran
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Metode untuk menghitung keliling lingkaran
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }

    // Metode untuk mengubah nilai radius
    void setRadius(double r) {
        radius = r;
    }

    // Metode untuk mendapatkan nilai radius
    double getRadius() {
        return radius;
    }
};

int main() {
    // Membuat objek Circle
    Circle lingkaran(5.0);

    // Menggunakan metode-metode dari objek Circle
    std::cout << "Radius Lingkaran: " << lingkaran.getRadius() << std::endl;
    std::cout << "Luas Lingkaran: " << lingkaran.calculateArea() << std::endl;
    std::cout << "Keliling Lingkaran: " << lingkaran.calculateCircumference() << std::endl;

    // Mengubah nilai radius
    lingkaran.setRadius(7.0);
    std::cout << "Radius Lingkaran yang Diubah: " << lingkaran.getRadius() << std::endl;

    return 0;
}
