#include <stdio.h>
#include <emmintrin.h>  // Header for SSE2 intrinsics

void sqrt_sse(float* input, float* output, int length) {
    int i;
    // Process 4 floats at a time
    for (i = 0; i < length; i += 4) {
        // Load 4 floats into an SSE register
        __m128 x = _mm_loadu_ps(&input[i]);

        // Compute square roots of these 4 floats
        __m128 result = _mm_sqrt_ps(x);

        // Store the results back into the output array
        _mm_storeu_ps(&output[i], result);
    }
}

int main() {
    float input[8] = {1.0f, 4.0f, 9.0f, 16.0f, 25.0f, 36.0f, 49.0f, 64.0f};
    float output[8];

    // Compute square roots
    sqrt_sse(input, output, 8);

    // Print results
    for (int i = 0; i < 8; ++i) {
        printf("sqrt(%f) = %f\n", input[i], output[i]);
    }

    return 0;
}
