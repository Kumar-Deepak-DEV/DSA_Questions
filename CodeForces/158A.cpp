#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int k,n;
    int c=0;
    
    cin>>n;
    cin>>k;

    vector <int>v;

    for(int i = 0; i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
        if(c<k && a>n) c++;
    }

    cout<<c;
    
    return 0;
}

// DSA_Questions