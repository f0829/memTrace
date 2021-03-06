/**
 * @file fbt_shared_data.h
 * The translator data shared by all threads. Protected by a mutex.
 *
 * Copyright (c) 2012 ETH Zurich
 * @author Enrico Kravina <enrico.kravina@gmail.com>
 *
 * $Date: 2011-12-30 14:24:05 +0100 (ven, 30 dic 2011) $
 * $LastChangedDate: 2011-12-30 14:24:05 +0100 (ven, 30 dic 2011) $
 * $LastChangedBy: kravinae $
 * $Revision: 1134 $
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA.
 */

#ifndef FBT_SHARED_DATA_H_
#define FBT_SHARED_DATA_H_

#include "fbt_datatypes.h"

/**
 * Some data has to be shared among all the threads.
 * Make sure that you aquire the mutex before using
 * it!
 */
extern fbt_mutex_t shared_data_mutex;
extern struct shared_data shared_data;

#endif /* FBT_SHARED_DATA_H_ */
