#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

const int N=1005,M=100005;

int n,m,s;
int u,v,w;
int g[N][N];
int low[N];
bool flag[N];

void dij(int start)
{
    int k=start;
    memset(low,127,sizeof(low));
    low[s]=0;
    int mint,p;
    for(int i=1;i<n;++i)
    {
        flag[k]=1;
        mint=1<<30;
        for(int j=1;j<=n;++j)
        {
            if(flag[j])
                continue;
            if(low[k]+g[k][j]<low[j])
                low[j]=low[k]+g[k][j];
            if(mint>low[j])
            {
                mint=low[j];
                p=j;
            }
        }
        k=p;
    }
}

int main()
{
    scanf("%d%d%d",&n,&m,&s);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            g[i][j]=1<<30;
    for(int i=1;i<=m;++i)
    {
        scanf("%d%d%d",&u,&v,&w);
        g[u][v]=min(w,g[u][v]);
    }
    dij(s);
    for(int i=1;i<=n;++i)
        if(low[i]<(1<<30))
            printf("%d ",low[i]);
        else
            printf("2147483647 ");
    printf("\n");
    return 0;
}