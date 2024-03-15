#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    int a = 0;
};

int main(){
    
    int n, temp = 0, a, b, c, j = 1;
    cin >> n;
    vector<Student>v;
    while(n--){
        cin >> a >> b >> c;
        Student x;
        x.a = a+b+c;
        v.push_back(x);
    }
    
    if(v[0].a >= v[1].a) j ++;
    for(int i = 2; i < v.size(); i ++){
        if(v[i].a > v[1].a)j++;

    }
    cout << j;
}
