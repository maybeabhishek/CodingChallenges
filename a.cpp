// A C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph

#include <limits.h>
#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int getFare(vector<vector<int>> &graph){
    int n = graph.size();
    vector<vector<int>> dp(n , vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(graph[i][j]){
                dp[i][j] = 1;
                if(){
                    
                }

            }
        }
    }

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int s, r;
    cin >> s >> r;
    vector<vector<int>> graph(s, vector<int>(s));

    int start, stop, company;
    for(int i = 0; i < r; i++){
        cin >> start >> stop >> company;
        graph[start-1][stop-1] = company;
        // graph[stop -1][start - 1] = company;
    }
    
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;   
    }

    return 0;
}