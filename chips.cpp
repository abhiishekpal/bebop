#include <iostream>
using namespace std;


int arr1[12][12], arr2[12][12], visited[12][12];
int N;
int ans = 1e9+1;
int ct = 0;
int tot = 0;

int check(int x, int y, int dir){
	int mark = 0;
	if(dir==0){
		for(int i=y+1;i<N;i++){
			if(arr2[x][i]==1){
				mark=-1;
				break;
			}
			mark+=1;
		}
	}
	else if(dir==1){
		for(int i=x-1;i>=0;i--){
			if(arr2[i][y]==1){
				mark=-1;
				break;
			}
			mark+=1;
		}
	}
	else if(dir==2){
		for(int i=y-1;i>=0;i--){
			if(arr2[x][i]==1){
				mark=-1;
				break;
			}
			mark+=1;
		}

	}
	else if(dir==3){
		for(int i=x+1;i<N;i++){
			if(arr2[i][y]==1){
				mark=-1;
				break;
			}
			mark+=1;
		}
	}
	
	return mark;
}


void recur(int x, int y, int tc, int le){
	// cout<<x<<" "<<y<<"      "<<tc<<" "<<le<<" "<<tot<<endl;
	// cout<<tc<<" "<<le<<" "<<tot<<endl;
	if(tc==tot){
		
		
		if(le<ans){
			// cout<<" **** "<<ans<<" "<<le<<endl;
			ans = le;
			// for(int i=0;i<N;i++){
			// 	for(int j=0;j<N;j++){
			// 		cout<<arr2[i][j]<<" ";
			// 	}cout<<endl;
			// }
		}
		return;
	}

	for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
			// if(i<x)
			// 	continue;
			// if(i==x && j<=y)
			// 	continue;
			if(arr1[i][j]==1){
				int dist = check(i, j, 0);
				if(dist>0 && visited[i][j]==0){
					visited[i][j] = 1;
					for(int k=j+1;k<N;k++){
						arr2[i][k]=1;
					}
					recur(i, j, tc+1, le+dist);
					for(int k=j+1;k<N;k++){
						arr2[i][k]=0;
					}
					visited[i][j] = 0;
				}
				dist = check(i, j, 1);
				if(dist>0  && visited[i][j]==0){
					visited[i][j] = 1;
					for(int k=i-1;k>=0;k--){
						arr2[k][j]=1;
					}
					recur(i, j, tc+1, le+dist);
					for(int k=i-1;k>=0;k--){
						arr2[k][j]=0;
					}
					visited[i][j] = 0;
				}
				dist = check(i, j, 2);
				if(dist>0  && visited[i][j]==0){
					visited[i][j] = 1;
					for(int k=j-1;k>=0;k--){
						arr2[i][k]=1;
					}
					recur(i, j, tc+1, le+dist);
					for(int k=j-1;k>=0;k--){
						arr2[i][k]=0;
					}
					visited[i][j] = 0;
				}
				dist = check(i, j, 3);
				if(dist>0  && visited[i][j]==0){
					visited[i][j] = 1;
					for(int k=i+1;k<N;k++){
						arr2[k][j]=1;
					}
					recur(i, j, tc+1, le+dist);
					for(int k=i+1;k<N;k++){
						arr2[k][j]=0;
					}
					visited[i][j] = 0;
				}
			}
		}
	}

}

int main(){

	int T;cin>>T;
	for(int t=1;t<=T;t++){
		cin>>N;
		tot = 0;
		ans = 1e9;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				visited[i][j] = 0;
				int x;cin>>x;
				if(i>0 && j<N-1 && j>0 && i<N-1 && x==1)
					tot++;
				arr1[i][j] = x;
				arr2[i][j] = x;
			}
		}

		for(int i=1;i<N-1;i++){
			for(int j=1;j<N-1;j++){
				if(arr1[i][j]==1){
					int dist = check(i, j, 0);
					if(dist>0  && visited[i][j]==0){
						visited[i][j] = 1;
						for(int k=j+1;k<N;k++){
							arr2[i][k]=1;
						}
						recur(i, j, 1, dist);
						for(int k=j+1;k<N;k++){
							arr2[i][k]=0;
						}
						visited[i][j] = 0;
					}
					dist = check(i, j, 1);
					if(dist>0  && visited[i][j]==0){
						visited[i][j] = 1;
						for(int k=i-1;k>=0;k--){
							arr2[k][j]=1;
						}
						recur(i, j, 1, dist);
						for(int k=i-1;k>=0;k--){
							arr2[k][j]=0;
						}
						visited[i][j] = 0;
					}
					dist = check(i, j, 2);
					if(dist>0  && visited[i][j]==0){
						visited[i][j] = 1;
						for(int k=j-1;k>=0;k--){
							arr2[i][k]=1;
						}
						recur(i, j, 1, dist);
						for(int k=j-1;k>=0;k--){
							arr2[i][k]=0;
						}
						visited[i][j] = 0;
					}
					dist = check(i, j, 3);
					if(dist>0  && visited[i][j]==0){
						visited[i][j] = 1;
						for(int k=i+1;k<N;k++){
							arr2[k][j]=1;
						}
						recur(i, j, 1, dist);
						for(int k=i+1;k<N;k++){
							arr2[k][j]=0;
						}
						visited[i][j] = 0;
					}
				}
			}
		}

		cout<<"#"<<t<<" "<<ans<<endl;

	}
	return 0;

}