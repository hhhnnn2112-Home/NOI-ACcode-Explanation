//By Guo Wei
#include <iostream>
#include <cstring>
using namespace std;
const int MX = 5;
int a[MX+10][MX+10]; 
int maxJ[MX+10]; //maxJ[i]�ǵ�i�е����ֵ���к� 
int minI[MX+10]; //minI[j]�ǵ�j�е���Сֵ���к� 
int main()
{
	for(int i = 1;i <= MX; ++i) {
		cin >> a[i][1];
		maxJ[i] = 1;
		for(int j = 2; j <= MX; ++j) {
			cin >> a[i][j];
			if( a[i][j] > a[i][maxJ[i]])
				maxJ[i] = j;
		}
	}
	for(int j = 1;j <= MX; ++j) {
		minI[j] = 1;
		for(int i = 2;i <= MX; ++i)
			if( a[i][j] < a[minI[j]][j])
				minI[j] = i;
	}
	bool found = false;
	for(int i = 1;i <= MX; ++i) {
		if( minI[maxJ[i]] == i ) {//��i�����ֵ���ڵ��У�����Сֵ���ڵ���������i����ôa[i][maxJ[i]]�ǰ���  {
			cout << i << " " << maxJ[i] << " " << a[i][maxJ[i]] << endl;
			found = true;
		}
	}
	if( !found)
		cout << "not found" << endl;
	return 0;
}
