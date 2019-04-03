#include <bits/stdc++.h>

using namespace std;

// Complete the anotherMinimaxProblem function below.
long max(long a,long b){
    if(a>b)
        b=a;
    return b;
}

long min (long a,long b){
    if(a>b)
        a=b;
    return a;
}

int anotherMinimaxProblem(vector<long> a) {

    long long int l =1L<<31;
    //cout<<"l="<<l<<"\n";
    int k=0;
    int eq=0;
    for(int i=0;i<31;i++){
        k=0;
        int s=0;
        for(int j=0;j<a.end()-a.begin();j++){
            if((a[j]&l)){
                k++;
                s=1;
            }
            if(j!=0){
                if(a[j-1]!=a[j]){
                    eq=1;
                }
            }
        }
        if(eq==0){
            return 0;
        }
        if(k!=a.end()-a.begin() && s==1){
            //cout<<"k="<<k<<" l="<<l<<"\n";
            break;
        }else{
          for (int j = 0; j < a.end() - a.begin(); j++) {
              a[j]=a[j]^l;
          }
        }
        l>>=1;
    }
    vector <int> v;
    vector<int> v1;
    //cout<<"ll="<<l<<"\n";
    for(int i=0;i<a.end()-a.begin();i++){
        if(a[i]&l){
            v.push_back(a[i]);
            //cout<<"1 "<<a[i]<<"\n";
        }else{
            v1.push_back(a[i]);
            //cout<<"0 "<<a[i]<<"\n";
        }
    }
    int minn=INT_MAX;
    for(int i=0;i<v.end()-v.begin();i++){
        for(int j=0;j<v1.end()-v1.begin();j++){
            minn = min(minn,v[i]^v1[j]);
        }
    }
    return minn;

}

int main()
{
    int n;
    cin>>n;
    vector<long >a;
    long p;
    for(int i=0;i<n;i++){
        cin>>p;
        a.push_back(p);
    }
    cout<<anotherMinimaxProblem(a);
}

