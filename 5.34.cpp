#include <iostream>

int power(int base, int exponent) {
	
    if (exponent == 1) {
        return base;
    } else {
        
        return base * power(base, exponent - 1);
    }
}

int main() {
    
    int base, exponent;
    std::cout << "�п�J���(base)�G";
    std::cin >> base;
    std::cout << "�п�J����(exponent)�G";
    std::cin >> exponent;

    int result = power(base, exponent);

    std::cout << base << "^" << exponent << " = " << result << std::endl;

    return 0;
}

