#include<iostream>
#include<vector>
using namespace std;
int graph[10000][10000];
bool *vis=new bool[1000];
bool isCycle(int u, bool visited[], int parent,int NODE) {
   visited[u] = true;    //mark v as visited
   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {
         if(!visited[v]) {     //when the adjacent node v is not visited
            if(isCycle(v, visited, u,NODE)) {
               return true;
            }
         } else if(v != parent) {    //when adjacent vertex is visited but not parent
            return true;    //there is a cycle
         }
      }
   }
   return false;
}

bool isTree(int NODE) {
   bool *vis = new bool[NODE];

   for(int i = 0; i<NODE; i++)
      vis[i] = false;    //initialize as no node is visited

   if(isCycle(0, vis, -1,NODE))    //check if there is a cycle or not
      return false;

   for(int i = 0; i<NODE; i++) {
      if(!vis[i])    //if there is a node, not visited by traversal, graph is not connected
         return false;
   }
   return true;
}

int main() {
int n,i,j;
cin>>n;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  cin>>graph[i][j];
 }
}
   if(isTree(n))
      cout << "The Graph is a Tree.";
   else
      cout << "The Graph is not a Tree.";
}
