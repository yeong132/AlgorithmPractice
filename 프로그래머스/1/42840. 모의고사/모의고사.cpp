#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int failer1[5] = {1,2,3,4,5};
    int failer2[8] = {2,1,2,3,2,4,2,5};
    int failer3[10] = {3,3,1,1,2,2,4,4,5,5};
    int score[3] = {0};
    
    for(int i = 0; i < answers.size(); ++i)
    {
        // 수포자들이 몇 문제 맟췄는지 확인하는 코드
        if(answers[i] == failer1[i % 5])
        {
            score[0]++;
        }
        
        if(answers[i] == failer2[i % 8])
        {
            score[1]++;
        }
        
        if(answers[i] == failer3[i % 10])
        {
            score[2]++;
        }
        
    }
    
    if(score[0] >= score[1] && score[0] >= score[2])
    {
        answer.push_back(1);
    } 
    if(score[1] >= score[0] && score[1] >= score[2])
    {
        answer.push_back(2);
    }
    if(score[2] >= score[0] && score[2] >= score[1])
    {
        answer.push_back(3);
    }
    
    return answer;
}