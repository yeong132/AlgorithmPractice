#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// 카피하고 분석 후 공부한 코드
// 오늘 날짜로 파기해야 할 개인정보 번호의 배열을 구해야 한다.
// 1. privacies와 terms 배열로 각 약관의 유효기간 끝나는 날짜를 구한다.
// 2. 그 날짜가 today랑 같으면 보관가능, today보다 과거면 파기해야 될 약관이다.
// 3. 그렇게 파기해야 될 약관 번호를 오름차순으로 구해서 정수 배열에 담아 반환한다.
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> term;

    // `terms`에서 키와 값을 `term`에 저장
    for (int i = 0; i < terms.size(); i++) 
    {
        char key = terms[i][0]; // 첫 번째 문자를 키로 사용
        int value = stoi(terms[i].substr(2)); // 숫자 부분을 정수로 변환
        term[key] = value;
    }

    // 각 `privacies` 항목을 처리
    for (int i = 0; i < privacies.size(); i++) 
    {
        char privacyType = privacies[i][11]; // 약관 종류 추출
        int su = term[privacyType]; // 약관 종류에 해당하는 기간

        int ytemp = stoi(privacies[i].substr(0, 4)); // 연도
        int mtemp = stoi(privacies[i].substr(5, 2)) + su; // 월 + 유효기간
        int dtemp = stoi(privacies[i].substr(8, 2)) - 1; // 하루 감소

        if (dtemp == 0) 
        {
            dtemp = 28;
            mtemp -= 1;
        }

        if (mtemp > 12) 
        {
            ytemp += (mtemp - 1) / 12; // 연도 증가
            mtemp = (mtemp - 1) % 12 + 1; // 월을 조정
        }

        int year = stoi(today.substr(0, 4));
        int month = stoi(today.substr(5, 2));
        int day = stoi(today.substr(8, 2));

        // 유효기간 초과 여부 확인
        if (year < ytemp) continue; // 유효기간이 남아있음
        if (year == ytemp && month < mtemp) continue; // 같은 해, 유효기간 남음
        if (year == ytemp && month == mtemp && day <= dtemp) continue; // 같은 달, 유효기간 남음

        // 유효기간 초과
        answer.push_back(i + 1); // 1-based index
    }

    return answer;
}