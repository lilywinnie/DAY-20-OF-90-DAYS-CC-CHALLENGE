#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
    while (T--){
        
        int X,Y,Z;
        cin>>X>>Y>>Z;
        
        if(Y>Z)
           cout<< 0 <<"\n";
            
        else
            cout<<(Z-Y)/X<<"\n";
    }
}
