#include <iostream>
#include <vector>
using namespace std;

int first_occur(vector <int> v , int x){
    int n = v.size();
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(v[mid] == x){
            if(v[mid - 1] !=  x){
                return mid;
            }
            else{
                high = mid - 1;
                continue;
            }
        }
        else if(v[mid] > x){
            high = mid - 1;
            continue;
        }
        else if(v[mid] < x){
            low = mid + 1;
            continue;
        }
    }
}

int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        v.push_back(y);
    }
    int x;
    cin >> x ;
    cout << first_occur(v , x) << endl;
    return 0;
}