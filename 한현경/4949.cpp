#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    while (true)
    {
        string S;
        getline(cin, S); // C++에서 공백이 포함된 string을 입력받을 땐 getline을 사용한다.
        if (S == ".")
            break;

        stack<char> st;  // STL stack 사용
        bool val = true; // 맞는/틀린 문자열인지 판별하는 변수. true로 초기화.
        for (auto c : S)
        {
            if (c == '(' || c == '[')
                st.push(c); // 여는 괄호이면 스택 st에 push한다.
            else if (c == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    val = false; // 괄호가 맞지 않는 경우
                    break;       // break문은 가장 가까운 do, while, for문을 한 번 탈출한다.
                }
                st.pop(); // 괄호가 맞으면, val값은 초기화한 그대로 계속 true이다.
            }
            else if (c == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    val = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty())
            val = false; // 문자열을 모두 읽었는데 스택에 아직 값이 남아있으면 괄호쌍 틀림.
        if (val)
            cout << "yes\n"; // val값이 true이면 "yes" 출력
        else
            cout << "no\n";
    }
}