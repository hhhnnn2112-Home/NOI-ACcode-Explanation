#include<bits/stdc++.h>
using namespace std;
int l,m;
int a[10005];
int main()
{
	
	scanf("%d%d",&l,&m);
	for(int i=1;i<=m;i++)
	{
		int ll,rr;
		scanf("%d%d",&ll,&rr);
		a[ll]++;
		a[rr+1]--;
	}
	int ans=0;
	if(a[0]==0)ans++;
	for(int i=1;i<=l;i++)
	{
		a[i]+=a[i-1];
		if(a[i]==0)ans++;
	}
	printf("%d",ans);
	return 0;
} 
/*
����
P1047

syx��O��n��
�ҵı�� ��luogu����д�ļǵø�
���Կ�O��n2������60����������

����  m  l  �ķ�Χ
����ѯ�ʸ���  ��ѯ�����䳤��
*/
