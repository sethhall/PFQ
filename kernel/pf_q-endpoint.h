/***************************************************************
 *
 * (C) 2011-14 Nicola Bonelli <nicola@pfq.io>
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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 ****************************************************************/

#ifndef PF_Q_ENDPOINT_H
#define PF_Q_ENDPOINT_H

struct pfq_sock;
struct pfq_skbuff_batch;

enum pfq_endpoint_type
{
	pfq_endpoint_socket,
	pfq_endpoint_device
};

extern size_t copy_to_endpoint_buffs(struct pfq_sock *so, struct gc_queue_buff *pool, unsigned long long mask, int cpu, pfq_gid_t gid);

#endif /* PF_Q_ENDPOINT_H */
