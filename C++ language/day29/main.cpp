/*
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) { 
        return 1;
    }
    return n * factorial(n - 1); 
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) { 
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n = 10;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
    if (n == 0) { 
        return 0;
    }
    return n + sumOfNumbers(n - 1); 
}

int main() {
    int num = 10;
    cout << "Sum of first " << num << " natural numbers is: " << sumOfNumbers(num) << endl;
    return 0;
}

