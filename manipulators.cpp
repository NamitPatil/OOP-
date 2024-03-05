#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	double a=100;
	double b=2001.5251;
	double c=201455.2646;
	
	cout<<hex<<left<<showbase<<nouppercase;
	cout<<(long long)a<<endl;
	
	cout<<setbase(10)<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2);
	cout<<b<<endl;
	
	cout<<scientific<<uppercase<<noshowpos<<setprecision(9);
	cout<<c<<endl;
	
}
