//            Copyright (c) Glyn Matthews 2012.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <network/uri/uri_io.hpp>
#include <istream>
#include <ostream>


namespace network {
  std::ostream &operator << (std::ostream &os, const uri &uri_) {
    return os << uri_.string();
  }

  std::wostream &operator << (std::wostream &os, const uri &uri_) {
    return os << uri_.wstring();
  }
} // namespace network
