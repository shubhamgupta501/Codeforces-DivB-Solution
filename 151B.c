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
 
struct Data
{
	string name;
	int taxi;
	int pizza;
	int girls;
};
struct Data data[1000];
int main()
{
	//code goes here
	int n,num;
	string str;
	scd1(n);
	int max_taxi,max_pizza,max_girls;
	max_girls=max_pizza=max_taxi=0;
	for(int i=0;i<n;i++)
	{
		cin>>num>>str;
		data[i].name=str;
		data[i].taxi=data[i].pizza=data[i].girls=0;
		for(int j=0;j<num;j++)
		{
			cin>>str;
			int flag=0;
			if((str[0]==str[1])&&(str[3]==str[4])&&(str[6]==str[7])&&(str[1]==str[3])&&(str[4]==str[6]))
				(data[i].taxi)++;
			else
			{
				if((str[0]>str[1])&&(str[3]>str[4])&&(str[6]>str[7])&&(str[1]>str[3])&&(str[4]>str[6]))
					(data[i].pizza)++;
				else
					(data[i].girls)++;
			}
		}
		max_taxi=max(max_taxi,data[i].taxi);
		max_pizza=max(max_pizza,data[i].pizza);
		max_girls=max(max_girls,data[i].girls);
		//cout<<data[i].name<<" "<<data[i].taxi<<" "<<data[i].pizza<<" "<<data[i].girls<<endl;
	}
	int cnt=0;
	printf("If you want to call a taxi, you should call: ");
	for(int i=0;i<n;i++)
		if(data[i].taxi==max_taxi)
		{
			if(cnt==1)
				cout<<", ";
			cout<<data[i].name;
			
			cnt=1;
		}
	cout<<".";
	nl;
	cnt=0;
	printf("If you want to order a pizza, you should call: ");
	for(int i=0;i<n;i++)
		if(data[i].pizza==max_pizza)
		{
				if(cnt==1)
				cout<<", ";
			cout<<data[i].name;
			
			cnt=1;
		}	
	cout<<".";
	nl;
	cnt=0;
	printf("If you want to go to a cafe with a wonderful girl, you should call: ");
	for(int i=0;i<n;i++)
		if(data[i].girls==max_girls)
		{
			if(cnt==1)
				cout<<", ";
			cout<<data[i].name;
			
			cnt=1;
		}
	cout<<".";
	nl;


return 0;
}
