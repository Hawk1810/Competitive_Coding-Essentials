#include<iostream>
using namespace std;
int main(){
    int m,s;
    cin >> m >> s;
    if(s >= 1 && s<= 9*m){
        int max[1000],min[1000],i;
        int no9 = s/9;
        for(i=0;i<no9;i++){
            max[i]=9;
        }
        max[no9]=s-9*no9;
        for(i=no9+1;i<m;i++){
            max[i]=0;
        }
       
        if(s==9*no9){
            for(i=m-1;i>=m-no9+1;i--){
                min[i]=9;
            }
            if(m-no9 != 0){
                min[m-no9]=8;
                for(i=m-no9-1;i>0;i--){
                    min[i]=0;
                }
                min[0]=1;
            }
            else{
                min[0]=9;
            }
        }
        else if(s!=0) {
            for(i=m-1;i>=m-no9;i--){
                min[i]=9;
            }
            if(m-no9 != 1){
                min[m-no9-1]= s-9*no9-1;
                for(i=m-no9-2;i>0;i--){
                    min[i]=0;
                }
                min[0]=1;
            }
            else{
                min[0]= s-9*no9;
            }
        }
        else{
            min[0]=0;
        }
        for(i=0;i<m;i++){
            cout << min[i];
        }
        cout << " ";
        for(i=0;i<m;i++){
            cout << max[i];
        }

    }
    else if(m==1 && s==0){
        cout << 0 << " " << 0;
    }
    else{
        cout << -1 << " " << -1 << endl;
    }
    return 0;
}
