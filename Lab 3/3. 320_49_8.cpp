//Codeforces problem no: 112A
//Problem name: Petya and strings

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[100], s2[100];
    cin >> s1 >> s2;
    strupr(s1);
    strupr(s2);
    strcmp(s1,s2);
    if(strcmp(s1,s2)>0){
        cout << "1" << endl;
    } else if(strcmp(s1,s2)==0){
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}

