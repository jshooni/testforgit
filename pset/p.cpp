#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
    int N; 
    cin >> N; 

    vector<int> v(N); 

    for(int i=0; i< N; i++){
        cin >> v[i];
    }
    cout << "size : "<< v.size() << endl; 
    for(int i=0; i< v.size(); i++){
        cout << v[i] << endl;
    }

    cout << "pointer : " << &v[0] << endl; 

    vector<string> s(N); 
    for(int i=0; i<N; i++){
        cin >> s[i];
    }
    cout << "size of v string : " << s.size() << endl;
    for(int i=0; i<s.size(); i++){
        cout << "string " << i << " : "<< s[i] << endl;
    }
     cout << "string pointer : " << &s[0] << endl; 

    return 0;
}