#include <iostream>

using namespace std;

int main(void) 
{
    int n;
    cin >> n;
    
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x <= y; x++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}