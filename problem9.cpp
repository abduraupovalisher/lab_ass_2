#include<iostream>
#include<vector>
using namespace std;

class Pupil{
public:
    int a = 0;
};

int main(){
    int n, temp = 0, a, b, c, r = 1;
    cin >> n;
    vector<Pupil>v;
    while(n--){
        cin >> a >> b >> c;
        Pupil x;
        x.a = a+b+c;
        v.push_back(x);
    }
    if(vec[0].a >= v[1].a) r ++;
    for(int i = 2; i < v.size(); i ++){
        if(v[i].a > v[1].a)r++;

    }
    cout << r;
}
