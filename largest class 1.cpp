#include <iostream>

class Largest {
private:
    int a, b, m;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    friend void findMax(Largest l);
};

void findMax(Largest l) {
    if (l.a > l.b) {
        l.m = l.a;
    } else {
        l.m = l.b;
    }
    std::cout << "Largest number is: " << l.m << std::endl;
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Largest largest;
    largest.setData(num1, num2);
    findMax(largest);

    return 0;
}