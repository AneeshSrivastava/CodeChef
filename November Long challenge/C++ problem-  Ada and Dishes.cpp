#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0){
	   int n;
	   cin>>n;
	   int time[n];
	   for(int i=0; i<n;i++){
	       cin>>time[i];
	   }
	   //sort decending
	   int temp=0;
	   for(int i=0; i<n;i++){
	       for(int j=0; j<n;j++){
	           if(time[j]<time[i]){
	               temp= time[i];
	               time[i]=time[j];
	               time[j] = temp;
	           }
	       }
	   }
	   if(n==1){
	       cout<<time[0]<<endl;
	   }
	   if(n==2){
	       cout<<time[0]<<endl;
	   }
	   if(n==3){
	       int sum2 = time[1]+time[2];
	       if(time[0]>=sum2){
	           cout<<time[0]<<endl;
	       }
	       else{
	            cout<<time[1]+time[2]<<endl;
	       }
	   }
	   if(n==4){
	       int sum = time[1]+time[2]+time[3];
	       int sum2 = time[2]+time[3];
	       int sum1 = (time[0]+time[1])/2;
	       
	       if(time[0]>=sum){
	           cout<<time[0]<<endl;
	       }
	       else if((time[0]+time[3])<=(time[1]+time[2])){
	           cout<<time[1]+time[2]<<endl;
	       }
	       else if(sum2>=sum1){
	            cout<<time[0]+time[1]<<endl;
	       }
	       else{
	           cout<<time[0]+time[2]<<endl;
	       }
	   }
	}
	return 0;
}
