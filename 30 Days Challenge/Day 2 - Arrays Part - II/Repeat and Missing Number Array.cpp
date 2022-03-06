// sum = A - B
// squareSum = A^2 - B^2 = (A - B)(A + B)
// squareSum / sum = A + B
// Now we have A + B and A - B

vector<int> Solution::repeatedNumber(const vector<int> &V) {
    long long sum = 0;
    long long squareSum = 0;
    long long temp;
    for (int i = 0; i < V.size(); i++) {
        temp = V[i];
        sum += temp;
        sum -= (i + 1);
        squareSum += (temp * temp);
        squareSum -= ((long long)(i + 1) * (long long)(i + 1));
    }

    squareSum /= sum;
    int A = (int) ((sum + squareSum) / 2);
    int B = squareSum - A;
    return {A,B};
}
