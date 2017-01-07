#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int t_i = 0; t_i < t; t_i++)
    {
        bool flag = true;
        string s, r;
        cin >> s;
        r = s; 
        reverse(r.begin(), r.end());
        
        for(int i = 0; i < s.length()-1; i++)
        {
            if(abs(s[i]-s[i+1]) != abs(r[i]-r[i+1]))
            {
                flag = false;
                break;
            }    
        }
        if(flag)
            cout << "Funny" << endl;
        else
            cout << "Not Funny" << endl;
    }
    return 0;
}
