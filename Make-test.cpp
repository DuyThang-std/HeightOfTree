#include <bits/stdc++.h>
using namespace std;
int test[10][(int)1e6];

int main()
{
    ofstream fout("input.txt");
    int run = 1;
    for(int d=0; d<2; ++d) // 2 test tăng dần
    {
        test[d][0] = rand() % 10;
        for(int c=1; c<(int)1e6; ++c)
            test[d][c] = test[d][c-1] + (rand() % 10);
    }
    for(int d=2; d<4; ++d) // 2 test giảm dần
    {
        test[d][0] = rand() % (int)1e6;
        for(int c=1; c<(int)1e6; ++c)
            test[d][c] = test[d][c-1] - (rand() % 10);
    }
    for(int d=4; d<10; ++d) // các test còn lại ngẫu nhiên
    {
        for(int c=0; c<(int)1e6; ++c)
            test[d][c] = rand() % (int)1e6;
    }
    for(int d=0; d<10; ++d)
    {
        fout << "Test case: " << d << '\n';
        for(int c=0; c<(int)1e6; ++c)
            fout << test[d][c] << ' ';
        fout << '\n';
    }
}
