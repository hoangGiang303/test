#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    string str,str1;
    list<string> list, uniqueList;
    cout<<"Nhap chuoi: ";
    cin>>str;
 
    for (int i = 0; i < str.length() - 1; ++i) {
        string currentChar = str.substr(i,1);
        string nextChar = str.substr(i+1,2);
        if(nextChar == "aw" || nextChar == "aa"||
        nextChar == "dd" || nextChar == "ee" ||
        nextChar == "oo" || nextChar == "ow"
        ){
            list.push_back(nextChar);
        }
        else if(currentChar == "w"){
            list.push_back(currentChar);
        }
    }
    
    for (const string& value : list) {
        bool exists = false;
        for (const string& uniqueValue : uniqueList) {
            if (uniqueValue == value) {
                exists = true;
                break;
            }
        }

        if (!exists) {
            uniqueList.push_back(value);
        }
    }
    cout<<uniqueList.size()<<" ";
    
    for (const string& lists : uniqueList) {
        cout <<lists<<",";
    }
    return 0;
}
