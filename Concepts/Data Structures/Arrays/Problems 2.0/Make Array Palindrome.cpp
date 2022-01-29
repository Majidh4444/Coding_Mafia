#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &,const string);

int merge(vector<int> ar) {
    int ar_count = ar.size();
    int count = 0;
    int i = 0;
    int j = ar_count-1;
    
    while(i<=j){
        if(ar[i] == ar[j]){
            i++;j--;
        }else if(ar[i] < ar[j]){
            i++;
            ar[i] += ar[i-1];
            count++;
        }else{
            j--;
            ar[j] += ar[j+1];
            count++;
        }
    }
    cout<<count;
    return count;
}


int main(){
    ofstream fout(getenv("OUTPUT_FILE_PATH"));
    fout<<"\n";
    string ar_count_temp;
    getline(cin, ar_count_temp);
    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    vector<int> ar(ar_count);

    string ar_input_temp;
    getline(cin, ar_input_temp);
    vector<string> ar_input = split(rtrim(ar_input_temp)," ");
    for (int i = 0; i < ar_count; i++) {
        int ar_item = stoi(ltrim(rtrim(ar_input[i])));
        ar[i] = ar_item;
    }

    int outcome = merge(ar);

    fout << outcome;
    fout << "\n";
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str,const string delimiter) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(delimiter, start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

