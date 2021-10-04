#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long a,b,c,m;
        cin >> a >> b >> c >> m;
        long arr[3]={a,b,c};
        sort(arr,arr+3);
        if(m <= a+ b + c-3  && m>=2*arr[2]-a-b-c-1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        
    }
    return 0;

}
