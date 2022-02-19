Problem Link:-https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1
class Solution{
public:
    // Function to find the number of islands.
    bool isAccept(int a,int b,int n,int m){
        if(a>=0 && b>=0 && a<n && b<m){
            return true;
        }
        return false;
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int c=0;
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        vector<int>u={-1,-1,-1,0,0,1,1,1};
        vector<int>v={-1,0,1,-1,1,-1,0,1};
        vector<vector<bool>> visit(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && visit[i][j]==false){
                    q.push({i,j});
                    c+=1;
                    visit[i][j]=true;
                    while(!q.empty()){
                        pair<int,int>temp=q.front();
                        
                        int a=temp.first;
                        int b=temp.second;
                        
                        q.pop();
                        for(int k=0;k<8;k++){
                            if(isAccept(a+u[k],b+v[k],n,m) ){
                            if(grid[a+u[k]][b+v[k]]=='1' &&visit[a+u[k]][b+v[k]]==false){
                                q.push({a+u[k],b+v[k]});
                                visit[a+u[k]][b+v[k]]=true;
                             }
                            }
                        }
                    }
                }
            }
        }
        return c;
    }
};