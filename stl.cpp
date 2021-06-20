/*    
 *    C++ STL Library
 *
 *    [x] Vectors
 *    [x] Iterators
 *    [x] Queues
 *    [x] Stacks
 *    [x] Sets
 *    [x] Pair
 *    [x] Maps
 *    [x] UnorderedMaps
 *    [x] Bitsets
 *
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <utility>
#include <map>
#include "unordered_map"
#include <bitset>

using namespace std;
int main() {

    vector <int> v;
    cout << v.size();

    /*  
     *  1. push_back(element)
     *  2. insert(itr, element)
     *
     */

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    cout << v.size();

    // Iterators
    for (auto vitr=v.begin();vitr!=v.end();++vitr) {
        cout << *vitr << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 600);

    for (int t=0;t<v.size();++t) {
        cout << v[t] << " ";
    }

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(9);

    // // 1<-2<-3<-4<-5
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    stack<int> s;
    s.push(1);
    s.push(4);
    s.push(3);
    s.push(19);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);

    st.erase(1);

    for (auto itr=st.begin();itr!=st.end();++itr) {
        cout << *itr << " ";
    }

    pair<int, int> p;
    // first, second
    p.first = 2;
    p.second = 4;

    cout << p.first << " " << p.second;


    map<int, int> mp;
    mp[100] = 1000;
    mp[2] = 100;
    mp[3] = 200;

    for (auto itr=mp.begin();itr!=mp.end();++itr) {
        cout << itr->first << " " << itr->second << endl;
    }

    cout << "--------------" << endl;
    unordered_map<int, int> ump;
    ump[100] = 1000;
    ump[2] = 100;
    ump[3] = 200;

    for (auto itr=ump.begin();itr!=ump.end();++itr) {
        cout << itr->first << " " << itr->second << endl;
    }

    bitset<5> bt;

    bt[0] = 1;
    bt[3] = 1;

    bt.reset();
    cout << bt.none();
}
