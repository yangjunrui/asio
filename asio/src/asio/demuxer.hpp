//
// demuxer.hpp
// ~~~~~~~~~~~
//
// Copyright (c) 2003 Christopher M. Kohlhoff (chris@kohlhoff.com)
//
// Permission to use, copy, modify, distribute and sell this software and its
// documentation for any purpose is hereby granted without fee, provided that
// the above copyright notice appears in all copies and that both the copyright
// notice and this permission notice appear in supporting documentation. This
// software is provided "as is" without express or implied warranty, and with
// no claim as to its suitability for any purpose.
//

#ifndef ASIO_DEMUXER_HPP
#define ASIO_DEMUXER_HPP

#include "asio/detail/push_options.hpp"

#include "asio/basic_demuxer.hpp"
#include "asio/service_factory.hpp"
#include "asio/detail/select_reactor.hpp"
#include "asio/detail/task_demuxer_service.hpp"

namespace asio {

/// Typedef for typical usage of demuxer.
typedef basic_demuxer
  <
    detail::task_demuxer_service
      <
        detail::select_reactor
      >
  > demuxer;

} // namespace asio

#include "asio/detail/pop_options.hpp"

#endif // ASIO_DEMUXER_HPP
