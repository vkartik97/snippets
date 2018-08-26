int querySum(int l, int r, int* A, int n1, int * D, int n2) {
    int sum = 0;
    while (l<r and l%n2!=0 and l!=0)
        sum += A[l++];
    while (l+n2 <= r) {
        sum += D[l/n2];
        l += n2;
    }
    while (l<=r)
        sum += A[l++];
    return sum;
}


// Preprocessing
j = -1;
if (i%sqrt == 0) ++j; 
D[j] += A[i];
