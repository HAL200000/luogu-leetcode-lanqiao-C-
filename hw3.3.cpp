#include <bits/stdc++.h>
using namespace std;

enum JumpType 
{
    T, S, Lo, F, Lz, A
};

static double scoreTable[4][6] = { {0.4, 0.4, 0.5, 0.5, 0.6, 1.1},
                                   {1.3, 1.3, 1.7, 1.8, 2.1, 3.3},
                                   {4.2, 4.3, 4.9, 5.3, 5.9, 8.0},
                                   {9.5, 9.7, 10.5, 11.0, 11.5, 12.5} };

double Score(int rotations, enum JumpType type) 
{
    if (rotations < 1 || rotations > 4) 
    {
        return -1;
    }
    return scoreTable[rotations - 1][type];
}
int cnt=3;
char s[15];
bool judge()
{

}
int main() 
{
    while(cnt--)
    {
        int num,error;
        enum type;
        
        //printf("%s",s);
    }
    system("pause");
    return 0;
}
/*
0A+1T
3Fe<
3Lze+3Tx
*/