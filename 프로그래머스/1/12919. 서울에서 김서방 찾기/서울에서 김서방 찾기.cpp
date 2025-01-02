#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 결과값의 형태를 생각해보자.("김서방은 x에 있다")
// 2. 이 형태가 만들어지려면 "김서방은 " + "x" + "에 있다", x가 양의 정수로 들어가야 한다.

string solution(vector<string> seoul) {
    string answer = "";
    // 예시를 봤을때 x에 들어갈 숫자는 seoul의 index를 가리키므로 이렇게 이름을 지었다.
    int index =  0;
    
    // 이렇게 반복자의 타입을 설정한다.
    vector<string>::iterator it = find(seoul.begin(), seoul.end(), "Kim");
    
    // 여기서 it는 iterator타입 즉, 위치를 가리키기 때문에 int로 타입변환을 해주어야 한다.
    // 두 iterator의 거리를 계산해서 int타입을 반환하게 만들어준다!
    index = it - seoul.begin();
    
    // 여기서 한번더 to_string()으로 형변환을 해주었다. (string)index는 오류가 난다.
    answer = "김서방은 " + to_string(index) + "에 있다";
    return answer;
}