#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n = 26;
    int minHeight = 0;
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    unsigned int length = word.length();
    for(unsigned int i = 0; i < length; i++)
    {
        for(unsigned int j = 97; j < 122; j++)
        {
            if((int)word[i] == j)
            {
                //cout << "matching letter" << endl;
                unsigned int val = j;
                val = val - 97;
                if(h[val] > minHeight)
                    minHeight = h[val];
                break;
            }

        }
    }
    cout << length * minHeight << endl;
    
    
    return 0;
}
