long long int ipow(long long int a, unsigned int n, unsigned int *depth) {

    if (depth != NULL) {
        *depth = 1;
    }

    long long int helper(long long int a, unsigned int n, unsigned int *depth_counter) {

        if (n == 0) return 1;
        if (n == 1) return a;

        (*depth_counter)++;

        if (n % 2 == 0) {
            long long int half = helper(a, n / 2, depth_counter);
            return half * half;
        } else {
            return a * helper(a, n - 1, depth_counter);
        }
    }

    return helper(a, n, depth);
}
