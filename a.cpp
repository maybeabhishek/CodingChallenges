#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    for(int i = 0; i<n; i++){
        cin >> points[i].first >> points[i].second;
    }
    vector<pair<int,int>> flips(n);
    int rangeX, rangeY, numOp;
    char op;
    cin >> numOp;
    for(int i = 0; i < numOp; i++){
        cin >> op >> rangeX >> rangeY;
        switch(op){
            case 'X':
					for(int j = rangeX -1 ; j <rangeY; j++){
						flips[j].second +=1;
					}
					break;
			case 'Y':
					for(int j = rangeX -1; j <rangeY; j++){
						flips[j].first +=1;
					}
					break;
			case 'C':
					int first = 0,second = 0,third = 0,fourth =0;
					for(int j = rangeX-1; j <rangeY; j++){
						int flipX = flips[j].first % 2;
						int flipY = flips[j].second % 2;
						int currX = flipX !=0 ? -points[j].first : points[j].first;
						int currY = flipY !=0 ? -points[j].second : points[j].second;

						if(currX> 0 && currY > 0) first++;
						else if(currX< 0 && currY > 0) second++;
						else if(currX< 0 && currY < 0) third++;
						else fourth++;
						// cout << currX <<" "<<currY <<"\n";

					}
						cout << first << " "<< second << " "<< third << " "<< fourth<<endl;
					break;
                    
        }
    }
    return 0;
}