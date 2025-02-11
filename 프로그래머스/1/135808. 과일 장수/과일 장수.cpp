#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (int a, int b)
{
    return a > b;
}

int solution(int k, int m, vector<int> score) {
    vector<int> appleBox;
    int answer = 0;
    
    sort(score.begin(), score.end(), compare);
    
    for(int i = 0; i < score.size(); ++i)
    {
        appleBox.push_back(score[i]);
        if(appleBox.size() == m)
        {
            int minAppleValue = *min_element(appleBox.begin(), appleBox.end());
            answer += minAppleValue * m;
            
            appleBox.clear();
        }
    }
    
    return answer;
}