
#include <bits/stdc++.h>
using namespace std;


int main()
{
	double principal;
    double rate;
    int time ;

	cout<<"Let's find out compund interest based on inputs given by user"<<endl<<endl;
    cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Enter the value of principal amount(in rs)"<<endl;
    cin>>principal;
    cout<<"Enter the rate of interest"<<endl;
    cin>>rate;
    cout<<"Enter the term(in yrs)"<<endl;
    cin>>time;

	double A = principal * ((pow((1 + rate / 100), time)));
	double CI = A - principal;

	cout<< "Compound interest is " << CI;

	return 0;
}
