#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;

   long long number;
    string ins42 = "? insert 42";
    string ins66 = "? insert 66";
    string ins1 = "? insert 1";
    string rem = "? remove";
    string em = "? empty";
    string isEmpty;

int main() {

    cout.flush() << ins42 << endl;
    cout.flush() << ins1 << endl;
    cout.flush() << ins66 << endl;
    cout.flush() << ins1 << endl;
    cout.flush() << rem << endl;
    
    cin >> number;
   

    if (number == 1) {
        //the set or stack
        cout.flush() << rem << endl;
        cin >> number;
        
        if (number == 66) {
            cout.flush() << "! stack" << endl;
            return 0;
        } else if (number == 42) {
            cout.flush() << "! set" << endl;
            return 0;
        } else if (number == 1) {
            cout.flush() << "! pq";
            return 0;
        } 
    } else if (number == 42) {
        // the queue or the set
        cout.flush() << "! queue" << endl;
        return 0;

    } else if (number == 66) {
        cout.flush() << "! pq" << endl;
        return 0;
    }
}