#include <iostream>

class Number {
protected:
    int M;
public:
    Number(int m) : M(m) {}
};

class Skipper : public Number {
private:
    int N, K;
public:
    Skipper(int m, int n, int k) : Number(m), N(n), K(k) {}

    void printNumbers() {
        for (int i = M; i <= N; i += K) {
            std::cout << i << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int M = 50, N = 100, K = 7;

    Skipper skipper(M, N, K);
    skipper.printNumbers();

    return 0;
}