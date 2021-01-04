#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0){
	    int N;
	    cin>>N;
	    string code;
	    cin>>code;
	    string s = "abcdefghijklmnop";
	    int len = s.length();
	        for(int i=0;i<N;i++){
	            if(i%4 == 0 && i!=0){
	                cout<<s;
	                s= "abcdefghijklmnop";
	            }
	            if(code[i] == '0'){
	                //1st half
	                len = s.length();
	                int len_half = len/2;
	                s.erase(len_half,len);
	                len = s.length();;
	            }
	            else{
	                //2nd half
	                len = s.length();
	                int len_half = len/2;
	                s.erase(0, len_half);
	                len = s.length();
	            }
	        }
	        cout<<s<<endl;
	}
	
	return 0;
}
