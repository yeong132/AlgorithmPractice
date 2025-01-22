#include <string>
#include <vector>

using namespace std;

// 가로 길이랑 세로 길이의 max값끼리 곱하면 지갑의 크기가 나온다.
// 특정 명함을 눕혔을 때 만들어질 지갑의 크기가 줄어들면 그 크기를 return 해야한다.
// 두 길이를 비교해 가로를 최댓값, 세로를 최소값으로 주면 원하는 최소 지갑 크기가 구해진다.
int solution(vector<vector<int>> sizes) {
    int walletSize = 0;
    int widthMax = 0;
    int heightMax = 0;
    
    for(vector<int> size : sizes)
    {
        int h = 0;
        int w = 0;
        
        if(size[0] > size[1]) 
        {
            w = size[0];
            h = size[1];
            
        }
        else 
        {
            w = size[1];
            h = size[0];
        }
        
        if(h > heightMax)
        {
            heightMax = h;
        }
        
        if(w > widthMax)
        {
            widthMax = w;
        }
    }
    walletSize = widthMax * heightMax;
    
    return walletSize;
}