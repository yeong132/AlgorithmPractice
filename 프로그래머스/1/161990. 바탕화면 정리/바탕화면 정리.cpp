#include <string>
#include <vector>

using namespace std;

// 최소한의 이동거리를 갖는 드래그의 시작점과 끝점을 담은 정수 배열을 반환해야 한다.
// 1. wallpaper 배열을 돌며 시작 x, 시작y, 끝x, 끝y를 구한다.
// 2. 이때, 파일(#)의 위치를 기준으로 각 좌표를 구할 수 있다.
// 3. 시작점과 끝점을 구했으니 정답 배열에 차례대로 push_back 한다.
vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int startX = -1;
    int startY = 51;
    int endX = 0;
    int endY = 0;
    
    for(int i = 0; i < wallpaper.size(); ++i)
    {
        string row = wallpaper[i];
        for(int j = 0; j < row.size(); ++j)
        {
            if(row[j] == '#')
            {
                if(startX == -1)
                {
                    startX = i;
                }
                
                if(startY > j)
                {
                    startY = j;
                }
                
                if(endY < j + 1)
                {
                    endY = j + 1;
                }
                
                endX = i + 1;
            }
        }
    }
    
    answer.push_back(startX);
    answer.push_back(startY);
    answer.push_back(endX);
    answer.push_back(endY);
    
    return answer;
}