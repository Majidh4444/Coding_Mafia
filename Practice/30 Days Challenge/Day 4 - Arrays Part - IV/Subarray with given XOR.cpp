// ________________
//         z
// _______ ________
//    x       y
// x = y XOR z
// y = x XOR y
// Use the above concept
// here z = p[i], y = B, x = value which may present n hash table

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    vector<int> p(n,0);
    p[0]=A[0];
    for(int i=1;i<n;i++) p[i] = p[i-1]^A[i];

    unordered_map<int,int> m;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(p[i] == B) ans++;
        if(m[p[i]^B] != 0) ans += m[p[i]^B];
        m[p[i]]++;
    }

    return ans;
}
