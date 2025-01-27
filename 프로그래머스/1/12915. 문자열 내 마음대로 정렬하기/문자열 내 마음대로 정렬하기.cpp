#include <string>
#include <vector>
#include <algorithm> // 정렬 sort()함수 

using namespace std;

int num;
// 앞에 a가 더 크면 점점 뒤로 가게 b랑 위치 교환!
bool compare(string a, string b){
    // 인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치
    if (a[num] == b[num]) {
        return a < b;
    }
    return a[num] < b[num];
}

// strings 오름차순 정렬 입력 n기준으로.. 
vector<string> solution(vector<string> strings, int n) {
    num = n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}