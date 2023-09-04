#include <iostream>
using namespace std;

int mdc(int p, int q) 
{ 
    if (q == 0) {
        return p;
    } else {
        return mdc(q, p % q);
    }
    
}

int main(void) 
{
    int p, q, divisor;

    cout << "Digite dois números inteiros positivos:" << endl;
    cin >> p >> q; 
    
    divisor=mdc(p,q);  

    cout << "O MDC de (" << p <<", " << q << ") é: " << divisor << endl;

    return 0;
}
