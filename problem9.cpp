#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    int k = 0;
};

int main(){
     
    int n, temp = 0, k, b, c, j = 1;
    cin >> n;
    
    vector<Student>v;
    while (n--){
        
        cin >> k >> b >> c;
        Student x;
        
        x.k = k+b+c;
        
        v.push_back(x);
    }
    
    if(vec[0].k >= v[1].k) j++;
    for(int i = 2; i < v.size(); i++){
        
        if(v[i].k > v[1].k)j++;

    }
    cout << j;
}
