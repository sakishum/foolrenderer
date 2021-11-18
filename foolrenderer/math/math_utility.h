// Copyright (c) 2021 Caden Ji
//
// MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef FOOLRENDERER_MATH_MATH_UTILITY_H_
#define FOOLRENDERER_MATH_MATH_UTILITY_H_

#define SMALL_ABSOLUTE_FLOAT (1.e-8f)

#define PI (3.1415926535897932f)
#define HALF_PI (1.57079632679f)
#define INVERSE_PI (0.31830988618f)

inline int max_int(int a, int b) { return a > b ? a : b; }

inline int min_int(int a, int b) { return a < b ? a : b; }

inline float max_float(float a, float b) { return a > b ? a : b; }

inline float min_float(float a, float b) { return a < b ? a : b; }

inline int clamp_int(int n, int min, int max) {
    int t = n < min ? min : n;
    return t > max ? max : t;
}

inline float clamp_float(float n, float min, float max) {
    float t = n < min ? min : n;
    return t > max ? max : t;
}

inline int clamp01_int(int n) { return clamp_int(n, 0, 1); }

inline float clamp01_float(float n) { return clamp_float(n, 0.0f, 1.0f); }

#endif  // FOOLRENDERER_MATH_MATH_UTILITY_H_
