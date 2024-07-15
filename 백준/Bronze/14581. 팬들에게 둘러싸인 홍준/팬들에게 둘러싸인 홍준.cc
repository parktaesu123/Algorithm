#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string id, fan;
    fan = ":fan:";
    cin >> id;
    
    cout << fan << fan << fan << "\n";
    cout << fan << ":" << id << ":" << fan << "\n";
    cout << fan << fan << fan;
    
    return 0;
}