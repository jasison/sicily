#include <iostream>

using namespace std;

struct node{
	int ind;
	int pr;
};

int main()
{
	int t,n,m,i,time,front,rear;
	node e;
	node arr[200];
	
	cin >> t;

	while(t--){
		time = 0;
		front = 0;
		rear = 0;
		cin >> n >> m;
		for(i = 0; i < n; i++){
			e.ind = i;
			cin >> e.pr;
			arr[i] = e;
			rear++;
		}
		while(1){
			for(i = front+1; i < rear ;i++){
				if(arr[i].pr > arr[front].pr){
					arr[rear++] = arr[front];
					front++;
					break;
				}
			}
			if(i == rear){
				if(arr[front].ind == m){
					time++;
					break;
				}
				else{
					front++;
					time++;
				}
			}
		}
		cout << time << endl;
	}
	return 0;
}
					

