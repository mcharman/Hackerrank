#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> arr;
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    int tally = 0;
    int tallytemp = 0;
    int occurence = 0;
    tallytemp = arr[0];
    int placeholder = 0;
    for(int i = 0; i < arr.size(); i++)
    {
         if(arr[i] == tallytemp)
         {
             tally++;
         }
        
        if(arr[i+1] != tallytemp)
        {
            if(tally > occurence)
            {
                placeholder = i;
                occurence = tally;
            }            
            tallytemp = arr[i+1];
            tally = 0;   
        }
    }
    cout << abs(arr.size() - occurence) << endl;
    
    return 0;
}
