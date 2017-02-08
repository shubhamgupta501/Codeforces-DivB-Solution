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
 

int main()
{
	//code goes here
	int r,c;
	int mat1[105][105];
	int mat2[110][110];
	scd2(r,c);
	for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			{
				mat1[i][j]=1;
				mat2[i][j]=0;
			}	
	int ori[105][105];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scd1(ori[i][j]);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(ori[i][j]==0)
			{
				for(int k=0;k<r;k++)
					mat1[k][j]=0;
				for(int k=0;k<c;k++)
					mat1[i][k]=0;
			}
		}
	}
	/*//hu
	for(int i=0;i<r;i++)
	{
			for(int j=0;j<c;j++)
				printf("%d ",mat1[i][j]);
			printf("\n");
	}
	//hu*/
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(mat1[i][j]==1)
			{
				for(int k=0;k<r;k++)
					mat2[k][j]=1;
				for(int k=0;k<c;k++)
					mat2[i][k]=1;
			}
		}
	}
	/*//hu
	for(int i=0;i<r;i++)
	{
			for(int j=0;j<c;j++)
				printf("%d ",mat2[i][j]);
			printf("\n");
	}
	//hu*/
	int flag=0;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			if(ori[i][j]!=mat2[i][j])
			{
				flag=1;
				break;
			}
		}
	if(flag)
		printf("NO\n");
	else
	{
		printf("YES\n");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				printf("%d ",mat1[i][j]);
			printf("\n");
		}
	}
return 0;
}






















