#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream theFile("Sample_input.txt");

	string goodie[20];
	double goodie_price[20];
	int e=1;
	while(theFile >> goodie[e] >> goodie_price[e])
	{
		e++;
		cout << goodie[e] <<"-"<< goodie_price[e] << endl;

	}

	int a,b,c;
	cout << "please enter the num of employees";
	cin >> a;
	b=a+1;
	c=a+2;

	if(a==10)
	{
		for(int i=1;i<=10;i++)
		{
			cout << goodie[i] << goodie_price[i];
		}
	}
	else if(a==1)
	{
		for(int i=1;i==1;i++)
		{
			cout << goodie[i] << goodie_price[i];
		}
	}

	int k=goodie_price[a]-goodie_price[a-(a-1)];
	int l=goodie_price[b]-goodie_price[b-(b-1)];
	int m=goodie_price[c]-goodie_price[c-(c-1)];

ofstream theFilee("Sample_output.txt");

if(l<k && l<m)
{
	for(int i=(b-(b-1));i<b;i++)
		{
			theFilee << goodie[i] << goodie_price[i];
			cout << goodie[i] << "-" << goodie_price[i];
			cout << "\n";
		}
}


if(k<l && k<m)
{
	for(int i=(a-(a-1));i<a;i++)
		{
			theFilee << goodie[i] << goodie_price[i];
			cout << goodie[i] << "-" << goodie_price[i];
			cout << "\n";
		}	
}

if(m<k && m<l)
{
	for(int i=(c-(c-1));i<c;i++)
		{
			theFilee << goodie[i] << goodie_price[i];
			cout << goodie[i] << "-" << goodie_price[i];
			cout << "\n";
		}
}

}