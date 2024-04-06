#include <iostream>

class Number {
private:
    int value;
public:
    Number() : value(0) {}
    Number(int v) : value(v) {}

     
    Number operator+(const Number& other) const {
        Number result;
        result.value = this->value + other.value;
        return result;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    Number sum = num1 + num2;

    std::cout << "num1: " << num1.getValue() << std::endl;
    std::cout << "num2: " << num2.getValue() << std::endl;
    std::cout << "Sum: " << sum.getValue() << std::endl;

    return 0;
}
