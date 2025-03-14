#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    // Comparators definition
    if(a.second < b.second) return true;
    else if(a.second > b.second) return false;
    
    if(a.first < a.second) return false;
    return true;
}

int main() {
    // int arrNumber[] = {1, 32, 2, 534, 52, 54, 42};
    // int length = sizeof(arrNumber) / sizeof(arrNumber[0]);
    
    // sort(arrNumber, arrNumber + length);
    
    
    // for(int i = 0; i < length; i++) {
    //     cout << arrNumber[i] << endl;
    // }
    
    // Usage of Comparators
    // pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort(p, p + 3, comp);
    
    // for(auto it = p; it != p + 3; it++) {
    //     cout << it->first << ", " << it->second << endl;
    // }
    
    // int number = 3;
    // cout << __builtin_popcount(number); 
    
    // long long int number = 12423141234123;
    // cout << __builtin_popcountll(number);
    
    string str = "231";
    
    // sort(str.begin(), str.end());   // without this if the string is in not in sorted manner then it will print upto the max 
    // ouput without this --> 
    // 231
    // 312
    // 321
    
    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));
    
    return 0;
}