#include <iostream>

class Array {
private:
    int *data;
    int size;
public:
    
    Array(int sz) : size(sz) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i; 
        }
    }

   
    ~Array() {
        delete[] data;
    }

    
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds!" << std::endl;
           
            return data[0];
        }
        return data[index];
    }
};

int main() {
    Array arr(5);

    
    std::cout << "Element at index 0: " << arr[0] << std::endl;
    std::cout << "Element at index 3: " << arr[3] << std::endl;

    
    arr[2] = 10;
    std::cout << "Modified element at index 2: " << arr[2] << std::endl;

    
    std::cout << "Trying to access an out-of-bounds index: " << arr[10] << std::endl;

    return 0;
}
