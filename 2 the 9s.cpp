#include <iostream>
#include <sstream>

using namespace std;

string toString (int x){
	stringstream ss;
	ss << x;
	return ss.str();
}

int main(){
	string s;
	while(getline(cin,s) && s != "0"){
		cout << s;
		string temp = s;
		int cnt = (s.length()==1)?1:0;
		while(temp.length()>1){
			int sum=0;
			for (int i=0;i<temp.length();i++) sum += (temp[i]-'0');	
			temp = toString(sum);
			cnt++;
		}
		if((temp[0]-'0') == 9)cout << " is a multiple of 9 and has 9-degree " << cnt << "." << endl;
		else cout << " is not a multiple of 9." << endl;
	}
    return 0;
}
