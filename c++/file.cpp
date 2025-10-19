#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int v[100], ok=0, nr, n;

void palindrom (int nr, int &ok){
    int cnr=nr, ogl=0;
    while (cnr!=0){
        ogl=ogl*10+cnr%10;
        cnr/=10;
    }
    if (ogl==nr){
        ok=1;
    }
}

void citire_vector (int v[],int n){
    for (int i=1; i<=n; i++)
        cin>>v[i];
}

void afisare_vector (int v[], int n){
    for (int i=1; i<=n; i++)
        cout<<v[i]<<" ";
}

void sortare_vector(int v[], int n){
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            if (v[i]>v[j]){
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

void nr_prim(int n, int &ok){
    ok=1;
    for (int i=2; i<=n/2; i++)
        if (n%i==0)
            ok=0;
}

int nr_max(int n) {
    int cnr = n, nrc = 0, maxnr=0;
    while(cnr){
        nrc++; cnr /= 10; 
    }
    cnr = n;
    for (int i = 1; i < nrc; i++) {
        int c = cnr / pow(10, nrc - 1);               
        cnr = (cnr % int(pow(10, nrc - 1))) * 10 + c;
        if (cnr > maxnr) maxnr = cnr;
    }
    return maxnr;
}

void nr_alaturate() {
// Se da un sir cu n elemente nr intregi. Sa se numere folosindu-ne de strchr cate cifre exista, iar daca exista pe pozitii consecutive cifre pare sa se elimine astfel incat sa ramana doar una, si anume cea mai mica din cele alaturate pare
	char s[100], cif[]="1234567890", cifpar[]="24680";
	cin.get(s, 100);
	int cnt=0;
	for (int i=0; i<strlen(s)-1; i++) {
		if(strchr(cif, s[i])!=NULL)
			cnt++;
		if (strchr(cifpar, s[i])!=NULL && strchr(cifpar, s[i+1])!=NULL && i>0) {
			if(s[i]>s[i+1]) {
                cout<<"[ ✓ ] Removed "<<s[i+1]<<endl;
				strcpy(s+i+1, s+i+2);
				i--;
			} else {
                cout<<"[ ✓ ] Removed "<<s[i]<<endl;
				strcpy(s+i, s+i+1);
				i--;
			}
		}

	}

    cout<<endl<<"[ ! ] Sir rezultat: "<<s;
}



int main(){
    cin>>n;
    cout<<nr_max(n);
    return 0;
}



