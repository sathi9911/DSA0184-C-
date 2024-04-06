#include <iostream>

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    
    Counter& operator++() {
        ++count;
        return *this;
    }

    
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Counter c1;
    std::cout << "Initial count: " << c1.getCount() << std::endl;

    ++c1; 
    std::cout << "After pre-increment, count: " << c1.getCount() << std::endl;

    Counter c2 = c1++; 
    std::cout << "After post-increment, count: " << c1.getCount() << std::endl;
    std::cout << "Value of c2: " << c2.getCount() << std::endl;

    return 0;
}
