#include <bits/stdc++.h>
using namespace std;
int n, x;
priority_queue<int, vector<int>, greater<int> > q1;
// q1 С���ѣ����������ɵ�����
priority_queue<int, vector<int>, less<int> > q2;
// q2 ����ѣ�����С�����ɵ�����
// ʱ�̱�֤ q1�е���Сֵ >= q2�е����ֵ 
// ʱ�̱�֤ q1.size()==q2.size() �� q1.size()==q2.size()+1
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (i == 1 || x > q1.top()) {
			q1.push(x);
		} else {
			q2.push(x);
		}
		if (q1.size() < q2.size()) {
			q1.push(q2.top());
			q2.pop();
		}
		if (q1.size() > q2.size() + 1) {
			q2.push(q1.top());
			q1.pop();
		}
		if (i % 2 == 1) {
			printf("%d\n", q1.top());
		}
	}
	return 0;
}