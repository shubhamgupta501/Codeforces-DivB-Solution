/************************************************************************************************************************************************
*                                                                                                                                               *
*																	Name-Shubham Gupta                                                          *
*																	CSE,MNNIT Allahabad                                                         *
*																	Email-shubhamgupta501@gmail.com                                             *
*************************************************************************************************************************************************/


#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<math.h>
#include<limits.h>

using namespace std;

//input
#define scd1(x)          scanf("%d",&(x))
#define scd2(x,y)    	 scanf("%d%d",&(x),&(y))
#define scd3(x,y,z) 	 scanf("%d%d%d",&(x),&(y),&(z))
#define sclld1(x)    	 scanf("%lld",&(x))
#define sclld2(x,y)    	 scanf("%lld%lld",&(x),&(y))
#define sclld3(x,y,z)    scanf("%lld",&(x),&(y),&(z))
#define scstr1(x)        scanf("%s",(x));
#define scstr2(x,y)      scanf("%s%s",(x),(y));


//output
#define out(x)           printf("%d\n",x)
#define out2(x,y)        printf("%d %d\n",x,y)
#define outll(x)         printf("%lld\n",x)
#define outll2(x,y)      printf("%lld %lld\n",x,y)
#define nl               printf("\n");


#define MP               make_pair
#define pb               push_back
#define rep(i,n)         for(int i=0;i<n;i++)
#define REP(i,a,b)       for(int i=a;i<=b;i++)
#define PER(i,a,b)       for(int i=b;i>=a;i--)
#define X                first
#define Y                second
#define all(c)           c.begin(),c.end()  //eg sort(all(v));

//for size and initialize
#define sz(a)            int((a).size())
#define clr(a)           memset(a,0,sizeof(a))
#define ini(a)           memset(a,-1,sizeof(a))


//cost
#define MAX 1000000
#define MOD 1000000007
#define pi  3.1415926536

typedef long long int lld;
 


int na, ma, nb, mb;
char sa[50][51], sb[50][51];

int main() 
{
	scd2(na,ma);
	for (int i = 0; i < na; ++i)
	{
		scstr1(sa[i]);
		for (int j = 0; j < ma; ++j) 
		{
			sa[i][j] -= '0';
		}
	}
	scd2(nb,mb);
	for (int i = 0; i < nb; ++i) 
	{
		scstr1(sb[i]);
		for (int j = 0; j < mb; ++j) {
			sb[i][j] -= '0';
		}
	}
	int res = 0, bestX = 0, bestY = 0;
	for (int x = -na; x <= nb; ++x) 
	{
		for (int y = -ma; y <= mb; ++y) 
		{
			int sum = 0;
			for (int i = max(0, -x); i < na && i + x < nb; ++i) 
			{
				for (int j = max(0, -y); j < ma && j + y < mb; ++j) 
				{
					sum += sa[i][j] * sb[i + x][j + y];
				}
			}
			if (sum > res) {
				res = sum;
				bestX = x;
				bestY = y;
			}
		}
	}
	printf("%d %d\n", bestX, bestY);
	return 0;
}
