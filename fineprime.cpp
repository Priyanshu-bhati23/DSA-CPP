int countPrimes(int S, int E) {
    int pr = 0;  // Initialize a counter for prime numbers

    // Iterate over each number in the range from S to E (inclusive)
    for (int i = S; i <= E; i++) {
        int count = 0;  // Initialize a counter for factors of the current number

        // Check for factors by iterating from 2 to half of the current number
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // If a factor is found, increment the count and exit the loop
                count++;
                break;
            }
        }

        // If no factors were found, the current number is prime
        if (count == 0)
            pr++;  // Increment the prime number counter
    }

    // Return the total count of prime numbers in the specified range
    return pr;
}
