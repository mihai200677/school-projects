#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n, cnt=0;
    char s[256], sep[]=".,;:! ", *p;
    cin>>n;
    for (int i=1; i<=n; i++){
        cnt=0;
        cin.getline(s, 256);
        p=strtok(s, sep);
        while(p!=NULL){
            int ok=1;
            for (int j=0, k=strlen(p)-1; j<k; j++, k--){
                if(p[j]!=p[k])
                    ok=0;
            }
            if (ok==1){
                cnt++;
            }
            p=strtok(NULL, sep);
        }
        cout<<cnt;
    }
    
    return 0;
}