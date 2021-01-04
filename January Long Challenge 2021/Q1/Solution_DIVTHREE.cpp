#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0){
	    //Taking Input
	    int N,K,D,count =0;
	    cin>>N>>K>>D;
	    int A[N],problems_setted =0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        problems_setted = problems_setted+A[i];
	    }
	    if(problems_setted<K){
	        cout<<count<<endl;
	    }
	    else{
	        count = problems_setted/K;
	        if(count>D){
	            cout<<D<<endl;
	        }
	        else{
	            cout<<count<<endl;
	        }
	        
	        
	    }
	    
	}
	return 0;
}
