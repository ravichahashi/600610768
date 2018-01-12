#include <iostream>
#include <string>
using namespace std;

int main() {
	string text1,text2;
	int N,count=0;
	cout<<"Enter the first text: ";
	cin>>text1;
	cout<<"\nEnter the second text: ";
	cin>>text2;
	cout<<"\nEnter N: ";
	cin>>N;
	cout<<"\n";
	while(count << N){
		cout<<text1<<" ";
		count=count+1;
		if(count << N){
			cout<<text2<<" ";
			count=count+1;
		}
	}
	return 0;
}
