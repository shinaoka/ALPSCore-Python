/*****************************************************************************
*
* ALPS Project: Algorithms and Libraries for Physics Simulations
*
* ALPS Libraries
*
* Copyright (C) 2001-2005 by Matthias Troyer <troyer@comp-phys.org>,
*                            Synge Todo <wistaria@comp-phys.org>
*
* This software is part of the ALPS libraries, published under the ALPS
* Library License; you can use, redistribute it and/or modify it under
* the terms of the license, either version 1 or (at your option) any later
* version.
* 
* You should have received a copy of the ALPS Library License along with
* the ALPS Libraries; see the file LICENSE.txt. If not, the license is also
* available from http://alps.comp-phys.org/.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT 
* SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
* FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE, 
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
* DEALINGS IN THE SOFTWARE.
*
*****************************************************************************/

/* $Id$ */

#ifndef ALPS_EXPRESSION_EXPRESSION_FWD_H
#define ALPS_EXPRESSION_EXPRESSION_FWD_H

#include <alps/config.h>

#include <alps/cctype.h>
#include <alps/math.hpp>
#include <alps/parameters.h>
#include <alps/random.h>
#include <alps/parser/parser.h>
#include <alps/typetraits.h>
#include <alps/vectorio.h>

#include <boost/call_traits.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/throw_exception.hpp>
#include <boost/type_traits/is_arithmetic.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/random.hpp>

#include <cmath>
#include <complex>
#include <string>
#include <vector>
#include <stdexcept>

namespace alps {
namespace expression {

template<class T = std::complex<double> > class Expression;
template<class T = std::complex<double> > class Term;
template<class T = std::complex<double> > class Factor;
template<class T = std::complex<double> > class Evaluator;
template<class T = std::complex<double> > class ParameterEvaluator;
template <class T> class Number;
template <class T> class Symbol;
template <class T> class Block;

}

typedef expression::Expression<> Expression;
typedef expression::Term<> Term;
typedef expression::Factor<> Factor;
typedef expression::Evaluator<> Evaluator;
typedef expression::ParameterEvaluator<> ParameterEvaluator;

}

#endif