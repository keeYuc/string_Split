
#include"string_Split.hpp"
#include<iostream>
int main(){
    vector<string> p1;
    p1=string_Split("李小龙:100:成龙:66:霍元甲:100",":");
    vector<string>::iterator start = p1.begin();
    while(start!=p1.end()){//*遍历所有元素
        
        cout << *start << endl;
        ++start;
    }
    return EXIT_SUCCESS;
}