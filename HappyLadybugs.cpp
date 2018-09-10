#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, n;
    string s;
    char ch;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, s);
        
        vector<char> ans(s.begin(), s.end());
        vector<char> ans2(s.begin(), s.end());
        
        sort(ans.begin(), ans.end());
        int flag = 0, count = 0;
        
        if(ans[ans.size()-1] == '_')
        {
            for(i=0; i<ans.size(); i++)
            {
                if(ans[i] == '_')
                    break;

                if(ans[i] == ans[i+1])
                {
                    count++;
                    continue;
                }
                else
                {
                    if(count>0)
                    {
                        count=0;
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
        {
            for(i=0; i<ans2.size(); i++)
            {
                if(ans2[i] == ans2[i+1])
                {
                    count++;
                    continue;
                }
                else
                {
                    if(count>0)
                    {
                        count=0;
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        
    }    

    return 0;
}
