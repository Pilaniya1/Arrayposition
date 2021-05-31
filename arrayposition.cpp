#include<bits/stdc++.h>
using namespace std;
 int main(){
     int i,x,n;

     int arr[] = {1,2,3,4,5,6,7,8,9,10} ;
      
          int arrSize = sizeof(arr)/sizeof(arr[0]);

        cout<<"Please enter a  number";
        cin>>x;
        for(i=0;i<arrSize;i++){
            if(arr[i]== x  ){
                cout<<"Yes number is present";
                return 0;
                
            } 
        }
        cout<<"Number is not present";
    return 0;
}


