#include<iostream>
#include<math.h>
using namespace std;

void tapcon(int arr[], int n){
    int k = 0;
    while(k<pow(2,n)){
        for(int i=0;i<n;++i){
            if((k&(1<<i))!=0){
                cout<<arr[i]<<' ';
            }
        }
        cout << endl;
        k++;
    }

}
int main()
{
	int n;
	cin >> n;
	int arr[n];
    for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
	}

    tapcon(arr,n);
}
