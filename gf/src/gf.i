/* gf.i */
%module gf
%{
#define SWIG_FILE_WITH_INIT
#include <alps/gf/gf.hpp>
%}

%include "std_string.i"

/* This ignore directive must come before including header files */
%ignore alps::gf::operator<<;


/*
%pythoncode { 
import os
import h5py
import alps.hdf5

#def load(file_name):
    #print(file_name)
    #f = alps.hdf5.archive()
    #f.open(file_name, 'r')
    #f[
#
    #if os.path.exists(file_name):
        #print(file_name)
}
*/

%include <alps/gf/gf.hpp>
%include <alps/gf/mesh.hpp>

%template(legendre_gf) alps::gf::one_index_gf< std::complex<double>, alps::gf::legendre_mesh >;
%template(omega_gf) alps::gf::one_index_gf<std::complex<double>, alps::gf::matsubara_mesh<alps::gf::mesh::POSITIVE_ONLY> >;
%template(matsubara_positive_mesh) alps::gf::matsubara_mesh<alps::gf::mesh::POSITIVE_ONLY>;

