#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the whatsNext function below.
 */
void whatsNext(vector<long long int> arr) {
    /*
     * Write your code here.
     */
     int l = arr.end()-arr.begin();
     if(l==1){
         if(arr[0]!=1)
         cout<<"3\n";
         else
        cout<<"2\n";

         cout<<"1 1";
         if(arr[0]!=1)
         cout<<" "<<arr[0]-1;
         cout<<"\n";
     }else if(l==2){
         if(arr[l-2]!=1)
         cout<<"3\n";
         else
         cout<<"2\n";
         cout<<"1 "<<arr[1]+1;
         if (arr[l - 2] != 1)
           cout << " " << arr[0] - 1;
           cout << "\n";
     }else{
         if(l%2==0){
             if(arr[l-3]==1){
                 if(arr[l-2]!=1)
                 cout<<l-1<<"\n";
                 else
                 cout<<l-2<<"\n";
                for(int i=0;i<l-4;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<arr[l-4]+1<<" ";
                cout<<arr[l-1]+1;
                if (arr[l - 2] != 1)
                  cout << " " << arr[l - 2] - 1;
                  cout<< "\n";
             }else{
                 if (arr[l - 2] != 1)
                 cout<<l+1<<"\n";
                 else
                 cout<<l<<"\n";
                for(int i=0;i<l-3;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<arr[l-3]-1<<" ";
                cout<<"1 ";
                cout<<arr[l-1]+1;
                if (arr[l - 2] != 1)
                  cout << " " << arr[l - 2] - 1;
                  cout<< "\n";
             }
         }else{
             if(arr[l-2]==1){
                 if(arr[l-1]!=1)
                    cout<<l<<"\n";
                 else
                    cout<<l-1<<"\n";
               for (int i = 0; i < l - 3; i++) {
                 cout << arr[i] << " ";
               }
               cout<<arr[l-3]+1<<" ";
               cout<<"1";
               if (arr[l - 1] != 1)
                 cout<<" "<< arr[l - 1] - 1 ;
                 cout<< "\n";
             }else{
               if (arr[l - 1] != 1)
                 cout<<l+2<<"\n";
                 else
                 cout<<l+1<<"\n";
               for (int i = 0; i < l - 2; i++) {
                 cout << arr[i] << " ";
               }
               cout<<arr[l-2]-1;
               cout<<" 1 1";
               if (arr[l - 1] != 1)
                 cout << " "<< arr[l - 1] - 1 ;
                 cout<< "\n";
             }
         }
     }

}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int p;
        vector<long long int>v;
        cin >>p;
        for(int i=0;i<p;i++){
            long long int t;
            cin>>t;
            v.push_back(t);
        }
        whatsNext(v);
    }
    return 0;
}

