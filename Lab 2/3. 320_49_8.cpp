#include <iostream>

using namespace std;

int main()
{
    int M, N, a;
    cin >> M >> N;
    a=M*N;
    if(M>16 || N>16){
        cout << "M and N cannot be greater than 16" << endl;
    } else {
        cout << a/2 << endl;
    }
    return 0;
}
