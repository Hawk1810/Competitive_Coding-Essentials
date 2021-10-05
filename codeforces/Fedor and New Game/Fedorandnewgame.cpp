#include<iostream>
using namespace std;
int countbits(int t){
    int count =0;
    while(t){
        count =count +(t&1);
        t = t >> 1;
    }
    
    return count;
}

int main(){
    int n,m,k,i,arr[2000],f;
    cin >> n >> m >> k;
    
    for(i=0;i<m;i++){
        cin >> arr[i];
    }
    cin >> f;
    int friends=0;
    for(i=0;i<m;i++){
        int t = arr[i]^f;
        
        if(countbits(t) <= k){
            friends++;
        }
    }
    cout << friends ;
    return 0;
}
