#include <iostream>
#include <vector>
using namespace std;

void RunThrough(vector<int> cards, int points)
{
    if(cards[0] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[0] == 9)
    {
    }
    else if(cards[0] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[0] + points;
    }
    if(points > 99)
    {
        cout << points << ", dealer" << endl;
        return;
    }



    if(cards[4] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[4] == 9)
    {
    }
    else if(cards[4] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[4] + points;
    }
    if(points > 99)
    {
        cout << points << ", player" << endl;
        return;
    }


    if(cards[1] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[1] == 9)
    {
    }
    else if(cards[1] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[1] + points;
    }
    if(points > 99)
    {
        cout << points << ", dealer" << endl;
        return;
    }


    if(cards[6] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = 11 + points;
        }
    }
    else if(cards[6] == 9)
    {
    }
    else if(cards[6] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[6] + points;
    }
    if(points > 99)
    {
        cout << points << ", player" << endl;
        return;
    }


    if(cards[2] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[2] == 9)
    {
    }
    else if(cards[2] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[2] + points;
    }
    if(points > 99)
    
    {
        cout << points << ", dealer" << endl;
        return;
    }


    if(cards[8] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[8] == 9)
    {
    }
    else if(cards[8] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[8] + points;
    }
    if(points > 99)
    {
        cout << points << ", player" << endl;
        return;
    }


    if(cards[3] == 0)
    {
        if(points + 11 > 99)
        {
            points = points + 1;
        } 
        else
        {
            points = points + 11;
        }
    }
    else if(cards[3] == 9)
    {
    }
    else if(cards[3] == 4)
    {
        points = points - 10;
    }
    else
    {
        points = cards[3] + points;
    }
    if(points > 99)
    {
        cout << points << ", dealer" << endl;
        return;
    }
}

int main() 
{
    int point_total1 = 87;
    int point_total2 = 78;
    int point_total3 = 85;
    int point_total4 = 84;
    int point_total5 = 95;
    vector<int> cards1{5, 8, 9, 7, 4, 6, 3, 9, 0, 2};
    vector<int> cards2{2, 4, 8, 3, 8, 5, 0, 6, 9, 8};
    vector<int> cards3{7, 9, 7, 6, 5, 9, 4, 5, 0, 1};
    vector<int> cards4{8, 4, 2, 7, 9, 0, 1, 9, 8, 3};
    vector<int> cards5{9, 0, 9, 0, 1, 0, 1, 0, 2, 5};
 
    RunThrough(cards1, point_total1);
    RunThrough(cards2, point_total2);
    RunThrough(cards3, point_total3);
    RunThrough(cards4, point_total4);
    RunThrough(cards5, point_total5);
    
    return 0;
}

