#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;

    for(int i=0; i< n; i++){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a+b+c > 1) count++;

    }
    cout << count;
    
    return 0;
}