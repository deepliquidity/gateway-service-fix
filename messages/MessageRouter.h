/*
 * MessageRouter.h
 *
 *  Created on: Dec 30, 2014
 *      Author: soumyau
 */

#ifndef MESSAGEROUTER_H_
#define MESSAGEROUTER_H_

class FixSessionServer;

class MessageRouter {
	FixSessionServer& _session;

public:
	MessageRouter(FixSessionServer& session) : _session(session) {}

	//virtual bool operator()(const FIX8::TEX::NewOrderSingle *msg)const;
};

#endif /* MESSAGEROUTER_H_ */
