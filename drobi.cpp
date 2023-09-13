#include <iostream>

using namespace std;

class Drobi {
private:
    int chi;
    int zna;
public:
    Drobi(int up, int dow) : chi(up), zna(dow) {}

    Drobi operator+(const Drobi& other) const {
        int up = chi * other.zna + other.chi * zna;
        int dow = zna * other.zna;
        return Drobi(up, dow);
    }

    Drobi operator-(const Drobi& other) const {
        int up = chi * other.zna - other.chi * zna;
        int dow = zna * other.zna;
        return Drobi(up, dow);
    }

    Drobi operator*(const Drobi& other) const {
        int up = chi * other.chi;
        int dow = zna * other.zna;
        return Drobi(up, dow);
    }

    Drobi operator/(const Drobi& other) const {
        int up = chi * other.zna;
        int dow = zna * other.chi;
        return Drobi(up, dow);
    }

    void print() const {
        cout << chi << "/" << zna << endl;
    }
};

int main() {
    Drobi f1(1, 2);
    Drobi f2(1, 3);

    Drobi sum = f1 + f2;
    Drobi raz = f1 - f2;
    Drobi umn = f1 * f2;
    Drobi del = f1 / f2;

    cout << "Sum: ";
    sum.print();

    cout << "Raz: ";
    raz.print();

    cout << "Umn: ";
    umn.print();

    cout << "Del: ";
    del.print();

    return 0;
}
