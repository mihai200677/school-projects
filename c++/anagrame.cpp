#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[256], s2[256];
    int n,ok,nrc=0;
    cin>>n>>s1;
    for (int i=2; i<=n; i++){
        cin>>s2;
        if (strlen(s1)==strlen(s2)){
            for (int j=0; j<strlen(s1);j++){
                for (int k=0; k<strlen(s2); k++){
                    if (s1[j]==s2[k]){
                        strcpy(s2+k, s2+k+1);
                        k--;
                    }
                }
            }
        }
        if (strlen(s2)==0) nrc++;
    }
    cout<<nrc;
    return 0;
}