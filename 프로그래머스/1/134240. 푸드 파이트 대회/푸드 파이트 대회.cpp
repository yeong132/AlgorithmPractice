#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string water = "0";
    
    for(int Afood = 1; Afood < food.size(); ++Afood)
    {
        for(int j = 0; j < food[Afood] / 2; ++j)
        {
            answer+=to_string(Afood);
        }
    }
    
    answer += water;
    
    for(int Bfood = food.size()-1; Bfood >= 1; --Bfood)
    {
        for(int j = 0; j < food[Bfood] / 2; ++j)
        {
            answer+=to_string(Bfood);
        }
    }
    
    return answer;
}