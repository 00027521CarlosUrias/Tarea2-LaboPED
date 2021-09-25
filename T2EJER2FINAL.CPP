#include <iostream>

using namespace std;


void contarRec(int i, int n);
void contarRec2(int n);

int main(void)
{
    int n;

    cout << endl;
    cout << "CUENTA REVES Y DERECHO" << endl << endl;

    cout << " Digite el numero para contar reves y derecho " <<endl;
    cin >> n;

    cout <<endl;

    contarRec(1, n);
    contarRec2(n);

    cout << endl;
    return 0;
}

void contarRec(int i, int n)
{
    if(i <= n){
        cout << i << endl;
        contarRec(i + 1, n);
    }
    
}

void contarRec2(int n)
{
    if(n >= 1){ 
        cout << n-1 << endl; 
        contarRec2(n-1);
    }
}

