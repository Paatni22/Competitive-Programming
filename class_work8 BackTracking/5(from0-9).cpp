#include<bits/stdc++.h>
using namespace std;

void getstring(char *s,int present,int end )
{
	if(present==end)
	{
		s[present]='\0';
		if(s[0]!='0')
		cout<<s<<endl;
		return ;
	}


for(int i=0;i<=9;i++)
{
	s[present]='0'+i;
	getstring(s,present+1,end);
}
	

}

int main()
{
	int k;
	cin>>k;
	char c[k+1];
	getstring(c,0,k);

}
