#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;

/*
0 <= y <= T1
0 <= x <= T2

x - y <= t1
y <= x
x = min(T1 + t1, T2)

x - y < T2
*/

void solve() {
	int T1, T2, t1, t2;
	scanf("%d%d%d%d", &T1, &T2, &t1, &t2);
	double ans = 1.0 * T1 * T2;
	if (T1 > T2) swap(T1, T2), swap(t1, t2);

	double ans1 = 0, ans2 = 0;
	if (T2 <= t1) ans1 = 1.0 * T1 * T2 - 0.5 * T1 * T1;
	else {
		ans1 = (1.0 * T1 * T2 - 0.5 * T1 * T1);
		if (t1 + T1 <= T2) ans1 -= 0.5 * T1 * T1 + 1.0 * (T2 - T1 - t1) * T1;
		else ans1 -= 0.5 * (T2 - t1) * (T2 - t1);
	}

	if (T1 <= t2) ans2 = 0.5 * T1 * T1;
	else ans2 = 0.5 * T1 * T1 - 0.5 * (T1 - t2) * (T1 - t2);
	printf("%.20f\n", (ans1 + ans2) / ans);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) solve();
	return 0;
}