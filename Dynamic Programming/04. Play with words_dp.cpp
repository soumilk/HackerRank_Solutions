#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the playWithWords function below.
 */
int playWithWords(string s) {
     int len= s.length();
     int m=-1;
     // Defining a 2D vector
    vector <vector<int>>v(len);
    
    // Initilising each of the diagonal elements with 1, as
    // at that cell the i and j are equal that means that the 
    // number itself is a palindrome of length 1
    for(int i=0;i<len;i++)
    {
        v[i]=vector<int>(len);
        v[i][i]=1;
    }

    for(int l=2;l<=len;l++)
    {
        for(int i=0;i<len-l+1;i++)
        {
            int j=i+l-1;
            // Condition when only 2 characters are there in the string
            if(s[i]==s[j] && l==2)
            {
                v[i][j]=2;
            }
            else if(s[i]==s[j])
            {
                v[i][j]=2+v[i+1][j-1];
            }
            else
            v[i][j]=max(v[i+1][j], v[i][j-1]);
        }
    }

    for(int i=0;i<len-1;i++){
        if(v[0][i]*v[i+1][len-1] > m)
            m=v[0][i]*v[i+1][len-1];
    } 
    return m;
}

int main()
{
    string s;
    cin>>s;
    int ans= playWithWords(s);
    cout<<ans;
    return 0;
}
