#include <bits/stdc++.h>
using namespace std;
bool sortbythird(tuple<string,int,int>t1,tuple<string,int,int>t2)
{
	if(get<2>(t1)!=get<2>(t2))
		return get<2>(t1)>get<2>(t2);
	else if(get<0>(t1)!=get<0>(t2))
		return get<0>(t1)<get<0>(t2);
	else if(get<1>(t1)!=get<1>(t2))
		return get<1>(t1)<get<1>(t2);
}
int main()
{
	int n,rollno,marks,rank;
	string s;
	vector<tuple<string ,int ,int,int> > stud;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		cin >> rollno;
		cin >> marks;
		cin >> rank;
		stud.push_back(make_tuple(s,rollno,marks,rank));
	}
	sort(stud.begin(),stud.end(),sortbythird);
	cout << "-------------------------------------------\n";
	for(int i=0;i<n;i++)
	{
		cout << get<0>(stud[i]) << " " << get<1>(stud[i]) << " " << get<2>(stud[i]) << endl;
	}
	return 0;
}
