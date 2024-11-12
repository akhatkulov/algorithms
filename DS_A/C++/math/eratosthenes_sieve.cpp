#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> eratasfen(int limit) {
    vector<bool> is_p(limit + 1, true);
    is_p[0] = is_p[1] = false;

    for (int i = 2; i <= sqrt(limit); ++i) {
        if (is_p[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_p[j] = false;
            }
        }
    }

    vector<int> pr;
    for (int i = 2; i <= limit; ++i) {
        if (is_p[i]) {
            pr.push_back(i);
        }
    }

    return pr;
}
