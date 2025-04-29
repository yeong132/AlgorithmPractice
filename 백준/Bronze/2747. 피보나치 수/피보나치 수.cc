#include <iostream>

using namespace std;

int main()
{
    int CurFn = 1;
    int PreFn = 0;
    int TempFn = 0;
    int n;
    
    cin >> n;
    
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    
    for(int i = 1; i < n; ++i)
    {
        TempFn = CurFn;
        CurFn += PreFn;
        PreFn = TempFn;
    }
    
    cout << CurFn;
    
    return 0;
}