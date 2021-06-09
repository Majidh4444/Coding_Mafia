bool solve(string s) {
    int l = s.length();
    int n;
    n = (l/2);
    for(int i=0;i<n;i++){
        if(s[i]!=s[l-i-1]) return false;
    }
    return true;
}
