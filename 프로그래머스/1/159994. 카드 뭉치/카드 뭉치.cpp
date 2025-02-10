#include <string>
#include <vector>

using namespace std;

// 1. goal벡터의 문장 안의 단어들이 cards1와 cards2에서 순서대로 있어야한다.
string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int i = 0;
    int j = 0;
    
    for(string word : goal)
    {
        if(word == cards1[i]) 
        {
            i++;
        }
        else if(word == cards2[j])
        {
            j++;
        }
        else return "No";
    }
    
    return "Yes";
}