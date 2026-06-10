#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;


class Graph {
    public:
    unordered_map<int,list<pair<int,int>>> adj;

    void addedge(int u,int v,int weight) {
        pair<int,int> p= make_pair(v,weight);
        adj[u].push_back(p);
    }

    void printAdj() {
        for(auto i:adj) {
            cout<<i.first<<" ";
            for(auto j:i.second) {
                cout<<"("<<j.first<<","<<j.second<<"), ";
            }cout<<endl;
        }
    }

    void dfs(int node, unordered_map<int,bool> &visited, stack<int> &s) {
        visited[node]=true;

        for(auto neigh:adj[node]) {
            if(!visited[neigh.first]) {
                dfs(neigh.first,visited,s);
            }
        }
        s.push(node);
    }

    void getShortPath(int src,vector<int> &distance,stack<int> &s) {
        distance[src]=0;

        while(!s.empty()) {
            int top=s.top();
            s.pop();

            if(distance[top]!=INT_MAX) {
                for(auto i:adj[top]) {
                    if(distance[top]+i.second < distance[i.first]) {
                        distance[i.first]=distance[top]+i.second;
                    }
                }
            }
        }

    }

};


int main() {

    Graph g;
    g.addedge(0,1,5);
    g.addedge(0,2,3);
    g.addedge(1,2,2);
    g.addedge(1,3,6);
    g.addedge(2,3,7);
    g.addedge(2,4,4);
    g.addedge(2,5,2);
    g.addedge(3,4,-1);
    g.addedge(4,5,-2);
    
    g.printAdj();
    int n=6;
    //topo sort
    unordered_map<int,bool> visited;
    stack<int> s;
    for(int i=0;i<n;i++) {
        if(!visited[i]) {
            g.dfs(i,visited,s);
        }
    }

    int source=1;
    vector<int> distance(n);

    for(int i=0;i<n;i++) {
        distance[i]=INT_MAX;
    }

    g.getShortPath(source,distance,s);

    cout<<"Answer is: "<<endl;
    for(int i=0;i<distance.size();i++) {
        cout<<distance[i]<<" ";
    }cout<<endl;



    return 0;
}
