#include <iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
bool notprime(int a){
    int i;
    if(a==1){
        return true;
    }
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,i,j,c=0;
        string s;
        cin >> n >> s;
        for(i=0;i<s.size();i++){
            int temp = s[i]-'0';
            if(notprime(temp)){
                cout << 1 << endl << temp << endl;
                c=1;
                break;
            }
        }
        if(c!=1){
            for(i=0;i<s.size();i++){
                for(j=i+1;j<s.size();j++){
                    int temp = (s[i]-'0')*10 + s[j] -'0';
                    if(notprime(temp)){
                        cout << 2 << endl << temp << endl;
                        i=s.size();
                        break;
                    }
                }
            }
        }
        
        
    }
    

    return 0;
}

