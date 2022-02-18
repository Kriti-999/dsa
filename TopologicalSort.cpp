//Problem Link:-https://practice.geeksforgeeks.org/problems/topological-sort/1/?page=1&company[]=Amazon&category[]=Graph&sortBy=submissions
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    	vector<int>ans;
	    	queue<int>q;
	    	vector<int>inorder(V);
	    for(int i=0;i<V;i++){
	        for(auto u:adj[i]){
	            inorder[u]++;
	        }
	    }
	    for(int i=0;i<V;i++){
	        if(inorder[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int c=q.front();
	        q.pop();
	        ans.push_back(c);
	        for(auto u:adj[c]){
	            inorder[u]--;
	            if(inorder[u]==0){
	                q.push(u);
	            }
	        }
	    }
	    return ans;
	}
};