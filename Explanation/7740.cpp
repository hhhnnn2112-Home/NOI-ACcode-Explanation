// By Guo Wei
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
	int age1 = 0, age2 = 0, age3 = 0 ,age4 = 0;
	int n;
	cin >> n;
	int total = 0;
	for(int i = 0;i< n; ++i ) {
		int age;
		cin >> age;
		
		//����0-18��19-35��36-60��61���ϣ���61���ĸ����������öλ�������ռ�ܻ��������ı������԰ٷֱȵ���ʽ�������ȷ��С�������λ��ÿ�������ռһ�У������С�
		
		
		if( age >= 0 && age <= 18 ) 
			++age1;
		else if( age >=19 && age <=35)
			++age2;
		else if( age >= 36 && age <= 60 )
			++age3;
		else 
			++age4;
		++ total;
	}
	cout << setiosflags(ios::fixed) << setprecision(2);  //����Ϊ����С�������2λ 
	cout << (double)age1/total * 100 << "%" << endl;
	cout << (double)age2/total * 100 << "%" << endl;
	cout << (double)age3/total * 100 << "%" << endl;
	cout << (double)age4/total * 100 << "%" << endl;
	return 0;
}

