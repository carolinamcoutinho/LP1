#include <iostream>
using namespace std;

int fibonacci(int N) 
{ 
    if (N <= 0) {
        return 0;
    } else if (N == 1) {
        return 1;
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2);
    } 
}

int main(void) 
{
    int n, F;

    cout << "Digite um número:" << endl;
    cin >> n; 
    
    F=fibonacci(n);  

    cout << "O termo " << n << " da série de Fibonacci é: " << F << endl;

    return 0;
}
