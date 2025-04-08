#include <string>
#include <vector>
#include <map>

using namespace std;

char makeResultChar(char a, char b, map<char, int>& scoreMap)
{
    if(scoreMap[a] > scoreMap[b]) { return a; }
    else if(scoreMap[b] > scoreMap[a]) { return b; }
    else { return (a < b ? a : b); }
}

// 각 지표의 점수를 토대로 최종 성격 유형을 반환해야 한다.
// 1. 성격 유형의 각 문자마다 점수를 구해야 한다.
// 2. survey의 문자열에 choices의 숫자가 1,2,3이면 해당 문자열의 1번째 문자의 점수를 가중치만큼 +
// 3. 4는 아무것도 안하고, 5,6,7이면 해당 문자열의 2번째 문자의 점수를 가중치만큼 +
// 4. 각 지표의 점수가 높은 순으로 최종 성격유형을 문자열로 반환한다.
// 5. 4.의 과정에서 각 지표의 성격유형 점수가 같으면 사전순으로 빠른 성격유형 문자를 반환한다.
string solution(vector<string> survey, vector<int> choices) {
    map<char, int> personalityScore = 
    {
        {'R', 0}, {'T', 0},
        {'C', 0}, {'F', 0},
        {'J', 0}, {'M', 0},
        {'A', 0}, {'N', 0}
    };
    
    for(int i = 0; i < survey.size(); ++i)
    {
        string currentServey = survey[i];
        char firstChar = currentServey[0];
        char secondChar = currentServey[1];
        int choice = choices[i];
        
        if(choice == 4) { continue; }
        
        if(choice < 4)
        {
            personalityScore[firstChar] += 4 - choice;
        }
        else if(choice > 4)
        {
            personalityScore[secondChar] += choice - 4;
        }
    }
    
    string answer = "";
    answer += makeResultChar('R', 'T', personalityScore);
    answer += makeResultChar('C', 'F', personalityScore);
    answer += makeResultChar('J', 'M', personalityScore);
    answer += makeResultChar('A', 'N', personalityScore);
    
    return answer;
}