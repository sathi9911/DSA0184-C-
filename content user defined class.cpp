#include <iostream>

class MyClass {
private:
    int data;
public:
    MyClass(int d) : data(d) {}

    ii                                                                                                                                                                                                                                
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass obj(42);
    std::cout << "Contents of obj: " << obj << std::endl;
    return 0;
}
