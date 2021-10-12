#include <iostream>
#include <vector>
#include <string>
using namespace std;

void RunThrough(vector<int> num, vector<char> suit)
{
    vector<int> same_suit;
    vector<int> max_num;
    for(int i = 1; i < suit.size(); i++)
    {
        if(suit[i] == suit[0])
        {
            same_suit.push_back(num[i]);
        }
    }
    if(same_suit.size() == 0)
    {
        cout << "NONE" << endl;
        return;
    }
    for(int i = 0; i < same_suit.size(); i++)
    {
        if(same_suit[i] > num[0])
        {
            max_num.push_back(same_suit[i]);
        }
    }
    if(max_num.size() > 0)
    {
        int max_min = 10000;
        for(int i = 0; i < max_num.size(); i++)
        {
            if(max_num[i] < max_min)
            {
                max_min = max_num[i];
            }
        }
        cout << max_min;
        for(int i = 0; i < num.size(); i++)
        {
            if(num[i] == max_min)
            {
                cout << ", " << suit[i] << endl;
                break;
            }
        }
    }
    else
    {
        int min = 100000;
        for(int i = 0; i < same_suit.size(); i++)
        {
            if(same_suit[i] < min)
            {
                min = same_suit[i];
            }
        }
        cout << min;
        for(int i = 0; i < num.size(); i++)
        {
            if(num[i] == min)
            {
                cout << ", " << suit[i] << endl;
                break;
            }
        }
        return;
    }
}

int main()
{
    vector<int> num1{5, 2, 6, 9, 9, 6};
    vector<int> num2{4, 1, 6, 7, 5, 4};
    vector<int> num3{3, 4, 5, 6, 2, 1};
    vector<int> num4{9, 8, 7, 7, 9, 3};
    vector<int> num5{1, 1, 9, 8, 9, 7};
    vector<char> suit1{'D', 'D', 'H', 'D', 'S', 'H'};
    vector<char> suit2{'C', 'C', 'C', 'H', 'S', 'D'};
    vector<char> suit3{'D', 'H', 'C', 'S', 'D', 'D'};
    vector<char> suit4{'S', 'H', 'C', 'D', 'H', 'H'};
    vector<char> suit5{'C', 'D', 'H', 'S', 'S', 'C'};

    RunThrough(num1, suit1);
    RunThrough(num2, suit2);
    RunThrough(num3, suit3);
    RunThrough(num4, suit4);
    RunThrough(num5, suit5);
}