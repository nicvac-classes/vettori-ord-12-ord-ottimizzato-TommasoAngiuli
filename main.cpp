#include <iostream>
using namespace std;
int main() 
{
    int n, i, j, t;
    cout << "inserisci il numero di celle" << endl;
    cin >> n;
    int r[n];
    bool scambio;
    i = 0;
    while (i <= n - 1) 
    {
        r[i] = rand() % (n * 10 + 1);
        i = i + 1;
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) 
    {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) 
        {
            if (r[j] > r[j + 1]) 
            {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) 
    {
        cout << r[i] << endl;
        i = i + 1;
    }
}