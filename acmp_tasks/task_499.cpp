#include <iostream>

using namespace std;

int main()
{
    int a1, b1, a2, b2, a3, b3, k, w;
    cin >> k >> w;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(a1<=w && b1>=k) cout << "YES";
    else if(a2<=w && b2>=k) cout << "YES";
    else if(a3<=w && b3>=k) cout << "YES";
    else if( (a1+a2)<=w && (b1+b2)>=k) cout << "YES";
    else if( (a1+a3)<=w && (b1+b3)>=k ) cout << "YES";
    else if( (a2+a3)<=w && (b2+b3)>=k ) cout << "YES";
    else if( (a1+a2+a3)<=w && (b1+b2+b3)>=k) cout << "YES";
    else cout << "NO";
    
}
