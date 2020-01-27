#include<iostream>
#include<sstream>
using namespace std;

string timeconversion (string s)
{
	string s1(s.begin(),s.begin()+2);
	string s2(s.begin()+3,s.end());
	
	if( s[8] =='P')
	{
		if( s1!="12")
		{
		string s4;
		stringstream time(s1);
		int t=0;
		time >> t;
		t=t+12;
		string Result;
		stringstream convert; 
		convert << t;
		Result = convert.str(); 
		return Result+":"+ s4.append(s2,0,5);
        }
		else {
			string s3;
			return s1+":"+ s3.append(s2,0,5);
		} 
	}
	if( s[8]=='A' )
	{
		if( s1 =="12"){
		/*string v="00";
		string v1;
		return v +":"+v1.append(s2,0,5);*/
	
		string s3;
		/*string s4;
		stringstream time(s1);
		int t=0;
		time >> t;
		t=00;
		string Result;
		stringstream convert; 
		convert << t;
		Result = convert.str(); 
		return Result+":"+ s4.append(s2,0,5);
        */
        s1[0]='0';
        s1[1]='0';
        return s1+":"+s3.append(s2,0,5);
        }
		else{
			string s3;
			return s1+":"+ s3.append(s2,0,5);
		}
	}
    return "hy";
}
int main()
{
	string s;
	cin>>s;
	string result =timeconversion(s);
	cout<<result<<endl;
	return 0;
}
