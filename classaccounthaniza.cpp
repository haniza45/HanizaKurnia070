#include <iostream>
#include <string>

class Account {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    // Konstruktor untuk inisialisasi objek Account
    Account(const std::string &number, const std::string &holder, double initialBalance) {
        accountNumber = number;
        accountHolder = holder;
        balance = initialBalance;
    }

    // Metode untuk menampilkan informasi akun
    void displayAccountInfo() {
        std::cout << "Nomor Akun: " << accountNumber << std::endl;
        std::cout << "Pemilik Akun: " << accountHolder << std::endl;
        std::cout << "Saldo Akun: $" << balance << std::endl;
    }

    // Metode untuk setor dana ke akun
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Setoran berhasil. Saldo baru: $" << balance << std::endl;
        } else {
            std::cout << "Setoran gagal. Jumlah setoran harus lebih dari 0." << std::endl;
        }
    }

    // Metode untuk tarik dana dari akun
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Penarikan berhasil. Saldo baru: $" << balance << std::endl;
        } else {
            std::cout << "Penarikan gagal. Jumlah penarikan tidak valid atau saldo tidak mencukupi." << std::endl;
        }
    }

    // Metode untuk mendapatkan saldo akun
    double getBalance() {
        return balance;
    }
};

int main() {
    // Membuat objek Account
    Account myAccount("12345", "John Doe", 1000.0);

    // Menampilkan informasi akun
    std::cout << "Informasi Akun Awal:" << std::endl;
    myAccount.displayAccountInfo();

    // Melakukan setoran dan penarikan
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Menampilkan saldo akun setelah transaksi
    std::cout << "Saldo Akun Setelah Transaksi: $" << myAccount.getBalance() << std::endl;

    return 0;
}
