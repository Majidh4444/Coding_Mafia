string solve(string s) {
    string str;
    int c;
    for(int i=0;i<s.length();i++){
        c=1;
        while(s[i] == s[i+1]){
            i++;
            c++;
        }
        str = str+to_string(c);
        str = str+s[i];
    }
    return str;
}
