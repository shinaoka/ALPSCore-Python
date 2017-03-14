#find_package(SWIG REQUIRED)
#include(${SWIG_USE_FILE})
#
#find_package(PythonLibs REQUIRED)
#include_directories(${PYTHON_INCLUDE_PATH})
#include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories("/opt/ALPSCore/include") #FIXME
#
#set(CMAKE_SWIG_FLAGS "")
#
#set(INTERFACE_FILES gf.i)
#set_source_files_properties(${INTERFACE_FILES} PROPERTIES CPLUSPLUS ON)
#swig_add_module(gf python ${INTERFACE_FILES})
#swig_link_libraries(gf ${PYTHON_LIBRARIES} ${ALPSCore_LIBRARIES})
#make_python_module(NAME gf USE_BOOST SRCDIR src/)

add_library(gf SHARED "./src/gf_wrap.cxx")
set_target_properties(gf PROPERTIES PREFIX "_" SUFFIX ".so") #THE OUTPUT FILE SHOULD HAVE THE NAME "_gf.so".
target_link_libraries(gf ${PYTHON_LIBRARIES} ${ALPSCore_LIBRARIES} ${MPI_CXX_LIBRARIES} ${Boost_LIBRARIES})#FIXME MPI SHOULD BE OPTIONAL
