/* ========================================================================= *
 *
 * This file is part of Alarmd
 *
 * Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Simo Piiroinen <simo.piiroinen@nokia.com>
 *
 * Alarmd is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * Alarmd is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Alarmd; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * ========================================================================= */

#ifndef SERVER_H_
# define SERVER_H_

# ifdef __cplusplus
extern "C" {
# endif

  enum
  {
    DESKTOP_WAIT_DISABLED,
    DESKTOP_WAIT_HOME,
    DESKTOP_WAIT_HILDON,  // HOME +  8 secs
    DESKTOP_WAIT_STARTUP, // HOME + 29 secs

    DESKTOP_WAIT_NUMOF // must be the last item
  };

  void server_limbo_set_control(int mode);
  void server_limbo_set_timeout(int secs);

  int  server_init(void);
  void server_quit(void);

# ifdef __cplusplus
};
# endif

#endif /* SERVER_H_ */
