题目描述
给你3个整数b,p,k,求b(p)mod k
2 10 9

2^10 mod 9=7


#include<bits/stdc++.h>
using namespace std;
long long b,a,p,k,ans=1,c;
int main()
{
    scanf("%d%d%d",&b,&p,&k);
    a=b;c=p;
    while(p>0)//快速幂
    {
        if(p%2!=0)
            ans=ans*b%k;//如果p为单数，乘到ans里面去，然后取模
        b=b*b%k;//每次运算都取模
        p=p>>1;    //用位运算除2，可能会快一点
    }
    printf("%d^%d mod %d=%d",a,c,k,ans);//输出
    return 0;
}