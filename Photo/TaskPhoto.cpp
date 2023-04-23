#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

// #define float nichBenutzen!;
#define double sachMalBistDuPlöt?;


    string inputName;
    long long x;
    long long y;

    

struct Position {
        int64_t x, y;
        
        bool operator<(const Position &p) const {
            // return (x < p.x) || (x == p.x && y < p.y);
            return (x/y < p.x/p.y) || (x/y == p.x/p.y && x < p.x) ;
        }
        
        bool operator==(const Position &p) const {
            return x == p.x && y == p.y;
        }
        
        // string operator<<(const Position & p) const {
        //     return (string) x << ", " << y;
        // }
    };
    
    map<Position, string> positions;
    
int main() {

    
    
    
    
    while (cin >> inputName) {
        cin >> x;
        cin >> y;
        
        cout << inputName << endl;
        cout << x/y << endl;

        //calculate the angle of every person
        //put the into the map which autosorts them

        positions[Position{x, y}] =  inputName;
         
        
    }
    
    for (auto &[k,v] : positions) {
        cout << k.x << ", " << k.y << v << endl;
    }
    
    //   for (auto it = begin(positions); it != end(positions); it++) {
    //       cout << it->first << " " << it->second << endl;
    //   }
    

        
        // for (int64_t i = 0; i < sizeof(positions); ++i) {
        //     cout << positions[i] << " ";
        // }

    return 0;
}
  
