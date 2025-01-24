#include <string>
#include <vector>
#include <cctype>

using namespace std;

// 최대한 간단한 예시 입력을 생각하니까 문제가 쉽게 풀려졌다.
int solution(string s) {
    long answer = 0;
    string str_answer = "";
    string subS = "";
    
    for(char charS : s){
        // isdigit은 숫자가 아니라면 0을 반환한다. 그래서 숫자면 0이 아닌 그 숫자를 반환.
        if(isdigit(charS) != 0){
            str_answer += charS;
        }
        else
        {
            subS += charS;
            
            if(subS == "zero") {
                str_answer += "0";
                subS = "";
            }
            else if(subS == "one") {
                str_answer += "1";
                subS = "";
            }
            else if(subS == "two") {
                str_answer += "2";
                subS = "";
            }
            else if(subS == "three") {
                str_answer += "3";
                subS = "";
            }
            else if(subS == "four") {
                str_answer += "4";
                subS = "";
            }
            else if(subS == "five") {
                str_answer += "5";
                subS = "";
            }
            else if(subS == "six") {
                str_answer += "6";
                subS = "";
            }
            else if(subS == "seven") {
                str_answer += "7";
                subS = "";
            }
            else if(subS == "eight") {
                str_answer += "8";
                subS = "";
            }
            else if(subS == "nine") {
                str_answer += "9";
                subS = "";
            }
        } 
    }
    answer = stol(str_answer);
    return answer;
}