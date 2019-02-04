#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b) {
if (sqrt(a) != int(sqrt(a)))
    return int(sqrt(b))-int(sqrt(a));
else
    return int(sqrt(b))-int(sqrt(a))+1;
    return 0;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int a;
        int b;
        cin >> a >> b;
        int result = squares(a, b);
        cout << result << endl;
    }
    return 0;
}
