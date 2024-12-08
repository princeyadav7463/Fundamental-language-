/*
#include <iostream>

int factorial(int n) {
    
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    return 0;
}

*/
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) { 
        return 0;
    }
    if (n == 1) { 
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int terms = 10;
    cout << "Fibonacci sequence up to " << terms << " terms:" << endl;
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

