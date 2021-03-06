/* dbus-plugin.c - hexchat plugin for remote access using DBUS
 * Copyright (C) 2006 Claessens Xavier
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 * Claessens Xavier
 * xclaesse@gmail.com
 */

#ifndef HEXCHAT_DBUS_PLUGIN_H
#define HEXCHAT_DBUS_PLUGIN_H

int	dbus_plugin_init	(hexchat_plugin *plugin_handle,
				 char **plugin_name,
				 char **plugin_desc,
				 char **plugin_version,
				 char *arg);

#endif
