#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(int h[], string word) {
    // Complete this function
    int temp=0; 
    for (int i=0;i<word.length();i++)
    {
    	int index = (int)word[i];
    	int p=h[index-97];
    	if(p>temp)
    	temp=p;
	}
	return temp*word.length();
}

int main() {
    int h[26];
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
