#include <iostream>
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

void nr_prim(int nr, int &ok){
    ok=1;
    for (int i=2; i<=nr/2; i++)
        if (nr%i==0)
            ok=0;
}

int main() {
    
    cin>>n;
    citire_vector(v, n);
    afisare_vector(v, n);
    return 0;
}




/*
                            VERIFICARE VECTOR PALINDROM
cin>>n;
citire_vector(v, n);
for (int i=1; i<=n; i++){
    ok=0;
    palindrom(v[i], ok);
    if (ok==0)
        cout<<"[ ! ] "<<v[i]<<" nu este palindrom"<<endl;
    else cout<<"[ ✓ ] "<<v[i] <<" este palindrom"<<endl;
}

*/


/*
                                VERIFICARE VECTOR PRIM
cin>>n;
    citire_vector(v, n);
    for (int i=1; i<=n; i++){
        nr_prim(v[i], ok);
            if (ok==0)
                cout<<"[ ! ] "<<v[i]<<" nu este prim"<<endl;
            else cout<<"[ ✓ ] "<<v[i] <<" este prim"<<endl;
    }

*/