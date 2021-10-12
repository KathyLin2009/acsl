#include <iostream>
using namespace std;

int main()
{
    string a, b, c, d, e;
    freopen("digit_reassembly.in", "r", stdin);
    //freopen("digit_reassembly.out", "w", stdout);
    cin >> a >> b >> c >> d >> e;
    
    cout << a.size() << endl;

    int result = 0;
    for(int i = 0; i < b.size(); i++)
    {
        result = result + b[i] - '0';
    }
    cout << result << endl;


    int answer3 = 0;
    for(int i = 0; i < c.size(); i++)
    {
        if(i % 2 == 0)
        {
            answer3 = c[i] + answer3 - '0';
        }
    }
    cout << answer3 << endl;


    int answer4 = 0;
    for(int i = 0; i < d.size(); i++)
    {
        if(d[i] - '0' == 4)
        {
            answer4++;
        }
    }
    cout << answer4 << endl;

    cout << e[e.size()/2 - 1] << endl;
}