#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;

long long T;
long long amountOfBlocks;
string blockInput;
vector<string> blocks;
bool allSameColor = false;
vector<long long> shotBlocks;


bool isValid() {
    for (long long i = 1; i < blocks.size(); i++) {
        if (blocks[i - 1] != blocks[i] ) {
            return false;
        } 
    } 
    return true;
}

void reverse(long long indexOfBlockLeft) {
    if (blocks[indexOfBlockLeft] == "B") {
        blocks[indexOfBlockLeft] = "W";
    } else {
        blocks[indexOfBlockLeft] = "B";
    } 
}

void switchBlocks(long long index) {
        if (blocks[index] == "W" && blocks[index + 1] == "B") {
            reverse(index + 1);
            reverse(index + 2);
            shotBlocks.push_back(index + 1);
        }
}

int main() {

    cin >> T;

    for (long long i = 0; i < T; ++i) {
        cin >> amountOfBlocks;
        blocks.resize(amountOfBlocks);
        cin >> blockInput;

        for (int j = 0; j < blockInput.length(); ++j) {
            blocks[j] = blockInput[j];
        }

        for (long long j = 1; j < blocks.size(); ++j) {
            if (blocks[j - 1] == "W" && blocks[j]) {
                reverse(j);
                reverse( j + 1);
                blocks.push_back(j);
            }
        }
            
        if (isValid()) {
            for (auto x : shotBlocks) {
                cout << x << endl;
            }
        }

        blocks.clear();
        allSameColor = false;
    }
}



