#include <iostream>
#include <string>

using namespace std;

int main(void) { 
    string str;
    cin >> str;
    for(char& i:str){
        if (i<'a')
            i=tolower(i);
        else if (i>='a')
            i=toupper(i);
        cout<<i;
    }
    return 0;
}