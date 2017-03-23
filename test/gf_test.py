# Copyright (C) 1998-2014 ALPS Collaboration. See COPYRIGHT.TXT
# All rights reserved. Use is subject to license terms. See LICENSE.TXT
# For use in publications, see ACKNOWLEDGE.TXT

import alps.hdf5 as h5
import alps.gf as gf
import numpy as np
import sys
import os

import pytest

def open_h5file(fname="py1.h5"):
    try:
        os.remove(fname)
    except:
        pass
    ar=h5.archive(fname,"w")
    return ar

@pytest.fixture
def oar():
    return open_h5file()

def test_default_constructor():
    g = gf.ALPSComplexGF3MatsubaraPIndexIndex()

#def test_hdf5_write():
    #g = gf.ALPSComplexGF3MatsubaraPIndexIndex()
    #gf.save_gf(g, 'test.h5', '/gf')
