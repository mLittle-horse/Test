#include<iostream>
#include "add.h"
using namespace std;

int main(){
	int x,int y;
	cout<<"enter two integer:";
	cin>>x>>y;
	int ans=add(x,y);
	cout<<"ans:"<<ans<<endl;
	return 0;
}
