#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    for(int i=0; i< n; i++){
        string a;
        cin>>a;

        if(a == "++X" || a == "X++" ) {
            count++;
            // cout<<n;
            // cout << endl<<a<<endl;
        }
        else {count--;}

    }
    cout << count;
    
    return 0;
}