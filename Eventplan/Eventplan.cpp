//
// Created by torbe on 20.04.2023.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = int64_t;
using u64 = uint64_t;

#define float biddeNicht!;
#define double sachMalBistDuPlöd?;

int main() {
    i64 n,b,h,w;
    cin >> n >> b >> h >> w;

    i64 price;
    i64 freeBeds;
    vector<int> validPrices;

    //iterate through all hotels
    for (int i = 0; i < h; ++i) {
        //get the price of the hotel
        cin >> price;
        //iterate through weekends with enough freed beds an a valid price
        for (int j = 0; j < w; ++j) {
            cin >> freeBeds;
            if (freeBeds >= n && n * price <= b) {
                validPrices.push_back(n * price);
            }
        }
    }

    if (validPrices.empty()) {
        cout << "stay home";
    } else {
        cout << *min_element(validPrices.begin(), validPrices.end());
    }
}


