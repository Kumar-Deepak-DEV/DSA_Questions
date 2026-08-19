#include <iostream>
using namespace std;

int main(){
    
    long long m,n,a;
    cin >> m >> n >> a;

    long long l;
    long long w;
    if(m > (m/a)*a) l = m/a +1;
    else l = m/a;
    if(n > (n/a)*a) w = n/a +1;
    else w = n/a;
    
    cout<< l*w;
    
    return 0;
}