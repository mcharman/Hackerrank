#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int A, B, tally;
        cin >> A >> B;
        tally = 0;
        
        for(int j = 1; j*j <= B; j++)
        {
            if(j*j >= A && j*j <= B)
                tally++;
        }
        cout << tally << endl;
        
    }
    return 0;
}
