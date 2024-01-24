// (c) Ike Yang 2024
// 1833E - Round Dance (1600)
// 2024-01-24
// Time Taken: 1h
// (c) Ike Yang 2024
// 1833E - Round Dance (1600)
// Wed Jan 24
// Time Taken: 1h

// Personal Boilerplate
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <climits>

#define repeat(x, vn) for (int vn = 0; vn < x; vn++)
#define debug(x) cout << x << "
"

using namespace std;
int testcases = 1;

int parent[(unsigned long)2e5];
int direct[(unsigned long)2e5];
int loopcount = 0;
int nonloopsets = 0;

int getroot(int a) {
    if (parent[a] == a) return a;
    return getroot(parent[a]);
}

void join(int a, int b) {
    if (getroot(a) == getroot(b)) {// Already in the same set, now we check whether or not this is a loop rather than a single connection
        if (direct[a] == b || direct[b] == a) return; // Single connection
        loopcount++;
        nonloopsets--;
        return;
    }
    nonloopsets--;
    parent[getroot(b)] = a;
}
void solve() {
    int n, par;
    cin >> n;
    nonloopsets = n;
    loopcount = 0;
    repeat(n, i) {
        parent[i] = i;
        direct[i] = -1;
    }
    repeat(n, i) {
        cin >> par;
        join(i, par-1);
        direct[i] = par-1;
    }
    cout << loopcount + (nonloopsets > 0 ? 1 : 0) << " " << loopcount + nonloopsets;
    cout << "
";
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> testcases;
    repeat(testcases, i) solve();
    return 0;
}
// (c) Ike Yang 2024
// 1833E - Round Dance (1600)
// 2024-01-24
// Time Taken: 1h
// Personal Boilerplate
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <climits>

#define repeat(x, vn) for (int vn = 0; vn < x; vn++)
#define debug(x) cout << x << "
"

using namespace std;
int testcases = 1;

int parent[(unsigned long)2e5];
int direct[(unsigned long)2e5];
int loopcount = 0;
int nonloopsets = 0;

int getroot(int a) {
    if (parent[a] == a) return a;
    return getroot(parent[a]);
}

void join(int a, int b) {
    if (getroot(a) == getroot(b)) {// Already in the same set, now we check whether or not this is a loop rather than a single connection
        if (direct[a] == b || direct[b] == a) return; // Single connection
        loopcount++;
        nonloopsets--;
        return;
    }
    nonloopsets--;
    parent[getroot(b)] = a;
}
void solve() {
    int n, par;
    cin >> n;
    nonloopsets = n;
    loopcount = 0;
    repeat(n, i) {
        parent[i] = i;
        direct[i] = -1;
    }
    repeat(n, i) {
        cin >> par;
        join(i, par-1);
        direct[i] = par-1;
    }
    cout << loopcount + (nonloopsets > 0 ? 1 : 0) << " " << loopcount + nonloopsets;
    cout << "
";
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> testcases;
    repeat(testcases, i) solve();
    return 0;
}
