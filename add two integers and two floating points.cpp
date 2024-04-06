#include <iostream>


int add(int a, int b) {
    return a + b;
}


float add(float a, float b) {
    return a + b;
}

int main() {
    int intResult;
    float floatResult;

   
    intResult = add(5, 3);
    std::cout << "Result of adding two integers: " << intResult << std::endl;

    
    floatResult = add(3.5f, 2.7f);
    std::cout << "Result of adding two floating-point numbers: " << floatResult << std::endl;

    return 0;
}
