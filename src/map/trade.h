// Copyright (c) Hercules Dev Team, licensed under GNU GPL.
// See the LICENSE file
// Portions Copyright (c) Athena Dev Teams

#ifndef	_TRADE_H_
#define	_TRADE_H_

struct map_session_data;

struct trade_interface {
	void (*request) (struct map_session_data *sd, struct map_session_data *target_sd);
	void (*ack) (struct map_session_data *sd,int type);
	int (*check_impossible) (struct map_session_data *sd);
	int (*check) (struct map_session_data *sd, struct map_session_data *tsd);
	void (*additem) (struct map_session_data *sd,short index,short amount);
	void (*addzeny) (struct map_session_data *sd,int amount);
	void (*ok) (struct map_session_data *sd);
	void (*cancel) (struct map_session_data *sd);
	void (*commit) (struct map_session_data *sd);
} trade_s;

struct trade_interface *trade;

void trade_defaults(void);

#endif /* _TRADE_H_ */
