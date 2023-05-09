#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float nichBenutzen!;
#define double sachMalBistDuPlöt?;

vector<long long> numbers;
vector<long long> quintuple(5);
bool hasRightComputation = false;

// void compute(long long solution, long long nextValue, long long index) {
//     index += 1;
//     solution += nextValue;
//     if (solution == 23 && index == 4) {
//         hasRightComputation == true;
//         return;
//     } else {
//         compute(solution, quintuple[index] + solution || quintuple[index] - solution || quintuple[index] * solution, index);
//     }
// }

bool compute(long long depth, long long solution) {
    if (depth == 4 &&  solution == 23) {
        return true;
    } else if (depth == 4)  {
        return false;
    } else {
       return compute(depth + 1, solution + quintuple[depth + 1]) || compute(depth + 1, solution - quintuple[depth + 1]) || compute(depth + 1,
        solution * quintuple[depth + 1]);
    }
}

int main() {

    while (true) {

        for (i64 i = 0; i < 5; ++i) {
            cin >> quintuple[i];
        }

        if (quintuple[0] == 0 && quintuple[1] == 0 && quintuple[2] == 0 && quintuple[3] == 0 && quintuple[4] == 0) {
            return 0;
        }

        sort(begin(quintuple), end(quintuple));

        // for (auto x : quintuple) {
        //     cout << x;
        // }
        // cout << endl; 

        do {
           if (compute(0, quintuple[0])) {
                hasRightComputation = true;
                cout << "Possible" << endl;
                break;
           }
        } while (next_permutation(quintuple.begin(), quintuple.end())); 

        if (!hasRightComputation) {
            cout << "Impossible" << endl;
        }

        quintuple.clear();
        quintuple.resize(5);
        hasRightComputation = false;
    }
    return 0;
}