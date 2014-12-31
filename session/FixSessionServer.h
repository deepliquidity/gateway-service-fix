/*
 * FixSession.h
 *
 *  Created on: Dec 30, 2014
 *      Author: soumyau
 */

#ifndef FIXSESSION_H_
#define FIXSESSION_H_

#include <fix8/f8includes.hpp>
#include <fix8/usage.hpp>
#include <fix8/consolemenu.hpp>
#include <fix8/multisession.hpp>
#include <fix8/session.hpp>
#include <messages/MessageRouter.h>

class FixSessionServer: public FIX8::Session {
	MessageRouter _router;

public:
	FixSessionServer(const FIX8::F8MetaCntx& ctx, const FIX8::sender_comp_id& sci, FIX8::Persister *persist=nullptr,
			FIX8::Logger *logger=nullptr, FIX8::Logger *plogger=nullptr) : Session(ctx, sci, persist, logger, plogger),
	_router(*this) {}

	bool handle_application(const unsigned seqnum, const FIX8::Message *&msg);

	bool sample_scheduler_callback();
};

#endif /* FIXSESSION_H_ */
