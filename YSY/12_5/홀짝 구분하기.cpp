#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n%2==0)
        cout<<n<<" is even"<<endl;
    else if(n%2==1)
        cout<<n<<" is odd"<<endl;
    return 0;
}