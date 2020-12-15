/*
��дһ�� MyMax�����������������κ������е����ֵ

ʹ�ó���Ҫ�����

��������

��һ���ǲ����������� t
��ÿ�����ݣ�
��һ��������n (1<=n<=10)
��2���� n������
��3����n��������

�������

��ÿ�����ݣ�

�����n�������и�λ��������(�𰸱�֤Ψһ�� 
�����n��������������
�����n����������������

����������
2
5
31 20 100 7 8
30.1 100.2 2.5 9.8 48.4
2
1 2
0.1 0.2

������� 

8
100
100.2
2
2
0.2


*/

#include <iostream>
using namespace std;
//your code starts here
void * MyMax(void * a,int width,int num, 
			int (*compare)(void * p1,void * p2))
{
	void * result = a;
	for(int i = 1;i < num; ++i) {
		if( compare( result, ((char *) a ) + i * width) < 0)
			result = ((char *) a ) + i * width;
	}
	return result;
}
//your code ends here

int Compare1(void * n1,void * n2)
{
	int * p1 = (int * )n1;
	int * p2 = (int * )n2;
	return ((*p1)%10) - ((*p2)%10);
}
int Compare2(void * n1,void * n2)
{
	int * p1 = (int * )n1;
	int * p2 = (int * )n2;
	return *p1 - *p2;
}
#define eps 1e-6
int	Compare3(void * n1,void * n2)
{
	float * p1 = (float * )n1;
	float * p2 = (float * )n2;
	if( * p1 - * p2 > eps)
		return 1;
	else if(* p2 - * p1 > eps)
		return -1;
	else
		return 0; 
}

int main()
{
	int t;
	int a[10];
	float d[10];
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0;i < n; ++i)
			cin >> a[i];
		for(int i = 0;i < n; ++i)
			cin >> d[i];
		int * p = (int *) MyMax(a,sizeof(int),n,Compare1);
		cout << * p << endl;
		p = (int *) MyMax(a,sizeof(int),n,Compare2);
		cout << * p << endl;
		float * pd = (float * )MyMax(d,sizeof(float),n,Compare3);
		cout << * pd << endl;
	}
	return 0;
}
