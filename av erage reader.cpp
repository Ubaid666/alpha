#include<iostream>
using namespace std;
int main(){
	int arr[6],average;
	for(int i=0;i<6;i++){
		cout<<"ARRAYS MEMBERS ARE:"<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<6;i++){
		cout<<"ENTERED ARRAY IS:"<<endl;
		cout<<arr[i]<<endl;
	}
	average=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]/6;
	cout<<"THE AVERAGE DISPLAYED IS:"<<average<<endl;
	if(average<33){
		cout<<"average below"<<endl;
	}
	else{
		cout<<"AVERAGE ABOVE"<<endl;
		
	}
	return 0;
}
