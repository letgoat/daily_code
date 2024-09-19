//热页面筛选
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;
int main(){
    int N;
    cin >> N;
    int counts=0;
    map<int,int> count;
    bool array[65536]={};
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        if(array[x] ==0 ){
            count[x] = 1;
        }
        else count[x]++;
    }
    int M;
    cin >> M;
    vector<pair<int,int>> vec;
    for(auto iter = count.begin(); iter != count.end(); iter++){
        vec.push_back((*iter));
        if((*iter).second>=M){
            counts++;
        }
    }
    sort(vec.begin(),vec.end(),[](pair<int,int> x, pair<int,int> y){
        return x.second > y.second;
    });
    //开始输出结果:
    cout << counts << endl;
    for(auto it: vec){
        if(it.second >= M){
            cout << it.first <<endl;
        }
        else break;
    }
    return 0;
}

//方法二:
#include<iostream>
#include<vector>

using namespace std;

class page{
public:
	int index;
	int count;

};

int main(){
	vector<page> pages;
	int N;
	cin >> N;
	for(	

}
//is this important
//hao a you
this is not a test
//sdfsafd
//
//
//
//
//
//
//
//
//
//
//dfasf





























