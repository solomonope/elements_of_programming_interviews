#include <iostream>

int count_bits(int number);

int main() {
    std::cout << count_bits(3) << std::endl;
    return 0;
}

int count_bits(int number) {
    int count = 0;
    while (number > 0 ) {
        count += number & 1;
        number =  number >> 1;
    }
    return count;
}
