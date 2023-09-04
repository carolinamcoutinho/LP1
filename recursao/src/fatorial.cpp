#include <iostream>
using namespace std;


int fatorial(int N) 
{
    if (N == 0){
        return 1;
    } else
        return N*fatorial(N-1);
    
}

int main(void) 
{
    int n, F;

    cout << "Digite um número:" << endl;
    cin >> n; 
    
    F = fatorial(n);

    cout << "O fatorial de " << n << " é: " << F << endl;

    return 0;
}
