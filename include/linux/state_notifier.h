#ifndef __LINUX_STATE_NOTIFIER_H
#define __LINUX_STATE_NOTIFIER_H

#include <linux/notifier.h>

#define STATE_NOTIFIER_ACTIVE		0x01
#define STATE_NOTIFIER_SUSPEND		0x02
<<<<<<< HEAD
#define STATE_NOTIFIER_BOOST		0x03
=======
>>>>>>> e4077a78e16d... drivers: add state notifier

struct state_event {
	void *data;
};

extern bool state_suspended;
extern void state_suspend(void);
extern void state_resume(void);
<<<<<<< HEAD
extern void state_boost(void);
=======
>>>>>>> e4077a78e16d... drivers: add state notifier
int state_register_client(struct notifier_block *nb);
int state_unregister_client(struct notifier_block *nb);
int state_notifier_call_chain(unsigned long val, void *v);

#endif /* _LINUX_STATE_NOTIFIER_H */
