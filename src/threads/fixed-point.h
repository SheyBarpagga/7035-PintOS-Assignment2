#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H


typedef int fp;

#define SHIFT_NUM 15

#define FIXED_POINT_CONVERT(x) ((fixed_t)(x << SHIFT_NUM))
#define INT_CONVERT_ROUND(A) (A >= 0 ? ((A + (1 << (SHIFT_NUM - 1))) >> SHIFT_NUM) : ((A - (1 << (SHIFT_NUM - 1))) >> SHIFT_NUM))
#define INT_CONVERT(A) (A >> SHIFT_NUM)

#define FIXED_POINT_ADD(A,B) (A + B)
#define FIXED_POINT_SUBTRACT(A,B) (A - B)
#define FIXED_POINT_MULTIPLY(A,B) ((fixed_t)(((int64_t) A) * B >> SHIFT_NUM))
#define FIXED_POINT_DIVIDE(A,B) ((fixed_t)((((int64_t) A) << SHIFT_NUM) / B))

#define FIXED_POINT_INT_ADD(A,B) (A + (B << SHIFT_NUM))
#define FIXED_POINT_INT_SUBTRACT(A,B) (A - (B << SHIFT_NUM))
#define FIXED_POINT_INT_MULTIPLY(A,B) (A * B)
#define FIXED_POINT_INT_DIVIDE(A,B) (A / B)

#endif