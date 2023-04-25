#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;

// struct Position {
//         int64_t x, y;
        
//         bool operator<(const Position &p) const {
//             // return (x < p.x) || (x == p.x && y < p.y);
//             return (y/x > p.y/p.x) || (y/x == p.y/p.x && x > p.x) ;
//         }
//     };
    
    struct Person {
        string personName;
        long long x;
        long long y;
        long long pitch;
        
        bool operator< (const Person &p) const {
            if (y/x > p.y/p.x) {
                return true;
            } else if (y/x == p.y/p.x && x < p.x) {
                return true;
            } else {
                return false;
            }
        }
        
    };
    
    // map<Position, string> positions;
    
int main() {
   
   vector<Person> persons;
   
    string name;
    long long x;
    long long y;

    while (cin >> name) {
        
        cin >> x;
        cin >> y;

        //calculate the angle of every person
        //put the into the map which autosorts them

        // positions[Position{x, y}] = name;
        // Person p = new Person;
        // p.name(name);
        // p.x(x);
        // p.y(y);
        // p.pitch(y/x);
        persons.push_back({name, x, y, y/x});
        // persons.push_back(p);
        
    }
    
    // for (auto &[k,v] : positions) {
    //     // cout << k.x << ", " << k.y << ", " << v << endl;
    //     cout << v << endl;
    // }
    sort(begin(persons), end(persons));
    
    for (auto x : persons) {
        cout << x.personName  << endl;
        //<< ", " << x.x << ", " << x.y << ", " << x.pitch << endl;
        // cout << x.personName << endl;

    }
    
    return 0;
}