# Copyright (c) Glyn Matthews 2012.
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

set(Uri_SRCS uri.cpp uri_io.cpp uri_builder.cpp detail/uri_parse.cpp)
add_library(cppnetlib-uri ${Uri_SRCS})
