//
// Created by torbe on 20.04.2023.
//

#include "TaskPhoto.h"
#include <bits/stdc++.h>


using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

//#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;


int main() {
    string inputName;
    i64 x;
    i64 y;

    map<string, i64> positions;

    while (cin >> inputName) {
        cin >> x;
        cin >> y;

        //calculate the angle of every person
        //put the into the map which autosorts them

        positions[inputName] = x / y;

        //maybe try to sort, if the same position, for the x value, so if the person which is nearer is first
        cout << positions;

    }


}