#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char, int> countX;
    map<char, int> countY;
    
    // X와 Y의 0~9가 몇 개씩 나타나는지 파악해야 함. 숫자3의 개수가 X = 2, Y = 1이면 
    // 2개 중에 최소 카운트를 구하면 될듯..그러고 최소 카운트만큼 해당 문자를 넣어주기..
    for(char charX : X)
    {
        countX[charX]++;
    }
    
    for(char charY : Y)
    {
        countY[charY]++;
    }
    
    // 9부터 0까지 차례로 확인하면서 answer에 추가
    // char은 ASCII 코드값으로 동작해서 '9'-1하면 '8'이 나온다. 숫자가 높은거 부터 넣으면 자동정렬도 된다.
    for (char num = '9'; num >= '0'; num--) 
    {
        int count = min(countX[num], countY[num]); // 두 수에서 최소 개수만큼 추가
        if(count == 0) continue; // 만약 없는 키를 조회한다면 자동으로 map이 0을 반환한다.
        answer.append(count, num); // count만큼 num을 추가
    }
    
    if(answer == "") return "-1";
    
    if(answer[0] == '0') return "0";
    
    return answer;
}