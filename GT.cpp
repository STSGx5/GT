#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string input;
    cout << "Nhập chuỗi chữ cái Latin: ";
    cin >> input;

    unordered_map<string, int> counts;

    for (int i = 0; i < input.length(); ++i) {
        string substring = input.substr(i, 2); 
        if (substring == "aw" || substring == "aa" || substring == "dd" || substring == "ee" || substring == "oo" || substring == "ow" ) {
            counts[substring]++;
            i++; 
        }else {
             string substring = input.substr(i, 1);
            if(substring == "w")
            {
            counts[substring]++;
            i++; 
            }
        }
    }

    
cout << "Số lần xuất hiện của các chuỗi:" << endl;
    cout << "aw: " << counts["aw"] << endl;
    cout << "aa: " << counts["aa"] << endl;
    cout << "dd: " << counts["dd"] << endl;
    cout << "ee: " << counts["ee"] << endl;
    cout << "oo: " << counts["oo"] << endl;
    cout << "ow: " << counts["ow"] << endl;
    cout << "w: " << counts["w"] << endl;

    return 0;
}
