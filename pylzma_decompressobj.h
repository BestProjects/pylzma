/*
 * Python Bindings for LZMA
 *
 * Copyright (c) 2004 by Joachim Bauch, mail@joachim-bauch.de
 * LZMA SDK Copyright (C) 1999-2004 Igor Pavlov
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * $Id$
 *
 */

#ifndef ___PYLZMA_DECOMPRESSOBJ__H___
#define ___PYLZMA_DECOMPRESSOBJ__H___

#include <Python.h>
#include <7zip/LzmaDecode.h>

typedef struct {
    PyObject_HEAD
    lzma_stream stream;
    char *unconsumed_tail;
    int unconsumed_length;
    PyObject *unused_data;
} CDecompressionObject;

extern PyTypeObject CDecompressionObject_Type;

#define DecompressionObject_Check(v)   ((v)->ob_type == &CDecompressionObject_Type)

extern const char doc_decompressobj[];
PyObject *pylzma_decompressobj(PyObject *self, PyObject *args);

#endif
