#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector <string> v;
    string c = "";
    int count = 0;
    cin>>count;
    for(int i = 0; i<count; i++){
        cin>>c;
        if(c.size()>10) {
            c = c[0] +to_string(c.size()-2)+ c[c.size()-1];
        }
        v.push_back(c);
    }
    for(int i = 0; i<count; i++){
        cout<<v[i]<<endl;
    }
    
    return 0;
}