
#include <iostream>
using namespace std;
//tablice statyczne
int main()
{
    int tablica[5] = { 1,2,3,4,5 };
    for (size_t i = 0; i < 5; i++) 
    {
        cout << " index = " << i << " " << tablica[i] << endl;

    }
    cout << "-------------------------------" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << " index = " << i << " " << tablica[i] << endl;

    }
        return 0;
}