#include <string>
#include <vector>

using namespace std;

// 상수가 포장하는 햄버거의 개수를 구해야 한다.
// 1. 정해진 순서로 쌓인 햄버거를 포장한다.
// 2. 상수 눈 앞의 재료로 정해진 순서로 쌓인 햄버거가 없을 때까지 1.을 반복한다. 
int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> hamburger;
    
    for(int i = 0; i < ingredient.size(); ++i)
    { 
        hamburger.push_back(ingredient[i]);
            
        int endPoint = hamburger.size();
            
        if(endPoint >= 4 && hamburger[endPoint-4] == 1 && hamburger[endPoint-3] == 2
            && hamburger[endPoint-2] == 3 && hamburger[endPoint-1] == 1)
        {
            // 햄버거 완성 -> 햄버거를 만드는데 사용한 마지막 4개의 재료 제거
            hamburger.erase(hamburger.end()-4, hamburger.end());
            answer++;  
        }
    }
        
    return answer;
}