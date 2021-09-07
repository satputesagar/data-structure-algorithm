#include<bits/stdc++.h>
using namespace std;



 void countFre(string S)
    {
        for(char c = 'a';c <= 'z';++c)
        {
            int frequency = 0;
            for(int i = 0;i < S.length();++i)
                if(S[i] == c)
                    frequency++;
            cout << c <<" " << frequency << endl;
        }
    }
int main()
{
    string s;
    cin>>s;
countFre(s);

    return 0;
}