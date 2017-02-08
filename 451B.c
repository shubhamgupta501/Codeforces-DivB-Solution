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
	int ar[100000];
	int n;
	scd1(n);
	rep(i,n)
	{
		scd1(ar[i]);
	}
	int start=0;
	int ss=0;	
	for(int i=0;i<n-1;i++)
	{
		if(ar[i]>ar[i+1])
		{
			start=i;
			ss=1;
			break;
		}
	}
	int end=0;
	for(int i=start;i<n-1;i++)
	{
		if(ar[i+1]>ar[i])
		{
				end=i;
				break;
		}
	}
	if(end==0)
		end=n-1;
	int i=start;
	int j=end;
	while(i<j)
	{
		swap(ar[i],ar[j]);
		i++;
		j--;
	}
	int flag=0;
	for(int i=1;i<n;i++)
	{
		if(ar[i-1]>ar[i])
			flag=1;
	}
	if(ss==0)
	{
		printf("yes\n");
		out2(1,1);
	}
	else if(flag)
		printf("no\n");
	else
	{
		printf("yes\n");
		out2(start+1,end+1);
	}

	
return 0;
}






















