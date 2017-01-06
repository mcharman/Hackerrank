#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    for(int T_i = 0; T_i < T; T_i++)
    {
        vector<int> arr;
        int N;
        long int sum = 0;
        cin >> N;

        for(int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            sum += x;
        }
        
        int left = 0;
        bool flag = false;
        
        for(int i = 0; i < N; i++)
        {
            sum -= arr[i];
            if(left == sum)
            {
                flag = true;
                break;
            }
            left += arr[i];
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        
    }
    
    return 0;
}

