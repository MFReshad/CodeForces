#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int rows = 10;
    int columns = 10;
    vector<vector<char>> v;
    char a;
    cin>>t;
    while(t--)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin>>a;
                if(a=='X')
                {
                    if((i == 0 || i==9) || (j == 0 || j ==9))
                        sum += 1;
                    else if(i == 1 || i == 8 || j == 1 || j == 8)
                        sum += 2;
                    else if(i == 2 || i == 7 || j == 2 || j == 7)
                        sum += 3;
                    else if(i == 3 || i == 6 || j == 3 || j == 6)
                        sum += 4;
                    else
                        sum += 5;
                }
            }
        }
        cout<<sum<<endl;
    }
}
