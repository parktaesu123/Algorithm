#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string J,H;
    for(int i = 0; i<num_list.size(); i++) {
        if(num_list[i] % 2 == 0) {
            J.push_back(num_list[i]+'0');
        }
        else {
            H.push_back(num_list[i]+'0');
        } 
    }
    answer = stoi(J) + stoi(H);
    return answer;
}