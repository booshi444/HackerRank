#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector < int > a) {
    map<int, int> m_a;
    
    for(int _a_i=0; _a_i< a.size(); _a_i++) {
        if(m_a.find(a[_a_i]) == m_a.end()){
            m_a[a[_a_i]] = 1;
        } else{
            m_a[a[_a_i]] = 2;
        }
    }
    int ret = 0;
    for(map<int, int>::iterator m_i = m_a.begin(); m_i != m_a.end(); m_i++){
        if((*m_i).second == 1){
            ret = (*m_i).first;
            break;
        }
    }
return ret;

}
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
