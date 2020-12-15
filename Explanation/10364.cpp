/*
������գ�ʹ�ó���Ҫ�����

�������ݣ�
��һ��������n (1<=n<=10)
�ڶ����� n������

������ݣ�

��ԭ��������������е�n������
Ȼ�������:
	
1,2,3,4,5,1,2,3,4,5,
123434567

����������

10
15 25 35 45 55 65 75 85 95 105

���������
15,25,35,45,55,65,75,85,95,105,
1,2,3,4,5,1,2,3,4,5,
123434567
167896789
 
*/
#include <iostream>
using namespace std;
void Memcpy( void * src, void * dest, int size)
{
//your code starts here
	
	char * csrc = (char * ) src;
	char * cdest = (char * ) dest;
	if( src == dest )
		return;
	if( cdest > csrc && cdest < csrc + size) {
		//�Ӻ���ǰ���� 
		for(int i = size-1; i >= 0; -- i)
			cdest[i] = csrc[i];
	}
	else {
		//��ǰ���󿽱�
		for(int i = 0;i < size; ++i)
			cdest[i] = csrc[i]; 
	}
	
//your code ends here	
}

void Print(int * p,int size)
{
	for(int i = 0;i < size; ++i)
		cout << p[i] << ",";
	cout << endl;
}

int main()
{
	int a[10];
	int n;
	cin >> n;
	for(int i = 0;i < n; ++i)
		cin >> a[i];
	int b[10] = {0};
	Memcpy(a,b,sizeof(a));
	Print(b,n);
	
	int c[10] = {1,2,3,4,5,6,7,8,9,10};
	Memcpy(c,c+5,5*sizeof(int)); //��c��ǰһ�뿽������һ�� 
	Print(c,10);

	char s[10] = "123456789";
	Memcpy(s+2,s+4,5); //��s[2]��ʼ��5���ַ�������s[4]��ʼ�ĵط� 
	cout << s << endl;
	
	char s1[10] = "123456789";
	Memcpy(s1+5,s1+1,4); //��s1[5]��ʼ��4���ַ�������s1[1]��ʼ�ĵط� 
	cout << s1 << endl;
	
	return 0;
}
