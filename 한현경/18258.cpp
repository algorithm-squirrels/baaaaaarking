#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N;
    cin >> N;
    string str;

    const int MAX = 2000000;
    int data[MAX];
    int head = 0;
    int tail = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        if (str.compare("push") == 0)
        {
            int num;
            cin >> num;
            data[tail++] = num;
        }
        else if (str.compare("pop") == 0)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << data[head] << '\n';
                head++;
            }
        }
        else if (str.compare("size") == 0)
        {
            cout << (tail - head) << '\n';
        }
        else if (str.compare("empty") == 0)
        {
            if (head == tail)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (str.compare("front") == 0)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << (data[head]) << '\n';
            }
        }
        else if (str.compare("back") == 0)
        {
            if (head == tail)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << (data[tail - 1]) << '\n';
            }
        }
    }
}