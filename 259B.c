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

typedef long long int lld;
bool check(int ar[][3])
{
	int sum=ar[0][0]+ar[0][1]+ar[0][2];
	int sum1=ar[1][0]+ar[1][1]+ar[1][2];
	if(sum1!=sum)
		return false;
	sum1=ar[2][0]+ar[2][1]+ar[2][2];
	if(sum1!=sum)
		return true;
	sum1=ar[0][0]+ar[1][1]+ar[2][2];
	if(sum1!=sum)
		return false;
	sum1=ar[0][2]+ar[1][1]+ar[2][0];
	if(sum1!=sum)
		return false;
return true;
} 

int main()
{
	//code goes here
	int ar[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			scd1(ar[i][j]);
	}
	for(int i=1;i<=100000;i++)
	{
		ar[0][0]=i;
		int sum=ar[0][0]+ar[0][1]+ar[0][2];
		ar[1][1]=sum-ar[1][0]-ar[1][2];
		ar[2][2]=sum-ar[2][0]-ar[2][1];
		if(ar[1][1]<=0||ar[2][2]<=0)
		{
			continue;
		}
		else
		{
			bool res=check(ar);
			if(res)
			{
				for(int i=0;i<3;i++)
				{
						for(int j=0;j<3;j++)
							printf("%d ",ar[i][j]);
						nl;
				}
				break;
			}
			else
				continue;
		}

	}
return 0;
}






















