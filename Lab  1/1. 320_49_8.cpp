//Codeforce Problem No- 4A
//Problem Name- Watermelon

#include <iostream>
using namespace std;

int main()
{
    int w;
    cout << "Enter watermelon weight:" ;
    cin >> w ;
    if(w%2==0 && w>2)
        cout << "yes" << endl ;
    else
        cout << "no" << endl ;
    return 0;
}


