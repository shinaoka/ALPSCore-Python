/*
 * Copyright (C) 1998-2014 ALPS Collaboration. See COPYRIGHT.TXT
 * All rights reserved. Use is subject to license terms. See LICENSE.TXT
 * For use in publications, see ACKNOWLEDGE.TXT
 */
 
#include "alps/python/utilities/get_numpy_type.hpp"

namespace alps {
    namespace detail {

        inline int get_numpy_type(bool) { return PyArray_BOOL; }
        inline int get_numpy_type(char) { return PyArray_CHAR; }
        inline int get_numpy_type(unsigned char) { return PyArray_UBYTE; }
        inline int get_numpy_type(signed char) { return PyArray_BYTE; }
        inline int get_numpy_type(short) { return PyArray_SHORT; }
        inline int get_numpy_type(unsigned short) { return PyArray_USHORT; }
        inline int get_numpy_type(int) { return PyArray_INT; }
        inline int get_numpy_type(unsigned int) { return PyArray_UINT; }
        inline int get_numpy_type(long) { return PyArray_LONG; }
        inline int get_numpy_type(unsigned long) { return PyArray_ULONG; }
        inline int get_numpy_type(long long) { return PyArray_LONGLONG; }
        inline int get_numpy_type(unsigned long long) { return PyArray_ULONGLONG; }
        inline int get_numpy_type(float) { return PyArray_FLOAT; }
        inline int get_numpy_type(double) { return PyArray_DOUBLE; }
        inline int get_numpy_type(long double) { return PyArray_LONGDOUBLE; }
        inline int get_numpy_type(std::complex<float>) { return PyArray_CFLOAT; }
        inline int get_numpy_type(std::complex<double>) { return PyArray_CDOUBLE; }
        inline int get_numpy_type(std::complex<long double>) { return PyArray_CLONGDOUBLE; }
    }
}
