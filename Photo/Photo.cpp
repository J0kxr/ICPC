#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;

struct Position {
        int64_t x, y;
        
        bool operator<(const Position &p) const {
            // return (x < p.x) || (x == p.x && y < p.y);
            return (y/x > p.y/p.x) || (y/x == p.y/p.x && x < p.x) ;
        }

    };
    
    map<Position, string> positions;
    
int main() {
    string name;
    long long x;
    long long y;

    while (cin >> name) {
        
        cin >> x;
        
        cin >> y;

        //calculate the angle of every person
        //put the into the map which autosorts them

        positions[Position{x, y}] = name;
         
        
    }
    
    for (auto &[k,v] : positions) {
        // cout << k.x << ", " << k.y << ", " << v << endl;
        cout << v << endl;
    }
    
    return 0;
}
  
